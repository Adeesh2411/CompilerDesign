/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "program_test.y"

    #include "programServer.c"


#line 75 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

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

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDE = 258,
    NUM = 259,
    HEADER = 260,
    REAL = 261,
    CHARVALUE = 262,
    CHAR = 263,
    INT = 264,
    FLOAT = 265,
    DOUBLE = 266,
    VOID = 267,
    RETURN = 268,
    EQ = 269,
    LE = 270,
    GE = 271,
    AND = 272,
    OR = 273,
    XOR = 274,
    ASSIGN = 275,
    L = 276,
    G = 277,
    NEQ = 278,
    IF = 279,
    ELSE = 280,
    SWITCH = 281,
    BREAK = 282,
    WHILE = 283,
    CASE = 284,
    DEFAULT = 285,
    FOR = 286,
    ADD = 287,
    SUB = 288,
    MUL = 289,
    DIV = 290,
    INC = 291,
    DEC = 292,
    SEMICOLON = 293,
    COMMA = 294,
    OP = 295,
    CP = 296,
    OB = 297,
    CB = 298,
    LOR = 299,
    LAND = 300
  };
#endif
/* Tokens.  */
#define IDE 258
#define NUM 259
#define HEADER 260
#define REAL 261
#define CHARVALUE 262
#define CHAR 263
#define INT 264
#define FLOAT 265
#define DOUBLE 266
#define VOID 267
#define RETURN 268
#define EQ 269
#define LE 270
#define GE 271
#define AND 272
#define OR 273
#define XOR 274
#define ASSIGN 275
#define L 276
#define G 277
#define NEQ 278
#define IF 279
#define ELSE 280
#define SWITCH 281
#define BREAK 282
#define WHILE 283
#define CASE 284
#define DEFAULT 285
#define FOR 286
#define ADD 287
#define SUB 288
#define MUL 289
#define DIV 290
#define INC 291
#define DEC 292
#define SEMICOLON 293
#define COMMA 294
#define OP 295
#define CP 296
#define OB 297
#define CB 298
#define LOR 299
#define LAND 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 5 "program_test.y"

	char* txt;

#line 221 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   231

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

#define YYUNDEFTOK  2
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    21,    21,    34,    38,    48,    53,    58,    64,   106,
     117,   122,   142,   149,   156,   171,   172,   173,   174,   177,
     183,   193,   194,   195,   199,   203,   206,   212,   215,   218,
     223,   230,   235,   243,   253,   256,   257,   261,   267,   271,
     274,   277,   285,   294,   297,   300,   305,   311,   315,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   346,   357,   367,   375,
     386,   396,   401,   402,   405,   406,   411,   415,   416,   417
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDE", "NUM", "HEADER", "REAL",
  "CHARVALUE", "CHAR", "INT", "FLOAT", "DOUBLE", "VOID", "RETURN", "EQ",
  "LE", "GE", "AND", "OR", "XOR", "ASSIGN", "L", "G", "NEQ", "IF", "ELSE",
  "SWITCH", "BREAK", "WHILE", "CASE", "DEFAULT", "FOR", "ADD", "SUB",
  "MUL", "DIV", "INC", "DEC", "SEMICOLON", "COMMA", "OP", "CP", "OB", "CB",
  "LOR", "LAND", "$accept", "program", "header", "nextPart", "declaration",
  "assignList", "type", "variable", "lhs", "exp", "exp1", "exp2",
  "function", "funcVariable", "returnFunc", "funcPara", "nextPara",
  "stateTemp", "statements", "condExp", "forExp", "for1", "for2", "for3",
  "whileExp", "ifElse", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF (-109)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-45)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,     4,     7,   166,  -109,  -109,   -15,  -109,  -109,  -109,
    -109,  -109,  -109,   166,    13,     1,   166,  -109,  -109,    -7,
     -10,   -17,     0,    28,  -109,  -109,    28,    41,   184,  -109,
    -109,  -109,    28,  -109,  -109,   113,    39,    57,  -109,    41,
      37,  -109,     9,    28,    28,  -109,    53,    53,    41,   -12,
      27,  -109,    39,    39,    28,  -109,  -109,  -109,  -109,   207,
     184,   130,    22,    46,  -109,    51,    55,    68,   154,   130,
      41,    84,  -109,   130,   130,   130,  -109,   184,   180,   180,
     117,    71,  -109,   207,    74,  -109,  -109,  -109,  -109,    28,
      28,    41,   186,    80,    82,    41,   109,    92,  -109,    94,
    -109,    54,    54,   116,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,  -109,  -109,    28,    28,   100,   105,
     132,   207,   180,  -109,    28,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,   154,   154,   207,
     120,  -109,   122,    54,   125,   127,   140,   117,   180,   146,
    -109,   117,  -109,  -109,   139,    -5,  -109,   156,  -109,   154,
     138,  -109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     0,     0,     4,     1,     0,    19,    16,    15,
      18,    17,     2,     0,     0,     0,     0,    10,     5,    19,
       0,    14,     0,     0,     6,     8,     0,     0,    40,    23,
      21,    22,     0,    20,    29,     0,    26,    11,    12,     0,
       0,    39,     0,     0,     0,     9,     0,     0,     0,    38,
       0,    30,    24,    25,     0,    31,    27,    28,    13,     0,
      40,     0,     0,    37,    42,     0,     0,     0,     0,     0,
       0,    36,    43,     0,     0,     0,    32,    40,     0,     0,
      71,     0,    45,     0,     0,    46,    47,    48,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
      33,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,    58,     0,     0,     0,     0,
       0,     0,    73,    35,     0,    62,    53,    54,    49,    51,
      61,    64,    55,    56,    63,    52,    50,     0,     0,     0,
      70,    72,     0,    65,     0,     0,    68,    71,    75,    77,
      76,    71,    69,    74,     0,     0,    67,     0,    78,     0,
       0,    66
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,   198,    48,   106,   -23,     2,    -3,   -45,    -6,
      69,   165,  -109,  -109,  -109,   -48,  -109,   -22,  -109,   -73,
    -109,  -108,  -109,  -109,  -109,    60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    12,    69,    20,    70,    33,    34,    92,
      36,    56,    16,    22,    84,    40,    41,    71,    72,    93,
      73,    97,   142,   154,    74,    75
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    55,    55,    26,    38,    14,    94,     5,    59,     1,
      15,    21,    64,    15,    63,    14,    19,    35,    14,    65,
      37,    23,    27,    17,    21,    58,    42,    60,    25,    88,
      39,     7,    29,   -34,    30,    31,    49,    68,    99,   152,
      28,    43,    44,   156,     7,    21,    81,    82,    62,   141,
      51,    85,    86,    87,    43,    44,     7,    29,    15,    30,
      31,    18,    39,    76,    24,    15,    15,    21,    32,    61,
      15,    15,    15,    46,    47,   153,   140,    96,    50,    39,
      91,    91,    95,   101,   102,    77,    43,    44,   103,    43,
      44,    78,   120,    54,   146,    79,    48,    83,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    80,    13,
     135,   136,    52,    53,    98,   144,   145,   100,   143,    13,
       7,   118,    13,   119,    91,     8,     9,    10,    11,   121,
     122,     6,   123,     7,    15,    15,   124,   160,     8,     9,
      10,    11,   137,   -44,    96,    43,    44,   138,    96,    95,
      91,    45,   139,    95,    65,     6,    15,     7,    66,   147,
     148,    67,     8,     9,    10,    11,    -7,     6,   149,     7,
     150,   155,    68,   -44,     8,     9,    10,    11,    65,   151,
     157,   161,    66,     7,    29,    67,    30,    31,     8,     9,
      10,    11,     8,     9,    10,    11,    68,   -44,   159,     4,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       7,    29,    57,    30,    31,   158,    89,    90,    43,    44,
      32,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,   117
};

static const yytype_int16 yycheck[] =
{
       3,    46,    47,    20,    27,     3,    79,     0,    20,     5,
      13,    14,    60,    16,    59,    13,     3,    23,    16,    24,
      26,    20,    39,    38,    27,    48,    32,    39,    38,    77,
      28,     3,     4,    40,     6,     7,    39,    42,    83,   147,
      40,    32,    33,   151,     3,    48,    68,    69,    54,   122,
      41,    73,    74,    75,    32,    33,     3,     4,    61,     6,
       7,    13,    60,    41,    16,    68,    69,    70,    40,    42,
      73,    74,    75,    34,    35,   148,   121,    80,    41,    77,
      78,    79,    80,    89,    90,    39,    32,    33,    91,    32,
      33,    40,    95,    40,   139,    40,    39,    13,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    40,     3,
     116,   117,    43,    44,    43,   137,   138,    43,   124,    13,
       3,    41,    16,    41,   122,     8,     9,    10,    11,    20,
      38,     1,    38,     3,   137,   138,    20,   159,     8,     9,
      10,    11,    42,    13,   147,    32,    33,    42,   151,   147,
     148,    38,    20,   151,    24,     1,   159,     3,    28,    39,
      38,    31,     8,     9,    10,    11,     0,     1,    43,     3,
      43,    25,    42,    43,     8,     9,    10,    11,    24,    39,
      41,    43,    28,     3,     4,    31,     6,     7,     8,     9,
      10,    11,     8,     9,    10,    11,    42,    43,    42,     1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       3,     4,    47,     6,     7,   155,    36,    37,    32,    33,
      40,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    47,    48,    48,     0,     1,     3,     8,     9,
      10,    11,    49,    50,    52,    53,    58,    38,    49,     3,
      51,    53,    59,    20,    49,    38,    20,    39,    40,     4,
       6,     7,    40,    53,    54,    55,    56,    55,    51,    52,
      61,    62,    55,    32,    33,    38,    34,    35,    39,    53,
      41,    41,    56,    56,    40,    54,    57,    57,    51,    20,
      39,    42,    55,    54,    61,    24,    28,    31,    42,    50,
      52,    63,    64,    66,    70,    71,    41,    39,    40,    40,
      40,    63,    63,    13,    60,    63,    63,    63,    61,    36,
      37,    52,    55,    65,    65,    52,    53,    67,    43,    54,
      43,    55,    55,    53,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    36,    37,    44,    45,    41,    41,
      53,    20,    38,    38,    20,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    42,    42,    20,
      54,    65,    68,    55,    63,    63,    54,    39,    38,    43,
      43,    39,    67,    65,    69,    25,    67,    41,    71,    42,
      63,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    50,    50,
      50,    51,    51,    51,    51,    52,    52,    52,    52,    53,
      54,    54,    54,    54,    55,    55,    55,    56,    56,    56,
      56,    57,    57,    58,    59,    60,    60,    61,    61,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    67,    67,    67,
      67,    67,    68,    68,    69,    69,    70,    71,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     0,     3,     4,
       2,     3,     3,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     9,     1,     3,     0,     4,     2,     1,
       0,     6,     4,     1,     0,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     4,    11,     6,     4,     5,
       3,     0,     1,     0,     1,     0,     7,     7,     9,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 21 "program_test.y"
                          {
            CreateNode("Start", "nextPart", 2);
            CreateNode("Start", "header", 2);
            
            CreateNode("--", "Start", 2);
             //printf("\nDone\n");
             displayTable();
             CreateTree();
             Inorder(treeLink[tl-1],0);
             printf("\n");
             displayTree();             
         }
#line 1530 "y.tab.c"
    break;

  case 3:
#line 35 "program_test.y"
        {
            CreateNode("header", (yyvsp[0].txt), 1);
        }
#line 1538 "y.tab.c"
    break;

  case 4:
#line 39 "program_test.y"
        {
            CreateNode("header", (yyvsp[-1].txt), 2);
            CreateNode("header","header",2);
        }
#line 1547 "y.tab.c"
    break;

  case 5:
#line 49 "program_test.y"
    {
        CreateNode("nextPart","declaration",2);
        CreateNode("nextPart", "nextPart", 2);       
    }
#line 1556 "y.tab.c"
    break;

  case 6:
#line 54 "program_test.y"
    {
        CreateNode("nextPart", "function", 4);
        CreateNode("nextPart", "nextPart", 2);
    }
#line 1565 "y.tab.c"
    break;

  case 8:
#line 64 "program_test.y"
                              {
        
            if(!comaflag){
                if(T.dflag == 4){
                    insert((yyvsp[-2].txt), T.name, "--",1);
                }
            
                else if(checkType((yyvsp[-2].txt), T.value)){
                    insert((yyvsp[-2].txt), T.name, correct(T.value,(yyvsp[-2].txt)), 1);
                }
                
                else if(checkTableToAccess(T.value)){  
                                 
                    insert((yyvsp[-2].txt),T.name,getValue(T.value), 1);
                }
                  
                else{
                    printf("undefined %s assigned in line No %d\nline => %s\n",T.value,lineNo,prevToken);
                }
                //
                CreateNode("declaration", "AssignList", 3);
                CreateNode("declaration", "type", 1);
                
            }
            else{
                for(int i=0;i<ck;i++){
                    if(checkType((yyvsp[-2].txt), Tarr[i].value)){
                        insert((yyvsp[-2].txt),Tarr[i].name, Tarr[i].value, 1);
                    }
                }
                if(checkType((yyvsp[-2].txt), T.value)){
                    insert((yyvsp[-2].txt), T.name, T.value, 1);
                    ck=0;comaflag=0;
                }
                else if(checkTableToAccess(T.value)){
                    insert((yyvsp[-2].txt),T.name,getValue(T.value), 1);
                    ck=0;comaflag=0;
                }          
            }       
           
    }
#line 1611 "y.tab.c"
    break;

  case 9:
#line 107 "program_test.y"
    {
        if(!checkTableToAccess((yyvsp[-3].txt))){
            printf("ERROR : Undclared Type \'%s\' in Line No %d\n",(yyvsp[-3].txt), lineNo);
        }
        else{
            insert("", (yyvsp[-3].txt), (yyvsp[-1].txt), 2); // flag 2 for updating variable.
        }
    }
#line 1624 "y.tab.c"
    break;

  case 10:
#line 117 "program_test.y"
                     {strcpy(prevToken, curToken); strcpy(curToken, "");}
#line 1630 "y.tab.c"
    break;

  case 11:
#line 122 "program_test.y"
                              { 
	    if(!comaflag){
      	    strcpy(T.name,(yyvsp[-2].txt));
	        strcpy(T.value,(yyvsp[0].txt));
	        T.dflag=2;
	        
	    }
	    else{
	        strcpy(Tarr[ck++].name , (yyvsp[-2].txt));
	        strcpy(Tarr[ck-1].value, (yyvsp[0].txt));
	        Tarr[ck-1].dflag = 2;
	    }
	    
        //
        
        CreateExprNode(strtok(exprToken,"!"), (yyvsp[0].txt));
        CreateNode("AssignList",(yyvsp[0].txt),exprCount);
        CreateNode("AssignList", "=", 0);
        CreateNode("AssignList",(yyvsp[-2].txt),0);
	}
#line 1655 "y.tab.c"
    break;

  case 12:
#line 143 "program_test.y"
        {
	    comaflag = 1;   
	    strcpy(Tarr[ck++].name,(yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	    
	}
#line 1666 "y.tab.c"
    break;

  case 13:
#line 149 "program_test.y"
                                             {
	    comaflag = 1;
	    strcpy(Tarr[ck++].name,(yyvsp[-4].txt));
	    strcpy(Tarr[ck-1].value, (yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	}
#line 1677 "y.tab.c"
    break;

  case 14:
#line 156 "program_test.y"
                   {
	    if(!comaflag){
    	    strcpy(T.name , (yyvsp[0].txt));
	        T.dflag = 4;
	    }
	    else{
	        strcpy(Tarr[ck++].name ,(yyvsp[0].txt));
	        Tarr[ck-1].dflag = 4;
	    }    
	    }
#line 1692 "y.tab.c"
    break;

  case 15:
#line 171 "program_test.y"
         {CreateNode("type", "int",0); }
#line 1698 "y.tab.c"
    break;

  case 16:
#line 172 "program_test.y"
          { CreateNode("type", "char",0);}
#line 1704 "y.tab.c"
    break;

  case 17:
#line 173 "program_test.y"
            { CreateNode("type","double",0);}
#line 1710 "y.tab.c"
    break;

  case 18:
#line 174 "program_test.y"
           { CreateNode("type", "float",0);}
#line 1716 "y.tab.c"
    break;

  case 19:
#line 177 "program_test.y"
        {
        
    }
#line 1724 "y.tab.c"
    break;

  case 20:
#line 183 "program_test.y"
              {
        if(!checkTableToAccess((yyvsp[0].txt))){
            printf("ERROR : variable \'%s\' not defined in lineNo %d\n",(yyvsp[0].txt),lineNo);
            defineflag = 0;
        }
        else{
            defineflag=1;
            strcpy((yyval.txt), getValue((yyvsp[0].txt)));
        }
    }
#line 1739 "y.tab.c"
    break;

  case 23:
#line 195 "program_test.y"
         {(yyval.txt) = (yyvsp[0].txt);}
#line 1745 "y.tab.c"
    break;

  case 24:
#line 199 "program_test.y"
                  {
         (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 1);
       
    }
#line 1754 "y.tab.c"
    break;

  case 25:
#line 203 "program_test.y"
                  {
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 2);
    }
#line 1762 "y.tab.c"
    break;

  case 26:
#line 206 "program_test.y"
           {
        strcpy((yyval.txt), (yyvsp[0].txt));
    }
#line 1770 "y.tab.c"
    break;

  case 27:
#line 212 "program_test.y"
                   {
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 3);  
    }
#line 1778 "y.tab.c"
    break;

  case 28:
#line 215 "program_test.y"
                   {
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 4);
    }
#line 1786 "y.tab.c"
    break;

  case 29:
#line 218 "program_test.y"
         {
       
        strcpy((yyval.txt),(yyvsp[0].txt));
    }
#line 1795 "y.tab.c"
    break;

  case 30:
#line 223 "program_test.y"
               {
       
        strcpy((yyval.txt), (yyvsp[-1].txt));
    }
#line 1804 "y.tab.c"
    break;

  case 31:
#line 230 "program_test.y"
         {
       
        strcpy((yyval.txt), (yyvsp[0].txt));
        
    }
#line 1814 "y.tab.c"
    break;

  case 32:
#line 235 "program_test.y"
                {
       
        strcpy((yyval.txt),(yyvsp[-1].txt));
        
    }
#line 1824 "y.tab.c"
    break;

  case 33:
#line 244 "program_test.y"
    {
        insert((yyvsp[-8].txt),(yyvsp[-7].txt),"--",3 );
        CreateNode("function","Statement", 2);
        CreateNode("function", "funcPara", 4);
        CreateNode("function", (yyvsp[-7].txt), 0);
        CreateNode("function", "type",1);       
    }
#line 1836 "y.tab.c"
    break;

  case 34:
#line 253 "program_test.y"
        {funcFlag = true;}
#line 1842 "y.tab.c"
    break;

  case 37:
#line 261 "program_test.y"
                             {
        CreateNode("funcPara",(yyvsp[0].txt),0);
        CreateNode("funcPara","=",0);
        CreateNode("funcPara", (yyvsp[-2].txt), 0);
        CreateNode("funcPara", "type", 1);
    }
#line 1853 "y.tab.c"
    break;

  case 38:
#line 267 "program_test.y"
                   {
        CreateNode("funcPara",(yyvsp[0].txt),0);
        CreateNode("funcPara", "type", 1);
    }
#line 1862 "y.tab.c"
    break;

  case 39:
#line 271 "program_test.y"
             {
        CreateNode("funcPara","nextPara",6);
    }
#line 1870 "y.tab.c"
    break;

  case 41:
#line 277 "program_test.y"
                                            {
        CreateNode("nextPara","funcPara",3);
        CreateNode("nextPara", ",", 0);
        CreateNode("nextPara", (yyvsp[-2].txt),0);
        CreateNode("nextPara", "=",0);
        CreateNode("nextPara",(yyvsp[-4].txt), 0);
        CreateNode("nextPara", "type", 1);
    }
#line 1883 "y.tab.c"
    break;

  case 42:
#line 285 "program_test.y"
                                 {
        CreateNode("nextPara","funcPara",3);
        CreateNode("nextPara", ",", 0);
        CreateNode("nextPara",(yyvsp[-2].txt), 0);
        CreateNode("nextPara", "type", 1);
    }
#line 1894 "y.tab.c"
    break;

  case 43:
#line 294 "program_test.y"
               {
        //CreateNode("nextStatement", "Statement", 2);
    }
#line 1902 "y.tab.c"
    break;

  case 45:
#line 301 "program_test.y"
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "declaration", 2);
    }
#line 1911 "y.tab.c"
    break;

  case 46:
#line 306 "program_test.y"
    {
        
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "forExp", 5);
    }
#line 1921 "y.tab.c"
    break;

  case 47:
#line 312 "program_test.y"
    {
        CreateNode("Statement", "whileExp", 2);
    }
#line 1929 "y.tab.c"
    break;

  case 48:
#line 316 "program_test.y"
    {
        CreateNode("Statement", "ifElse", 2);
    }
#line 1937 "y.tab.c"
    break;

  case 65:
#line 339 "program_test.y"
    {
        insert((yyvsp[-3].txt), (yyvsp[-2].txt), (yyvsp[0].txt), 4);
    }
#line 1945 "y.tab.c"
    break;

  case 66:
#line 347 "program_test.y"
    {
        CreateNode("forExp", "Statement", 2);
        CreateNode("forExp", "for3", 6);
        CreateNode("forExp", "for2", 6);
        CreateNode("forExp", "for1", 6);
        CreateNode("forExp", "for", 0);
    }
#line 1957 "y.tab.c"
    break;

  case 67:
#line 358 "program_test.y"
    {
        insert((yyvsp[-5].txt), (yyvsp[-4].txt), (yyvsp[-2].txt), 4);
        CreateNode("for1", "for1", 6);
        CreateNode("for1", ",", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-4].txt), 0);
        CreateNode("for1", "type", 1);       
    }
#line 1971 "y.tab.c"
    break;

  case 68:
#line 368 "program_test.y"
    {
         insert((yyvsp[-3].txt), (yyvsp[-2].txt), (yyvsp[0].txt), 4);
        CreateNode("for1", (yyvsp[0].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
        CreateNode("for1", "type", 1);
    }
#line 1983 "y.tab.c"
    break;

  case 69:
#line 376 "program_test.y"
    {
        if(checkTableToAccess((yyvsp[-4].txt))){}
        else
            printf("ERROR : undefined variable \'%s\' in line No %d\n",(yyvsp[-4].txt), lineNo);
        CreateNode("for1", "for1", 6);
        CreateNode("for1", ",", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-4].txt), 0);
    }
#line 1998 "y.tab.c"
    break;

  case 70:
#line 387 "program_test.y"
    {
        if(checkTableToAccess((yyvsp[-2].txt))){}
        else
            printf("ERROR : undefined variable \'%s\' in line No %d\n",(yyvsp[-2].txt), lineNo);

        CreateNode("for1", (yyvsp[0].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
    }
#line 2012 "y.tab.c"
    break;


#line 2016 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 420 "program_test.y"




int main() 
{  
    yyin = fopen("program.c", "r");
    yyout = fopen("out.txt","w"); //for SymbolTable
    tempFile = fopen("token.txt","w");
    treeFile = fopen("tree.txt","w");
    
	yyparse(); 

	fclose(yyout);
	fclose(yyin);
	
	return 0;
} 

