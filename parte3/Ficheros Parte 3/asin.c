/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "src/asin.y"

#include <stdio.h>
#include <string.h>
#include <header.h>
#include <libtds.h>
#include <libgci.h>

#line 79 "asin.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "asin.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PARA_ = 3,                      /* PARA_  */
  YYSYMBOL_PARC_ = 4,                      /* PARC_  */
  YYSYMBOL_MAS_ = 5,                       /* MAS_  */
  YYSYMBOL_MENOS_ = 6,                     /* MENOS_  */
  YYSYMBOL_POR_ = 7,                       /* POR_  */
  YYSYMBOL_DIV_ = 8,                       /* DIV_  */
  YYSYMBOL_INT_ = 9,                       /* INT_  */
  YYSYMBOL_PUNTC_ = 10,                    /* PUNTC_  */
  YYSYMBOL_IGUAL_ = 11,                    /* IGUAL_  */
  YYSYMBOL_CORA_ = 12,                     /* CORA_  */
  YYSYMBOL_CORC_ = 13,                     /* CORC_  */
  YYSYMBOL_TRUE_ = 14,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 15,                    /* FALSE_  */
  YYSYMBOL_BOOL_ = 16,                     /* BOOL_  */
  YYSYMBOL_BRAA_ = 17,                     /* BRAA_  */
  YYSYMBOL_BRAC_ = 18,                     /* BRAC_  */
  YYSYMBOL_RETURN_ = 19,                   /* RETURN_  */
  YYSYMBOL_READ_ = 20,                     /* READ_  */
  YYSYMBOL_PRINT_ = 21,                    /* PRINT_  */
  YYSYMBOL_IF_ = 22,                       /* IF_  */
  YYSYMBOL_ELSE_ = 23,                     /* ELSE_  */
  YYSYMBOL_FOR_ = 24,                      /* FOR_  */
  YYSYMBOL_COMA_ = 25,                     /* COMA_  */
  YYSYMBOL_MAYOR_ = 26,                    /* MAYOR_  */
  YYSYMBOL_MENOR_ = 27,                    /* MENOR_  */
  YYSYMBOL_MAYI_ = 28,                     /* MAYI_  */
  YYSYMBOL_MENI_ = 29,                     /* MENI_  */
  YYSYMBOL_NOT_ = 30,                      /* NOT_  */
  YYSYMBOL_AND_ = 31,                      /* AND_  */
  YYSYMBOL_OR_ = 32,                       /* OR_  */
  YYSYMBOL_EQUALS_ = 33,                   /* EQUALS_  */
  YYSYMBOL_NOTEQUAL_ = 34,                 /* NOTEQUAL_  */
  YYSYMBOL_DOU_BAR_ = 35,                  /* DOU_BAR_  */
  YYSYMBOL_CTE_ = 36,                      /* CTE_  */
  YYSYMBOL_ID_ = 37,                       /* ID_  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_programa = 39,                  /* programa  */
  YYSYMBOL_40_1 = 40,                      /* @1  */
  YYSYMBOL_listDecla = 41,                 /* listDecla  */
  YYSYMBOL_decla = 42,                     /* decla  */
  YYSYMBOL_declaVar = 43,                  /* declaVar  */
  YYSYMBOL_const = 44,                     /* const  */
  YYSYMBOL_tipoSimp = 45,                  /* tipoSimp  */
  YYSYMBOL_declaFunc = 46,                 /* declaFunc  */
  YYSYMBOL_47_2 = 47,                      /* @2  */
  YYSYMBOL_48_3 = 48,                      /* $@3  */
  YYSYMBOL_paramForm = 49,                 /* paramForm  */
  YYSYMBOL_listParamForm = 50,             /* listParamForm  */
  YYSYMBOL_bloque = 51,                    /* bloque  */
  YYSYMBOL_52_4 = 52,                      /* @4  */
  YYSYMBOL_declaVarLocal = 53,             /* declaVarLocal  */
  YYSYMBOL_listInt = 54,                   /* listInt  */
  YYSYMBOL_inst = 55,                      /* inst  */
  YYSYMBOL_instExpre = 56,                 /* instExpre  */
  YYSYMBOL_instEntSal = 57,                /* instEntSal  */
  YYSYMBOL_instSelec = 58,                 /* instSelec  */
  YYSYMBOL_59_5 = 59,                      /* @5  */
  YYSYMBOL_60_6 = 60,                      /* @6  */
  YYSYMBOL_instIter = 61,                  /* instIter  */
  YYSYMBOL_62_7 = 62,                      /* @7  */
  YYSYMBOL_63_8 = 63,                      /* @8  */
  YYSYMBOL_64_9 = 64,                      /* $@9  */
  YYSYMBOL_expreOP = 65,                   /* expreOP  */
  YYSYMBOL_expre = 66,                     /* expre  */
  YYSYMBOL_expreLogic = 67,                /* expreLogic  */
  YYSYMBOL_expreIgual = 68,                /* expreIgual  */
  YYSYMBOL_expreRel = 69,                  /* expreRel  */
  YYSYMBOL_expreAd = 70,                   /* expreAd  */
  YYSYMBOL_expreMul = 71,                  /* expreMul  */
  YYSYMBOL_expreUna = 72,                  /* expreUna  */
  YYSYMBOL_expreSufi = 73,                 /* expreSufi  */
  YYSYMBOL_paramAct = 74,                  /* paramAct  */
  YYSYMBOL_listParamAct = 75,              /* listParamAct  */
  YYSYMBOL_76_10 = 76,                     /* $@10  */
  YYSYMBOL_opLogic = 77,                   /* opLogic  */
  YYSYMBOL_opIgual = 78,                   /* opIgual  */
  YYSYMBOL_opRel = 79,                     /* opRel  */
  YYSYMBOL_opAd = 80,                      /* opAd  */
  YYSYMBOL_opMul = 81,                     /* opMul  */
  YYSYMBOL_opUna = 82                      /* opUna  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   179

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  147

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    46,    67,    71,    80,    84,    90,    95,
     109,   122,   126,   130,   136,   140,   147,   154,   146,   184,
     187,   193,   198,   211,   211,   242,   243,   246,   247,   250,
     251,   252,   253,   254,   257,   261,   264,   276,   290,   302,
     289,   315,   323,   333,   314,   348,   349,   359,   363,   381,
     415,   416,   440,   441,   461,   462,   482,   483,   499,   500,
     516,   517,   547,   553,   557,   569,   587,   609,   612,   618,
     624,   623,   633,   634,   637,   638,   641,   642,   643,   644,
     647,   648,   651,   652,   655,   656,   657
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PARA_", "PARC_",
  "MAS_", "MENOS_", "POR_", "DIV_", "INT_", "PUNTC_", "IGUAL_", "CORA_",
  "CORC_", "TRUE_", "FALSE_", "BOOL_", "BRAA_", "BRAC_", "RETURN_",
  "READ_", "PRINT_", "IF_", "ELSE_", "FOR_", "COMA_", "MAYOR_", "MENOR_",
  "MAYI_", "MENI_", "NOT_", "AND_", "OR_", "EQUALS_", "NOTEQUAL_",
  "DOU_BAR_", "CTE_", "ID_", "$accept", "programa", "@1", "listDecla",
  "decla", "declaVar", "const", "tipoSimp", "declaFunc", "@2", "$@3",
  "paramForm", "listParamForm", "bloque", "@4", "declaVarLocal", "listInt",
  "inst", "instExpre", "instEntSal", "instSelec", "@5", "@6", "instIter",
  "@7", "@8", "$@9", "expreOP", "expre", "expreLogic", "expreIgual",
  "expreRel", "expreAd", "expreMul", "expreUna", "expreSufi", "paramAct",
  "listParamAct", "$@10", "opLogic", "opIgual", "opRel", "opAd", "opMul",
  "opUna", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-126)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -126,     8,    -3,  -126,  -126,  -126,    -3,  -126,  -126,   -23,
    -126,  -126,    31,  -126,   -12,   -13,    18,  -126,  -126,  -126,
      20,    25,    -3,  -126,    37,    13,    48,  -126,  -126,    32,
    -126,    -3,  -126,  -126,  -126,    44,  -126,    -3,  -126,    28,
      34,    31,   129,  -126,  -126,  -126,  -126,   129,    63,    64,
      65,    66,  -126,     6,  -126,  -126,  -126,  -126,  -126,  -126,
      62,   -20,    12,    -1,    54,    55,  -126,  -126,   142,    69,
      88,    67,    39,   129,   129,   129,   129,   129,   129,  -126,
    -126,  -126,   142,  -126,  -126,   142,  -126,  -126,  -126,  -126,
     142,  -126,  -126,   142,  -126,  -126,   142,     7,  -126,  -126,
    -126,    56,    74,    75,    76,    71,  -126,    57,    79,  -126,
    -126,    72,    12,    -1,    54,    55,  -126,   129,  -126,    77,
      82,  -126,  -126,    59,  -126,    84,    73,  -126,  -126,   116,
     129,   129,   129,  -126,  -126,    86,  -126,  -126,    78,  -126,
     116,   129,  -126,    93,  -126,   116,  -126
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    14,    15,     3,     4,     6,     0,
       7,     5,    16,     8,     0,     0,     0,    12,    13,    11,
       0,     0,    19,     9,     0,     0,     0,    20,    10,    21,
      17,     0,    23,    22,    18,     0,    25,    27,    26,     0,
       0,     0,     0,    84,    85,    35,    27,     0,     0,     0,
       0,     0,    86,    64,    62,    28,    30,    31,    32,    33,
       0,    47,    50,    52,    54,    56,    58,    60,     0,     0,
       0,     0,     0,     0,     0,    45,    67,     0,     0,    34,
      72,    73,     0,    74,    75,     0,    76,    77,    78,    79,
       0,    80,    81,     0,    82,    83,     0,    64,    61,    63,
      29,     0,     0,     0,     0,     0,    46,    69,     0,    68,
      48,     0,    51,    53,    55,    57,    59,     0,    24,     0,
       0,    38,    41,     0,    66,    65,     0,    36,    37,     0,
       0,     0,     0,    65,    39,     0,    71,    49,     0,    42,
       0,    45,    40,     0,    43,     0,    44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -126,  -126,  -126,  -126,    94,    70,    90,   -15,  -126,  -126,
    -126,  -126,    80,  -126,  -126,  -126,    68,  -125,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,   -28,   -42,  -126,
      33,    35,    26,    24,   -67,  -126,  -126,    -8,  -126,  -126,
    -126,  -126,  -126,  -126,  -126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     6,     7,     8,    54,     9,    10,    16,
      32,    26,    27,    34,    35,    37,    40,    55,    56,    57,
      58,   129,   138,    59,   130,   141,   145,   105,    60,    61,
      62,    63,    64,    65,    66,    67,   108,   109,   123,    82,
      85,    90,    93,    96,    68
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    98,    17,    18,   134,    71,     4,    25,     3,    76,
      76,    80,    81,     5,    12,   142,    25,    77,    78,   117,
     146,    22,    39,    21,    19,    86,    87,    88,    89,   116,
      23,   103,   104,   106,   107,   110,   111,    42,    24,    43,
      44,    13,    14,    15,    45,    83,    84,    28,    17,    18,
      29,    46,    30,    47,    48,    49,    50,    31,    51,    91,
      92,    36,    94,    95,    52,    41,    72,    73,    74,    75,
      19,    53,    79,    99,   118,   126,   102,   101,   119,   120,
     121,   122,   -70,   124,   131,   125,   133,   127,   135,   107,
     137,    42,   128,    43,    44,   132,   139,   144,    45,   106,
      11,   140,    17,    18,    20,    46,   100,    38,    48,    49,
      50,    33,    51,   143,    70,   112,   114,   115,    52,    42,
     113,    43,    44,   136,    19,    53,    45,     0,     0,     0,
      17,    18,    42,    46,    43,    44,    48,    49,    50,     0,
      51,     0,     0,    17,    18,    42,    52,    43,    44,     0,
       0,     0,    19,    53,     0,     0,    17,    18,     0,    52,
       0,     0,     0,     0,     0,    19,    53,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,    19,    97
};

static const yytype_int16 yycheck[] =
{
      42,    68,    14,    15,   129,    47,     9,    22,     0,     3,
       3,    31,    32,    16,    37,   140,    31,    11,    12,    12,
     145,     3,    37,    36,    36,    26,    27,    28,    29,    96,
      10,    73,    74,    75,    76,    77,    78,     3,    13,     5,
       6,    10,    11,    12,    10,    33,    34,    10,    14,    15,
      37,    17,     4,    19,    20,    21,    22,    25,    24,     5,
       6,    17,     7,     8,    30,    37,     3,     3,     3,     3,
      36,    37,    10,     4,    18,   117,    37,    10,     4,     4,
       4,    10,    25,     4,    25,    13,    13,    10,   130,   131,
     132,     3,    10,     5,     6,    11,    10,     4,    10,   141,
       6,    23,    14,    15,    14,    17,    18,    37,    20,    21,
      22,    31,    24,   141,    46,    82,    90,    93,    30,     3,
      85,     5,     6,   131,    36,    37,    10,    -1,    -1,    -1,
      14,    15,     3,    17,     5,     6,    20,    21,    22,    -1,
      24,    -1,    -1,    14,    15,     3,    30,     5,     6,    -1,
      -1,    -1,    36,    37,    -1,    -1,    14,    15,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    39,    40,     0,     9,    16,    41,    42,    43,    45,
      46,    42,    37,    10,    11,    12,    47,    14,    15,    36,
      44,    36,     3,    10,    13,    45,    49,    50,    10,    37,
       4,    25,    48,    50,    51,    52,    17,    53,    43,    45,
      54,    37,     3,     5,     6,    10,    17,    19,    20,    21,
      22,    24,    30,    37,    44,    55,    56,    57,    58,    61,
      66,    67,    68,    69,    70,    71,    72,    73,    82,    66,
      54,    66,     3,     3,     3,     3,     3,    11,    12,    10,
      31,    32,    77,    33,    34,    78,    26,    27,    28,    29,
      79,     5,     6,    80,     7,     8,    81,    37,    72,     4,
      18,    10,    37,    66,    66,    65,    66,    66,    74,    75,
      66,    66,    68,    69,    70,    71,    72,    12,    18,     4,
       4,     4,    10,    76,     4,    13,    66,    10,    10,    59,
      62,    25,    11,    13,    55,    66,    75,    66,    60,    10,
      23,    63,    55,    65,     4,    64,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    40,    39,    41,    41,    42,    42,    43,    43,
      43,    44,    44,    44,    45,    45,    47,    48,    46,    49,
      49,    50,    50,    52,    51,    53,    53,    54,    54,    55,
      55,    55,    55,    55,    56,    56,    57,    57,    59,    60,
      58,    62,    63,    64,    61,    65,    65,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    71,    71,
      72,    72,    73,    73,    73,    73,    73,    74,    74,    75,
      76,    75,    77,    77,    78,    78,    79,    79,    79,    79,
      80,    80,    81,    81,    82,    82,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     5,
       6,     1,     1,     1,     1,     1,     0,     0,     8,     0,
       1,     2,     4,     0,     8,     0,     2,     0,     2,     3,
       1,     1,     1,     1,     2,     1,     5,     5,     0,     0,
       9,     0,     0,     0,    12,     0,     1,     1,     3,     6,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     2,     1,     3,     1,     4,     4,     0,     1,     1,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* @1: %empty  */
#line 46 "src/asin.y"
       {
              dvar = 0;
              niv = 0; 
              si = 0;
              cargaContexto(niv);
              (yyval.inicio).inc_t = creaLans(si);
              emite(INCTOP, crArgNul(), crArgNul(), crArgEnt(-1));
              (yyval.inicio).go_t = creaLans(si);
              emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(-1));

       }
#line 1267 "asin.c"
    break;

  case 3: /* programa: @1 listDecla  */
#line 58 "src/asin.y"
       {
              if((yyvsp[0].cent)!=1){yyerror("Se debe declarar UNA función main()");}
              completaLans((yyvsp[-1].inicio).inc_t, crArgEnt(dvar));
              SIMB s = obtTdS("main");
              completaLans((yyvsp[-1].inicio).go_t, crArgEnt(s.d));
       }
#line 1278 "asin.c"
    break;

  case 4: /* listDecla: decla  */
#line 68 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1286 "asin.c"
    break;

  case 5: /* listDecla: listDecla decla  */
#line 72 "src/asin.y"
       {
              
              //int primero = $1;
              //int segundo = $2;
              (yyval.cent) = (yyvsp[-1].cent) + (yyvsp[0].cent);
       }
#line 1297 "asin.c"
    break;

  case 6: /* decla: declaVar  */
#line 81 "src/asin.y"
       {
              (yyval.cent) = 0;
       }
#line 1305 "asin.c"
    break;

  case 7: /* decla: declaFunc  */
#line 85 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1313 "asin.c"
    break;

  case 8: /* declaVar: tipoSimp ID_ PUNTC_  */
#line 91 "src/asin.y"
       {
              if (!insTdS((yyvsp[-1].ident), VARIABLE, (yyvsp[-2].cent), niv, dvar, -1)) yyerror("Identificador repetido");
              else dvar += TALLA_TIPO_SIMPLE;
       }
#line 1322 "asin.c"
    break;

  case 9: /* declaVar: tipoSimp ID_ IGUAL_ const PUNTC_  */
#line 96 "src/asin.y"
       {
              if ((yyvsp[-4].cent) != (yyvsp[-1].exp).t){
                     yyerror("Error de tipos en la inicialización");
              }
              if (!insTdS((yyvsp[-3].ident), VARIABLE, (yyvsp[-4].cent), niv, dvar, -1)) yyerror("Identificador repetido");
              else 
              {
                     if((yyvsp[-4].cent) != (yyvsp[-1].exp).t) (yyval.cent) = T_ERROR; //yyerror("Error de tipos en la asignación expre1");
                     emite(EASIG, crArgEnt((yyvsp[-1].exp).d),crArgNul(), crArgPos(niv,dvar));
                     dvar += TALLA_TIPO_SIMPLE;
                     
              }
       }
#line 1340 "asin.c"
    break;

  case 10: /* declaVar: tipoSimp ID_ CORA_ CTE_ CORC_ PUNTC_  */
#line 110 "src/asin.y"
       {
              int numelem = (yyvsp[-2].cent);
              if ((yyvsp[-2].cent) <= 0) {
                     yyerror("Talla inapropiada del array");
                     numelem = 0;
              }
              int refe = insTdA((yyvsp[-5].cent), numelem);
              if (!insTdS((yyvsp[-4].ident), VARIABLE, T_ARRAY, niv, dvar, refe)) yyerror("Identificador repetido");
              else dvar += numelem * TALLA_TIPO_SIMPLE;
       }
#line 1355 "asin.c"
    break;

  case 11: /* const: CTE_  */
#line 123 "src/asin.y"
       {
              (yyval.exp).t = T_ENTERO; (yyval.exp).d = (yyvsp[0].cent);
       }
#line 1363 "asin.c"
    break;

  case 12: /* const: TRUE_  */
#line 127 "src/asin.y"
       {
              (yyval.exp).t = T_LOGICO; (yyval.exp).d = 1;
       }
#line 1371 "asin.c"
    break;

  case 13: /* const: FALSE_  */
#line 131 "src/asin.y"
       {
              (yyval.exp).t = T_LOGICO; (yyval.exp).d = 0;
       }
#line 1379 "asin.c"
    break;

  case 14: /* tipoSimp: INT_  */
#line 137 "src/asin.y"
       {
              (yyval.cent) = T_ENTERO;
       }
#line 1387 "asin.c"
    break;

  case 15: /* tipoSimp: BOOL_  */
#line 141 "src/asin.y"
       {
              (yyval.cent) = T_LOGICO;
       }
#line 1395 "asin.c"
    break;

  case 16: /* @2: %empty  */
#line 147 "src/asin.y"
       {      
              (yyval.cent) = dvar;
              dvar = 0;
              niv++;
              cargaContexto(niv);
       }
#line 1406 "asin.c"
    break;

  case 17: /* $@3: %empty  */
#line 154 "src/asin.y"
       {
              dvar = 0;
              if(!insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].cent), 0, si, (yyvsp[-1].cent))) {
                     yyerror("Identificador repetido");       
              }
              //if ($5 == -1) {
              
                     //$<cent>$ = T_ERROR;
              //}
       }
#line 1421 "asin.c"
    break;

  case 18: /* declaFunc: tipoSimp ID_ @2 PARA_ paramForm PARC_ $@3 bloque  */
#line 165 "src/asin.y"
       {
              if((yyvsp[-7].cent) != T_ERROR)
                     (yyval.cent) = T_ERROR;
              else if ((yyvsp[-7].cent) != (yyvsp[0].cent)) {
                     yyerror("Tipo de retorno incorrecto");
              }
              dvar = (yyvsp[-5].cent);
              mostrarTdS();
              descargaContexto(niv);
              niv--;
              if(strcmp((yyvsp[-6].ident),"main") == 0){
                     (yyval.cent) = 1;
              }else{
                     (yyval.cent) = 0;
              }
       }
#line 1442 "asin.c"
    break;

  case 19: /* paramForm: %empty  */
#line 184 "src/asin.y"
       {
              (yyval.cent) = insTdD(-1, T_VACIO);
       }
#line 1450 "asin.c"
    break;

  case 20: /* paramForm: listParamForm  */
#line 188 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1458 "asin.c"
    break;

  case 21: /* listParamForm: tipoSimp ID_  */
#line 194 "src/asin.y"
       {
              insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].cent), niv,--dvar, -1);
              (yyval.cent) = insTdD(-1, (yyvsp[-1].cent));
       }
#line 1467 "asin.c"
    break;

  case 22: /* listParamForm: tipoSimp ID_ COMA_ listParamForm  */
#line 199 "src/asin.y"
       { 
              insTdD((yyvsp[0].cent), (yyvsp[-3].cent));
              int tds = insTdS((yyvsp[-2].ident), PARAMETRO, (yyvsp[-3].cent), niv, --dvar, -1);
              if (tds == 0) {
                     yyerror("Identificador de parámetro repetido");
              }
              (yyval.cent) = (yyvsp[0].cent);
              
       }
#line 1481 "asin.c"
    break;

  case 23: /* @4: %empty  */
#line 211 "src/asin.y"
       {
              emite(PUSHFP, crArgNul(), crArgNul(), crArgNul());
              emite(FPTOP, crArgNul(), crArgNul(), crArgNul());
              (yyval.cent) = creaLans(si);
              emite(INCTOP, crArgNul(), crArgNul(), crArgEnt(-1));
        }
#line 1492 "asin.c"
    break;

  case 24: /* bloque: @4 BRAA_ declaVarLocal listInt RETURN_ expre PUNTC_ BRAC_  */
#line 218 "src/asin.y"
       {
              INF inf = obtTdD(-1);
              int dir_return = TALLA_SEGENLACES + inf.tsp + TALLA_TIPO_SIMPLE;
              completaLans((yyvsp[-7].cent), crArgEnt(dvar)); 
              emite(EASIG, crArgPos(niv, (yyvsp[-2].exp).d), crArgNul(), crArgPos(niv, -dir_return));
              emite(TOPFP, crArgNul(), crArgNul(), crArgNul());
              emite(FPPOP, crArgNul(), crArgNul(), crArgNul());
              if (inf.tipo != T_ERROR)
              {
                    if (inf.tipo != (yyvsp[-2].exp).t){ yyerror("Tiene que coincidir el tipo que se retorna"); }
              }

            if (strcmp(inf.nom, "main")== 0)
              { 
                emite(FIN, crArgNul(), crArgNul(), crArgNul());
              } 
            else 
              {
                emite(RET, crArgNul(), crArgNul(), crArgNul());
              } 
              (yyval.cent) = (yyvsp[-2].exp).d;
       }
#line 1519 "asin.c"
    break;

  case 34: /* instExpre: expre PUNTC_  */
#line 258 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[-1].exp).t;
       }
#line 1527 "asin.c"
    break;

  case 36: /* instEntSal: READ_ PARA_ ID_ PARC_ PUNTC_  */
#line 265 "src/asin.y"
       {
              SIMB s = obtTdS((yyvsp[-2].ident));
              if (s.t == T_ERROR){
                     (yyval.cent) = T_ERROR;
              }
              else if (s.t != T_ENTERO) {
                     yyerror("El argumento del 'read' debe ser 'entero'");
                     (yyval.cent) = T_ERROR;
              }
              emite(EREAD, crArgNul(), crArgNul(), crArgPos(s.n, s.d));
       }
#line 1543 "asin.c"
    break;

  case 37: /* instEntSal: PRINT_ PARA_ expre PARC_ PUNTC_  */
#line 277 "src/asin.y"
       {
              if ((yyvsp[-2].exp).t == T_ERROR){
                     (yyval.cent) = T_ERROR;
              }
              if ((yyvsp[-2].exp).t != T_ENTERO) {
                     yyerror("El argumento del 'print' debe ser 'entero'");
                     (yyval.cent) = T_ERROR;
              }
              emite(EWRITE, crArgNul(), crArgNul(), crArgPos(niv, (yyvsp[-2].exp).d));
       }
#line 1558 "asin.c"
    break;

  case 38: /* @5: %empty  */
#line 290 "src/asin.y"
       {
              if((yyvsp[-1].exp).t == T_ERROR){
                     (yyval.cent) = T_ERROR;
              }
              else if ((yyvsp[-1].exp).t != T_LOGICO) {
                     yyerror("La expresión de comprobación del 'if' ha de ser de tipo LÓGICO");
              }
              (yyval.cent) = creaLans(si);
              emite(EIGUAL, crArgPos(niv, (yyvsp[-1].exp).d), crArgEnt(0), crArgEtq(-1)); 
       
       }
#line 1574 "asin.c"
    break;

  case 39: /* @6: %empty  */
#line 302 "src/asin.y"
       {
              (yyval.cent) = creaLans(si);
              emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(-1));
              completaLans((yyvsp[-1].cent), crArgEtq(si));
       }
#line 1584 "asin.c"
    break;

  case 40: /* instSelec: IF_ PARA_ expre PARC_ @5 inst @6 ELSE_ inst  */
#line 308 "src/asin.y"
       {
              completaLans((yyvsp[-2].cent), crArgEnt(si));
       }
#line 1592 "asin.c"
    break;

  case 41: /* @7: %empty  */
#line 315 "src/asin.y"
       {
              if (!((yyvsp[-1].exp).t == T_ERROR || (yyvsp[-1].exp).t == T_ENTERO || (yyvsp[-1].exp).t == T_VACIO || (yyvsp[-1].exp).t == T_LOGICO)) {
                     yyerror("La primera expresión del for ha de ser de tipo SIMPLE");
                     (yyval.cent) = T_ERROR;
              }
               (yyval.cent) = si;
       }
#line 1604 "asin.c"
    break;

  case 42: /* @8: %empty  */
#line 323 "src/asin.y"
       {
              if (!((yyvsp[-1].exp).t == T_LOGICO)) {
                     yyerror("La segunda expresión del for ha de ser de tipo LÓGICA");
                     (yyval.cent) = T_ERROR;
              }
              (yyval.for_s).verdad = creaLans(si); emite(EIGUAL, crArgPos(niv, (yyvsp[-1].exp).d), crArgEnt(1), crArgEtq(-1));
              (yyval.for_s).falso = creaLans(si); emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(-1));
              (yyval.for_s).ant_si = si;
       }
#line 1618 "asin.c"
    break;

  case 43: /* $@9: %empty  */
#line 333 "src/asin.y"
       {
              emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyvsp[-5].cent)));
              completaLans((yyvsp[-2].for_s).verdad, crArgEnt(si));
       }
#line 1627 "asin.c"
    break;

  case 44: /* instIter: FOR_ PARA_ expreOP PUNTC_ @7 expre PUNTC_ @8 expreOP PARC_ $@9 inst  */
#line 338 "src/asin.y"
       {
              if (!((yyvsp[-3].exp).t == T_ERROR || (yyvsp[-3].exp).t == T_ENTERO || (yyvsp[-3].exp).t == T_VACIO || (yyvsp[-3].exp).t == T_LOGICO)) {
                     yyerror("La primera expresión del for ha de ser de tipo SIMPLE");
                     (yyval.cent) = T_ERROR;
              }
              emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyvsp[-4].for_s).ant_si));
              completaLans((yyvsp[-4].for_s).falso, crArgEnt(si));
       }
#line 1640 "asin.c"
    break;

  case 45: /* expreOP: %empty  */
#line 348 "src/asin.y"
          { (yyval.exp).t = T_VACIO; }
#line 1646 "asin.c"
    break;

  case 46: /* expreOP: expre  */
#line 350 "src/asin.y"
       {      
              (yyval.exp) = (yyvsp[0].exp);
              if (!((yyvsp[0].exp).t == T_ENTERO || (yyvsp[0].exp).t == T_LOGICO)) {
                     yyerror("La expreOP del for ha de ser de tipo simple");
                     (yyval.exp).t = T_ERROR;
              }
       }
#line 1658 "asin.c"
    break;

  case 47: /* expre: expreLogic  */
#line 360 "src/asin.y"
       {
              (yyval.exp) = (yyvsp[0].exp);
       }
#line 1666 "asin.c"
    break;

  case 48: /* expre: ID_ IGUAL_ expre  */
#line 364 "src/asin.y"
       {
              SIMB sim = obtTdS((yyvsp[-2].ident));
              (yyval.exp).t = T_ERROR;
              if((yyvsp[0].exp).t != T_ERROR){
                     if (sim.t == T_ERROR) yyerror("Objeto no declarado");
                     else if (sim.t == T_ARRAY){
                            yyerror("El id en la asignacion no puede ser un array");
                     }
                     //mostrarTdS();
                     else if (!(((sim.t == T_LOGICO) && ((yyvsp[0].exp).t == T_LOGICO)) || ((sim.t == T_ENTERO) && ((yyvsp[0].exp).t == T_ENTERO)))) {
              
                            yyerror("Error de tipos en la asignación expre2");
                     } else (yyval.exp).t = (yyvsp[0].exp).t;
              }
              (yyval.exp).d = (yyvsp[0].exp).d;
              emite(EASIG, crArgPos(niv, (yyvsp[0].exp).d), crArgNul(), crArgPos(sim.n, sim.d));       
       }
#line 1688 "asin.c"
    break;

  case 49: /* expre: ID_ CORA_ expre CORC_ IGUAL_ expre  */
#line 382 "src/asin.y"
       {
              SIMB s = obtTdS((yyvsp[-5].ident));
              //DIM dim = obtTdA(s.ref);
              //int tipoArray = dim.telem;
              if((yyvsp[-3].exp).t != T_ENTERO){
                     yyerror("La índice debe ser de tipo 'entero'");
              }
              else if (s.t != T_ARRAY) {
                     yyerror("La variable debe ser de tipo 'array'");
              } else {
                     DIM dim = obtTdA(s.ref);
                     if (!((yyvsp[-3].exp).t == T_ENTERO)) yyerror("Posición de un array debe ser una expresión numérica");
                     else {
                            //int pos = $3.d;
                            //if (pos < 0) yyerror("La posición de un array debe ser positiva");
                            //else if (pos >= dim.nelem) yyerror("La posición dada excede las dimensiones del array");
                     }
                     int tipoArray = dim.telem;
                     if (tipoArray != T_ERROR && (yyvsp[-3].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR) {
                            if (!(((tipoArray == T_ENTERO) && ((yyvsp[0].exp).t == T_ENTERO)) ||
                                   ((tipoArray == T_LOGICO) && ((yyvsp[0].exp).t == T_LOGICO)))) {
                                   (yyval.exp).t = T_ERROR;
                                   yyerror("Error de tipos en la asignación expre3");
                            } else (yyval.exp).t = T_ARRAY;
                     } else {
                            (yyval.exp).t = T_ERROR;
                     }
              }
              (yyval.exp).d = (yyvsp[0].exp).d;
              emite(EVA, crArgPos(s.n, s.d), crArgPos(niv, (yyvsp[-3].exp).d), crArgPos(niv, (yyvsp[0].exp).d));
       }
#line 1724 "asin.c"
    break;

  case 50: /* expreLogic: expreIgual  */
#line 415 "src/asin.y"
                        { (yyval.exp) = (yyvsp[0].exp); }
#line 1730 "asin.c"
    break;

  case 51: /* expreLogic: expreLogic opLogic expreIgual  */
#line 417 "src/asin.y"
       {
              (yyval.exp).t = T_ERROR;
              if((yyvsp[-2].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR)
              {
                     if((yyvsp[-2].exp).t != T_LOGICO || (yyvsp[0].exp).t != T_LOGICO) {
                            yyerror("Error de tipos en la asignación Logic");
                     } else if ((yyvsp[-2].exp).t == T_ARRAY) {
                            yyerror("opLogico no sirve para arrays");
                     }else{
                            (yyval.exp).t = T_LOGICO;
                     } 
              }
              (yyval.exp).d = creaVarTemp();
              if ((yyvsp[-1].cent) == EMULT) {
                emite(EMULT, crArgPos(niv, (yyvsp[-2].exp).d), crArgPos(niv, (yyvsp[0].exp).d), crArgPos(niv, (yyval.exp).d));
              } else {
                emite(ESUM, crArgPos(niv, (yyvsp[-2].exp).d), crArgPos(niv, (yyvsp[0].exp).d), crArgPos(niv, (yyval.exp).d));
                emite(EMEN, crArgPos(niv, (yyval.exp).d), crArgEnt(1), crArgEtq(si+2));
                emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, (yyval.exp).d));
              }
       }
#line 1756 "asin.c"
    break;

  case 52: /* expreIgual: expreRel  */
#line 440 "src/asin.y"
                      { (yyval.exp) = (yyvsp[0].exp); }
#line 1762 "asin.c"
    break;

  case 53: /* expreIgual: expreIgual opIgual expreRel  */
#line 442 "src/asin.y"
       {
              (yyval.exp).t = T_ERROR;
              if((yyvsp[-2].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR)
              {
                     if((yyvsp[-2].exp).t != (yyvsp[0].exp).t) {
                            yyerror("Error de tipos en la asignación Igual");
                     } else if ((yyvsp[-2].exp).t == T_ARRAY) {
                            yyerror("opIgual no sirve para arrays");
                     }else{
                            (yyval.exp).t = T_LOGICO;
                     }      
              }
              (yyval.exp).d = creaVarTemp();
              emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, (yyval.exp).d));
              emite((yyvsp[-1].cent), crArgPos(niv, (yyvsp[-2].exp).d), crArgPos(niv, (yyvsp[0].exp).d), crArgEtq(si+2));
              emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, (yyval.exp).d));
       }
#line 1784 "asin.c"
    break;

  case 54: /* expreRel: expreAd  */
#line 461 "src/asin.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 1790 "asin.c"
    break;

  case 55: /* expreRel: expreRel opRel expreAd  */
#line 463 "src/asin.y"
       {
              (yyval.exp).t = T_ERROR;
              if((yyvsp[-2].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR)
              {
                     if ((yyvsp[-2].exp).t != (yyvsp[0].exp).t) {
                            yyerror("No tienen el mismo tipo los operadores");
                     } else if ((yyvsp[-2].exp).t == T_LOGICO) {
                            yyerror("opRel no acepta t_logicos");
                     } else {
                            (yyval.exp).t = T_LOGICO;
                }  
              }
              (yyval.exp).d = creaVarTemp();
              emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, (yyval.exp).d));
              emite((yyvsp[-1].cent), crArgPos(niv, (yyvsp[-2].exp).d), crArgPos(niv, (yyvsp[0].exp).d), crArgEtq(si+2));
              emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, (yyval.exp).d));
       }
#line 1812 "asin.c"
    break;

  case 56: /* expreAd: expreMul  */
#line 482 "src/asin.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 1818 "asin.c"
    break;

  case 57: /* expreAd: expreAd opAd expreMul  */
#line 484 "src/asin.y"
       {
              (yyval.exp).t = T_ERROR;
              if((yyvsp[-2].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR)
              {
                     if((yyvsp[-2].exp).t != T_ENTERO || (yyvsp[0].exp).t != T_ENTERO) {
                            yyerror("Error de tipos en la asignación Ad");
                     }
                     else{(yyval.exp).t = T_ENTERO;}
              }
              (yyval.exp).d = creaVarTemp();
              /***************** Expresi´on a partir de un operador aritm´etico */
              emite((yyvsp[-1].cent), crArgPos(niv, (yyvsp[-2].exp).d), crArgPos(niv, (yyvsp[0].exp).d), crArgPos(niv, (yyval.exp).d));    
       }
#line 1836 "asin.c"
    break;

  case 58: /* expreMul: expreUna  */
#line 499 "src/asin.y"
                    { (yyval.exp) = (yyvsp[0].exp); }
#line 1842 "asin.c"
    break;

  case 59: /* expreMul: expreMul opMul expreUna  */
#line 501 "src/asin.y"
       {
              (yyval.exp).t = T_ERROR;
              if((yyvsp[-2].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR)
              {
                     if((yyvsp[-2].exp).t != T_ENTERO || (yyvsp[0].exp).t != T_ENTERO) {
                            yyerror("Error de tipos en la asignación Mul");
                     }
                     else{(yyval.exp).t = T_ENTERO;}
              }
              (yyval.exp).d = creaVarTemp();
              /***************** Expresi´on a partir de un operador aritm´etico */
              emite((yyvsp[-1].cent), crArgPos(niv, (yyvsp[-2].exp).d), crArgPos(niv, (yyvsp[0].exp).d), crArgPos(niv, (yyval.exp).d));
       }
#line 1860 "asin.c"
    break;

  case 60: /* expreUna: expreSufi  */
#line 516 "src/asin.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 1866 "asin.c"
    break;

  case 61: /* expreUna: opUna expreUna  */
#line 518 "src/asin.y"
       {
              (yyval.exp).t = T_ERROR;
              if((yyvsp[0].exp).t != T_ERROR){
                     if((yyvsp[0].exp).t == T_ENTERO){
                            if((yyvsp[-1].cent) == 2){
                                   yyerror("Operacion ! no es correcta para enteros");
                            } else{
                                   (yyval.exp).t = T_ENTERO;
                            }
                     }else if ((yyvsp[0].exp).t == T_LOGICO){
                            if((yyvsp[-1].cent) == 2){
                                   (yyval.exp).t = T_LOGICO;
                            }else{
                                   yyerror("Operacion + / - no son correctas para booleanos");
                            }
                     }
              }
              (yyval.exp).d = creaVarTemp();
              if ((yyvsp[-1].cent) == 0) {
              
              } else if ((yyvsp[-1].cent) == 1){
                     emite(ESIG, crArgPos(niv, (yyvsp[0].exp).d), crArgNul(), crArgPos(niv, (yyval.exp).d));      
              }
              else{
                     emite(EDIF, crArgEnt(1), crArgPos(niv, (yyvsp[0].exp).d), crArgPos(niv, (yyval.exp).d));
              }
       }
#line 1898 "asin.c"
    break;

  case 62: /* expreSufi: const  */
#line 548 "src/asin.y"
       {
              (yyval.exp).t = (yyvsp[0].exp).t;
              (yyval.exp).d = creaVarTemp();
              emite(EASIG, crArgEnt((yyvsp[0].exp).d), crArgNul(), crArgPos(niv, (yyval.exp).d));
       }
#line 1908 "asin.c"
    break;

  case 63: /* expreSufi: PARA_ expre PARC_  */
#line 554 "src/asin.y"
       {
              (yyval.exp) = (yyvsp[-1].exp);
       }
#line 1916 "asin.c"
    break;

  case 64: /* expreSufi: ID_  */
#line 558 "src/asin.y"
       {
              SIMB simb = obtTdS((yyvsp[0].ident));
              (yyval.exp).t = T_ERROR;
              if(simb.t == T_ERROR){
                     yyerror("Variable no declarada");
              }else if (simb.t != T_ARRAY){
                     (yyval.exp).t = simb.t;
              }
              (yyval.exp).d = creaVarTemp();
              emite(EASIG, crArgPos(simb.n, simb.d), crArgNul(), crArgPos(niv, (yyval.exp).d)); 
       }
#line 1932 "asin.c"
    break;

  case 65: /* expreSufi: ID_ CORA_ expre CORC_  */
#line 570 "src/asin.y"
       {
              SIMB simb = obtTdS((yyvsp[-3].ident));
              (yyval.exp).t = T_ERROR;
              
              if((yyvsp[-1].exp).t != T_ENTERO){
                     yyerror("Ha de ser tipo entero");
              }
              if(simb.t == T_ARRAY){
                     DIM d = obtTdA(simb.ref);
                     (yyval.exp).t = d.telem;
              }else {
                     yyerror("Identificador ha de ser tipo array");
              }
              (yyval.exp).d = creaVarTemp();
              emite(EAV, crArgPos(simb.n, simb.d), crArgPos(niv, (yyvsp[-1].exp).d), crArgPos(niv, (yyval.exp).d));
              
       }
#line 1954 "asin.c"
    break;

  case 66: /* expreSufi: ID_ PARA_ paramAct PARC_  */
#line 588 "src/asin.y"
       {
              SIMB simb = obtTdS((yyvsp[-3].ident));
              INF inf = obtTdD(simb.ref);
              (yyval.exp).t = T_ERROR;
              if (simb.t == T_ERROR){ yyerror("El símbolo no debe ser error"); }
              else if (inf.tipo == T_ERROR){ yyerror("La referencia no debe ser error"); }
              else {
                     if (!cmpDom(simb.ref, (yyvsp[-1].cent))) { yyerror("Los dominios deben coincidir"); }
                     else 
                     { 
                            (yyval.exp).t = inf.tipo; 
                            emite(CALL,crArgNul(),crArgNul(),crArgEtq(simb.d));
                            emite(DECTOP,crArgNul(),crArgNul(),crArgEnt(inf.tsp));
                            (yyval.exp).d = creaVarTemp();
                            emite(EPOP,crArgNul(),crArgNul(),crArgPos(niv, (yyval.exp).d));
                     }
              } 
       }
#line 1977 "asin.c"
    break;

  case 67: /* paramAct: %empty  */
#line 609 "src/asin.y"
       {
              (yyval.cent) = insTdD(-1, T_VACIO);
       }
#line 1985 "asin.c"
    break;

  case 68: /* paramAct: listParamAct  */
#line 613 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1993 "asin.c"
    break;

  case 69: /* listParamAct: expre  */
#line 619 "src/asin.y"
       {
              (yyval.cent) = insTdD(-1, (yyvsp[0].exp).t);
              emite(EPUSH, crArgNul(), crArgNul(), crArgPos(niv, (yyvsp[0].exp).d));
       }
#line 2002 "asin.c"
    break;

  case 70: /* $@10: %empty  */
#line 624 "src/asin.y"
       {
              emite(EPUSH, crArgNul(), crArgNul(), crArgPos(niv, (yyvsp[0].exp).d));
       }
#line 2010 "asin.c"
    break;

  case 71: /* listParamAct: expre $@10 COMA_ listParamAct  */
#line 628 "src/asin.y"
       {      
              (yyval.cent) = insTdD((yyvsp[0].cent), (yyvsp[-3].exp).t);
       }
#line 2018 "asin.c"
    break;

  case 72: /* opLogic: AND_  */
#line 633 "src/asin.y"
               { (yyval.cent) = EMULT; }
#line 2024 "asin.c"
    break;

  case 73: /* opLogic: OR_  */
#line 634 "src/asin.y"
             { (yyval.cent) = ESUM; }
#line 2030 "asin.c"
    break;

  case 74: /* opIgual: EQUALS_  */
#line 637 "src/asin.y"
                  { (yyval.cent) = EIGUAL; }
#line 2036 "asin.c"
    break;

  case 75: /* opIgual: NOTEQUAL_  */
#line 638 "src/asin.y"
                   { (yyval.cent) = EDIST; }
#line 2042 "asin.c"
    break;

  case 76: /* opRel: MAYOR_  */
#line 641 "src/asin.y"
               { (yyval.cent) = EMAY; }
#line 2048 "asin.c"
    break;

  case 77: /* opRel: MENOR_  */
#line 642 "src/asin.y"
                { (yyval.cent) = EMEN; }
#line 2054 "asin.c"
    break;

  case 78: /* opRel: MAYI_  */
#line 643 "src/asin.y"
               { (yyval.cent) = EMAYEQ; }
#line 2060 "asin.c"
    break;

  case 79: /* opRel: MENI_  */
#line 644 "src/asin.y"
               { (yyval.cent) = EMENEQ; }
#line 2066 "asin.c"
    break;

  case 80: /* opAd: MAS_  */
#line 647 "src/asin.y"
            { (yyval.cent) = ESUM; }
#line 2072 "asin.c"
    break;

  case 81: /* opAd: MENOS_  */
#line 648 "src/asin.y"
                { (yyval.cent) = EDIF; }
#line 2078 "asin.c"
    break;

  case 82: /* opMul: POR_  */
#line 651 "src/asin.y"
             { (yyval.cent) = EMULT; }
#line 2084 "asin.c"
    break;

  case 83: /* opMul: DIV_  */
#line 652 "src/asin.y"
              { (yyval.cent) = EDIVI; }
#line 2090 "asin.c"
    break;

  case 84: /* opUna: MAS_  */
#line 655 "src/asin.y"
             {(yyval.cent) = 0; }
#line 2096 "asin.c"
    break;

  case 85: /* opUna: MENOS_  */
#line 656 "src/asin.y"
                { (yyval.cent) = 1; }
#line 2102 "asin.c"
    break;

  case 86: /* opUna: NOT_  */
#line 657 "src/asin.y"
              { (yyval.cent) = 2; }
#line 2108 "asin.c"
    break;


#line 2112 "asin.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 659 "src/asin.y"

