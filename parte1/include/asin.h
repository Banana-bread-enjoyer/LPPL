/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PARA_ = 258,                   /* PARA_  */
    PARC_ = 259,                   /* PARC_  */
    MAS_ = 260,                    /* MAS_  */
    MENOS_ = 261,                  /* MENOS_  */
    POR_ = 262,                    /* POR_  */
    DIV_ = 263,                    /* DIV_  */
    CTE_ = 264,                    /* CTE_  */
    INT_ = 265,                    /* INT_  */
    ID_ = 266,                     /* ID_  */
    PUNTC_ = 267,                  /* PUNTC_  */
    IGUAL_ = 268,                  /* IGUAL_  */
    CORA_ = 269,                   /* CORA_  */
    CORC_ = 270,                   /* CORC_  */
    TRUE_ = 271,                   /* TRUE_  */
    FALSE_ = 272,                  /* FALSE_  */
    BOOL_ = 273,                   /* BOOL_  */
    BRAA_ = 274,                   /* BRAA_  */
    BRAC_ = 275,                   /* BRAC_  */
    RETURN_ = 276,                 /* RETURN_  */
    READ_ = 277,                   /* READ_  */
    PRINT_ = 278,                  /* PRINT_  */
    IF_ = 279,                     /* IF_  */
    ELSE_ = 280,                   /* ELSE_  */
    FOR_ = 281,                    /* FOR_  */
    COMA_ = 282,                   /* COMA_  */
    MAYOR_ = 283,                  /* MAYOR_  */
    MENOR_ = 284,                  /* MENOR_  */
    MAYI_ = 285,                   /* MAYI_  */
    MENI_ = 286,                   /* MENI_  */
    NOT_ = 287,                    /* NOT_  */
    AND_ = 288,                    /* AND_  */
    OR_ = 289,                     /* OR_  */
    EQUALS_ = 290,                 /* EQUALS_  */
    NOTEQUAL_ = 291,               /* NOTEQUAL_  */
    DOU_BAR_ = 292                 /* DOU_BAR_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASIN_H_INCLUDED  */
