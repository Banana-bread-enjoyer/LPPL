/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          <jbenedi@dsic.upv.es>   V.24    **/
/*****************************************************************************/
%{
  #include "stdio.h"
#include "header.h"
#include "asin.h"

#define  retornar(x) {if (verbosidad) ECHO ; return (x) ; }
%}
/*----------------------------------------------------------------------
  Dado que las funciones "input()" y "unput(c)" son costosas y no las
  utilizaremos, evitaremos que se generen automaticamente sus rutinas
  correspondientes desactivandolas mediante las siguientes opciones:
----------------------------------------------------------------------*/
%option noinput
%option nounput
/*----------------------------------------------------------------------
  Para mantener el numero de linea actual en la variable global yylineno
----------------------------------------------------------------------*/
%option yylineno

delimitador     [ \t\n]+
digito          [0-9]
entero          {digito}+
real            ([0-9]+([.][0-9]*)?|[.][0-9]+)
id              [a-zA-Z][_a-zA-Z0-9]*
comentario      ^\/\/.*\n
%%

{delimitador}   {if (verbosidad) ECHO ; }
{comentario}    {if (verbosidad) ECHO ;}
{real}          { retornar (CTE_) ; }
{entero}        { retornar (CTE_) ; }
"int"           { retornar (INT_) ; }
"true"          { retornar (TRUE_) ; }
"false"         { retornar (FALSE_) ; }
"bool"          { retornar (BOOL_) ; }
"return"        { retornar (RETURN_) ; }
"read"          { retornar (READ_) ; }
"print"         { retornar (PRINT_) ; }
"if"            { retornar (IF_) ; }
"else"          { retornar (ELSE_) ; }
"for"           { retornar (FOR_) ; }
">="            { retornar (MAYI_) ; }
"<="            { retornar (MENI_) ; }
"&&"            { retornar (AND_) ; }
"||"            { retornar (OR_) ; }
"!="            { retornar (NOTEQUAL_) ; }
"=="            { retornar (EQUALS_) ; }
"+"             { retornar (MAS_) ; }
"-"             { retornar (MENOS_) ; }
"*"             { retornar (POR_) ; }
"/"             { retornar (DIV_) ; }
"("             { retornar (PARA_) ; }
")"             { retornar (PARC_) ; }
";"             { retornar (PUNTC_) ; }
"="             { retornar (IGUAL_) ; }
"["             { retornar (CORA_) ; }
"]"             { retornar (CORC_) ; }
"{"             { retornar (BRAA_) ; }
"}"             { retornar (BRAC_) ; }
","             { retornar (COMA_) ; }
">"             { retornar (MAYOR_) ; }
"<"             { retornar (MENOR_) ; }
"!"             { retornar (NOT_) ; }
{id}            { retornar (ID_) ; }
.				{ yyerror("Caracter desconocido") ;}
%%
