/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          malarflo@upv.es                 **/
/*****************************************************************************/
%{
#include "stdio.h"
#include "header.h"
%}

%token PARA_ PARC_ MAS_ MENOS_ POR_ DIV_
%token CTE_ INT_ ID_ PUNTC_ IGUAL_ CORA_ CORC_
%token TRUE_ FALSE_ BOOL_ BRAA_ BRAC_ RETURN_
%token READ_ PRINT_ IF_ ELSE_ FOR_ COMA_
%token MAYOR_ MENOR_ MAYI_ MENI_ NOT_ AND_ 
%token OR_ EQUALS_ NOTEQUAL_ DOU_BAR_

%%

programa : listDecla
       ;
listDecla : decla
       | listDecla decla
       ;
decla   : declaVar
       | declaFunc       
       ;
declaVar : tipoSimp ID_ PUNTC_  
       | tipoSimp ID_ IGUAL_ const PUNTC_ 
       | tipoSimp ID_ CORA_ CTE_ CORC_ PUNTC_            
       ;
const : CTE_ 
       | TRUE_
       | FALSE_
       ;
tipoSimp : INT_ 
       | BOOL_
       ;
declaFunc : tipoSimp ID_ PARA_ paramForm PARC_ bloque
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
       | ID_ CORA_ expre CORC_ IGUAL_ expre
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
