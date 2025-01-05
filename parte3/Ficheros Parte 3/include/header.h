/*****************************************************************************/
/**   Ejemplo de un posible fichero de cabeceras donde situar las           **/
/** definiciones de constantes, variables y estructuras para MenosC. Los    **/
/** alumnos deberan adaptarlo al desarrollo de su propio compilador.    **/
/*****************************************************************************/
#ifndef _HEADER_H
#define _HEADER_H

typedef struct exp { /****** Estructura para las expresiones */ 
    int t;
    int d;
} EXP;

typedef struct for_s { /****** Estructura para las expresiones */ 
    int verdad;
    int falso;
    int ant_si;
} FORSTRUCT;

typedef struct inicio{
    int inc_t;
    int go_t;
} INICIO;
/****************************************************** Constantes generales */
#define TRUE  1
#define FALSE 0
#define NOT 0
#define MAS 1
#define MENOS 2
#define TALLA_TIPO_SIMPLE 1
#define TALLA_SEGENLACES 2
/************************************* Variables externas definidas en el AL */
extern int yylex();
extern int yyparse();

extern FILE *yyin;                           /* Fichero de entrada           */
extern int   yylineno;                       /* Contador del numero de linea */
extern char *yytext;                         /* Patron detectado             */
extern int verTDS;
/********* Funciones y variables externas definidas en el Programa Principal */
extern void yyerror(const char * msg) ;   /* Tratamiento de errores          */

extern int verbosidad;                   /* Flag si se desea una traza       */
extern int numErrores;              /* Contador del numero de errores        */

#endif  /* _HEADER_H */
/*****************************************************************************/
