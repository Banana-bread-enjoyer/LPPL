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
#include "header.h"
#include "libtds.h"

#line 78 "asin.c"

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
  YYSYMBOL_40_1 = 40,                      /* $@1  */
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
  YYSYMBOL_declaVarLocal = 52,             /* declaVarLocal  */
  YYSYMBOL_listInt = 53,                   /* listInt  */
  YYSYMBOL_inst = 54,                      /* inst  */
  YYSYMBOL_instExpre = 55,                 /* instExpre  */
  YYSYMBOL_instEntSal = 56,                /* instEntSal  */
  YYSYMBOL_instSelec = 57,                 /* instSelec  */
  YYSYMBOL_instIter = 58,                  /* instIter  */
  YYSYMBOL_59_4 = 59,                      /* @4  */
  YYSYMBOL_60_5 = 60,                      /* @5  */
  YYSYMBOL_expreOP = 61,                   /* expreOP  */
  YYSYMBOL_expre = 62,                     /* expre  */
  YYSYMBOL_expreLogic = 63,                /* expreLogic  */
  YYSYMBOL_expreIgual = 64,                /* expreIgual  */
  YYSYMBOL_expreRel = 65,                  /* expreRel  */
  YYSYMBOL_expreAd = 66,                   /* expreAd  */
  YYSYMBOL_expreMul = 67,                  /* expreMul  */
  YYSYMBOL_expreUna = 68,                  /* expreUna  */
  YYSYMBOL_expreSufi = 69,                 /* expreSufi  */
  YYSYMBOL_paramAct = 70,                  /* paramAct  */
  YYSYMBOL_listParamAct = 71,              /* listParamAct  */
  YYSYMBOL_opLogic = 72,                   /* opLogic  */
  YYSYMBOL_opIgual = 73,                   /* opIgual  */
  YYSYMBOL_opRel = 74,                     /* opRel  */
  YYSYMBOL_opAd = 75,                      /* opAd  */
  YYSYMBOL_opMul = 76,                     /* opMul  */
  YYSYMBOL_opUna = 77                      /* opUna  */
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
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

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
       0,    38,    38,    38,    51,    55,    67,    71,    77,    82,
      91,   104,   108,   112,   118,   122,   129,   141,   128,   157,
     160,   166,   170,   177,   180,   181,   184,   185,   188,   189,
     190,   191,   192,   195,   199,   202,   210,   219,   223,   230,
     222,   245,   246,   256,   260,   271,   298,   299,   315,   316,
     330,   331,   345,   346,   359,   360,   373,   374,   398,   402,
     406,   416,   427,   444,   447,   453,   457,   464,   465,   468,
     469,   472,   473,   474,   475,   478,   479,   482,   483,   486,
     487,   488
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
  "DOU_BAR_", "CTE_", "ID_", "$accept", "programa", "$@1", "listDecla",
  "decla", "declaVar", "const", "tipoSimp", "declaFunc", "@2", "$@3",
  "paramForm", "listParamForm", "bloque", "declaVarLocal", "listInt",
  "inst", "instExpre", "instEntSal", "instSelec", "instIter", "@4", "@5",
  "expreOP", "expre", "expreLogic", "expreIgual", "expreRel", "expreAd",
  "expreMul", "expreUna", "expreSufi", "paramAct", "listParamAct",
  "opLogic", "opIgual", "opRel", "opAd", "opMul", "opUna", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-115)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
    -115,    14,    11,  -115,  -115,  -115,    11,  -115,  -115,   -14,
    -115,  -115,    31,  -115,   -12,   -11,    25,  -115,  -115,  -115,
      20,    37,    11,  -115,    28,    10,    48,  -115,  -115,    32,
    -115,    11,    44,  -115,  -115,  -115,    11,  -115,    29,    34,
      31,   103,  -115,  -115,  -115,  -115,   103,    66,    70,    71,
      75,  -115,     4,  -115,  -115,  -115,  -115,  -115,  -115,    77,
     -10,    12,   -17,    54,    55,  -115,  -115,   116,    81,    62,
      79,    57,   103,   103,   103,   103,   103,   103,  -115,  -115,
    -115,   116,  -115,  -115,   116,  -115,  -115,  -115,  -115,   116,
    -115,  -115,   116,  -115,  -115,   116,     5,  -115,  -115,  -115,
      73,    97,    98,    99,  -115,  -115,    88,   111,  -115,  -115,
     110,    12,   -17,    54,    55,  -115,   103,  -115,   106,   114,
      90,   115,   103,  -115,   117,   119,  -115,  -115,   112,   103,
    -115,   103,  -115,    90,  -115,  -115,  -115,   124,   103,   125,
      90,  -115
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    14,    15,     3,     4,     6,     0,
       7,     5,    16,     8,     0,     0,     0,    12,    13,    11,
       0,     0,    19,     9,     0,     0,     0,    20,    10,    21,
      17,     0,     0,    22,    24,    18,    26,    25,     0,     0,
       0,     0,    79,    80,    34,    26,     0,     0,     0,     0,
       0,    81,    60,    58,    27,    29,    30,    31,    32,     0,
      43,    46,    48,    50,    52,    54,    56,     0,     0,     0,
       0,     0,     0,     0,    41,    63,     0,     0,    33,    67,
      68,     0,    69,    70,     0,    71,    72,    73,    74,     0,
      75,    76,     0,    77,    78,     0,    60,    57,    59,    28,
       0,     0,     0,     0,    38,    42,    65,     0,    64,    44,
       0,    47,    49,    51,    53,    55,     0,    23,     0,     0,
       0,     0,     0,    62,    61,     0,    35,    36,     0,     0,
      66,     0,    61,     0,    39,    45,    37,     0,    41,     0,
       0,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,  -115,   130,   101,   127,   -18,  -115,  -115,
    -115,  -115,   107,  -115,  -115,   100,  -114,  -115,  -115,  -115,
    -115,  -115,  -115,     6,   -41,  -115,    61,    59,    58,    56,
     -66,  -115,  -115,    27,  -115,  -115,  -115,  -115,  -115,  -115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     6,     7,     8,    53,     9,    10,    16,
      32,    26,    27,    35,    36,    39,    54,    55,    56,    57,
      58,   121,   137,   104,    59,    60,    61,    62,    63,    64,
      65,    66,   107,   108,    81,    84,    89,    92,    95,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    97,    17,    18,    25,    70,   128,    75,    75,    85,
      86,    87,    88,    25,     3,    76,    77,   116,    38,   136,
       4,    79,    80,    12,    19,    21,   141,     5,    22,   115,
      23,   102,   103,   105,   106,   109,   110,    41,    28,    42,
      43,    13,    14,    15,    44,    82,    83,    29,    17,    18,
      24,    45,    30,    46,    47,    48,    49,    31,    50,    90,
      91,    34,    93,    94,    51,    41,    40,    42,    43,    71,
      19,    52,    44,    72,    73,   125,    17,    18,    74,    45,
      99,   106,    47,    48,    49,    98,    50,    78,   134,   100,
     135,   117,    51,    41,   101,    42,    43,   105,    19,    52,
      44,   118,   119,   120,    17,    18,    41,    45,    42,    43,
      47,    48,    49,   122,    50,   123,   126,    17,    18,    41,
      51,    42,    43,   124,   127,   129,    19,    52,   131,   140,
      17,    18,   132,    51,   138,   133,    11,    37,    33,    19,
      52,    20,   111,   112,   139,    69,    51,   113,   114,   130,
       0,     0,    19,    96
};

static const yytype_int16 yycheck[] =
{
      41,    67,    14,    15,    22,    46,   120,     3,     3,    26,
      27,    28,    29,    31,     0,    11,    12,    12,    36,   133,
       9,    31,    32,    37,    36,    36,   140,    16,     3,    95,
      10,    72,    73,    74,    75,    76,    77,     3,    10,     5,
       6,    10,    11,    12,    10,    33,    34,    37,    14,    15,
      13,    17,     4,    19,    20,    21,    22,    25,    24,     5,
       6,    17,     7,     8,    30,     3,    37,     5,     6,     3,
      36,    37,    10,     3,     3,   116,    14,    15,     3,    17,
      18,   122,    20,    21,    22,     4,    24,    10,   129,    10,
     131,    18,    30,     3,    37,     5,     6,   138,    36,    37,
      10,     4,     4,     4,    14,    15,     3,    17,     5,     6,
      20,    21,    22,    25,    24,     4,    10,    14,    15,     3,
      30,     5,     6,    13,    10,    10,    36,    37,    11,     4,
      14,    15,    13,    30,    10,    23,     6,    36,    31,    36,
      37,    14,    81,    84,   138,    45,    30,    89,    92,   122,
      -1,    -1,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    39,    40,     0,     9,    16,    41,    42,    43,    45,
      46,    42,    37,    10,    11,    12,    47,    14,    15,    36,
      44,    36,     3,    10,    13,    45,    49,    50,    10,    37,
       4,    25,    48,    50,    17,    51,    52,    43,    45,    53,
      37,     3,     5,     6,    10,    17,    19,    20,    21,    22,
      24,    30,    37,    44,    54,    55,    56,    57,    58,    62,
      63,    64,    65,    66,    67,    68,    69,    77,    62,    53,
      62,     3,     3,     3,     3,     3,    11,    12,    10,    31,
      32,    72,    33,    34,    73,    26,    27,    28,    29,    74,
       5,     6,    75,     7,     8,    76,    37,    68,     4,    18,
      10,    37,    62,    62,    61,    62,    62,    70,    71,    62,
      62,    64,    65,    66,    67,    68,    12,    18,     4,     4,
       4,    59,    25,     4,    13,    62,    10,    10,    54,    10,
      71,    11,    13,    23,    62,    62,    54,    60,    10,    61,
       4,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    40,    39,    41,    41,    42,    42,    43,    43,
      43,    44,    44,    44,    45,    45,    47,    48,    46,    49,
      49,    50,    50,    51,    52,    52,    53,    53,    54,    54,
      54,    54,    54,    55,    55,    56,    56,    57,    59,    60,
      58,    61,    61,    62,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    69,    69,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    74,    74,    75,    75,    76,    76,    77,
      77,    77
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     5,
       6,     1,     1,     1,     1,     1,     0,     0,     8,     0,
       1,     2,     4,     7,     0,     2,     0,     2,     3,     1,
       1,     1,     1,     2,     1,     5,     5,     7,     0,     0,
      11,     0,     1,     1,     3,     6,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     4,     4,     0,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
  case 2: /* $@1: %empty  */
#line 38 "src/asin.y"
       {
              dvar = 0;
              niv = 0; 
              cargaContexto(niv);
       }
#line 1248 "asin.c"
    break;

  case 3: /* programa: $@1 listDecla  */
#line 44 "src/asin.y"
       {
              if((yyvsp[0].cent)==0){yyerror("Se debe declarar al menos la función main()");}
              mostrarTdS();
       }
#line 1257 "asin.c"
    break;

  case 4: /* listDecla: decla  */
#line 52 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1265 "asin.c"
    break;

  case 5: /* listDecla: listDecla decla  */
#line 56 "src/asin.y"
       {
              int primero = (yyvsp[-1].cent);
              int segundo = (yyvsp[0].cent);
              if (segundo != primero) {
                     if (segundo = 1) (yyval.cent) = segundo;
                     else (yyval.cent) = primero;
              }
              else (yyval.cent) = (yyvsp[-1].cent);
       }
#line 1279 "asin.c"
    break;

  case 6: /* decla: declaVar  */
#line 68 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1287 "asin.c"
    break;

  case 7: /* decla: declaFunc  */
#line 72 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1295 "asin.c"
    break;

  case 4: /* listDecla: decla  */
#line 52 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1261 "asin.c"
    break;

  case 5: /* listDecla: listDecla decla  */
#line 56 "src/asin.y"
       {
              int primero = (yyvsp[-1].cent);
              int segundo = (yyvsp[0].cent);
              if (segundo != primero) {
                     if (segundo == 1) (yyval.cent) = segundo;
                     else (yyval.cent) = primero;
              }
              else (yyval.cent) = 0;
       }
#line 1275 "asin.c"
    break;

  case 7: /* decla: declaFunc  */
#line 69 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1283 "asin.c"
    break;

  case 8: /* declaVar: tipoSimp ID_ PUNTC_  */
#line 78 "src/asin.y"
       {
              if (!insTdS((yyvsp[-1].ident), VARIABLE, (yyvsp[-2].cent), niv, dvar, -1)) yyerror("Identificador repetido");
              else dvar += TALLA_TIPO_SIMPLE;
       }
#line 1304 "asin.c"
    break;

  case 9: /* declaVar: tipoSimp ID_ IGUAL_ const PUNTC_  */
#line 83 "src/asin.y"
       {
              if ((yyvsp[-4].cent) != (yyvsp[-1].cent)){
                     yyerror("Error de tipos en la inicialización");
              }
              if (!insTdS((yyvsp[-3].ident), VARIABLE, (yyvsp[-4].cent), niv, dvar, -1)) yyerror("Identificador repetido");
              else 
              {
                     if((yyvsp[-4].cent) != (yyvsp[-1].cent)) yyerror("Error de tipos en la asignación expre1");
                     else dvar += TALLA_TIPO_SIMPLE;
              }
       }
#line 1317 "asin.c"
    break;

  case 10: /* declaVar: tipoSimp ID_ CORA_ CTE_ CORC_ PUNTC_  */
#line 92 "src/asin.y"
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
#line 1332 "asin.c"
    break;

  case 11: /* const: CTE_  */
#line 105 "src/asin.y"
       {
              (yyval.cent) = T_ENTERO;
       }
#line 1340 "asin.c"
    break;

  case 12: /* const: TRUE_  */
#line 109 "src/asin.y"
       {
              (yyval.cent) = T_LOGICO;
       }
#line 1348 "asin.c"
    break;

  case 13: /* const: FALSE_  */
#line 113 "src/asin.y"
       {
              (yyval.cent) = T_LOGICO;
       }
#line 1356 "asin.c"
    break;

  case 14: /* tipoSimp: INT_  */
#line 119 "src/asin.y"
       {
              (yyval.cent) = T_ENTERO;
       }
#line 1364 "asin.c"
    break;

  case 15: /* tipoSimp: BOOL_  */
#line 123 "src/asin.y"
       {
              (yyval.cent) = T_LOGICO;
       }
#line 1372 "asin.c"
    break;

  case 16: /* @2: %empty  */
#line 129 "src/asin.y"
       {      
              (yyval.cent) = dvar;
              dvar = 0;
              if(strcmp((yyvsp[0].ident),"main") == 0){
                     (yyval.cent) = 1;
              }else{
                     (yyval.cent) = 0;
              }
              niv++;
              cargaContexto(niv);
       }
#line 1388 "asin.c"
    break;

  case 17: /* $@3: %empty  */
#line 141 "src/asin.y"
       {
              
              if(!insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].cent), 0, dvar, (yyvsp[-1].cent))) {
                     yyerror("Identificador repetido");
              }
       }
#line 1399 "asin.c"
    break;

  case 18: /* declaFunc: tipoSimp ID_ @2 PARA_ paramForm PARC_ $@3 bloque  */
#line 148 "src/asin.y"
       {
              dvar = (yyvsp[-5].cent);
              //mostrarTdS();
              descargaContexto(niv);
              niv--;
       }
#line 1410 "asin.c"
    break;

  case 19: /* paramForm: %empty  */
#line 157 "src/asin.y"
       {
              (yyval.cent) = insTdD(-1, T_VACIO);
       }
#line 1418 "asin.c"
    break;

  case 20: /* paramForm: listParamForm  */
#line 161 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1426 "asin.c"
    break;

  case 21: /* listParamForm: tipoSimp ID_  */
#line 167 "src/asin.y"
       {
              (yyval.cent) = insTdD(-1, (yyvsp[-1].cent));
       }
#line 1434 "asin.c"
    break;

  case 22: /* listParamForm: tipoSimp ID_ COMA_ listParamForm  */
#line 171 "src/asin.y"
       {
              insTdD((yyvsp[0].cent), (yyvsp[-3].cent));
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1443 "asin.c"
    break;

  case 33: /* instExpre: expre PUNTC_  */
#line 196 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[-1].cent);
       }
#line 1451 "asin.c"
    break;

  case 35: /* instEntSal: READ_ PARA_ ID_ PARC_ PUNTC_  */
#line 203 "src/asin.y"
       {
              SIMB s = obtTdS((yyvsp[-2].ident));
              if (s.t != T_ENTERO) {
                     yyerror("El argumento del 'read' debe ser 'entero'");
                     (yyval.cent) = T_ERROR;
              }
       }
#line 1463 "asin.c"
    break;

  case 36: /* instEntSal: PRINT_ PARA_ expre PARC_ PUNTC_  */
#line 211 "src/asin.y"
       {
              if ((yyvsp[-2].cent) != T_ENTERO) {
                     yyerror("El argumento del 'read' debe ser 'entero'");
                     (yyval.cent) = T_ERROR;
              }
       }
#line 1474 "asin.c"
    break;

  case 38: /* @4: %empty  */
#line 223 "src/asin.y"
       {
              if (!((yyvsp[0].cent) == T_ERROR || (yyvsp[0].cent) == T_ENTERO || (yyvsp[0].cent) == T_VACIO || (yyvsp[0].cent) == T_LOGICO)) {
                     yyerror("La primera expresión del for ha de ser de tipo SIMPLE");
                     (yyval.cent) = T_ERROR;
              }
       }
#line 1485 "asin.c"
    break;

  case 39: /* @5: %empty  */
#line 230 "src/asin.y"
       {
              if (!((yyvsp[0].cent) == T_LOGICO)) {
                     yyerror("La segunda expresión del for ha de ser de tipo LÓGICA");
                     (yyval.cent) = T_ERROR;
              }
       }
#line 1496 "asin.c"
    break;

  case 40: /* instIter: FOR_ PARA_ expreOP @4 PUNTC_ expre @5 PUNTC_ expreOP PARC_ inst  */
#line 237 "src/asin.y"
       {
              if (!((yyvsp[-2].cent) == T_ERROR || (yyvsp[-2].cent) == T_ENTERO || (yyvsp[-2].cent) == T_VACIO || (yyvsp[-2].cent) == T_LOGICO)) {
                     yyerror("La primera expresión del for ha de ser de tipo SIMPLE");
                     (yyval.cent) = T_ERROR;
              }
       }
#line 1507 "asin.c"
    break;

  case 41: /* expreOP: %empty  */
#line 245 "src/asin.y"
          { (yyval.cent) = T_VACIO; }
#line 1513 "asin.c"
    break;

  case 42: /* expreOP: expre  */
#line 247 "src/asin.y"
       {      
              (yyval.cent) = (yyvsp[0].cent);
              if (!((yyvsp[0].cent) == T_ENTERO || (yyvsp[0].cent) == T_LOGICO)) {
                     yyerror("La expreOP del for ha de ser de tipo simple");
                     (yyval.cent) = T_ERROR;
              }
       }
#line 1525 "asin.c"
    break;

  case 43: /* expre: expreLogic  */
#line 257 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1533 "asin.c"
    break;

  case 44: /* expre: ID_ IGUAL_ expre  */
#line 261 "src/asin.y"
       {
              SIMB sim = obtTdS((yyvsp[-2].ident));
              if (sim.t == T_ERROR) yyerror("Objeto no declarado");
              else {
                     if ((yyvsp[0].cent) == T_ERROR) (yyval.cent) = T_ERROR;
                     else if (!(((sim.t == T_LOGICO) && ((yyvsp[0].cent) == T_LOGICO)) || (sim.t == T_ENTERO) && ((yyvsp[0].cent) == T_ENTERO)))
                            yyerror("Error de tipos en la asignación expre2");
                            else (yyval.cent) = (yyvsp[0].cent);
              }
       }
#line 1548 "asin.c"
    break;

  case 45: /* expre: ID_ CORA_ expre CORC_ IGUAL_ expre  */
#line 272 "src/asin.y"
       {
              SIMB s = obtTdS((yyvsp[-5].ident));
              DIM dim = obtTdA(s.ref);
              int tipoArray = dim.telem;
              if (tipoArray == T_ERROR) {
                            yyerror("La variable debe ser de tipo 'array'");
              } else {
                     if (!((yyvsp[-3].cent) == T_ENTERO)) yyerror("Posición de un array debe ser una expresión numérica");
                     else {
                            int pos = (yyvsp[-3].cent);
                            if (pos < 0) yyerror("La posición de un array debe ser positiva");
                            else if (pos >= dim.nelem) yyerror("La posición dada excede las dimensiones del array");
                     }
                     int tipoArray = dim.telem;
                     if (tipoArray != T_ERROR) {
                            if (!((tipoArray == T_ENTERO) && ((yyvsp[0].cent) == T_ENTERO) ||
                                   (tipoArray == T_LOGICO) && ((yyvsp[0].cent) == T_LOGICO))) yyerror("Error de tipos en la asignación expre3");
                            else (yyval.cent) = T_ARRAY;
                     } else {
                            (yyval.cent) = T_ERROR;
                     }
              }

       }
#line 1577 "asin.c"
    break;

  case 46: /* expreLogic: expreIgual  */
#line 298 "src/asin.y"
                        { (yyval.cent) = (yyvsp[0].cent); }
#line 1583 "asin.c"
    break;

  case 47: /* expreLogic: expreLogic opLogic expreIgual  */
#line 300 "src/asin.y"
       {
              if((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR)
              {
                     if((yyvsp[-2].cent) != T_LOGICO || (yyvsp[0].cent) != T_LOGICO) {
                            yyerror("Error de tipos en la asignación Logic");
                            (yyval.cent) = T_ERROR;
                     }
                     else (yyval.cent) = T_LOGICO;
              }
              else{
                     (yyval.cent) = T_ERROR;
              }
       }
#line 1601 "asin.c"
    break;

  case 48: /* expreIgual: expreRel  */
#line 315 "src/asin.y"
                      { (yyval.cent) = (yyvsp[0].cent); }
#line 1607 "asin.c"
    break;

  case 49: /* expreIgual: expreIgual opIgual expreRel  */
#line 317 "src/asin.y"
       {
              if((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR)
              {
                     if((yyvsp[-2].cent) != (yyvsp[0].cent)) {
                            yyerror("Error de tipos en la asignación Igual");
                            (yyval.cent) = T_ERROR;
                     }
                     else{(yyval.cent) = (yyvsp[0].cent);}
              }
              else{(yyval.cent) = T_ERROR;}
       }
#line 1623 "asin.c"
    break;

  case 50: /* expreRel: expreAd  */
#line 330 "src/asin.y"
                   { (yyval.cent) = (yyvsp[0].cent); }
#line 1629 "asin.c"
    break;

  case 51: /* expreRel: expreRel opRel expreAd  */
#line 332 "src/asin.y"
       {
              if((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR)
              {
                     if((yyvsp[-2].cent) != T_ENTERO || (yyvsp[0].cent) != T_ENTERO) {
                            yyerror("Error de tipos en la asignación Rel");
                            (yyval.cent) = T_ERROR;
                     }
                     else{(yyval.cent) = (yyvsp[0].cent);}
              }
              else{(yyval.cent) = T_ERROR;}
       }
#line 1645 "asin.c"
    break;

  case 52: /* expreAd: expreMul  */
#line 345 "src/asin.y"
                   { (yyval.cent) = (yyvsp[0].cent); }
#line 1651 "asin.c"
    break;

  case 53: /* expreAd: expreAd opAd expreMul  */
#line 347 "src/asin.y"
       {
              if((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR)
              {
                     if((yyvsp[-2].cent) != T_ENTERO || (yyvsp[0].cent) != T_ENTERO) {
                            yyerror("Error de tipos en la asignación Ad");
                            (yyval.cent) = T_ERROR;
                     }
                     else{(yyval.cent) = (yyvsp[0].cent);}
              }
       }
#line 1666 "asin.c"
    break;

  case 54: /* expreMul: expreUna  */
#line 359 "src/asin.y"
                    { (yyval.cent) = (yyvsp[0].cent); }
#line 1672 "asin.c"
    break;

  case 55: /* expreMul: expreMul opMul expreUna  */
#line 361 "src/asin.y"
       {
              if((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR)
              {
                     if((yyvsp[-2].cent) != T_ENTERO || (yyvsp[0].cent) != T_ENTERO) {
                            yyerror("Error de tipos en la asignación Mul");
                            (yyval.cent) = T_ERROR;
                     }
                     else{(yyval.cent) = (yyvsp[0].cent);}
              }
       }
#line 1687 "asin.c"
    break;

  case 56: /* expreUna: expreSufi  */
#line 373 "src/asin.y"
                     { (yyval.cent) = (yyvsp[0].cent); }
#line 1693 "asin.c"
    break;

  case 57: /* expreUna: opUna expreUna  */
#line 375 "src/asin.y"
       {
              if((yyvsp[0].cent) != T_ERROR){
                     if((yyvsp[0].cent) == T_ENTERO){
                            if((yyvsp[-1].cent) == NOT){
                                   yyerror("Operacion ! no es correcta para enteros");
                                   (yyval.cent) = T_ERROR;
                            } else{
                                   (yyval.cent) = T_ENTERO;
                            }
                     }else if ((yyvsp[0].cent) == T_LOGICO){
                            if((yyvsp[-1].cent) == NOT){
                                   (yyval.cent) = T_LOGICO;
                            }else{
                                   yyerror("Operacion + / - no son correctas para booleanos");                                  
                                   (yyval.cent) = T_ERROR;
                            }
                     }
              }else{
                     (yyval.cent) = T_ERROR;
              }
       }
#line 1719 "asin.c"
    break;

  case 58: /* expreSufi: const  */
#line 399 "src/asin.y"
       {
              (yyval.cent) = T_ENTERO;
       }
#line 1727 "asin.c"
    break;

  case 59: /* expreSufi: PARA_ expre PARC_  */
#line 403 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[-1].cent);
       }
#line 1735 "asin.c"
    break;

  case 60: /* expreSufi: ID_  */
#line 407 "src/asin.y"
       {
              SIMB simb = obtTdS((yyvsp[0].ident));
              if(simb.t == T_ERROR){
                     yyerror("Variable no declarada");
                     (yyval.cent) = T_ERROR;
              }else{
                     (yyval.cent) = simb.t;
              }
       }
#line 1749 "asin.c"
    break;

  case 61: /* expreSufi: ID_ CORA_ expre CORC_  */
#line 417 "src/asin.y"
       {
              SIMB simb = obtTdS((yyvsp[-3].ident));

              if((yyvsp[-1].cent) != T_ENTERO){
                     yyerror("Ha de ser tipo entero");
                     (yyval.cent) = T_ERROR;
              }
              DIM d = obtTdA(simb.ref);
              (yyval.cent) = d.telem;
       }
#line 1764 "asin.c"
    break;

  case 62: /* expreSufi: ID_ PARA_ paramAct PARC_  */
#line 428 "src/asin.y"
       {
              SIMB simb = obtTdS((yyvsp[-3].ident));
              int ref1 = simb.ref;
              if (!cmpDom(ref1, (yyvsp[-1].cent))){
                     yyerror("Argumentos no coincidentes.");
                     (yyval.cent) = T_ERROR;
              }else if (simb.t != T_ERROR){
                     (yyval.cent) = simb.t;
              }else{
                     yyerror("Funcion no declarada");
                     (yyval.cent) = T_ERROR;
              }
       }
#line 1782 "asin.c"
    break;

  case 63: /* paramAct: %empty  */
#line 444 "src/asin.y"
       {
              (yyval.cent) = insTdD(-1, T_VACIO);
       }
#line 1790 "asin.c"
    break;

  case 64: /* paramAct: listParamAct  */
#line 448 "src/asin.y"
       {
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1798 "asin.c"
    break;

  case 65: /* listParamAct: expre  */
#line 454 "src/asin.y"
       {
              (yyval.cent) = insTdD(-1, (yyvsp[0].cent));
       }
#line 1806 "asin.c"
    break;

  case 66: /* listParamAct: expre COMA_ listParamAct  */
#line 458 "src/asin.y"
       {
              insTdD((yyvsp[0].cent), (yyvsp[-2].cent));
              (yyval.cent) = (yyvsp[0].cent);
       }
#line 1815 "asin.c"
    break;


#line 1819 "asin.c"

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

#line 490 "src/asin.y"

