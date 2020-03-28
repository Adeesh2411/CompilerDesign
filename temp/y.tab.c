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
#define YYLAST   521

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  241

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
       0,    21,    21,    40,    44,    54,    59,    65,    71,   115,
     126,   131,   159,   166,   173,   191,   235,   246,   251,   279,
     286,   293,   312,   313,   314,   315,   318,   324,   334,   335,
     336,   340,   344,   348,   354,   358,   362,   367,   374,   379,
     387,   400,   405,   406,   410,   416,   420,   423,   426,   434,
     443,   446,   449,   455,   460,   465,   473,   481,   486,   491,
     496,   501,   505,   510,   515,   520,   525,   529,   534,   539,
     544,   548,   551,   553,   555,   558,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   573,   583,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   612,   625,   631,   641,
     649,   660,   670,   675,   680,   683,   689,   694,   705,   709,
     716,   725,   730
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
  "assignList", "declarationLoop", "assignListLoop", "type", "variable",
  "lhs", "exp", "exp1", "exp2", "function", "funcVariable", "returnFunc",
  "funcPara", "nextPara", "stateTemp", "statements", "loopStatement",
  "wloopStatement", "ifloopStatement", "condExp", "$@1", "condExp1",
  "forExp", "ForName", "for1", "for2", "for3", "whileExp", "whileName",
  "ifElse", "ifName", YY_NULLPTR
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

#define YYPACT_NINF (-137)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,    28,    18,   236,  -137,  -137,    24,  -137,  -137,  -137,
    -137,  -137,  -137,   236,    32,    30,   236,  -137,  -137,    38,
      26,    -8,    49,    13,  -137,  -137,    13,    68,   294,  -137,
    -137,  -137,    13,  -137,  -137,   -11,    14,    43,  -137,    68,
      70,  -137,    36,    13,    13,  -137,    53,    53,    68,     5,
      73,  -137,    14,    14,    13,  -137,  -137,  -137,  -137,   172,
     294,   116,    55,    82,  -137,  -137,  -137,  -137,   285,   116,
      68,   128,  -137,   116,   120,   116,   121,   116,   122,  -137,
     294,   130,   285,    68,   160,   123,   285,   285,   285,  -137,
     172,   126,  -137,   146,  -137,   261,  -137,   261,  -137,  -137,
    -137,   148,     8,    13,  -137,  -137,  -137,  -137,   152,  -137,
      68,   171,   154,    13,    13,    68,   444,   155,   157,  -137,
      13,    68,    90,  -137,   173,   172,   261,    69,    69,   175,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
    -137,  -137,    13,    13,   174,   177,    77,  -137,  -137,   172,
     178,  -137,   176,    13,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,   390,   285,    68,   184,
     146,   328,    69,   390,   170,   390,   390,   390,   186,  -137,
     146,  -137,    13,    13,    68,   476,  -137,   179,  -137,  -137,
    -137,  -137,  -137,  -137,   196,  -137,    69,    69,   207,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,  -137,
    -137,    13,    13,   191,    19,    13,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,   426,  -137,
      69,   426,   192,   426,   426,   426,  -137,  -137,  -137,  -137,
    -137
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     0,     0,     4,     1,     0,    26,    23,    22,
      25,    24,     2,     0,     0,     0,     0,    10,     5,    26,
       0,    14,     0,     0,     6,     8,     0,     0,    47,    30,
      28,    29,     0,    27,    36,     0,    33,    11,    12,     0,
       0,    46,     0,     0,     0,     9,     0,     0,     0,    45,
       0,    37,    31,    32,     0,    38,    34,    35,    13,     0,
      47,     0,     0,    44,    49,   122,   118,   107,     0,     0,
       0,    43,    50,     0,     0,     0,     0,     0,     0,    39,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,    53,   112,    54,     0,    55,     0,    48,    17,
      66,     0,    21,     0,   121,    67,    68,    69,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,    42,     0,     0,   114,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,     0,     0,     0,     0,    18,    19,    16,     0,
     111,   113,     0,     0,    84,    75,    76,    71,    73,    83,
      86,    77,    78,    85,    74,    72,     0,     0,     0,   109,
     112,   116,    87,     0,     0,     0,     0,     0,     0,    20,
     112,   110,     0,     0,     0,     0,   115,     0,    88,    61,
     117,    62,    63,    64,   119,   108,    99,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
      98,     0,     0,     0,     0,     0,   102,    93,    94,    89,
      91,   101,   104,    95,    96,   103,    92,    90,     0,   120,
     105,     0,     0,     0,     0,     0,    56,   106,    57,    58,
      59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,   233,    78,    39,   -19,  -136,  -117,   181,    -3,
     -44,     0,   102,   193,  -137,  -137,  -137,   -46,  -137,    31,
    -137,   -83,    12,   -81,   -88,  -137,  -137,   182,  -137,  -107,
    -137,  -137,   212,  -137,   149,  -137
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    12,    69,    20,    82,   101,    83,    33,
      34,   116,    36,    56,    16,    22,    91,    40,    41,    71,
      72,   232,   174,    85,   117,   188,   186,    86,    74,   112,
     152,   187,    87,    76,    88,    78
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   100,    55,    55,   147,   105,   106,   107,    38,   118,
      15,    21,    26,    15,    64,    63,     7,    29,     5,    30,
      31,    43,    44,    35,    21,    59,    37,    45,   120,    58,
     173,    27,    42,     1,    98,    19,    49,   173,   151,   173,
     173,   173,    13,    65,    60,    21,   108,   121,    46,    47,
      23,   179,    13,    32,    62,    13,     7,    29,    15,    30,
      31,    68,    17,   181,    25,    84,    15,    21,    43,    44,
      15,     7,    15,   195,    15,    43,    44,    51,   -41,    84,
     102,   150,    48,    84,    84,    84,   178,    43,    44,    28,
     111,    18,   231,    54,    24,   231,    79,   231,   231,   231,
      89,    43,    44,   122,    92,   169,    94,   124,    96,    43,
      44,    50,   129,   127,   128,    61,   168,     6,   102,     7,
     146,    80,    43,    44,     8,     9,    10,    11,   148,   -51,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      65,    90,   164,   165,    66,    52,    53,    67,   236,     7,
     238,   239,   240,   172,     8,     9,    10,    11,    68,   -51,
      93,    95,    97,    84,    84,   102,   104,   111,    99,   109,
      84,   185,    84,    84,    84,     7,    29,   111,    30,    31,
     103,   198,   196,   197,    14,   189,   119,   191,   192,   193,
     123,   125,   126,   149,    14,   153,   144,    14,   145,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,    39,
      77,   226,   227,   190,   171,   230,   166,   170,    77,   167,
     213,   214,    77,   180,    77,    84,    77,   215,    84,   194,
      84,    84,    84,   228,     4,   237,    -7,     6,     0,     7,
      57,    39,    70,    73,     8,     9,    10,    11,     0,     0,
      70,    73,     0,     0,    70,    73,    70,    73,    70,    73,
       0,    39,     0,     0,     7,    29,     0,    30,    31,     8,
       9,    10,    11,    75,   110,     0,   115,     0,   115,     0,
       0,    75,     0,     0,     0,    75,    81,    75,     7,    75,
       0,     0,     0,     8,     9,    10,    11,   113,   114,     0,
       0,    32,     8,     9,    10,    11,     0,   115,     0,    65,
       0,     0,     0,    66,     0,   177,    67,     0,     0,     0,
       0,     0,   177,     0,   177,   177,   177,    68,   -70,     0,
       0,     7,    29,     0,    30,    31,     8,     9,    10,    11,
       0,     0,     0,     0,     0,     0,     0,     0,   175,     0,
       0,   110,   184,     0,     0,   175,     0,   175,   175,   175,
       0,   110,     0,   229,   182,   183,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,   235,   176,     0,
     235,     0,   235,   235,   235,   176,     0,   176,   176,   176,
       0,    81,     0,     7,     0,     0,     0,     0,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
     233,     0,     0,   233,    65,   233,   233,   233,    66,     0,
       0,    67,     0,     0,     0,     0,     0,    81,     0,     7,
       0,     0,    68,   -65,     8,     9,    10,    11,     0,     0,
     234,     0,     0,   234,     0,   234,   234,   234,     0,     0,
      65,     0,     0,     0,    66,     0,     0,    67,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,    68,   -60,
       0,     0,     0,     0,     0,     0,    43,    44,     0,     0,
     140,   141,     0,     0,     0,     0,     0,     0,   142,   143,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
       0,     0,   209,   210,     0,     0,     0,     0,     0,     0,
     211,   212
};

static const yytype_int16 yycheck[] =
{
       3,    82,    46,    47,   121,    86,    87,    88,    27,    97,
      13,    14,    20,    16,    60,    59,     3,     4,     0,     6,
       7,    32,    33,    23,    27,    20,    26,    38,    20,    48,
     166,    39,    32,     5,    80,     3,    39,   173,   126,   175,
     176,   177,     3,    24,    39,    48,    90,    39,    34,    35,
      20,   168,    13,    40,    54,    16,     3,     4,    61,     6,
       7,    42,    38,   170,    38,    68,    69,    70,    32,    33,
      73,     3,    75,   180,    77,    32,    33,    41,    40,    82,
      83,   125,    39,    86,    87,    88,   167,    32,    33,    40,
      93,    13,   228,    40,    16,   231,    41,   233,   234,   235,
      69,    32,    33,   103,    73,   149,    75,   110,    77,    32,
      33,    41,   115,   113,   114,    42,    39,     1,   121,     3,
     120,    39,    32,    33,     8,     9,    10,    11,    38,    13,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
      24,    13,   142,   143,    28,    43,    44,    31,   231,     3,
     233,   234,   235,   153,     8,     9,    10,    11,    42,    43,
      40,    40,    40,   166,   167,   168,    43,   170,    38,    43,
     173,   171,   175,   176,   177,     3,     4,   180,     6,     7,
      20,   184,   182,   183,     3,   173,    38,   175,   176,   177,
      38,    20,    38,    20,    13,    20,    41,    16,    41,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,    28,
      61,   211,   212,    43,    38,   215,    42,    39,    69,    42,
      41,    25,    73,    39,    75,   228,    77,    20,   231,    43,
     233,   234,   235,    42,     1,    43,     0,     1,    -1,     3,
      47,    60,    61,    61,     8,     9,    10,    11,    -1,    -1,
      69,    69,    -1,    -1,    73,    73,    75,    75,    77,    77,
      -1,    80,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    61,    93,    -1,    95,    -1,    97,    -1,
      -1,    69,    -1,    -1,    -1,    73,     1,    75,     3,    77,
      -1,    -1,    -1,     8,     9,    10,    11,    36,    37,    -1,
      -1,    40,     8,     9,    10,    11,    -1,   126,    -1,    24,
      -1,    -1,    -1,    28,    -1,   166,    31,    -1,    -1,    -1,
      -1,    -1,   173,    -1,   175,   176,   177,    42,    43,    -1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,
      -1,   170,   171,    -1,    -1,   173,    -1,   175,   176,   177,
      -1,   180,    -1,   214,    36,    37,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   228,   166,    -1,
     231,    -1,   233,   234,   235,   173,    -1,   175,   176,   177,
      -1,     1,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,   231,    24,   233,   234,   235,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,    -1,    42,    43,     8,     9,    10,    11,    -1,    -1,
     228,    -1,    -1,   231,    -1,   233,   234,   235,    -1,    -1,
      24,    -1,    -1,    -1,    28,    -1,    -1,    31,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    47,    48,    48,     0,     1,     3,     8,     9,
      10,    11,    49,    50,    54,    55,    60,    38,    49,     3,
      51,    55,    61,    20,    49,    38,    20,    39,    40,     4,
       6,     7,    40,    55,    56,    57,    58,    57,    51,    54,
      63,    64,    57,    32,    33,    38,    34,    35,    39,    55,
      41,    41,    58,    58,    40,    56,    59,    59,    51,    20,
      39,    42,    57,    56,    63,    24,    28,    31,    42,    50,
      54,    65,    66,    73,    74,    78,    79,    80,    81,    41,
      39,     1,    52,    54,    55,    69,    73,    78,    80,    65,
      13,    62,    65,    40,    65,    40,    65,    40,    63,    38,
      69,    53,    55,    20,    43,    69,    69,    69,    56,    43,
      54,    55,    75,    36,    37,    54,    57,    70,    70,    38,
      20,    39,    57,    38,    55,    20,    38,    57,    57,    55,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      36,    37,    44,    45,    41,    41,    57,    53,    38,    20,
      56,    70,    76,    20,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    42,    42,    39,    56,
      39,    38,    57,    52,    68,    73,    78,    80,    69,    53,
      39,    75,    36,    37,    54,    57,    72,    77,    71,    68,
      43,    68,    68,    68,    43,    75,    57,    57,    55,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    36,
      37,    44,    45,    41,    25,    20,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    42,    80,
      57,    52,    67,    73,    78,    80,    67,    43,    67,    67,
      67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    50,    50,
      50,    51,    51,    51,    51,    52,    52,    52,    53,    53,
      53,    53,    54,    54,    54,    54,    55,    56,    56,    56,
      56,    57,    57,    57,    58,    58,    58,    58,    59,    59,
      60,    61,    62,    62,    63,    63,    63,    63,    64,    64,
      65,    65,    66,    66,    66,    66,    67,    67,    67,    67,
      67,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    71,    70,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    74,    75,    75,
      75,    75,    75,    76,    76,    77,    77,    78,    79,    80,
      80,    80,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     0,     3,     4,
       2,     3,     3,     5,     1,     3,     4,     2,     3,     3,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       9,     1,     3,     0,     4,     2,     1,     0,     6,     4,
       1,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       0,     2,     2,     2,     2,     0,     2,     2,     2,     2,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     0,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     4,    11,     1,     6,     4,
       5,     3,     0,     1,     0,     1,     0,     7,     1,     7,
       9,     3,     1
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
             
             displayTable();
             
            // AssignLinkHeader();
             
             CreateTree();
             
             Inorder(treeLink[tl-1],0);
             
             addLevelNo();
             printf("\n\n");
             displayTree();             
         }
#line 1637 "y.tab.c"
    break;

  case 3:
#line 41 "program_test.y"
        {
            CreateNode("header", (yyvsp[0].txt), 1);
        }
#line 1645 "y.tab.c"
    break;

  case 4:
#line 45 "program_test.y"
        {
            CreateNode("header", (yyvsp[-1].txt), 2);
            CreateNode("header","header",2);
        }
#line 1654 "y.tab.c"
    break;

  case 5:
#line 55 "program_test.y"
    {
        CreateNode("nextPart","declaration",2);
        CreateNode("nextPart", "nextPart", 2);       
    }
#line 1663 "y.tab.c"
    break;

  case 6:
#line 60 "program_test.y"
    {
        CreateNode("nextPart", "function", 4);
        CreateNode("nextPart", "nextPart", 2);

    }
#line 1673 "y.tab.c"
    break;

  case 8:
#line 71 "program_test.y"
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
                strcpy(tempArr, "declaration");
                
                CreateNode(tempArr, "AssignList", 3);
                CreateNode(tempArr, (yyvsp[-2].txt), 0);
                
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
#line 1721 "y.tab.c"
    break;

  case 9:
#line 116 "program_test.y"
    {
        if(!checkTableToAccess((yyvsp[-3].txt))){
            printf("ERROR : Undclared Type \'%s\' in Line No %d\n",(yyvsp[-3].txt), lineNo);
        }
        else{
            insert("", (yyvsp[-3].txt), (yyvsp[-1].txt), 2); // flag 2 for updating variable.
        }
    }
#line 1734 "y.tab.c"
    break;

  case 10:
#line 126 "program_test.y"
                     {strcpy(prevToken, curToken); strcpy(curToken, "");}
#line 1740 "y.tab.c"
    break;

  case 11:
#line 131 "program_test.y"
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
        
         AssignExprLinkHandle(explPrev);
         
        node *TTT = CreateNode("AssignList", "expr", 1);
        //printf("entered\n");
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev;
        //CreateExprNode(strtok(exprToken,"!"), $3);
        //CreateNode("AssignList",$3,exprCount);
        CreateNode("AssignList", "=", 0);
        CreateNode("AssignList",(yyvsp[-2].txt),0);
	}
#line 1773 "y.tab.c"
    break;

  case 12:
#line 160 "program_test.y"
        {
	    comaflag = 1;   
	    strcpy(Tarr[ck++].name,(yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	    
	}
#line 1784 "y.tab.c"
    break;

  case 13:
#line 166 "program_test.y"
                                             {
	    comaflag = 1;
	    strcpy(Tarr[ck++].name,(yyvsp[-4].txt));
	    strcpy(Tarr[ck-1].value, (yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	}
#line 1795 "y.tab.c"
    break;

  case 14:
#line 173 "program_test.y"
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
#line 1810 "y.tab.c"
    break;

  case 15:
#line 191 "program_test.y"
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
                //strcpy(tempArr, "declarationLoop");
               // printf("%s\n",cat("declarationLoop",loopval));
                CreateNode(cat("declarationLoop",loopval), cat1("AssignListLoop", loopval), 3);
                CreateNode(cat("declarationLoop",loopval), (yyvsp[-2].txt), 0);
                
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
#line 1858 "y.tab.c"
    break;

  case 16:
#line 236 "program_test.y"
    {
        if(!checkTableToAccess((yyvsp[-3].txt))){
            printf("ERROR : Undclared Type \'%s\' in Line No %d\n",(yyvsp[-3].txt), lineNo);
        }
        else{
            insert("", (yyvsp[-3].txt), (yyvsp[-1].txt), 2); // flag 2 for updating variable.
        }
    }
#line 1871 "y.tab.c"
    break;

  case 17:
#line 246 "program_test.y"
                     {strcpy(prevToken, curToken); strcpy(curToken, "");}
#line 1877 "y.tab.c"
    break;

  case 18:
#line 251 "program_test.y"
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
        AssignExprLinkHandle(explPrev);
        
        node *TTT = CreateNode(cat1("AssignListLoop", loopval), "expr", 1);
        
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev-1;
        
        //CreateExprNode(strtok(exprToken,"!"), $3);
        //CreateNode(cat1("AssignListLoop", loopval),$3,exprCount);
        CreateNode(cat1("AssignListLoop", loopval), "=", 0);
        CreateNode(cat1("AssignListLoop", loopval),(yyvsp[-2].txt),0);
	}
#line 1910 "y.tab.c"
    break;

  case 19:
#line 280 "program_test.y"
        {
	    comaflag = 1;   
	    strcpy(Tarr[ck++].name,(yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	    
	}
#line 1921 "y.tab.c"
    break;

  case 20:
#line 286 "program_test.y"
                                                 {
	    comaflag = 1;
	    strcpy(Tarr[ck++].name,(yyvsp[-4].txt));
	    strcpy(Tarr[ck-1].value, (yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	}
#line 1932 "y.tab.c"
    break;

  case 21:
#line 293 "program_test.y"
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
#line 1947 "y.tab.c"
    break;

  case 23:
#line 313 "program_test.y"
          { }
#line 1953 "y.tab.c"
    break;

  case 26:
#line 318 "program_test.y"
        {
        
    }
#line 1961 "y.tab.c"
    break;

  case 27:
#line 324 "program_test.y"
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
#line 1976 "y.tab.c"
    break;

  case 30:
#line 336 "program_test.y"
         {(yyval.txt) = (yyvsp[0].txt);}
#line 1982 "y.tab.c"
    break;

  case 31:
#line 340 "program_test.y"
                  {
         (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 1);
         CreateExprNodeHandle("+");
    }
#line 1991 "y.tab.c"
    break;

  case 32:
#line 344 "program_test.y"
                  {
        CreateExprNodeHandle("-");
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 2);
    }
#line 2000 "y.tab.c"
    break;

  case 33:
#line 348 "program_test.y"
           {
        strcpy((yyval.txt), (yyvsp[0].txt));
    }
#line 2008 "y.tab.c"
    break;

  case 34:
#line 354 "program_test.y"
                   {
        CreateExprNodeHandle("*");
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 3);  
    }
#line 2017 "y.tab.c"
    break;

  case 35:
#line 358 "program_test.y"
                   {
        CreateExprNodeHandle("/");
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 4);
    }
#line 2026 "y.tab.c"
    break;

  case 36:
#line 362 "program_test.y"
         {
       CreateExprNodeHandle((yyvsp[0].txt));
        strcpy((yyval.txt),(yyvsp[0].txt));
    }
#line 2035 "y.tab.c"
    break;

  case 37:
#line 367 "program_test.y"
               {
       
        strcpy((yyval.txt), (yyvsp[-1].txt));
    }
#line 2044 "y.tab.c"
    break;

  case 38:
#line 374 "program_test.y"
         {
       CreateExprNodeHandle((yyvsp[0].txt));
        strcpy((yyval.txt), (yyvsp[0].txt));
        
    }
#line 2054 "y.tab.c"
    break;

  case 39:
#line 379 "program_test.y"
                {
       
        strcpy((yyval.txt),(yyvsp[-1].txt));
        
    }
#line 2064 "y.tab.c"
    break;

  case 40:
#line 388 "program_test.y"
    {
        
        insert((yyvsp[-8].txt),(yyvsp[-7].txt),"--",3 );
        CreateNode("function","Statement", 2);
        CreateNode("function", "funcPara", 4);
        CreateNode("function", (yyvsp[-7].txt), 0);
        CreateNode("function", (yyvsp[-8].txt),0);
        funcFlag = false;
       
    }
#line 2079 "y.tab.c"
    break;

  case 41:
#line 400 "program_test.y"
        {funcFlag = true;
        
    }
#line 2087 "y.tab.c"
    break;

  case 44:
#line 410 "program_test.y"
                             {
        CreateNode("funcPara",(yyvsp[0].txt),0);
        CreateNode("funcPara","=",0);
        CreateNode("funcPara", (yyvsp[-2].txt), 0);
        CreateNode("funcPara", (yyvsp[-3].txt), 0);
    }
#line 2098 "y.tab.c"
    break;

  case 45:
#line 416 "program_test.y"
                   {
        CreateNode("funcPara",(yyvsp[0].txt),0);
        CreateNode("funcPara", (yyvsp[-1].txt), 0);
    }
#line 2107 "y.tab.c"
    break;

  case 46:
#line 420 "program_test.y"
             {
        CreateNode("funcPara","nextPara",6);
    }
#line 2115 "y.tab.c"
    break;

  case 48:
#line 426 "program_test.y"
                                            {
        CreateNode("nextPara","funcPara",3);
        CreateNode("nextPara", ",", 0);
        CreateNode("nextPara", (yyvsp[-2].txt),0);
        CreateNode("nextPara", "=",0);
        CreateNode("nextPara",(yyvsp[-4].txt), 0);
        CreateNode("nextPara", (yyvsp[-5].txt), 0);
    }
#line 2128 "y.tab.c"
    break;

  case 49:
#line 434 "program_test.y"
                                 {
        CreateNode("nextPara","funcPara",3);
        CreateNode("nextPara", ",", 0);
        CreateNode("nextPara",(yyvsp[-2].txt), 0);
        CreateNode("nextPara", (yyvsp[-3].txt), 0);
    }
#line 2139 "y.tab.c"
    break;

  case 50:
#line 443 "program_test.y"
               {
        
    }
#line 2147 "y.tab.c"
    break;

  case 52:
#line 450 "program_test.y"
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "declaration", 2);
        
    }
#line 2157 "y.tab.c"
    break;

  case 53:
#line 456 "program_test.y"
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "forExp", 5);
    }
#line 2166 "y.tab.c"
    break;

  case 54:
#line 461 "program_test.y"
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "whileExp", 5);
    }
#line 2175 "y.tab.c"
    break;

  case 55:
#line 466 "program_test.y"
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "ifElse", 7);
    }
#line 2184 "y.tab.c"
    break;

  case 56:
#line 473 "program_test.y"
                                  {
        
        strcpy(tempArr2, cat1("declarationLoop",loopval));
        
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), tempArr2, 2);
        printf("%s\n",tempArr2);
    }
#line 2197 "y.tab.c"
    break;

  case 57:
#line 482 "program_test.y"
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval),"forExp",5 );
    }
#line 2206 "y.tab.c"
    break;

  case 58:
#line 487 "program_test.y"
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "whileExp", 5);
    }
#line 2215 "y.tab.c"
    break;

  case 59:
#line 492 "program_test.y"
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "ifElse", 7);
    }
#line 2224 "y.tab.c"
    break;

  case 61:
#line 501 "program_test.y"
                                   {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval), cat1("declarationLoop",loopval), 2);
    }
#line 2233 "y.tab.c"
    break;

  case 62:
#line 506 "program_test.y"
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval),"forExp",5 );
    }
#line 2242 "y.tab.c"
    break;

  case 63:
#line 511 "program_test.y"
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "whileExp", 5);
    }
#line 2251 "y.tab.c"
    break;

  case 64:
#line 516 "program_test.y"
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval), "ifElse", 7);
    }
#line 2260 "y.tab.c"
    break;

  case 66:
#line 525 "program_test.y"
                                    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), "declarationLoop", 2);
    }
#line 2269 "y.tab.c"
    break;

  case 67:
#line 530 "program_test.y"
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval),"forExp",5 );
    }
#line 2278 "y.tab.c"
    break;

  case 68:
#line 535 "program_test.y"
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), "whileExp", 5);
    }
#line 2287 "y.tab.c"
    break;

  case 69:
#line 540 "program_test.y"
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), "ifElse", 7);
    }
#line 2296 "y.tab.c"
    break;

  case 71:
#line 548 "program_test.y"
                 {
       strcpy(tempArr, (yyvsp[-2].txt));strcpy(tempArr, (yyvsp[-1].txt));strcpy(tempArr, (yyvsp[0].txt));
     }
#line 2304 "y.tab.c"
    break;

  case 72:
#line 551 "program_test.y"
                 { strcpy(tempArr, (yyvsp[-2].txt));strcpy(tempArr, (yyvsp[-1].txt));strcpy(tempArr, (yyvsp[0].txt));
    }
#line 2311 "y.tab.c"
    break;

  case 73:
#line 553 "program_test.y"
               {strcpy(tempArr, (yyvsp[-2].txt));strcpy(tempArr, (yyvsp[-1].txt));strcpy(tempArr, (yyvsp[0].txt)); 
    }
#line 2318 "y.tab.c"
    break;

  case 74:
#line 556 "program_test.y"
    {strcpy(tempArr, (yyvsp[-2].txt));strcpy(tempArr, (yyvsp[-1].txt));strcpy(tempArr, (yyvsp[0].txt));
    }
#line 2325 "y.tab.c"
    break;

  case 75:
#line 559 "program_test.y"
    {
    strcpy(tempArr, (yyvsp[-2].txt));strcpy(tempArr, (yyvsp[-1].txt));strcpy(tempArr, (yyvsp[0].txt));
    }
#line 2333 "y.tab.c"
    break;

  case 76:
#line 562 "program_test.y"
               {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2339 "y.tab.c"
    break;

  case 77:
#line 563 "program_test.y"
              {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2345 "y.tab.c"
    break;

  case 78:
#line 564 "program_test.y"
              {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2351 "y.tab.c"
    break;

  case 79:
#line 565 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2357 "y.tab.c"
    break;

  case 80:
#line 566 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2363 "y.tab.c"
    break;

  case 81:
#line 567 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2369 "y.tab.c"
    break;

  case 82:
#line 568 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2375 "y.tab.c"
    break;

  case 83:
#line 569 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2381 "y.tab.c"
    break;

  case 84:
#line 570 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2387 "y.tab.c"
    break;

  case 85:
#line 571 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2393 "y.tab.c"
    break;

  case 86:
#line 572 "program_test.y"
                   {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2399 "y.tab.c"
    break;

  case 87:
#line 573 "program_test.y"
                              {strcpy(tempArr1, (yyvsp[-3].txt));strcpy(tempArr2, (yyvsp[-2].txt));strcpy(tempArr3, (yyvsp[-1].txt));}
#line 2405 "y.tab.c"
    break;

  case 88:
#line 574 "program_test.y"
    {
        insert((yyvsp[-4].txt), (yyvsp[-3].txt), (yyvsp[-1].txt), 4);
        {strcpy(tempArr1, (yyvsp[-4].txt));strcpy(tempArr2, (yyvsp[-3].txt));strcpy(tempArr3, (yyvsp[-2].txt));}
    }
#line 2414 "y.tab.c"
    break;

  case 89:
#line 583 "program_test.y"
                 {
        strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));
     }
#line 2422 "y.tab.c"
    break;

  case 90:
#line 586 "program_test.y"
                 {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2428 "y.tab.c"
    break;

  case 91:
#line 587 "program_test.y"
               {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2434 "y.tab.c"
    break;

  case 92:
#line 588 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2440 "y.tab.c"
    break;

  case 93:
#line 589 "program_test.y"
               {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2446 "y.tab.c"
    break;

  case 94:
#line 590 "program_test.y"
               {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2452 "y.tab.c"
    break;

  case 95:
#line 591 "program_test.y"
              {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2458 "y.tab.c"
    break;

  case 96:
#line 592 "program_test.y"
              {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2464 "y.tab.c"
    break;

  case 97:
#line 593 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2470 "y.tab.c"
    break;

  case 98:
#line 594 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2476 "y.tab.c"
    break;

  case 99:
#line 595 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2482 "y.tab.c"
    break;

  case 100:
#line 596 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2488 "y.tab.c"
    break;

  case 101:
#line 597 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2494 "y.tab.c"
    break;

  case 102:
#line 598 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2500 "y.tab.c"
    break;

  case 103:
#line 599 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2506 "y.tab.c"
    break;

  case 104:
#line 600 "program_test.y"
                   {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2512 "y.tab.c"
    break;

  case 105:
#line 602 "program_test.y"
    {
        insert((yyvsp[-3].txt), (yyvsp[-2].txt), (yyvsp[0].txt), 4);
        strcpy(tempArr1, (yyvsp[-3].txt));strcpy(tempArr2, (yyvsp[-2].txt));strcpy(tempArr3, (yyvsp[-1].txt));
    }
#line 2521 "y.tab.c"
    break;

  case 106:
#line 613 "program_test.y"
    {
        CreateNode("look", "forOpen", 0);
        CreateNode("forExp", cat("LoopStatement",loopval), 2);
        CreateNode("forExp", "for3", 6);
        CreateNode("forExp", "for2", 6);
        CreateNode("forExp", "for1", 6);
        CreateNode("forExp", "for", 0);
        loopFlag = false;
    }
#line 2535 "y.tab.c"
    break;

  case 107:
#line 625 "program_test.y"
        {loopFlag = true; 
        ++loopval;
     }
#line 2543 "y.tab.c"
    break;

  case 108:
#line 632 "program_test.y"
    {
        insert((yyvsp[-5].txt), (yyvsp[-4].txt), (yyvsp[-2].txt), 4);
        CreateNode("for1", "for1", 6);
        CreateNode("for1", ",", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-4].txt), 0);
        CreateNode("for1", (yyvsp[-5].txt), 0);       
    }
#line 2557 "y.tab.c"
    break;

  case 109:
#line 642 "program_test.y"
    {
         insert((yyvsp[-3].txt), (yyvsp[-2].txt), (yyvsp[0].txt), 4);
        CreateNode("for1", (yyvsp[0].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
        CreateNode("for1", (yyvsp[-3].txt),0);
    }
#line 2569 "y.tab.c"
    break;

  case 110:
#line 650 "program_test.y"
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
#line 2584 "y.tab.c"
    break;

  case 111:
#line 661 "program_test.y"
    {
        if(checkTableToAccess((yyvsp[-2].txt))){}
        else
            printf("ERROR : undefined variable \'%s\' in line No %d\n",(yyvsp[-2].txt), lineNo);

        CreateNode("for1", (yyvsp[0].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
    }
#line 2598 "y.tab.c"
    break;

  case 113:
#line 675 "program_test.y"
           {
        CreateNode("for2", tempArr3, 0);
        CreateNode("for2", tempArr2, 0);
        CreateNode("for2", tempArr1, 0);
    }
#line 2608 "y.tab.c"
    break;

  case 115:
#line 684 "program_test.y"
    {
        CreateNode("for3", tempArr3, 0);
        CreateNode("for3", tempArr2, 0);
        CreateNode("for3", tempArr1, 0);
    }
#line 2618 "y.tab.c"
    break;

  case 117:
#line 694 "program_test.y"
                                                 {
        CreateNode("whileExp", cat("wLoopStatement", loopval), 2);
        CreateNode("whileExp", tempArr3, 0);
        CreateNode("whileExp", tempArr2, 0);
        CreateNode("whileExp", tempArr1, 0);
        printf("%s\n", tempArr1);
        CreateNode("whileExp", "while", 0);
    }
#line 2631 "y.tab.c"
    break;

  case 118:
#line 705 "program_test.y"
          {loopval++;}
#line 2637 "y.tab.c"
    break;

  case 119:
#line 709 "program_test.y"
                                                {
        CreateNode("ifElse", "ifLoopStatement", 2);
        CreateNode("ifElse", tempArr3, 0);
        CreateNode("ifElse", tempArr2, 0);
        CreateNode("ifElse", tempArr1, 0);
        CreateNode("ifElse", "if",0 );
    }
#line 2649 "y.tab.c"
    break;

  case 120:
#line 716 "program_test.y"
                                                           {
        CreateNode("ifElse", "ifElse", 7);
        CreateNode("ifElse", "else", 0);
        CreateNode("ifElse", "ifLoopStatement", 2);
        CreateNode("ifElse", tempArr3, 0);
        CreateNode("ifElse", tempArr2, 0);
        CreateNode("ifElse", tempArr1, 0);
        CreateNode("ifElse", "if",0 );
    }
#line 2663 "y.tab.c"
    break;

  case 121:
#line 725 "program_test.y"
                          {
        CreateNode("ifElse", "ifLoopStatement", 2);
    }
#line 2671 "y.tab.c"
    break;

  case 122:
#line 730 "program_test.y"
       {loopval++;}
#line 2677 "y.tab.c"
    break;


#line 2681 "y.tab.c"

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
#line 732 "program_test.y"




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

