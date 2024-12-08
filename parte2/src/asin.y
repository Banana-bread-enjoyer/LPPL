/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          malarflo@upv.es                 **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"
%}

%union{ 
    char* ident; 
    int cent; 
    LPF lpf;
}

%token PARA_ PARC_ MAS_ MENOS_ POR_ DIV_
%token CTE_ INT_ ID_ PUNTC_ IGUAL_ CORA_ CORC_
%token TRUE_ FALSE_ BOOL_ BRAA_ BRAC_ RETURN_
%token READ_ PRINT_ IF_ ELSE_ FOR_ COMA_
%token MAYOR_ MENOR_ MAYI_ MENI_ NOT_ AND_ 
%token OR_ EQUALS_ NOTEQUAL_ DOU_BAR_

%token<cent> CTE_ 
%token<ident> ID_

%type<cent> tipoSimple opUnario opInc operadorMultiplicativo constante
%type<cent> operadorAditivo operadorRelacional operadorIgualdad cabeceraFuncion
%type<cent> operadorLogico parametrosFormales parametrosActuales listaParametrosActuales declaracionVariable declaracionFuncion declaracion
%type<cent> instruccionAsignacion listaDeclaraciones

%type<lpf> listaParametrosFormales

%type <cent> expresionMultiplicativa expresionAditiva expresionSufija expresionUnaria 
%type <cent> expresion expresionRelacional expresionIgualdad expresionOpcional

%%

programa : 
         {
              dvar = 0;
              niv = 0; 
              cargaContexto(niv);
         }
         listaDecla
         {
              if($2==0){yyerror("Se debe declarar al menos la función main()");}
         }
       ;
listDecla : decla
       | listDecla decla
       ;
decla   : declaVar
       | declaFunc       
       ;
declaVar : tipoSimp ID_ PUNTC_  
       {
              if (!insTdS($2, VARIABLE, $1, niv, dvar, -1)) yyerror("Identificador repetido");
              else dvar += TALLA_TIPO_SIMPLE;
       }
       | tipoSimp ID_ IGUAL_ const PUNTC_ 
       {
              if (!insTdS($2, VARIABLE, $1, niv, dvar, -1)) yyerror("Identificador repetido");
              else dvar += TALLA_TIPO_SIMPLE;
       }
       | tipoSimp ID_ CORA_ CTE_ CORC_ PUNTC_    
       {
              int numelem = $4;
              if ($4 <= 0) {
                     yyerror("Talla inapropiada del array");
                     numelem = 0;
              }
              int refe = insTdA($1, numelem);
              if (!insTdS($2, VARIABLE, T_ARRAY, niv, dvar, refe)) yyerror("Identificador repetido");
              else dvar += numelem * TALLA_TIPO_SIMPLE;
       }        
       ;
const : CTE_ 
       | TRUE_
       | FALSE_
       ;
tipoSimp : INT_ 
       | BOOL_
       ;
declaFunc : tipoSimp ID_ 
       {

       }
       PARA_ paramForm PARC_ 
       {

       }
       bloque
       {

       }
       
       ;
paramForm : 
       | listParamForm
       ;
listParamForm: tipoSimp ID_
       | tipoSimp ID_ COMA_ listParamForm
       ;
bloque : BRAA_ declaVarLocal listInt RETURN_ expre PUNTC_ BRAC_
       ;
declaVarLocal : 
       | declaVarLocal declaVar
       ;
listInt : 
       | listInt inst
       ;
inst : BRAA_ listInt BRAC_
       | instExpre
       | instEntSal
       | instSelec
       | instIter
       ;
instExpre : expre PUNTC_
       | PUNTC_
       ;
instEntSal : READ_ PARA_ ID_ PARC_ PUNTC_
       | PRINT_ PARA_ expre PARC_ PUNTC_
       ;
instSelec : IF_ PARA_ expre PARC_ inst ELSE_ inst
       ;
instIter : FOR_ PARA_ expreOP PUNTC_ expre PUNTC_ expreOP PARC_ inst
       ;
expreOP :
       | expre
       ;
expre : expreLogic
       | ID_ IGUAL_ expre
       {
              SIMB sim = obtTdS($1);
              if (sim.t == T.ERROR) yyerror("Objeto no declarado");
              else if (!(((sim.t == T_LOGICO) && ($3.t == T_LOGICO)) || (sim.t == T_ENTERO) && ($3.t == T_ENTERO)))
                     yyerror("Error de tipos en la asignación")
       }
       | ID_ CORA_ expre CORC_ IGUAL_ expre
       {
              DIM dim = obtTdA($1);
              if (!($3.t == T_ENTERO)) yyerror("Posición de un array debe ser una expresión numérica");
              else {
                     int pos = $3
                     if (pos < 0) yyerror("La posición de un array debe ser positiva")
                     else if (pos >= dim.nelem) yyerror("La posición dada excede las dimensiones del array")
              }
              int tipoArray = dim.telem;
              if (!((tipoArray == T_ENTERO) && ($6.t == T_ENTERO) ||
                     (tipoArray == T_LOGICO) && ($6.t == T_LOGICO))) yyerror("Error de tipos en la asignación")
       }
       ;
expreLogic : expreIgual 
       | expreLogic opLogic expreIgual
       ;
expreIgual : expreRel 
       | expreIgual opIgual expreRel
       ;
expreRel : expreAd
       | expreRel opRel expreAd
       ;
expreAd : expreMul 
       | expreAd opAd expreMul 
       ;
expreMul : expreUna
       | expreMul opMul expreUna
       ;
expreUna : expreSufi
       | opUna expreUna
       ;
expreSufi: const
       | PARA_ expre PARC_
       | ID_
       | ID_ CORA_ expre CORC_
       | ID_ PARA_ paramAct PARC_
       ;
paramAct :
       | listParamAct
       ;
listParamAct : expre 
       | expre COMA_ listParamAct
       ;
opLogic : AND_
       | OR_
       ;
opIgual : EQUALS_
       | NOTEQUAL_
       ;
opRel : MAYOR_
       | MENOR_
       | MAYI_
       | MENI_
       ;
opAd : MAS_
       | MENOS_
       ;
opMul : POR_
       | DIV_
       ;
opUna : MAS_
       | MENOS_
       | NOT_
       ;
%%
