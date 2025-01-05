/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          malarflo@upv.es                 **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include <header.h>
#include <libtds.h>
#include <libgci.h>
%}


%union{ 
    char* ident; 
    int cent;
    EXP exp;
}

%token PARA_ PARC_ MAS_ MENOS_ POR_ DIV_
%token INT_ PUNTC_ IGUAL_ CORA_ CORC_
%token TRUE_ FALSE_ BOOL_ BRAA_ BRAC_ RETURN_
%token READ_ PRINT_ IF_ ELSE_ FOR_ COMA_
%token MAYOR_ MENOR_ MAYI_ MENI_ NOT_ AND_ 
%token OR_ EQUALS_ NOTEQUAL_ DOU_BAR_

%token<cent> CTE_ 
%token<ident> ID_

%type<cent> tipoSimp opUna opMul opAd opRel opIgual opLogic 
%type<cent> paramForm listParamForm  paramAct listParamAct
%type<cent> listInt inst  instExpre instSelec instEntSal instIter
%type<cent> listDecla declaVar declaFunc decla declaVarLocal bloque

%type<exp> expreMul expreAd expreSufi expreUna expreLogic
%type<exp> expre expreRel expreIgual expreOP const

%%

programa : 
       {
              dvar = 0;
              niv = 0; 
              si = 0;
              cargaContexto(niv);
       }
       listDecla
       {
              printf("n main: %d",$2);
              if($2!=1){yyerror("Se debe declarar UNA función main()");}
              mostrarTdS();
              volcarCodigo("test");
       }

       ;

listDecla : decla
       {
              $<cent>$ = $1;
       }
       | listDecla decla
       {
              
              //int primero = $1;
              //int segundo = $2;
              $$ = $1 + $2;
       }
       ;

decla  : declaVar
       {
              $<cent>$ = 0;
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
              if ($1 != $4.t){
                     yyerror("Error de tipos en la inicialización");
              }
              if (!insTdS($2, VARIABLE, $1, niv, dvar, -1)) yyerror("Identificador repetido");
              else 
              {
                     if($1 != $4.t) $$ = T_ERROR; //yyerror("Error de tipos en la asignación expre1");
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
              $$.t = T_ENTERO; $$.d = $1;
       }
       | TRUE_
       {
              $$.t = T_LOGICO; $$.d = 1;
       }
       | FALSE_ 
       {
              $$.t = T_LOGICO; $$.d = 0;
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
              dvar = 0;
              if(!insTdS($2, FUNCION, $1, 0, 0, $5)) {
                     yyerror("Identificador repetido");       
              }
              //if ($5 == -1) {
              
                     //$<cent>$ = T_ERROR;
              //}
       }
       bloque
       {
              //printf("\n\n%d %d\n\n", $1, $8);
              if ($1 != $8) {
                     yyerror("Tipo de retorno incorrecto");
              }
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
              insTdS($2, PARAMETRO, $1, niv,--dvar, -1);
              $$ = insTdD(-1, $1);
       }
       | tipoSimp ID_ COMA_ listParamForm
       { 
              insTdD($4, $1);
              int tds = insTdS($2, PARAMETRO, $1, niv, --dvar, -1);
              if (tds == 0) {
                     yyerror("Identificador de parámetro repetido");
              }
              $$ = $4;
              
       }
       ;

bloque : 
       {
              emite(PUSHFP, crArgNul(), crArgNul(), crArgNul());
              emite(FPTOP, crArgNul(), crArgNul(), crArgNul());
              $<cent>$ = creaLans(si);
              emite(INCTOP, crArgNul(), crArgNul(), crArgEnt(-1));
        } 
       BRAA_ declaVarLocal listInt RETURN_ expre PUNTC_ BRAC_
       {
              INF inf = obtTdD(-1);
              int dir_return = TALLA_SEGENLACES + inf.tsp + TALLA_TIPO_SIMPLE;
              emite(EASIG, crArgPos(niv, $6.d), crArgNul(), crArgPos(niv, -dir_return));
              emite(TOPFP, crArgNul(), crArgNul(), crArgNul());
              emite(FPPOP, crArgNul(), crArgNul(), crArgNul());
              if (inf.tipo != T_ERROR)
              {
                    if (inf.tipo != $6.t){ yyerror("Tiene que coincidir el tipo que se retorna"); }
              }

            if (strcmp(inf.nom, "main")== 0)
              { 
                emite(FIN, crArgNul(), crArgNul(), crArgNul());
              } 
            else 
              {
                emite(RET, crArgNul(), crArgNul(), crArgNul());
              } 
              $<cent>$ = $6.d;
       }
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
              $$ = $1.t;
       }
       | PUNTC_
       ;

instEntSal : READ_ PARA_ ID_ PARC_ PUNTC_ 
       {
              SIMB s = obtTdS($3);
              if (s.t == T_ERROR){
                     $$ = T_ERROR;
              }
              else if (s.t != T_ENTERO) {
                     yyerror("El argumento del 'read' debe ser 'entero'");
                     $$ = T_ERROR;
              }
              emite(EREAD, crArgNul(), crArgNul(), crArgPos(s.n, s.d));
       }
       | PRINT_ PARA_ expre PARC_ PUNTC_
       {
              if ($3.t == T_ERROR){
                     $$ = T_ERROR;
              }
              if ($3.t != T_ENTERO) {
                     yyerror("El argumento del 'print' debe ser 'entero'");
                     $$ = T_ERROR;
              }
              emite(EWRITE, crArgNul(), crArgNul(), crArgPos(niv, $3.d));
       }
       ;

instSelec : IF_ PARA_ expre PARC_
       {
              if($3.t == T_ERROR){
                     $<cent>$ = T_ERROR;
              }
              else if ($3.t != T_LOGICO) {
                     yyerror("La expresión de comprobación del 'if' ha de ser de tipo LÓGICO");
              }
              $<cent>$ = creaLans(si);
              emite(EIGUAL, crArgPos(niv, $3.d), crArgEnt(0), crArgEtq(-1)); 
       
       }
       inst 
       {
              $<cent>$ = creaLans(si);
              emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(-1));
              completaLans($<cent>5, crArgEtq(si));
       }
       ELSE_ inst
       {
              completaLans($<cent>7, crArgEnt(si));
       }
       
       ;

instIter : FOR_ PARA_ expreOP PUNTC_
       {
              if (!($3.t == T_ERROR || $3.t == T_ENTERO || $3.t == T_VACIO || $3.t == T_LOGICO)) {
                     yyerror("La primera expresión del for ha de ser de tipo SIMPLE");
                     $<cent>$ = T_ERROR;
              }
               $<cent>$ = si;
       }
       expre PUNTC_
       {
              if (!($6.t == T_LOGICO)) {
                     yyerror("La segunda expresión del for ha de ser de tipo LÓGICA");
                     $<cent>$ = T_ERROR;
              }
              int igual = creaLans(si); emite(EIGUAL, crArgPos(niv, $6.d), crArgEnt(1), crArgEtq(-1));
              int distinto = creaLans(si); emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(-1));
              int si_ant = si;
       }
       expreOP PARC_ 
       {
              emite(GOTOS, crArgNul(), crArgNul(), crArgEtq($<cent>5));
              completaLans(igual, crArgEnt(si));
       }
       inst
       {
              if (!($9.t == T_ERROR || $9.t == T_ENTERO || $9.t == T_VACIO || $9.t == T_LOGICO)) {
                     yyerror("La primera expresión del for ha de ser de tipo SIMPLE");
                     $<cent>$ = T_ERROR;
              }
              emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(si_ant));
              completaLans(distinto, crArgEnt(si));
       }
       ;

expreOP : { $$.t = T_VACIO; }
       | expre 
       {      
              $$ = $1;
              if (!($1.t == T_ENTERO || $1.t == T_LOGICO)) {
                     yyerror("La expreOP del for ha de ser de tipo simple");
                     $$.t = T_ERROR;
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
              $$.t = T_ERROR;
              if($3.t != T_ERROR){
                     if (sim.t == T_ERROR) yyerror("Objeto no declarado");
                     else if (sim.t == T_ARRAY){
                            yyerror("El id en la asignacion no puede ser un array");
                     }
                     //mostrarTdS();
                     else if (!(((sim.t == T_LOGICO) && ($3.t == T_LOGICO)) || ((sim.t == T_ENTERO) && ($3.t == T_ENTERO)))) {
                            //printf("\n simt : %d\n $3 : %d \n ", sim.t, $3);
                            yyerror("Error de tipos en la asignación expre2");
                     } else $$.t = $3.t;
              }
              $$.d = creaVarTemp();
              emite(EASIG, crArgPos(niv, $3.d), crArgNul(), crArgPos(sim.n, sim.d));       
       }
       | ID_ CORA_ expre CORC_ IGUAL_ expre
       {
              SIMB s = obtTdS($1);
              //DIM dim = obtTdA(s.ref);
              //int tipoArray = dim.telem;
              if($3.t != T_ENTERO){
                     yyerror("La índice debe ser de tipo 'entero'");
              }
              else if (s.t != T_ARRAY) {
                     yyerror("La variable debe ser de tipo 'array'");
              } else {
                     DIM dim = obtTdA(s.ref);
                     if (!($3.t == T_ENTERO)) yyerror("Posición de un array debe ser una expresión numérica");
                     else {
                            int pos = $3.d;
                            if (pos < 0) yyerror("La posición de un array debe ser positiva");
                            else if (pos >= dim.nelem) yyerror("La posición dada excede las dimensiones del array");
                     }
                     int tipoArray = dim.telem;
                     if (tipoArray != T_ERROR && $3.t != T_ERROR && $6.t != T_ERROR) {
                            if (!(((tipoArray == T_ENTERO) && ($6.t == T_ENTERO)) ||
                                   ((tipoArray == T_LOGICO) && ($6.t == T_LOGICO)))) {
                                   $$.t = T_ERROR;
                                   yyerror("Error de tipos en la asignación expre3");
                            } else $$.t = T_ARRAY;
                     } else {
                            $$.t = T_ERROR;
                     }
              }

       }
       ;

expreLogic : expreIgual { $$ = $1; }
       | expreLogic opLogic expreIgual
       {
              $$.t = T_ERROR;
              if($1.t != T_ERROR && $3.t != T_ERROR)
              {
                     if($1.t != T_LOGICO || $3.t != T_LOGICO) {
                            yyerror("Error de tipos en la asignación Logic");
                     } else if ($1.t == T_ARRAY) {
                            yyerror("opLogico no sirve para arrays");
                     }else{
                            $$.t = T_LOGICO;
                     } 
              }
              $$.d = creaVarTemp();
              if ($2 == EMULT) {
                emite(EMULT, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
              } else {
                emite(ESUM, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
                emite(EMENEQ, crArgPos(niv, $$.d), crArgEnt(1), crArgEtq(si+2));
                emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, $$.d));
              }
       }
       ;

expreIgual : expreRel { $$ = $1; }
       | expreIgual opIgual expreRel
       {
              $$.t = T_ERROR;
              if($1.t != T_ERROR && $3.t != T_ERROR)
              {
                     if($1.t != $3.t) {
                            yyerror("Error de tipos en la asignación Igual");
                     } else if ($1.t == T_ARRAY) {
                            yyerror("opIgual no sirve para arrays");
                     }else{
                            $$.t = T_LOGICO;
                     }      
              }
              $$.d = creaVarTemp();
              emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, $$.d));
              emite($2, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgEtq(si+2));
              emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, $$.d));
       }
       ;

expreRel : expreAd { $$ = $1; }
       | expreRel opRel expreAd
       {
              $$.t = T_ERROR;
              if($1.t != T_ERROR && $3.t != T_ERROR)
              {
                     if ($1.t != $3.t) {
                            yyerror("No tienen el mismo tipo los operadores");
                     } else if ($1.t == T_LOGICO) {
                            yyerror("opRel no acepta t_logicos");
                     } else {
                            $$.t = T_LOGICO;
                }  
              }
              $$.d = creaVarTemp();
              emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, $$.d));
              emite($2, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgEtq(si+2));
              emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, $$.d));
       }
       ; 

expreAd : expreMul { $$ = $1; }
       | expreAd opAd expreMul 
       {
              $$.t = T_ERROR;
              if($1.t != T_ERROR && $3.t != T_ERROR)
              {
                     if($1.t != T_ENTERO || $3.t != T_ENTERO) {
                            yyerror("Error de tipos en la asignación Ad");
                     }
                     else{$$.t = T_ENTERO;}
              }
              $$.d = creaVarTemp();
              /***************** Expresi´on a partir de un operador aritm´etico */
              emite($2, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));    
       }
       ;

expreMul : expreUna { $$ = $1; }
       | expreMul opMul expreUna
       {
              $$.t = T_ERROR;
              if($1.t != T_ERROR && $3.t != T_ERROR)
              {
                     if($1.t != T_ENTERO || $3.t != T_ENTERO) {
                            yyerror("Error de tipos en la asignación Mul");
                     }
                     else{$$.t = T_ENTERO;}
              }
              $$.d = creaVarTemp();
              /***************** Expresi´on a partir de un operador aritm´etico */
              emite($2, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
       }
       ;

expreUna : expreSufi { $$ = $1; }
       | opUna expreUna
       {
              $$.t = T_ERROR;
              if($2.t != T_ERROR){
                     if($2.t == T_ENTERO){
                            if($1 == ESIG){
                                   yyerror("Operacion ! no es correcta para enteros");
                            } else{
                                   $$.t = T_ENTERO;
                            }
                     }else if ($2.t == T_LOGICO){
                            if($1 == ESIG){
                                   $$.t = T_LOGICO;
                            }else{
                                   yyerror("Operacion + / - no son correctas para booleanos");
                            }
                     }
              }
              $$.d = creaVarTemp();
              if ($1 == ESIG) {
                     emite(EDIF, crArgEnt(1), crArgPos(niv, $2.d), crArgPos(niv, $$.d));    
              } else {
                     emite($1, crArgEnt(0), crArgPos(niv, $2.d), crArgPos(niv, $$.d));
              }
       }
       ;

expreSufi: const
       {
              $$ = $1;
              emite(EASIG, crArgEnt($1.d), crArgNul(), crArgPos(niv, $$.d));
       }
       | PARA_ expre PARC_
       {
              $$ = $2;
       }
       | ID_
       {
              SIMB simb = obtTdS($1);
              $$.t = T_ERROR;
              if(simb.t == T_ERROR){
                     yyerror("Variable no declarada");
              }else if (simb.t != T_ARRAY){
                     $$.t = simb.t;
              }
              $$.d = creaVarTemp();
              emite(EASIG, crArgPos(simb.n, simb.d), crArgNul(), crArgPos(niv, $$.d)); 
       }
       | ID_ CORA_ expre CORC_
       {
              SIMB simb = obtTdS($1);
              $$.t = T_ERROR;
              
              if($3.t != T_ENTERO){
                     yyerror("Ha de ser tipo entero");
              }
              if(simb.t == T_ARRAY){
                     DIM d = obtTdA(simb.ref);
                     $$.t = d.telem;
              }else {
                     yyerror("Identificador ha de ser tipo array");
              }
              $$.d = creaVarTemp();
              emite(EAV, crArgPos(simb.n, simb.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
              
       }
       | ID_ PARA_ paramAct PARC_
       {
              SIMB simb = obtTdS($1);
              INF inf = obtTdD(simb.ref);
              $$.t = T_ERROR;
              if (sim.t == T_ERROR){ yyerror("El símbolo no debe ser error"); }
              else if (inf.tipo == T_ERROR){ yyerror("La referencia no debe ser error"); }
              else {
                     if (!cmpDom(sim.ref, $3)) { yyerror("Los dominios deben coincidir"); }
                     else 
                     { 
                            $$.t = inf.tipo; 
                            emite(CALL,crArgNul(),crArgNul(),crArgEtq(sim.d));
                            emite(DECTOP,crArgNul(),crArgNul(),crArgEnt(inf.tsp));
                            $$.d = creaVarTemp();
                            emite(EPOP,crArgNul(),crArgNul(),crArgPos(niv, $$.d));
                     }
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
              $$ = insTdD(-1, $1.t);
              emite(EPUSH, crgArgNul(), crgArgNul(), crArgPos(niv, $1.d));
       }
       | expre
       {
              emite(EPUSH,crArgNul(),crArgNul(),crArgPos(niv, $1.d));
       }
       COMA_ listParamAct
       {      
              $$ = insTdD($4, $1.t);
       }
       ;

opLogic : AND_ { $$ = EMULT; }
       | OR_ { $$ = ESUM; }
       ;

opIgual : EQUALS_ { $$ = EIGUAL; }
       | NOTEQUAL_ { $$ = EDIST; }
       ;

opRel : MAYOR_ { $$ = EMAY; }
       | MENOR_ { $$ = EMEN; }
       | MAYI_ { $$ = EMAYEQ; }
       | MENI_ { $$ = EMENEQ; }
       ;

opAd : MAS_ { $$ = ESUM; }
       | MENOS_ { $$ = EDIF; }
       ;

opMul : POR_ { $$ = EMULT; }
       | DIV_ { $$ = EDIVI; }
       ;

opUna : MAS_ { $$ = ESUM; }
       | MENOS_ { $$ = EDIF; }
       | NOT_ { $$ = ESIG; }
       ;
%%
