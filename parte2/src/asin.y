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
%token INT_ PUNTC_ IGUAL_ CORA_ CORC_
%token TRUE_ FALSE_ BOOL_ BRAA_ BRAC_ RETURN_
%token READ_ PRINT_ IF_ ELSE_ FOR_ COMA_
%token MAYOR_ MENOR_ MAYI_ MENI_ NOT_ AND_ 
%token OR_ EQUALS_ NOTEQUAL_ DOU_BAR_

%token<cent> CTE_ 
%token<ident> ID_

%type<cent> tipoSimp opUna opMul opAd opRel opIgual opLogic const
%type<cent> paramForm listParamForm  paramAct listParamAct
%type<cent> listInt inst  instExpre instSelec instEntSal instIter
%type<cent> listDecla declaVar declaFunc decla declaVarLocal bloque

%type<cent> expreMul expreAd expreSufi expreUna expreLogic
%type<cent> expre expreRel expreIgual expreOP

%%

programa : 
       {
              dvar = 0;
              niv = 0; 
              cargaContexto(niv);
       }
       listDecla
       {
              if($2==0){yyerror("Se debe declarar al menos la función main()");}
              mostrarTdS();
       }

       ;

listDecla : decla
       {
              $<cent>$ = $1;
       }
       | listDecla decla
       {
              int primero = $1;
              int segundo = $2;
              if (segundo != primero) {
                     if (segundo == 1) $$ = segundo;
                     else $$ = primero;
              }
              else $$ = $1;
       }
       ;

decla  : declaVar
       {
              $$ = $1;
       }   
       | declaFunc
       {
              $$ = $1;
       }       
       ;

declaVar : tipoSimp ID_ PUNTC_  
       {
              if (!insTdS($2, VARIABLE, $1, niv, dvar, -1)) yyerror("Identificador repetido");
              else dvar += TALLA_TIPO_SIMPLE;
       }
       | tipoSimp ID_ IGUAL_ const PUNTC_ 
       {
              if ($1 != $4){
                     yyerror("Error de tipos en la inicialización");
              }
              if (!insTdS($2, VARIABLE, $1, niv, dvar, -1)) yyerror("Identificador repetido");
              else 
              {
                     if($1 != $4) $$ = T_ERROR; //yyerror("Error de tipos en la asignación expre1");
                     else dvar += TALLA_TIPO_SIMPLE;
              }
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
       {
              $$ = T_ENTERO;
       }
       | TRUE_
       {
              $$ = T_LOGICO;
       }
       | FALSE_ 
       {
              $$ = T_LOGICO;
       }
       ;

tipoSimp : INT_ 
       {
              $$ = T_ENTERO;
       }
       | BOOL_ 
       {
              $$ = T_LOGICO;
       }
       ;

declaFunc : tipoSimp ID_ 
       {      
              $<cent>$ = dvar;
              dvar = 0;
              niv++;
              cargaContexto(niv);
       }
       PARA_ paramForm PARC_ 
       {
              
              if(!insTdS($2, FUNCION, $1, 0, dvar, $5)) {
                     yyerror("Identificador repetido");
              }
       }
       bloque
       {
              dvar = $<cent>3;
              mostrarTdS();
              descargaContexto(niv);
              niv--;
              if(strcmp($2,"main") == 0){
                     $<cent>$ = 1;
              }else{
                     $<cent>$ = 0;
              }
       }
       ;

paramForm : 
       {
              $$ = insTdD(-1, T_VACIO);
       }
       | listParamForm
       {
              $$ = $1;
       }
       ;

listParamForm: tipoSimp ID_
       {
              $$ = insTdD(-1, $1);
       }
       | tipoSimp ID_ COMA_ listParamForm
       {
              insTdD($4, $1);
              $$ = $4;
       }
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
       {
              $$ = $1;
       }
       | PUNTC_
       ;

instEntSal : READ_ PARA_ ID_ PARC_ PUNTC_ 
       {
              SIMB s = obtTdS($3);
              if (s.t != T_ENTERO) {
                     yyerror("El argumento del 'read' debe ser 'entero'");
                     $$ = T_ERROR;
              }
       }
       | PRINT_ PARA_ expre PARC_ PUNTC_
       {
              if ($3 != T_ENTERO) {
                     yyerror("El argumento del 'print' debe ser 'entero'");
                     $$ = T_ERROR;
              }
       }
       ;

instSelec : IF_ PARA_ expre PARC_ inst ELSE_ inst
       ;

instIter : FOR_ PARA_ expreOP
       {
              if (!($3 == T_ERROR || $3 == T_ENTERO || $3 == T_VACIO || $3 == T_LOGICO)) {
                     yyerror("La primera expresión del for ha de ser de tipo SIMPLE");
                     $<cent>$ = T_ERROR;
              }
       }
       PUNTC_ expre 
       {
              if (!($6 == T_LOGICO)) {
                     yyerror("La segunda expresión del for ha de ser de tipo LÓGICA");
                     $<cent>$ = T_ERROR;
              }
       }
       PUNTC_ expreOP PARC_ inst
       {
              if (!($9 == T_ERROR || $9 == T_ENTERO || $9 == T_VACIO || $9 == T_LOGICO)) {
                     yyerror("La primera expresión del for ha de ser de tipo SIMPLE");
                     $<cent>$ = T_ERROR;
              }
       }
       ;

expreOP : { $$ = T_VACIO; }
       | expre 
       {      
              $$ = $1;
              if (!($1 == T_ENTERO || $1 == T_LOGICO)) {
                     yyerror("La expreOP del for ha de ser de tipo simple");
                     $$ = T_ERROR;
              }
       }
       ;

expre : expreLogic
       {
              $$ = $1;
       }
       | ID_ IGUAL_ expre
       {
              SIMB sim = obtTdS($1);
              if (sim.t == T_ERROR) yyerror("Objeto no declarado");
              else {
                     if ($3 == T_ERROR) $$ = T_ERROR;
                     else if (!(((sim.t == T_LOGICO) && ($3 == T_LOGICO)) || ((sim.t == T_ENTERO) && ($3 == T_ENTERO))))
                            $$ = T_ERROR;//yyerror("Error de tipos en la asignación expre2");
                            else $$ = $3;
              }
       }
       | ID_ CORA_ expre CORC_ IGUAL_ expre
       {
              SIMB s = obtTdS($1);
              //DIM dim = obtTdA(s.ref);
              //int tipoArray = dim.telem;
              if($3 != T_ENTERO){
                     yyerror("La índice debe ser de tipo 'entero'");
              }
              else if (s.t != T_ARRAY) {
                     yyerror("La variable debe ser de tipo 'array'");
              } else {
                     DIM dim = obtTdA(s.ref);
                     if (!($3 == T_ENTERO)) yyerror("Posición de un array debe ser una expresión numérica");
                     else {
                            int pos = $3;
                            if (pos < 0) yyerror("La posición de un array debe ser positiva");
                            else if (pos >= dim.nelem) yyerror("La posición dada excede las dimensiones del array");
                     }
                     int tipoArray = dim.telem;
                     if (tipoArray != T_ERROR) {
                            if (!(((tipoArray == T_ENTERO) && ($6 == T_ENTERO)) ||
                                   ((tipoArray == T_LOGICO) && ($6 == T_LOGICO)))) $$ = T_ERROR;//yyerror("Error de tipos en la asignación expre3");
                            else $$ = T_ARRAY;
                     } else {
                            $$ = T_ERROR;
                     }
              }

       }
       ;

expreLogic : expreIgual { $$ = $1; }
       | expreLogic opLogic expreIgual
       {
              if($1 != T_ERROR && $3 != T_ERROR)
              {
                     if($1 != T_LOGICO || $3 != T_LOGICO) {
                            yyerror("Error de tipos en la asignación Logic");
                            $$ = T_ERROR;
                     }
                     else $$ = T_LOGICO;
              }
              else{
                     $$ = T_ERROR;
              }
       }
       ;

expreIgual : expreRel { $$ = $1; }
       | expreIgual opIgual expreRel
       {
              if($1 != T_ERROR && $3 != T_ERROR)
              {
                     if($1 != $3) {
                            yyerror("Error de tipos en la asignación Igual");
                            $$ = T_ERROR;
                     }
                     else{$$ = $3;}
              }
              else{$$ = T_ERROR;}
       }
       ;

expreRel : expreAd { $$ = $1; }
       | expreRel opRel expreAd
       {
              if($1 != T_ERROR && $3 != T_ERROR)
              {
                     if($1 != T_ENTERO || $3 != T_ENTERO) {
                            yyerror("Error de tipos en la asignación Rel");
                            $$ = T_ERROR;
                     }
                     else{$$ = $3;}
              }
              else{$$ = T_ERROR;}
       }
       ; 

expreAd : expreMul { $$ = $1; }
       | expreAd opAd expreMul 
       {
              if($1 != T_ERROR && $3 != T_ERROR)
              {
                     if($1 != T_ENTERO || $3 != T_ENTERO) {
                            yyerror("Error de tipos en la asignación Ad");
                            $$ = T_ERROR;
                     }
                     else{$$ = $3;}
              }
       }
       ;

expreMul : expreUna { $$ = $1; }
       | expreMul opMul expreUna
       {
              if($1 != T_ERROR && $3 != T_ERROR)
              {
                     if($1 != T_ENTERO || $3 != T_ENTERO) {
                            yyerror("Error de tipos en la asignación Mul");
                            $$ = T_ERROR;
                     }
                     else{$$ = $3;}
              }
       }
       ;

expreUna : expreSufi { $$ = $1; }
       | opUna expreUna
       {
              if($2 != T_ERROR){
                     if($2 == T_ENTERO){
                            if($1 == NOT){
                                   yyerror("Operacion ! no es correcta para enteros");
                                   $$ = T_ERROR;
                            } else{
                                   $$ = T_ENTERO;
                            }
                     }else if ($2 == T_LOGICO){
                            if($1 == NOT){
                                   $$ = T_LOGICO;
                            }else{
                                   yyerror("Operacion + / - no son correctas para booleanos");                                  
                                   $$ = T_ERROR;
                            }
                     }
              }else{
                     $$ = T_ERROR;
              }
       }
       ;

expreSufi: const
       {
              $$ = T_ENTERO;
       }
       | PARA_ expre PARC_
       {
              $$ = $2;
       }
       | ID_
       {
              SIMB simb = obtTdS($1);
              if(simb.t == T_ERROR){
                     yyerror("Variable no declarada");
                     $$ = T_ERROR;
              }else{
                     $$ = simb.t;
              }
       }
       | ID_ CORA_ expre CORC_
       {
              SIMB simb = obtTdS($1);

              if($3 != T_ENTERO){
                     yyerror("Ha de ser tipo entero");
                     $$ = T_ERROR;
              }
              if(simb.t == T_ARRAY){
                     DIM d = obtTdA(simb.ref);
                     $$ = d.telem;
              }else {
                     $$ = T_ERROR;
              }
              
       }
       | ID_ PARA_ paramAct PARC_
       {
              SIMB simb = obtTdS($1);
              int ref1 = simb.ref;
              if (!cmpDom(ref1, $3)){
                     yyerror("Argumentos no coincidentes.");
                     $$ = T_ERROR;
              }else if (simb.t != T_ERROR){
                     $$ = simb.t;
              }else{
                     yyerror("Funcion no declarada");
                     $$ = T_ERROR;
              }
       }
       ;

paramAct :
       {
              $$ = insTdD(-1, T_VACIO);
       }
       | listParamAct
       {
              $$ = $1;
       }
       ;

listParamAct : expre 
       {
              $$ = insTdD(-1, $1);
       }
       | expre COMA_ listParamAct
       {
              insTdD($3, $1);
              $$ = $3;
       }
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
