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
#line 1 "parser.y"

#include <stdio.h>
#include <string.h>

int flag=0; 
  char numToString[80]={ };
  int yydebug = 1;
  int sCounter = 0;
  int lCounter = 0;
  char* Temp();
  char* label;
  char* label1;
  char* label2;
   char* Label();
   char var[100][50];
int var_no=0;
char* store;

void validvar(char* str, int p);


#line 93 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IF_STMT = 258,                 /* IF_STMT  */
    CASE = 259,                    /* CASE  */
    SWITCH_STMT = 260,             /* SWITCH_STMT  */
    DEFAULT_STMT = 261,            /* DEFAULT_STMT  */
    CONTINUE = 262,                /* CONTINUE  */
    WHILE_STMT = 263,              /* WHILE_STMT  */
    BREAK = 264,                   /* BREAK  */
    DO = 265,                      /* DO  */
    FOR_LOOP = 266,                /* FOR_LOOP  */
    STRINGLITERAL = 267,           /* STRINGLITERAL  */
    DT = 268,                      /* DT  */
    RETURN_STMT = 269,             /* RETURN_STMT  */
    NOT = 270,                     /* NOT  */
    out_token = 271,               /* out_token  */
    in_token = 272,                /* in_token  */
    IDENTIFIER = 273,              /* IDENTIFIER  */
    LOP = 274,                     /* LOP  */
    end_token = 275,               /* end_token  */
    COP = 276,                     /* COP  */
    UOP = 277,                     /* UOP  */
    BOP = 278,                     /* BOP  */
    COM = 279,                     /* COM  */
    HEAD = 280,                    /* HEAD  */
    NUMBER = 281,                  /* NUMBER  */
    AOP = 282,                     /* AOP  */
    EQU = 283,                     /* EQU  */
    cpp_header = 284,              /* cpp_header  */
    cpp_std = 285,                 /* cpp_std  */
    ELSE_STMT = 286,               /* ELSE_STMT  */
    OUTPUT = 287,                  /* OUTPUT  */
    INPUT = 288                    /* INPUT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF_STMT 258
#define CASE 259
#define SWITCH_STMT 260
#define DEFAULT_STMT 261
#define CONTINUE 262
#define WHILE_STMT 263
#define BREAK 264
#define DO 265
#define FOR_LOOP 266
#define STRINGLITERAL 267
#define DT 268
#define RETURN_STMT 269
#define NOT 270
#define out_token 271
#define in_token 272
#define IDENTIFIER 273
#define LOP 274
#define end_token 275
#define COP 276
#define UOP 277
#define BOP 278
#define COM 279
#define HEAD 280
#define NUMBER 281
#define AOP 282
#define EQU 283
#define cpp_header 284
#define cpp_std 285
#define ELSE_STMT 286
#define OUTPUT 287
#define INPUT 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "parser.y"

    struct quadruple {
        int num;
        int isnum;
        char* arg1;
        char* arg2;
        char* arg3;
        char* arg4;
        char* result;
    } tuple;

#line 224 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '+'  */
  YYSYMBOL_4_ = 4,                         /* '-'  */
  YYSYMBOL_5_ = 5,                         /* '*'  */
  YYSYMBOL_6_ = 6,                         /* '/'  */
  YYSYMBOL_7_ = 7,                         /* '%'  */
  YYSYMBOL_8_ = 8,                         /* '('  */
  YYSYMBOL_9_ = 9,                         /* ')'  */
  YYSYMBOL_IF_STMT = 10,                   /* IF_STMT  */
  YYSYMBOL_CASE = 11,                      /* CASE  */
  YYSYMBOL_SWITCH_STMT = 12,               /* SWITCH_STMT  */
  YYSYMBOL_DEFAULT_STMT = 13,              /* DEFAULT_STMT  */
  YYSYMBOL_CONTINUE = 14,                  /* CONTINUE  */
  YYSYMBOL_WHILE_STMT = 15,                /* WHILE_STMT  */
  YYSYMBOL_BREAK = 16,                     /* BREAK  */
  YYSYMBOL_DO = 17,                        /* DO  */
  YYSYMBOL_FOR_LOOP = 18,                  /* FOR_LOOP  */
  YYSYMBOL_STRINGLITERAL = 19,             /* STRINGLITERAL  */
  YYSYMBOL_DT = 20,                        /* DT  */
  YYSYMBOL_RETURN_STMT = 21,               /* RETURN_STMT  */
  YYSYMBOL_NOT = 22,                       /* NOT  */
  YYSYMBOL_out_token = 23,                 /* out_token  */
  YYSYMBOL_in_token = 24,                  /* in_token  */
  YYSYMBOL_IDENTIFIER = 25,                /* IDENTIFIER  */
  YYSYMBOL_LOP = 26,                       /* LOP  */
  YYSYMBOL_end_token = 27,                 /* end_token  */
  YYSYMBOL_COP = 28,                       /* COP  */
  YYSYMBOL_UOP = 29,                       /* UOP  */
  YYSYMBOL_BOP = 30,                       /* BOP  */
  YYSYMBOL_COM = 31,                       /* COM  */
  YYSYMBOL_HEAD = 32,                      /* HEAD  */
  YYSYMBOL_NUMBER = 33,                    /* NUMBER  */
  YYSYMBOL_AOP = 34,                       /* AOP  */
  YYSYMBOL_EQU = 35,                       /* EQU  */
  YYSYMBOL_cpp_header = 36,                /* cpp_header  */
  YYSYMBOL_cpp_std = 37,                   /* cpp_std  */
  YYSYMBOL_ELSE_STMT = 38,                 /* ELSE_STMT  */
  YYSYMBOL_OUTPUT = 39,                    /* OUTPUT  */
  YYSYMBOL_INPUT = 40,                     /* INPUT  */
  YYSYMBOL_41_ = 41,                       /* '{'  */
  YYSYMBOL_42_ = 42,                       /* '}'  */
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_P = 47,                         /* P  */
  YYSYMBOL_HEADERS = 48,                   /* HEADERS  */
  YYSYMBOL_REST = 49,                      /* REST  */
  YYSYMBOL_FUNC = 50,                      /* FUNC  */
  YYSYMBOL_DECLR = 51,                     /* DECLR  */
  YYSYMBOL_DECLS2 = 52,                    /* DECLS2  */
  YYSYMBOL_DECLS = 53,                     /* DECLS  */
  YYSYMBOL_STMT = 54,                      /* STMT  */
  YYSYMBOL_55_1 = 55,                      /* $@1  */
  YYSYMBOL_56_2 = 56,                      /* $@2  */
  YYSYMBOL_57_3 = 57,                      /* $@3  */
  YYSYMBOL_58_4 = 58,                      /* $@4  */
  YYSYMBOL_59_5 = 59,                      /* $@5  */
  YYSYMBOL_60_6 = 60,                      /* $@6  */
  YYSYMBOL_61_7 = 61,                      /* $@7  */
  YYSYMBOL_62_8 = 62,                      /* $@8  */
  YYSYMBOL_63_9 = 63,                      /* $@9  */
  YYSYMBOL_64_10 = 64,                     /* $@10  */
  YYSYMBOL_65_11 = 65,                     /* $@11  */
  YYSYMBOL_66_12 = 66,                     /* $@12  */
  YYSYMBOL_CASESTMTS = 67,                 /* CASESTMTS  */
  YYSYMBOL_CASESTMT = 68,                  /* CASESTMT  */
  YYSYMBOL_69_13 = 69,                     /* $@13  */
  YYSYMBOL_70_14 = 70,                     /* $@14  */
  YYSYMBOL_RETURNSTMT = 71,                /* RETURNSTMT  */
  YYSYMBOL_STMTS = 72,                     /* STMTS  */
  YYSYMBOL_E = 73,                         /* E  */
  YYSYMBOL_COMMENTS = 74                   /* COMMENTS  */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


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
       2,     2,     2,     2,     2,     2,     2,     7,     2,     2,
       8,     9,     5,     3,    44,     4,     2,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    43,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    76,    76,    77,    79,    80,    81,    83,    84,    85,
      86,    87,    89,    90,    93,    95,    96,    98,    99,   100,
     101,   103,   104,   105,   106,   106,   106,   107,   107,   107,
     107,   108,   109,   109,   109,   109,   109,   109,   109,   110,
     111,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   127,   128,   129,   130,
     130,   131,   131,   133,   134,   139,   140,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     156,   157
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
  "\"end of file\"", "error", "\"invalid token\"", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'('", "')'", "IF_STMT", "CASE", "SWITCH_STMT",
  "DEFAULT_STMT", "CONTINUE", "WHILE_STMT", "BREAK", "DO", "FOR_LOOP",
  "STRINGLITERAL", "DT", "RETURN_STMT", "NOT", "out_token", "in_token",
  "IDENTIFIER", "LOP", "end_token", "COP", "UOP", "BOP", "COM", "HEAD",
  "NUMBER", "AOP", "EQU", "cpp_header", "cpp_std", "ELSE_STMT", "OUTPUT",
  "INPUT", "'{'", "'}'", "';'", "','", "':'", "$accept", "P", "HEADERS",
  "REST", "FUNC", "DECLR", "DECLS2", "DECLS", "STMT", "$@1", "$@2", "$@3",
  "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12",
  "CASESTMTS", "CASESTMT", "$@13", "$@14", "RETURNSTMT", "STMTS", "E",
  "COMMENTS", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-81)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,   -17,    19,    62,   130,    19,   -81,   -81,   -81,   104,
      50,    56,    25,   -81,    26,    29,    63,   -81,    49,    58,
     104,   -81,   -81,     8,   -81,    51,   -17,   -81,   -81,   -81,
      -6,    57,   130,   -81,   -81,   -81,   -81,   206,   -81,   130,
      20,   167,   104,   104,   -81,    65,   -81,   163,    80,     0,
      32,   -81,   211,    -4,    99,   -81,    46,   104,   -81,    41,
      42,    52,   130,   104,   104,   104,   104,   -81,   130,   -81,
      -4,    -4,   104,   -81,   -81,   163,    47,    71,   -81,   216,
       3,   104,    71,   -81,   -81,   -81,   180,   104,   227,   -81,
     -81,   -81,    -4,    -4,    -4,    -4,    89,    94,    -4,   -81,
      91,   -26,   104,   104,    69,    86,   105,   199,   -81,   -81,
     230,   -81,    74,    75,   -81,   112,    -4,   237,   163,    78,
      90,    71,   -81,   163,    14,   118,   104,    87,   104,    92,
     115,   163,   -81,    97,   104,   -81,     4,   -81,    95,   189,
     -81,   196,   -81,   -81,   114,   -81,    -4,    96,   -81,   -81,
     163,   117,   104,   121,   -81,   120,   119,   163,   123,   -81,
      -4,   163,   127,   163,   -81,   -81,   165,   149,   163,   -81,
     131,   -81,   162,   -81,   -81,   163,   -81,   169,   -81
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,    80,     4,     0,    11,     6,    81,     5,     1,     0,
       0,     0,     0,    27,     0,     0,     0,    79,     0,     0,
       0,    53,    54,    67,    55,     0,    49,    78,    51,    52,
       0,     0,     2,    10,    50,     8,    45,     0,     9,    11,
      67,     0,     0,     0,    43,     0,    42,    65,     0,    18,
       0,    63,     0,    76,     0,    71,     0,     0,    70,     0,
       0,     0,     7,     0,     0,     0,     0,    21,     3,    77,
      24,    40,     0,    49,    44,    65,     0,     0,    32,     0,
       0,     0,     0,    14,    64,    69,     0,     0,     0,    47,
      46,    48,    74,    73,    75,    72,     0,     0,    28,    66,
       0,    18,     0,     0,     0,     0,     0,    17,    19,    68,
       0,    23,     0,     0,    29,     0,    33,     0,    65,    15,
       0,     0,    22,    65,    58,     0,     0,     0,     0,     0,
       0,    65,    20,     0,     0,    61,     0,    57,     0,     0,
      34,     0,    13,    16,     0,    25,    59,     0,    41,    56,
      65,     0,     0,     0,    12,     0,     0,    65,     0,    31,
      35,    65,     0,    65,    62,    30,     0,     0,    65,    60,
       0,    39,     0,    36,    26,    65,    37,     0,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,    48,     1,    -3,   159,    79,   -80,    -1,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,    76,   -81,   -81,   -81,   -71,    -9,     6
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    62,    74,    34,   106,    50,    75,    96,
     155,    45,   114,   125,   102,   127,   152,   166,   175,   177,
      97,   136,   137,   156,   147,    36,    76,    37,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    33,   108,    35,    99,    32,     5,     6,    80,    81,
      52,    53,   104,    59,     1,   134,    54,   135,    82,    60,
       1,     2,    63,   105,    64,   134,    65,   135,    54,    33,
      66,    35,     6,    70,    71,    81,    33,    55,    35,    79,
      68,   132,    56,    57,    82,    86,   148,   129,    88,    55,
       7,     2,   133,    39,    92,    93,    94,    95,    42,    33,
     144,    35,     8,    98,    43,    33,     9,    35,    44,    46,
      47,    48,   107,    72,    49,    83,    58,    17,   110,   158,
      20,    87,    61,    40,    89,    90,   164,    25,     9,   100,
     167,    27,   169,   116,   117,    91,   101,   172,   112,    17,
      77,    51,    20,   113,   176,    40,   115,     9,    85,    25,
     118,   119,     9,    27,   120,   123,   124,   139,    17,   141,
     126,    20,   130,    17,    40,   146,    20,   138,    25,    40,
     140,   131,    27,    25,   142,   105,   150,    27,     9,   145,
      10,   157,    11,   160,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   154,    24,   162,    25,
     159,    26,   161,    27,   163,   165,    28,    29,   168,    30,
      31,     9,   173,    10,   170,    11,    69,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   109,
      24,   171,    25,    63,    73,    64,    27,    65,   151,    28,
      29,    66,    30,    31,   174,   153,    63,    78,    64,   143,
      65,   178,   149,     0,    66,    63,     0,    64,     0,    65,
       0,     0,    63,    66,    64,    63,    65,    64,     0,    65,
      66,     0,    63,    66,    64,     0,    65,    63,     0,    64,
      66,    65,    63,   121,    64,    66,    65,     0,     0,    67,
      66,     0,     0,    63,    84,    64,    63,    65,    64,   103,
      65,    66,     0,    63,    66,    64,     0,    65,     0,     0,
     111,    66,     0,   122,     0,     0,     0,     0,     0,     0,
     128
};

static const yytype_int16 yycheck[] =
{
       9,     4,    82,     4,    75,     4,     0,     1,     8,    35,
      19,    20,     9,    19,    31,    11,     8,    13,    44,    25,
      31,    32,    26,    20,    28,    11,    30,    13,     8,    32,
      34,    32,    26,    42,    43,    35,    39,    29,    39,    48,
      39,   121,    34,    35,    44,    54,    42,   118,    57,    29,
       2,    32,   123,     5,    63,    64,    65,    66,     8,    62,
     131,    62,     0,    72,     8,    68,     8,    68,    43,    43,
      41,     8,    81,     8,    25,    43,    25,    19,    87,   150,
      22,    35,    25,    25,    43,    43,   157,    29,     8,    42,
     161,    33,   163,   102,   103,    43,    25,   168,     9,    19,
      20,    43,    22,     9,   175,    25,    15,     8,     9,    29,
      41,    25,     8,    33,     9,    41,    41,   126,    19,   128,
       8,    22,    44,    19,    25,   134,    22,     9,    29,    25,
      43,    41,    33,    29,    42,    20,    41,    33,     8,    42,
      10,    45,    12,   152,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    42,    27,    38,    29,
      43,    31,    41,    33,    45,    42,    36,    37,    41,    39,
      40,     8,    41,    10,     9,    12,     9,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     9,
      27,    42,    29,    26,    31,    28,    33,    30,     9,    36,
      37,    34,    39,    40,    42,     9,    26,    48,    28,   130,
      30,    42,   136,    -1,    34,    26,    -1,    28,    -1,    30,
      -1,    -1,    26,    34,    28,    26,    30,    28,    -1,    30,
      34,    -1,    26,    34,    28,    -1,    30,    26,    -1,    28,
      34,    30,    26,    44,    28,    34,    30,    -1,    -1,    43,
      34,    -1,    -1,    26,    43,    28,    26,    30,    28,    43,
      30,    34,    -1,    26,    34,    28,    -1,    30,    -1,    -1,
      43,    34,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      43
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    32,    47,    48,    74,    74,    48,     0,     8,
      10,    12,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    27,    29,    31,    33,    36,    37,
      39,    40,    49,    50,    51,    54,    71,    73,    74,    48,
      25,    73,     8,     8,    43,    57,    43,    41,     8,    25,
      53,    43,    73,    73,     8,    29,    34,    35,    25,    19,
      25,    25,    49,    26,    28,    30,    34,    43,    49,     9,
      73,    73,     8,    31,    50,    54,    72,    20,    51,    73,
       8,    35,    44,    43,    43,     9,    73,    35,    73,    43,
      43,    43,    73,    73,    73,    73,    55,    66,    73,    72,
      42,    25,    60,    43,     9,    20,    52,    73,    53,     9,
      73,    43,     9,     9,    58,    15,    73,    73,    41,    25,
       9,    44,    43,    41,    41,    59,     8,    61,    43,    72,
      44,    41,    53,    72,    11,    13,    67,    68,     9,    73,
      43,    73,    42,    52,    72,    42,    73,    70,    42,    68,
      41,     9,    62,     9,    42,    56,    69,    45,    72,    43,
      73,    41,    38,    45,    72,    42,    63,    72,    41,    72,
       9,    42,    72,    41,    42,    64,    72,    65,    42
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    49,    49,    49,
      49,    49,    50,    50,    51,    52,    52,    53,    53,    53,
      53,    54,    54,    54,    55,    56,    54,    57,    58,    59,
      54,    54,    60,    61,    62,    63,    64,    65,    54,    54,
      66,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    67,    67,    67,    69,
      68,    70,    68,    71,    71,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     2,     0,     2,     1,     1,
       1,     0,     8,     7,     3,     2,     4,     3,     1,     3,
       5,     2,     5,     4,     0,     0,    13,     0,     0,     0,
      10,     9,     0,     0,     0,     0,     0,     0,    16,    11,
       0,     8,     2,     2,     1,     1,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     0,     0,
       5,     0,     4,     2,     3,     0,     2,     1,     4,     3,
       2,     2,     3,     3,     3,     3,     2,     3,     1,     1,
       0,     2
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
  case 15: /* DECLS2: DT IDENTIFIER  */
#line 95 "parser.y"
                      { validvar((yyvsp[0].tuple).result, 1); }
#line 1410 "y.tab.c"
    break;

  case 16: /* DECLS2: DT IDENTIFIER ',' DECLS2  */
#line 96 "parser.y"
                               { validvar((yyvsp[-2].tuple).result, 1); }
#line 1416 "y.tab.c"
    break;

  case 17: /* DECLS: IDENTIFIER EQU E  */
#line 98 "parser.y"
                       { validvar((yyvsp[-2].tuple).result,1);if((yyvsp[0].tuple).isnum==1){printf("%s = %d\n",(yyvsp[-2].tuple).result,(yyvsp[0].tuple).result);} else {printf("%s = %s\n",(yyvsp[-2].tuple).result,(yyvsp[0].tuple).result);} }
#line 1422 "y.tab.c"
    break;

  case 18: /* DECLS: IDENTIFIER  */
#line 99 "parser.y"
                 {validvar((yyvsp[0].tuple).result,1);}
#line 1428 "y.tab.c"
    break;

  case 19: /* DECLS: IDENTIFIER ',' DECLS  */
#line 100 "parser.y"
                         {validvar((yyvsp[-2].tuple).result,1);}
#line 1434 "y.tab.c"
    break;

  case 20: /* DECLS: IDENTIFIER EQU E ',' DECLS  */
#line 101 "parser.y"
                                {validvar((yyvsp[-4].tuple).result,1);if((yyvsp[-2].tuple).isnum==1){printf("%s = %d\n",(yyvsp[-4].tuple).result,(yyvsp[-2].tuple).result);} else {printf("%s = %s\n",(yyvsp[-4].tuple).result,(yyvsp[-2].tuple).result);} }
#line 1440 "y.tab.c"
    break;

  case 22: /* STMT: IDENTIFIER AOP EQU E ';'  */
#line 104 "parser.y"
                               {validvar((yyvsp[-4].tuple).result,0);}
#line 1446 "y.tab.c"
    break;

  case 23: /* STMT: IDENTIFIER EQU E ';'  */
#line 105 "parser.y"
                           { validvar((yyvsp[-3].tuple).result,0);printf("%s = %s\n",(yyvsp[-3].tuple).result,(yyvsp[-1].tuple).result);}
#line 1452 "y.tab.c"
    break;

  case 24: /* $@1: %empty  */
#line 106 "parser.y"
                    {(yyvsp[0].tuple).arg1 = Temp(); printf("%s=!%s\n", (yyvsp[0].tuple).arg1, (yyvsp[0].tuple).result);label = Label(); label1 = Label(); (yyvsp[0].tuple).arg3 = label1; (yyvsp[0].tuple).arg2 = label; printf("If %s Goto %s \n", (yyvsp[0].tuple).arg1, label); }
#line 1458 "y.tab.c"
    break;

  case 25: /* $@2: %empty  */
#line 106 "parser.y"
                                                                                                                                                                                                                   {printf("goto %s\n",(yyvsp[-5].tuple).arg3);printf("\n%s :\n",(yyvsp[-5].tuple).arg2);}
#line 1464 "y.tab.c"
    break;

  case 26: /* STMT: IF_STMT '(' E $@1 ')' '{' STMTS '}' $@2 ELSE_STMT '{' STMTS '}'  */
#line 106 "parser.y"
                                                                                                                                                                                                                                                                                                   {printf("goto %s\n",(yyvsp[-10].tuple).arg3); printf("\n%s :\n",(yyvsp[-10].tuple).arg3); }
#line 1470 "y.tab.c"
    break;

  case 27: /* $@3: %empty  */
#line 107 "parser.y"
                 {label = Label(); (yyvsp[0].tuple).arg1 = label; printf("\n%s:\n",(yyvsp[0].tuple).arg1);}
#line 1476 "y.tab.c"
    break;

  case 28: /* $@4: %empty  */
#line 107 "parser.y"
                                                                                      {(yyvsp[0].tuple).arg1 = Temp(); printf("%s = !%s\n",(yyvsp[0].tuple).arg1,(yyvsp[0].tuple).result);}
#line 1482 "y.tab.c"
    break;

  case 29: /* $@5: %empty  */
#line 107 "parser.y"
                                                                                                                                                  { label = Label(); (yyvsp[-4].tuple).arg2 = label; printf("if %s Goto %s\n",(yyvsp[-1].tuple).arg1,(yyvsp[-4].tuple).arg2);}
#line 1488 "y.tab.c"
    break;

  case 30: /* STMT: WHILE_STMT $@3 '(' E $@4 $@5 ')' '{' STMTS '}'  */
#line 107 "parser.y"
                                                                                                                                                                                                                                                    { printf("Goto %s\n \n%s:\n",(yyvsp[-9].tuple).arg1,(yyvsp[-9].tuple).arg2);}
#line 1494 "y.tab.c"
    break;

  case 32: /* $@6: %empty  */
#line 109 "parser.y"
                         {label = Label(); (yyvsp[-2].tuple).arg1 = label; printf("\n%s:\n",(yyvsp[-2].tuple).arg1);}
#line 1500 "y.tab.c"
    break;

  case 33: /* $@7: %empty  */
#line 109 "parser.y"
                                                                                          {label = Label(); (yyvsp[0].tuple).arg1 = label; label = Label(); (yyvsp[-4].tuple).arg2= label; printf("if %s Goto %s\n Goto %s\n",(yyvsp[0].tuple).result,(yyvsp[0].tuple).arg1,(yyvsp[-4].tuple).arg2);}
#line 1506 "y.tab.c"
    break;

  case 34: /* $@8: %empty  */
#line 109 "parser.y"
                                                                                                                                                                                                                                   {label = Label(); (yyvsp[-2].tuple).arg2 = label; printf("\n%s:\n",(yyvsp[-2].tuple).arg2);}
#line 1512 "y.tab.c"
    break;

  case 35: /* $@9: %empty  */
#line 109 "parser.y"
                                                                                                                                                                                                                                                                                                    {printf("Goto %s\n",(yyvsp[-8].tuple).arg1);}
#line 1518 "y.tab.c"
    break;

  case 36: /* $@10: %empty  */
#line 109 "parser.y"
                                                                                                                                                                                                                                                                                                                                           {printf("\n%s:\n",(yyvsp[-7].tuple).arg1);}
#line 1524 "y.tab.c"
    break;

  case 37: /* $@11: %empty  */
#line 109 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                              {printf("goto %s\n \n%s:\n",(yyvsp[-9].tuple).arg2,(yyvsp[-13].tuple).arg2);}
#line 1530 "y.tab.c"
    break;

  case 40: /* $@12: %empty  */
#line 111 "parser.y"
                        {(yyvsp[0].tuple).arg1= Temp(); store=(yyvsp[0].tuple).result;}
#line 1536 "y.tab.c"
    break;

  case 42: /* STMT: BREAK ';'  */
#line 112 "parser.y"
               {printf("break ;\n");}
#line 1542 "y.tab.c"
    break;

  case 59: /* $@13: %empty  */
#line 130 "parser.y"
                 {label=Label(); (yyvsp[0].tuple).arg1=label; printf("if %s == %s goto %s\n%s: \n",store,(yyvsp[0].tuple).result,(yyvsp[0].tuple).arg1,(yyvsp[0].tuple).arg1);}
#line 1548 "y.tab.c"
    break;

  case 61: /* $@14: %empty  */
#line 131 "parser.y"
                   {label=Label(); printf("%s:\n",label);}
#line 1554 "y.tab.c"
    break;

  case 62: /* CASESTMT: DEFAULT_STMT $@14 ':' STMTS  */
#line 131 "parser.y"
                                                                    {label =Label(); printf("%s:\n",label);}
#line 1560 "y.tab.c"
    break;

  case 64: /* RETURNSTMT: RETURN_STMT E ';'  */
#line 134 "parser.y"
                        {printf("return %s\n",(yyvsp[-1].tuple).result);}
#line 1566 "y.tab.c"
    break;

  case 67: /* E: IDENTIFIER  */
#line 142 "parser.y"
              {validvar((yyvsp[0].tuple).result,0);(yyval.tuple).result=(yyvsp[0].tuple).result;}
#line 1572 "y.tab.c"
    break;

  case 70: /* E: UOP IDENTIFIER  */
#line 145 "parser.y"
                     { validvar((yyvsp[0].tuple).result,0);printf("%s%s\n",(yyvsp[-1].tuple).result,(yyvsp[0].tuple).result); }
#line 1578 "y.tab.c"
    break;

  case 71: /* E: IDENTIFIER UOP  */
#line 146 "parser.y"
                     { validvar((yyvsp[-1].tuple).result,0);printf("%s%s\n",(yyvsp[-1].tuple).result,(yyvsp[0].tuple).result); }
#line 1584 "y.tab.c"
    break;

  case 72: /* E: E AOP E  */
#line 147 "parser.y"
              { (yyval.tuple).arg1 = (yyvsp[-2].tuple).result; (yyval.tuple).arg2 = (yyvsp[0].tuple).result; (yyval.tuple).result = Temp(); (yyval.tuple).isnum = 0;  if((yyvsp[-2].tuple).isnum == 1){  printf("%s = %d %s %s\n",(yyval.tuple).result,(yyvsp[-2].tuple).num,(yyvsp[-1].tuple).result,(yyvsp[0].tuple).result);}else { printf("%s = %s %s %s\n",(yyval.tuple).result,(yyval.tuple).arg1,(yyvsp[-1].tuple).result,(yyval.tuple).arg2);}}
#line 1590 "y.tab.c"
    break;

  case 73: /* E: E COP E  */
#line 148 "parser.y"
          { (yyval.tuple).arg1 = (yyvsp[-2].tuple).result; (yyval.tuple).arg2 = (yyvsp[0].tuple).result; (yyval.tuple).result = Temp(); (yyval.tuple).isnum = 0;  if((yyvsp[-2].tuple).isnum == 1){  printf("%s = %d %s %s\n",(yyval.tuple).result,(yyvsp[-2].tuple).num,(yyvsp[-1].tuple).result,(yyvsp[0].tuple).result);}else { printf("%s = %s %s %s\n",(yyval.tuple).result,(yyval.tuple).arg1,(yyvsp[-1].tuple).result,(yyval.tuple).arg2);}}
#line 1596 "y.tab.c"
    break;

  case 74: /* E: E LOP E  */
#line 149 "parser.y"
          { if((yyvsp[0].tuple).isnum == 1){ (yyval.tuple).arg3 = Temp(); (yyval.tuple).result = Temp(); printf("%s = %s %s %d\n",(yyval.tuple).result,(yyvsp[-2].tuple).result,(yyvsp[-1].tuple).result,(yyvsp[0].tuple).num);}else {  (yyval.tuple).result = Temp(); printf("%s = %s %s %s\n",(yyval.tuple).result,(yyvsp[-2].tuple).result,(yyvsp[-1].tuple).result,(yyvsp[0].tuple).result);}}
#line 1602 "y.tab.c"
    break;

  case 75: /* E: E BOP E  */
#line 150 "parser.y"
          { if((yyvsp[0].tuple).isnum == 1){ (yyval.tuple).arg3 = Temp(); (yyval.tuple).result = Temp(); printf("%s = %s %s %d\n",(yyval.tuple).result,(yyvsp[-2].tuple).result,(yyvsp[-1].tuple).result,(yyvsp[0].tuple).num);}else {  (yyval.tuple).result = Temp(); printf("%s = %s %s %s\n",(yyval.tuple).result,(yyvsp[-2].tuple).result,(yyvsp[-1].tuple).result,(yyvsp[0].tuple).result);}}
#line 1608 "y.tab.c"
    break;

  case 76: /* E: NOT E  */
#line 151 "parser.y"
        {  if((yyvsp[0].tuple).isnum == 1){ (yyval.tuple).result = Temp(); printf("%s = %s %d\n",(yyval.tuple).result,(yyvsp[-1].tuple).result,(yyvsp[0].tuple).result);}else {  (yyval.tuple).result = Temp(); printf("%s = %s %s\n",(yyval.tuple).result,(yyvsp[-1].tuple).result,(yyvsp[0].tuple).result);}}
#line 1614 "y.tab.c"
    break;

  case 78: /* E: NUMBER  */
#line 153 "parser.y"
             { sprintf(numToString,"%d",(yyvsp[0].tuple).num); (yyvsp[0].tuple).isnum = 1; (yyvsp[0].tuple).arg1 = numToString; (yyvsp[0].tuple).result = numToString;(yyval.tuple).result=(yyvsp[0].tuple).result;}
#line 1620 "y.tab.c"
    break;


#line 1624 "y.tab.c"

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

#line 159 "parser.y"


char* Temp() {
    sCounter++;
    char* temp = (char*)malloc(10 * sizeof(char));
    sprintf(temp, "t%d", sCounter);
    return temp;
}

char* Label() {
    lCounter++;
    char* temp = (char*)malloc(10 * sizeof(char));
    sprintf(temp, "L%d", lCounter);
    return temp;
}

void validvar(char* str, int p) {
    int j = 0, flag = 0;
    while (j < var_no) {
        if (strcmp(var[j], str) == 0) {
            flag = 1;
            break;
        }
        j++;
    }

    if (p == 1 && flag == 1) {
        yyerror(strcat(str, " - error: variable already declared!"));
        return;
    } else if (p == 0 && flag == 0) {
        yyerror(strcat(str, " - Error: variable not defined!"));
        return;
    } else if (p == 1) {
        strcpy(var[var_no++], str);
    }
    return;
}
void main() 
{ 


  printf("\n\n"); 
   yyparse(); 
   if(flag==0) 
   	printf("\ncpp code is correct syntactically\n\n"); 
} 
  
void yyerror( char *s) 
{ 
   extern int yylineno;
   extern char* yytext;
   fprintf(stderr,"%s on lines %d-%d near \'%s\'\n",s,yylineno-1,yylineno, yytext);
  
   flag=1; 
} 


