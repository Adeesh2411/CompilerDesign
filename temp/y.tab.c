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
    PRINTF = 293,
    SEMICOLON = 294,
    COMMA = 295,
    OP = 296,
    CP = 297,
    OB = 298,
    CB = 299,
    LOR = 300,
    LAND = 301,
    QUOTE = 302
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
#define PRINTF 293
#define SEMICOLON 294
#define COMMA 295
#define OP 296
#define CP 297
#define OB 298
#define CB 299
#define LOR 300
#define LAND 301
#define QUOTE 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 5 "program_test.y"

	char* txt;

#line 225 "y.tab.c"

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
typedef yytype_int16 yy_state_t;

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
#define YYLAST   754

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  335

#define YYUNDEFTOK  2
#define YYMAXUTOK   302


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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    21,    21,    37,    41,    51,    56,    61,    62,    63,
      64,    68,    69,    72,    79,    84,    90,   142,   172,   177,
     206,   213,   222,   238,   254,   295,   323,   328,   354,   361,
     368,   385,   386,   387,   388,   389,   392,   399,   410,   411,
     412,   416,   420,   424,   430,   434,   438,   444,   451,   456,
     464,   477,   482,   483,   487,   493,   497,   500,   503,   511,
     520,   523,   526,   534,   539,   544,   549,   550,   551,   555,
     563,   568,   573,   578,   579,   580,   581,   586,   590,   595,
     600,   605,   606,   607,   608,   613,   617,   622,   627,   632,
     633,   634,   635,   639,   642,   644,   646,   649,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     664,   674,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   703,   719,
     728,   739,   749,   760,   770,   775,   781,   784,   790,   795,
     807,   813,   821,   828,   837,   842
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
  "MUL", "DIV", "INC", "DEC", "PRINTF", "SEMICOLON", "COMMA", "OP", "CP",
  "OB", "CB", "LOR", "LAND", "QUOTE", "$accept", "program", "header",
  "nextPart", "pexp", "PvarXp", "CommaVar", "declaration", "assignList",
  "dummyExpr", "declarationLoop", "assignListLoop", "type", "variable",
  "lhs", "exp", "exp1", "exp2", "function", "funcVariable", "returnFunc",
  "funcPara", "nextPara", "stateTemp", "statements", "loopStatement",
  "wloopStatement", "ifloopStatement", "condExp", "$@1", "condExp1",
  "forExp", "ForName", "for1", "for2", "for3", "whileExp", "whileName",
  "dummyLabel", "ifElse", "ifName", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF (-173)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      42,    42,    26,   676,  -173,  -173,     4,  -173,  -173,  -173,
    -173,  -173,  -173,    20,  -173,   147,    61,    52,   147,  -173,
       2,  -173,    28,    78,     8,    34,    33,  -173,    79,    74,
    -173,  -173,    33,    79,   293,  -173,  -173,  -173,    33,  -173,
    -173,   154,     0,    56,    79,    83,   188,  -173,    79,    85,
    -173,    64,    33,    33,  -173,    77,    77,    17,  -173,   147,
    -173,    11,    96,  -173,     0,     0,    33,  -173,  -173,  -173,
      79,   104,  -173,    79,   339,   293,   524,   102,    99,   111,
     147,  -173,   114,  -173,  -173,  -173,  -173,   120,   573,   524,
      79,   150,  -173,   524,   125,   524,   135,   524,   136,  -173,
     149,    79,  -173,   293,    15,   151,   148,   573,    79,   185,
     166,   573,   573,   573,  -173,   339,   168,  -173,   172,  -173,
     161,  -173,   161,   147,  -173,  -173,    79,   173,  -173,    18,
    -173,   180,    38,    33,  -173,  -173,  -173,  -173,   184,  -173,
      79,   205,   192,    33,    33,    79,   675,   191,   196,  -173,
     195,   200,    79,   201,  -173,    33,    79,   167,  -173,   226,
     339,   161,    67,    67,   227,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,  -173,  -173,    33,    33,  -173,
     206,    49,   382,   204,   209,   197,  -173,  -173,   339,   213,
    -173,   218,    33,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,   216,   573,    79,   221,  -173,
      53,   477,    79,   223,   172,   663,    67,   597,   225,   228,
     382,    79,   240,  -173,  -173,   172,  -173,    33,    33,    79,
     708,  -173,   238,  -173,   224,   597,   237,   597,   597,   597,
     257,   247,  -173,   248,   477,  -173,    67,    67,   267,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,  -173,
    -173,    33,    33,   250,    19,  -173,  -173,  -173,  -173,  -173,
     -14,   382,   252,  -173,    33,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,   621,    79,   255,
    -173,  -173,   477,    67,   258,   621,   254,   621,   621,   621,
     262,   273,  -173,    21,  -173,  -173,  -173,  -173,  -173,    71,
     477,    79,   271,    79,   275,  -173,   280,   283,   286,   477,
      88,   477,   292,  -173,    79,   295,  -173,   477,   294,   477,
    -173,   296,  -173,   477,  -173
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     4,     1,     0,    36,    32,    31,
      34,    33,    35,     0,     2,     0,     0,     0,     0,    18,
       0,     5,    36,     0,    22,     0,     0,     6,    12,     0,
      13,    16,     0,     0,    57,    40,    38,    39,     0,    37,
      46,     0,    43,     0,    12,     0,    19,    20,     0,     0,
      56,     0,     0,     0,    17,     0,     0,     0,    11,     0,
      23,    55,     0,    47,    41,    42,     0,    48,    44,    45,
       0,     0,     9,     0,     0,    57,     0,     0,     0,    15,
       0,    21,    54,    59,   145,   140,   129,     0,     0,     0,
       0,    53,    60,     0,     0,     0,     0,     0,     0,    49,
       0,     0,     7,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,     0,     0,    63,   134,    64,
       0,    65,     0,     0,    14,    58,    12,     0,    26,     0,
      85,     0,    30,     0,   144,    86,    87,    88,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,    12,     0,    24,     0,     0,     0,    52,     0,
       0,   136,   103,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   101,   102,     0,     0,   141,
       0,     0,     0,     0,     0,    27,    28,    25,     0,   133,
     135,     0,     0,   106,    97,    98,    93,    95,   105,   108,
      99,   100,   107,    96,    94,     0,     0,     0,     0,    68,
       0,     0,     0,   131,   134,   138,   109,     0,     0,     0,
       0,     0,     0,    91,    29,   134,   132,     0,     0,     0,
       0,   137,     0,   110,     0,     0,     0,     0,     0,     0,
     142,     0,    66,     0,     0,   130,   121,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,    77,   139,    78,    79,    80,
       0,     0,     0,    89,     0,   124,   115,   116,   111,   113,
     123,   126,   117,   118,   125,   114,   112,     0,    12,     0,
     143,    67,     0,   127,     0,     0,     0,     0,     0,     0,
       0,     0,    90,     0,    69,   128,    70,    71,    72,     0,
       0,    12,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    75,     0,     0,     0,
      82,     0,    73,     0,    74
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -173,  -173,   337,    -4,   -38,  -102,  -100,    36,   -10,  -173,
     137,  -152,   244,    -3,   -36,   245,    93,   284,  -173,  -173,
    -173,   -59,  -173,    43,  -173,   -23,   142,  -104,   -90,  -173,
    -173,   169,  -173,  -172,  -173,  -173,   274,  -173,  -173,   -43,
    -173
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    14,    43,    29,    78,    15,    23,    73,
     107,   131,    16,    39,    40,   146,    42,    68,    18,    25,
     116,    49,    50,    91,    92,   296,   236,   110,   147,   233,
     231,   111,    94,   142,   191,   232,   112,    96,   205,   113,
      98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,   124,   127,   130,   186,     7,    58,   135,   136,   137,
      84,    21,    17,    24,    27,    17,    83,    30,     7,    67,
      67,     7,     7,    47,     7,    44,     5,   153,    32,    88,
      24,    74,   148,    97,    55,    56,     7,    35,    82,    36,
      37,    44,   226,    19,   125,    61,    97,     1,    33,    28,
      97,    75,    97,   245,    97,    72,    17,    70,   155,    71,
     224,    20,   126,    81,    22,   152,   288,    79,   311,   -51,
      24,   190,    26,    17,    38,    34,   102,    17,   156,   138,
       7,    35,     7,    36,    37,   109,    17,    24,   150,   207,
      17,   208,    17,   221,    17,   222,    52,    53,    79,    52,
      53,    30,   218,    57,   109,   132,    63,   219,   109,   109,
     109,   313,    89,   314,   183,   141,    45,    31,    66,   149,
      17,   243,    59,    44,   189,    89,    30,    62,   324,    89,
     325,    89,   114,    89,    52,    53,   117,   159,   119,    76,
     121,   100,   164,    80,    99,    64,    65,   -10,     6,    44,
       7,   101,   213,   132,   103,     8,     9,    10,    11,    12,
     -10,   104,   289,   115,     7,    35,   118,    36,    37,     8,
       9,    10,    11,    12,   239,     7,   120,   122,   209,    17,
       8,     9,    10,    11,    12,    13,    52,    53,   123,   129,
     128,   -10,   239,    54,   239,   239,   239,   143,   144,    52,
      53,   312,    38,   109,    79,   133,   187,   223,    17,   132,
     134,   141,   139,   318,   109,   151,   242,    17,    79,   154,
      52,    53,   141,   158,   328,   160,   248,   290,    60,    52,
      53,   161,   109,   179,   109,   109,   109,   212,   180,   182,
     273,    17,   181,   184,   299,    93,   188,   192,   211,   206,
     300,   210,   299,   214,   299,   299,   299,   215,    93,   217,
     220,    30,    93,   225,    93,   264,    93,   291,    17,   240,
     241,    41,   304,   316,   306,   307,   308,    46,    48,   244,
     263,   266,   270,    51,   109,    44,   271,   274,   302,    17,
     272,   292,   109,   287,   109,   109,   109,   301,   305,   303,
      30,     8,     9,    10,    11,    12,   315,    17,    44,   309,
      79,    77,   310,   317,   319,   323,    17,   326,    17,    48,
      90,    79,   321,   330,    17,   332,    17,   320,   322,   334,
      17,   327,   108,    90,   329,   333,   331,    90,     4,    90,
      69,    90,     7,    35,     0,    36,    37,    48,     0,     0,
      95,   108,     0,     0,   235,   108,   108,   108,     0,     0,
       0,     0,   140,    95,   145,     0,   145,    95,     0,    95,
       0,    95,   235,     0,   235,   235,   235,   265,   157,   267,
     268,   269,     0,     6,     0,     7,   237,     0,   162,   163,
       8,     9,    10,    11,    12,   -10,     0,     0,     0,     0,
     185,     0,     0,     0,   237,   145,   237,   237,   237,     0,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
      13,     0,   203,   204,   295,     0,   -10,     0,     0,     0,
       0,     0,   295,     0,   295,   295,   295,   216,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,     0,     0,     0,     0,     0,   297,     0,   140,   229,
     230,   108,     0,     0,   297,     0,   297,   297,   297,   140,
       0,     0,   246,   247,     0,     0,     0,     0,     6,   108,
       7,   108,   108,   108,     0,     8,     9,    10,    11,    12,
       0,   238,     0,     0,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,     0,     0,   285,   286,     0,   238,
       0,   238,   238,   238,     0,    13,     0,     0,     0,   293,
       0,   -10,     0,     0,     0,     6,     0,     7,     0,     0,
       0,   108,     8,     9,    10,    11,    12,   -61,     0,   108,
       0,   108,   108,   108,     0,     0,     0,     0,    84,     0,
       0,     0,    85,     0,     0,    86,     0,     0,     0,     0,
       0,   298,    87,     0,     0,     0,     0,    88,   -61,   298,
       0,   298,   298,   298,   105,     0,     7,     0,     0,     0,
       0,     8,     9,    10,    11,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,   105,     0,
       7,    85,     0,     0,    86,     8,     9,    10,    11,    12,
       0,   106,     0,     0,     0,     0,    88,   -92,     0,     0,
       0,    84,   105,     0,     7,    85,     0,     0,    86,     8,
       9,    10,    11,    12,     0,   234,     0,     0,     0,     0,
      88,   -84,     0,     0,     0,    84,     0,     0,     0,    85,
       0,     0,    86,     0,     0,     0,     0,     0,     0,   294,
       0,     0,     0,     0,    88,   -76,     7,    35,     0,    36,
      37,     8,     9,    10,    11,    12,   -10,     6,     0,     7,
       0,     0,     0,     0,     8,     9,    10,    11,    12,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   227,
     228,     0,     0,     0,    38,     0,     0,    52,    53,     0,
       0,   175,   176,     0,    13,     0,     0,     0,     0,     0,
     177,   178,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,     0,     0,   259,   260,     0,     0,     0,     0,
       0,     0,     0,   261,   262
};

static const yytype_int16 yycheck[] =
{
       3,   101,   104,   107,   156,     3,    44,   111,   112,   113,
      24,    15,    15,    16,    18,    18,    75,    20,     3,    55,
      56,     3,     3,    33,     3,    28,     0,   129,    20,    43,
      33,    20,   122,    76,    34,    35,     3,     4,    74,     6,
       7,    44,   214,    39,   103,    48,    89,     5,    40,    47,
      93,    40,    95,   225,    97,    59,    59,    40,    20,    42,
     212,    41,    47,    73,     3,    47,    47,    70,    47,    41,
      73,   161,    20,    76,    41,    41,    80,    80,    40,   115,
       3,     4,     3,     6,     7,    88,    89,    90,   126,    40,
      93,    42,    95,    40,    97,    42,    32,    33,   101,    32,
      33,   104,   206,    47,   107,   108,    42,   207,   111,   112,
     113,    40,    76,    42,   152,   118,    42,    39,    41,   123,
     123,   221,    39,   126,   160,    89,   129,    42,    40,    93,
      42,    95,    89,    97,    32,    33,    93,   140,    95,    43,
      97,    42,   145,    39,    42,    52,    53,     0,     1,   152,
       3,    40,   188,   156,    40,     8,     9,    10,    11,    12,
      13,    41,   264,    13,     3,     4,    41,     6,     7,     8,
       9,    10,    11,    12,   217,     3,    41,    41,   182,   182,
       8,     9,    10,    11,    12,    38,    32,    33,    39,    41,
      39,    44,   235,    39,   237,   238,   239,    36,    37,    32,
      33,   303,    41,   206,   207,    20,    39,   211,   211,   212,
      44,   214,    44,   313,   217,    42,   220,   220,   221,    39,
      32,    33,   225,    39,   324,    20,   229,   270,    40,    32,
      33,    39,   235,    42,   237,   238,   239,    40,    42,    39,
     244,   244,    47,    42,   287,    76,    20,    20,    39,    43,
     288,    47,   295,    40,   297,   298,   299,    39,    89,    43,
      39,   264,    93,    40,    95,    41,    97,   271,   271,    44,
      42,    26,   295,   311,   297,   298,   299,    32,    34,    39,
      42,    44,    25,    38,   287,   288,    39,    20,   292,   292,
      42,    39,   295,    43,   297,   298,   299,    42,    44,    41,
     303,     8,     9,    10,    11,    12,   310,   310,   311,    47,
     313,    66,    39,    42,    39,   319,   319,   321,   321,    75,
      76,   324,    39,   327,   327,   329,   329,    47,    42,   333,
     333,    39,    88,    89,    39,    39,    42,    93,     1,    95,
      56,    97,     3,     4,    -1,     6,     7,   103,    -1,    -1,
      76,   107,    -1,    -1,   217,   111,   112,   113,    -1,    -1,
      -1,    -1,   118,    89,   120,    -1,   122,    93,    -1,    95,
      -1,    97,   235,    -1,   237,   238,   239,   235,   133,   237,
     238,   239,    -1,     1,    -1,     3,   217,    -1,   143,   144,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,   235,   161,   237,   238,   239,    -1,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
      38,    -1,   177,   178,   287,    -1,    44,    -1,    -1,    -1,
      -1,    -1,   295,    -1,   297,   298,   299,   192,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,    -1,    -1,    -1,    -1,   287,    -1,   214,   215,
     215,   217,    -1,    -1,   295,    -1,   297,   298,   299,   225,
      -1,    -1,   227,   228,    -1,    -1,    -1,    -1,     1,   235,
       3,   237,   238,   239,    -1,     8,     9,    10,    11,    12,
      -1,   217,    -1,    -1,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,    -1,    -1,   261,   262,    -1,   235,
      -1,   237,   238,   239,    -1,    38,    -1,    -1,    -1,   274,
      -1,    44,    -1,    -1,    -1,     1,    -1,     3,    -1,    -1,
      -1,   287,     8,     9,    10,    11,    12,    13,    -1,   295,
      -1,   297,   298,   299,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,   287,    38,    -1,    -1,    -1,    -1,    43,    44,   295,
      -1,   297,   298,   299,     1,    -1,     3,    -1,    -1,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,     1,    -1,
       3,    28,    -1,    -1,    31,     8,     9,    10,    11,    12,
      -1,    38,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    24,     1,    -1,     3,    28,    -1,    -1,    31,     8,
       9,    10,    11,    12,    -1,    38,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    44,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,     0,     1,    -1,     3,
      -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    36,
      37,    -1,    -1,    -1,    41,    -1,    -1,    32,    33,    -1,
      -1,    36,    37,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      45,    46,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    49,    50,    50,     0,     1,     3,     8,     9,
      10,    11,    12,    38,    51,    55,    60,    61,    66,    39,
      41,    51,     3,    56,    61,    67,    20,    51,    47,    53,
      61,    39,    20,    40,    41,     4,     6,     7,    41,    61,
      62,    63,    64,    52,    61,    42,    63,    56,    60,    69,
      70,    63,    32,    33,    39,    34,    35,    47,    52,    39,
      40,    61,    42,    42,    64,    64,    41,    62,    65,    65,
      40,    42,    51,    57,    20,    40,    43,    63,    54,    61,
      39,    56,    62,    69,    24,    28,    31,    38,    43,    55,
      60,    71,    72,    79,    80,    84,    85,    87,    88,    42,
      42,    40,    51,    40,    41,     1,    38,    58,    60,    61,
      75,    79,    84,    87,    71,    13,    68,    71,    41,    71,
      41,    71,    41,    39,    54,    69,    47,    53,    39,    41,
      75,    59,    61,    20,    44,    75,    75,    75,    62,    44,
      60,    61,    81,    36,    37,    60,    63,    76,    76,    51,
      52,    42,    47,    53,    39,    20,    40,    63,    39,    61,
      20,    39,    63,    63,    61,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    36,    37,    45,    46,    42,
      42,    47,    39,    52,    42,    63,    59,    39,    20,    62,
      76,    82,    20,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    86,    43,    40,    42,    51,
      47,    39,    40,    62,    40,    39,    63,    43,    75,    54,
      39,    40,    42,    51,    59,    40,    81,    36,    37,    60,
      63,    78,    83,    77,    38,    58,    74,    79,    84,    87,
      44,    42,    51,    54,    39,    81,    63,    63,    61,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    36,
      37,    45,    46,    42,    41,    74,    44,    74,    74,    74,
      25,    39,    42,    51,    20,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    43,    47,    53,
      87,    51,    39,    63,    38,    58,    73,    79,    84,    87,
      52,    42,    51,    41,    73,    44,    73,    73,    73,    47,
      39,    47,    53,    40,    42,    51,    52,    42,    54,    39,
      47,    39,    42,    51,    40,    42,    51,    39,    54,    39,
      51,    42,    51,    39,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    52,    52,    53,    54,    54,    55,    55,    55,    56,
      56,    56,    56,    57,    58,    58,    58,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    61,    62,    62,    62,
      62,    63,    63,    63,    64,    64,    64,    64,    65,    65,
      66,    67,    68,    68,    69,    69,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    72,    72,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      76,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    79,    80,
      81,    81,    81,    81,    81,    82,    82,    83,    83,    84,
      85,    86,    87,    87,    87,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     8,    10,     6,
       0,     2,     0,     1,     3,     1,     3,     4,     2,     3,
       3,     6,     1,     0,     3,     4,     2,     3,     3,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       9,     1,     3,     0,     4,     2,     1,     0,     6,     4,
       1,     0,     2,     2,     2,     2,     8,    10,     6,     2,
       2,     2,     2,     8,    10,     6,     0,     2,     2,     2,
       2,     8,    10,     6,     0,     2,     2,     2,     2,     8,
      10,     6,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     0,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     4,    11,     1,
       6,     4,     5,     3,     0,     1,     0,     1,     0,     8,
       1,     0,     7,     9,     3,     1
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
             CreateTree();
             Inorder(treeLink[tl-1],0);
             addLevelNo();
             displayTree();

             OptimiseCode();
           
         }
#line 1720 "y.tab.c"
    break;

  case 3:
#line 38 "program_test.y"
        {
            CreateNode("header", (yyvsp[0].txt), 1);
        }
#line 1728 "y.tab.c"
    break;

  case 4:
#line 42 "program_test.y"
        {
            CreateNode("header", (yyvsp[-1].txt), 2);
            CreateNode("header","header",2);
        }
#line 1737 "y.tab.c"
    break;

  case 5:
#line 52 "program_test.y"
    {
        CreateNode("nextPart","declaration",2);
        CreateNode("nextPart", "nextPart", 2);       
    }
#line 1746 "y.tab.c"
    break;

  case 6:
#line 57 "program_test.y"
    {
        CreateNode("nextPart", "function", 4);
        CreateNode("nextPart", "nextPart", 2);
    }
#line 1755 "y.tab.c"
    break;

  case 13:
#line 72 "program_test.y"
             {
        if(!checkTableToAccess((yyvsp[0].txt)))
            printf("Error : %s is undefined\n",(yyvsp[0].txt));
    }
#line 1764 "y.tab.c"
    break;

  case 14:
#line 80 "program_test.y"
    {
       if(!checkTableToAccess((yyvsp[-2].txt)))
            printf("Error : %s is undefined\n",(yyvsp[-2].txt));
    }
#line 1773 "y.tab.c"
    break;

  case 15:
#line 84 "program_test.y"
             {
       if(!checkTableToAccess((yyvsp[0].txt)))
            printf("Error : %s is undefined\n",(yyvsp[0].txt));
    }
#line 1782 "y.tab.c"
    break;

  case 16:
#line 90 "program_test.y"
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
                        
                
                        CreateNode("declaration", "AssignList", 3);
                        CreateNode("declaration", (yyvsp[-2].txt), 0);
                    }
                }
                if(checkType((yyvsp[-2].txt), T.value)){
                    insert((yyvsp[-2].txt), T.name, T.value, 1);
                    pck = ck;ck=0;comaflag=0;
                    CreateNode("declaration", "AssignList", 3);
                    CreateNode("declaration", (yyvsp[-2].txt), 0);
                }
                else if(checkTableToAccess(T.value)){
                    insert((yyvsp[-2].txt),T.name,getValue(T.value), 1);
                    pck=ck;ck=0;comaflag=0;
                    CreateNode("declaration", "AssignList", 3);
                    CreateNode("declaration", (yyvsp[-2].txt), 0);
                }          
            }       
           
    }
#line 1838 "y.tab.c"
    break;

  case 17:
#line 143 "program_test.y"
    {
        if(!checkTableToAccess((yyvsp[-3].txt))){
            printf("ERROR : Undclared Type \'%s\' in Line No %d\n",(yyvsp[-3].txt), lineNo);
        }
        else{
            insert("", (yyvsp[-3].txt), (yyvsp[-1].txt), 2); // flag 2 for updating variable.
            
                     AssignExprLinkHandle(explPrev, (yyvsp[-3].txt));
         
        node *TTT = CreateNode("AssignList", "expr", 1);
        //printf("entered\n");
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev;
        
        CreateNode("AssignList", "=", 0);
        CreateNode("AssignList",(yyvsp[-3].txt),0);
        
         CreateNode("declaration", "AssignList", 3);
        CreateNode("declaration", "int", 0);    
            
        
        
        insertOptim((yyvsp[-3].txt));
        }
    }
#line 1870 "y.tab.c"
    break;

  case 18:
#line 172 "program_test.y"
                     {strcpy(prevToken, curToken); strcpy(curToken, "");}
#line 1876 "y.tab.c"
    break;

  case 19:
#line 177 "program_test.y"
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
        
         AssignExprLinkHandle(explPrev, (yyvsp[-2].txt));
         
        node *TTT = CreateNode("AssignList", "expr", 1);
        //printf("entered\n");
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev;
       
        CreateNode("AssignList", "=", 0);
        CreateNode("AssignList",(yyvsp[-2].txt),0);
        
        insertOptim((yyvsp[-2].txt));
	}
#line 1910 "y.tab.c"
    break;

  case 20:
#line 207 "program_test.y"
        {
	    comaflag = 1;   
	    strcpy(Tarr[ck++].name,(yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	    
	}
#line 1921 "y.tab.c"
    break;

  case 21:
#line 213 "program_test.y"
                                                       {
	    comaflag = 1;
	    strcpy(Tarr[ck++].name,(yyvsp[-5].txt));
	    strcpy(Tarr[ck-1].value, (yyvsp[-3].txt));
	    Tarr[ck-1].dflag = 1;
	  
    
	}
#line 1934 "y.tab.c"
    break;

  case 22:
#line 222 "program_test.y"
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
#line 1949 "y.tab.c"
    break;

  case 23:
#line 238 "program_test.y"
     {
                 AssignExprLinkHandle(explPrev,"--"); //TODO
         
        node *TTT = CreateNode("AssignList", "expr", 1);
        //printf("entered\n");
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev;
	    
        CreateNode("AssignList", "=", 0);
        CreateNode("AssignList",vArr,0);	
    }
#line 1967 "y.tab.c"
    break;

  case 24:
#line 254 "program_test.y"
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
#line 2012 "y.tab.c"
    break;

  case 25:
#line 296 "program_test.y"
    {
        if(!checkTableToAccess((yyvsp[-3].txt))){
            printf("ERROR : Undclared Type \'%s\' in Line No %d\n",(yyvsp[-3].txt), lineNo);
        }
        else{
            insert("", (yyvsp[-3].txt), (yyvsp[-1].txt), 2); // flag 2 for updating variable.
         AssignExprLinkHandle(explPrev, (yyvsp[-3].txt));
        
        node *TTT = CreateNode(cat1("AssignListLoop", loopval), "expr", 1);
        
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev;
        
        //CreateExprNode(strtok(exprToken,"!"), $3);
        //CreateNode(cat1("AssignListLoop", loopval),$3,exprCount);
        CreateNode(cat1("AssignListLoop", loopval), "=", 0);
        CreateNode(cat1("AssignListLoop", loopval),(yyvsp[-3].txt),0);
        CreateNode(cat("declarationLoop",loopval), cat1("AssignListLoop", loopval), 3);
        CreateNode(cat("declarationLoop",loopval), "int", 0);
            
            
        }
    }
#line 2042 "y.tab.c"
    break;

  case 26:
#line 323 "program_test.y"
                     {strcpy(prevToken, curToken); strcpy(curToken, "");}
#line 2048 "y.tab.c"
    break;

  case 27:
#line 328 "program_test.y"
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
        AssignExprLinkHandle(explPrev, (yyvsp[-2].txt));
        
        node *TTT = CreateNode(cat1("AssignListLoop", loopval), "expr", 1);
        
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev;
        
        CreateNode(cat1("AssignListLoop", loopval), "=", 0);
        CreateNode(cat1("AssignListLoop", loopval),(yyvsp[-2].txt),0);
	}
#line 2079 "y.tab.c"
    break;

  case 28:
#line 355 "program_test.y"
        {
	    comaflag = 1;   
	    strcpy(Tarr[ck++].name,(yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	    
	}
#line 2090 "y.tab.c"
    break;

  case 29:
#line 361 "program_test.y"
                                                 {
	    comaflag = 1;
	    strcpy(Tarr[ck++].name,(yyvsp[-4].txt));
	    strcpy(Tarr[ck-1].value, (yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	}
#line 2101 "y.tab.c"
    break;

  case 30:
#line 368 "program_test.y"
                   {
	    if(!comaflag){
    	    strcpy(T.name , (yyvsp[0].txt));
	        T.dflag = 4;
	    }
	    else{
	        strcpy(Tarr[ck++].name ,(yyvsp[0].txt));
	        Tarr[ck-1].dflag = 4;
	    }
	     CreateNode(cat1("AssignListLoop", loopval), "expr", 1);
	     CreateNode(cat1("AssignListLoop", loopval), "=", 0);
        CreateNode(cat1("AssignListLoop", loopval),(yyvsp[0].txt),0);    
	    }
#line 2119 "y.tab.c"
    break;

  case 32:
#line 386 "program_test.y"
          { }
#line 2125 "y.tab.c"
    break;

  case 36:
#line 392 "program_test.y"
        {
    
        strcpy(vArr, (yyvsp[0].txt));
    }
#line 2134 "y.tab.c"
    break;

  case 37:
#line 399 "program_test.y"
              {
        if(!checkTableToAccess((yyvsp[0].txt))){
            printf("ERROR : variable \'%s\' not defined in lineNo %d\n",(yyvsp[0].txt),lineNo);
            defineflag = 0;
        }
        else{
            defineflag=1;
            updateOpt((yyvsp[0].txt), 1);
            strcpy((yyval.txt), getValue((yyvsp[0].txt)));
        }
    }
#line 2150 "y.tab.c"
    break;

  case 40:
#line 412 "program_test.y"
         {(yyval.txt) = (yyvsp[0].txt);}
#line 2156 "y.tab.c"
    break;

  case 41:
#line 416 "program_test.y"
                  {
         (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 1);
         CreateExprNodeHandle("+");
    }
#line 2165 "y.tab.c"
    break;

  case 42:
#line 420 "program_test.y"
                  {
        CreateExprNodeHandle("-");
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 2);
    }
#line 2174 "y.tab.c"
    break;

  case 43:
#line 424 "program_test.y"
           {
        strcpy((yyval.txt), (yyvsp[0].txt));
    }
#line 2182 "y.tab.c"
    break;

  case 44:
#line 430 "program_test.y"
                   {
        CreateExprNodeHandle("*");
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 3);  
    }
#line 2191 "y.tab.c"
    break;

  case 45:
#line 434 "program_test.y"
                   {
        CreateExprNodeHandle("/");
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 4);
    }
#line 2200 "y.tab.c"
    break;

  case 46:
#line 438 "program_test.y"
         {
        
        CreateExprNodeHandle((yyvsp[0].txt));
        strcpy((yyval.txt),(yyvsp[0].txt));
    }
#line 2210 "y.tab.c"
    break;

  case 47:
#line 444 "program_test.y"
               {
       
        strcpy((yyval.txt), (yyvsp[-1].txt));
    }
#line 2219 "y.tab.c"
    break;

  case 48:
#line 451 "program_test.y"
         {
       CreateExprNodeHandle((yyvsp[0].txt));
        strcpy((yyval.txt), (yyvsp[0].txt));
        
    }
#line 2229 "y.tab.c"
    break;

  case 49:
#line 456 "program_test.y"
                {
       
        strcpy((yyval.txt),(yyvsp[-1].txt));
        
    }
#line 2239 "y.tab.c"
    break;

  case 50:
#line 465 "program_test.y"
    {
        
        insert((yyvsp[-8].txt),(yyvsp[-7].txt),"--",3 );
        CreateNode("function","Statement", 2);
        CreateNode("function", "funcPara", 4);
        CreateNode("function", (yyvsp[-7].txt), 0);
        CreateNode("function", (yyvsp[-8].txt),0);
        funcFlag = false;
       
    }
#line 2254 "y.tab.c"
    break;

  case 51:
#line 477 "program_test.y"
        {funcFlag = true;
        
    }
#line 2262 "y.tab.c"
    break;

  case 54:
#line 487 "program_test.y"
                             {
        CreateNode("funcPara",(yyvsp[0].txt),0);
        CreateNode("funcPara","=",0);
        CreateNode("funcPara", (yyvsp[-2].txt), 0);
        CreateNode("funcPara", (yyvsp[-3].txt), 0);
    }
#line 2273 "y.tab.c"
    break;

  case 55:
#line 493 "program_test.y"
                   {
        CreateNode("funcPara",(yyvsp[0].txt),0);
        CreateNode("funcPara", (yyvsp[-1].txt), 0);
    }
#line 2282 "y.tab.c"
    break;

  case 56:
#line 497 "program_test.y"
             {
        CreateNode("funcPara","nextPara",6);
    }
#line 2290 "y.tab.c"
    break;

  case 58:
#line 503 "program_test.y"
                                            {
        CreateNode("nextPara","funcPara",3);
        CreateNode("nextPara", ",", 0);
        CreateNode("nextPara", (yyvsp[-2].txt),0);
        CreateNode("nextPara", "=",0);
        CreateNode("nextPara",(yyvsp[-4].txt), 0);
        CreateNode("nextPara", (yyvsp[-5].txt), 0);
    }
#line 2303 "y.tab.c"
    break;

  case 59:
#line 511 "program_test.y"
                                 {
        CreateNode("nextPara","funcPara",3);
        CreateNode("nextPara", ",", 0);
        CreateNode("nextPara",(yyvsp[-2].txt), 0);
        CreateNode("nextPara", (yyvsp[-3].txt), 0);
    }
#line 2314 "y.tab.c"
    break;

  case 60:
#line 520 "program_test.y"
               {
        
    }
#line 2322 "y.tab.c"
    break;

  case 62:
#line 527 "program_test.y"
    {
        for(int i=0;i<=pck;i++){
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "declaration", 2);
        }
        pck=0;
    }
#line 2334 "y.tab.c"
    break;

  case 63:
#line 535 "program_test.y"
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "forExp", 5);
    }
#line 2343 "y.tab.c"
    break;

  case 64:
#line 540 "program_test.y"
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "whileExp", 5);
    }
#line 2352 "y.tab.c"
    break;

  case 65:
#line 545 "program_test.y"
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "ifElse", 7);
    }
#line 2361 "y.tab.c"
    break;

  case 69:
#line 555 "program_test.y"
                                  {
        
        strcpy(tempArr2, cat1("declarationLoop",loopval));
        
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), tempArr2, 2);
        //printf("%s\n",tempArr2);
    }
#line 2374 "y.tab.c"
    break;

  case 70:
#line 564 "program_test.y"
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval),"forExp",5 );
    }
#line 2383 "y.tab.c"
    break;

  case 71:
#line 569 "program_test.y"
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "whileExp", 5);
    }
#line 2392 "y.tab.c"
    break;

  case 72:
#line 574 "program_test.y"
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "ifElse", 7);
    }
#line 2401 "y.tab.c"
    break;

  case 77:
#line 586 "program_test.y"
                                   {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval), cat1("declarationLoop",loopval), 2);
    }
#line 2410 "y.tab.c"
    break;

  case 78:
#line 591 "program_test.y"
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval),"forExp",5 );
    }
#line 2419 "y.tab.c"
    break;

  case 79:
#line 596 "program_test.y"
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "whileExp", 5);
    }
#line 2428 "y.tab.c"
    break;

  case 80:
#line 601 "program_test.y"
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval), "ifElse", 7);
    }
#line 2437 "y.tab.c"
    break;

  case 85:
#line 613 "program_test.y"
                                    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), cat1("declarationLoop",loopval), 2);
    }
#line 2446 "y.tab.c"
    break;

  case 86:
#line 618 "program_test.y"
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval),"forExp",5 );
    }
#line 2455 "y.tab.c"
    break;

  case 87:
#line 623 "program_test.y"
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), "whileExp", 5);
    }
#line 2464 "y.tab.c"
    break;

  case 88:
#line 628 "program_test.y"
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), "ifElse", 7);
    }
#line 2473 "y.tab.c"
    break;

  case 93:
#line 639 "program_test.y"
                 {
       strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));
     }
#line 2481 "y.tab.c"
    break;

  case 94:
#line 642 "program_test.y"
                 { strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));
    }
#line 2488 "y.tab.c"
    break;

  case 95:
#line 644 "program_test.y"
               {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt)); 
    }
#line 2495 "y.tab.c"
    break;

  case 96:
#line 647 "program_test.y"
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));
    }
#line 2502 "y.tab.c"
    break;

  case 97:
#line 650 "program_test.y"
    {
    strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));
    }
#line 2510 "y.tab.c"
    break;

  case 98:
#line 653 "program_test.y"
               {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2516 "y.tab.c"
    break;

  case 99:
#line 654 "program_test.y"
              {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2522 "y.tab.c"
    break;

  case 100:
#line 655 "program_test.y"
              {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2528 "y.tab.c"
    break;

  case 101:
#line 656 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2534 "y.tab.c"
    break;

  case 102:
#line 657 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2540 "y.tab.c"
    break;

  case 103:
#line 658 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2546 "y.tab.c"
    break;

  case 104:
#line 659 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2552 "y.tab.c"
    break;

  case 105:
#line 660 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2558 "y.tab.c"
    break;

  case 106:
#line 661 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2564 "y.tab.c"
    break;

  case 107:
#line 662 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2570 "y.tab.c"
    break;

  case 108:
#line 663 "program_test.y"
                   {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2576 "y.tab.c"
    break;

  case 109:
#line 664 "program_test.y"
                              {strcpy(tempArr1, (yyvsp[-3].txt));strcpy(tempArr2, (yyvsp[-2].txt));strcpy(tempArr3, (yyvsp[-1].txt));}
#line 2582 "y.tab.c"
    break;

  case 110:
#line 665 "program_test.y"
    {
        insert((yyvsp[-4].txt), (yyvsp[-3].txt), (yyvsp[-1].txt), 4);
        {strcpy(tempArr1, (yyvsp[-4].txt));strcpy(tempArr2, (yyvsp[-3].txt));strcpy(tempArr3, (yyvsp[-2].txt));}
    }
#line 2591 "y.tab.c"
    break;

  case 111:
#line 674 "program_test.y"
                 {
        strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));
     }
#line 2599 "y.tab.c"
    break;

  case 112:
#line 677 "program_test.y"
                 {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2605 "y.tab.c"
    break;

  case 113:
#line 678 "program_test.y"
               {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2611 "y.tab.c"
    break;

  case 114:
#line 679 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2617 "y.tab.c"
    break;

  case 115:
#line 680 "program_test.y"
               {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2623 "y.tab.c"
    break;

  case 116:
#line 681 "program_test.y"
               {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2629 "y.tab.c"
    break;

  case 117:
#line 682 "program_test.y"
              {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2635 "y.tab.c"
    break;

  case 118:
#line 683 "program_test.y"
              {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2641 "y.tab.c"
    break;

  case 119:
#line 684 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2647 "y.tab.c"
    break;

  case 120:
#line 685 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2653 "y.tab.c"
    break;

  case 121:
#line 686 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2659 "y.tab.c"
    break;

  case 122:
#line 687 "program_test.y"
            {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2665 "y.tab.c"
    break;

  case 123:
#line 688 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2671 "y.tab.c"
    break;

  case 124:
#line 689 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2677 "y.tab.c"
    break;

  case 125:
#line 690 "program_test.y"
                {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2683 "y.tab.c"
    break;

  case 126:
#line 691 "program_test.y"
                   {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2689 "y.tab.c"
    break;

  case 127:
#line 693 "program_test.y"
    {
        insert((yyvsp[-3].txt), (yyvsp[-2].txt), (yyvsp[0].txt), 4);
        strcpy(tempArr1, (yyvsp[-3].txt));strcpy(tempArr2, (yyvsp[-2].txt));strcpy(tempArr3, (yyvsp[-1].txt));
    }
#line 2698 "y.tab.c"
    break;

  case 128:
#line 704 "program_test.y"
    {
        CreateNode("look", "forOpen", 0);
        CreateNode("forExp", cat("LoopStatement",loopval), 2);
        CreateNode("forExp", "for3", 6);
        CreateNode("forExp", "for2", 6);
        CreateNode("forExp", "for1", 6);
        CreateNode("forExp", "for", 0);
        loopFlag = false;
        fprintf(IcodeFile, "%d. T_ = %s %c %s\n",lineNo, varFor, tempArr3[0], tempArr1);
        fprintf(IcodeFile, "%d. %s = T_\n",lineNo, varFor);     
        fprintf(IcodeFile, "goto %s\n%s : ",cat5("L",labelTemp-3), cat6("L",labelTemp-1));  
    }
#line 2715 "y.tab.c"
    break;

  case 129:
#line 719 "program_test.y"
        {loopFlag = true; 
        ++loopval;
        
     }
#line 2724 "y.tab.c"
    break;

  case 130:
#line 729 "program_test.y"
    {
        insert((yyvsp[-5].txt), (yyvsp[-4].txt), (yyvsp[-2].txt), 4);
        CreateNode("for1", "for1", 6);
        CreateNode("for1", ",", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-4].txt), 0);
        CreateNode("for1", (yyvsp[-5].txt), 0);
        fprintf(IcodeFile, "%s : %d. %s = %s\n",cat5("L",labelTemp++), lineNo, (yyvsp[-4].txt), (yyvsp[-2].txt));       
    }
#line 2739 "y.tab.c"
    break;

  case 131:
#line 740 "program_test.y"
    {
         insert((yyvsp[-3].txt), (yyvsp[-2].txt), (yyvsp[0].txt), 4);
        CreateNode("for1", (yyvsp[0].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
        CreateNode("for1", (yyvsp[-3].txt),0);
        fprintf(IcodeFile, "%s : %s = %s\n",cat5("L",labelTemp++), (yyvsp[-2].txt), (yyvsp[0].txt)); 
        strcpy(varFor, (yyvsp[-2].txt));
    }
#line 2753 "y.tab.c"
    break;

  case 132:
#line 750 "program_test.y"
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
#line 2768 "y.tab.c"
    break;

  case 133:
#line 761 "program_test.y"
    {
        if(checkTableToAccess((yyvsp[-2].txt))){}
        else
            printf("ERROR : undefined variable \'%s\' in line No %d\n",(yyvsp[-2].txt), lineNo);

        CreateNode("for1", (yyvsp[0].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
    }
#line 2782 "y.tab.c"
    break;

  case 135:
#line 775 "program_test.y"
           {
        CreateNode("for2", tempArr3, 0);
        CreateNode("for2", tempArr2, 0);
        CreateNode("for2", tempArr1, 0);
        fprintf(IcodeFile, "%s : if (%s %s %s) goto %s\ngoto %s\n%s : ",cat5("L",labelTemp), tempArr1, tempArr2, tempArr3,cat6("L",labelTemp+1), cat7("L",labelTemp+2), cat6("L",labelTemp-1)); labelTemp +=3;
    }
#line 2793 "y.tab.c"
    break;

  case 137:
#line 785 "program_test.y"
    {
        CreateNode("for3", tempArr3, 0);
        CreateNode("for3", tempArr2, 0);
        CreateNode("for3", tempArr1, 0);
    }
#line 2803 "y.tab.c"
    break;

  case 139:
#line 795 "program_test.y"
                                                            {
        CreateNode("whileExp", cat("wLoopStatement", loopval), 2);
        CreateNode("whileExp", tempArr3, 0);
        CreateNode("whileExp", tempArr2, 0);
        CreateNode("whileExp", tempArr1, 0);
        //printf("%s\n", tempArr1);
        CreateNode("whileExp", "while", 0);
        fprintf(IcodeFile, "goto %s\n%s:\n",cat5("L",labelTemp-3), cat6("L", labelTemp-2) );
    }
#line 2817 "y.tab.c"
    break;

  case 140:
#line 807 "program_test.y"
          {loopval++;
        fprintf(IcodeFile, "%s : if",cat5("L",labelTemp++));
    }
#line 2825 "y.tab.c"
    break;

  case 141:
#line 813 "program_test.y"
     {
        char array[100];
        strcpy(array, tempArr1);strcat(array, tempArr2);strcat(array, tempArr3);
        fprintf(IcodeFile, "(%s) goto %s\ngoto %s\n%s : ",array,cat5("L",labelTemp++), cat6("L", ++labelTemp-1), cat5("L",labelTemp-2));
    }
#line 2835 "y.tab.c"
    break;

  case 142:
#line 821 "program_test.y"
                                                {
        CreateNode("ifElse", cat("ifLoopStatement",loopval), 2);
        CreateNode("ifElse", tempArr3, 0);
        CreateNode("ifElse", tempArr2, 0);
        CreateNode("ifElse", tempArr1, 0);
        CreateNode("ifElse", "if",0 );
    }
#line 2847 "y.tab.c"
    break;

  case 143:
#line 828 "program_test.y"
                                                           {
        CreateNode("ifElse", "ifElse", 7);
        CreateNode("ifElse", "else", 0);
        CreateNode("ifElse", cat("ifLoopStatement",loopval), 2);
        CreateNode("ifElse", tempArr3, 0);
        CreateNode("ifElse", tempArr2, 0);
        CreateNode("ifElse", tempArr1, 0);
        CreateNode("ifElse", "if",0 );
    }
#line 2861 "y.tab.c"
    break;

  case 144:
#line 837 "program_test.y"
                          {
        CreateNode("ifElse", cat("ifLoopStatement",loopval), 2);
    }
#line 2869 "y.tab.c"
    break;

  case 145:
#line 842 "program_test.y"
       {loopval++;}
#line 2875 "y.tab.c"
    break;


#line 2879 "y.tab.c"

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
#line 844 "program_test.y"




int main() 
{  
    yyin = fopen("program.c", "r"); // input file for program
    yyout = fopen("out.txt","w"); //for SymbolTable
    tempFile = fopen("token.txt","w"); // all the tokens available here
    treeFile = fopen("tree.txt","w"); // used by tree.py for creating tree
    IcodeFile = fopen("Icode.txt","w"); // intermediate code can be found
    
	yyparse(); 

	fclose(yyout);
	fclose(yyin);
	
	return 0;
} 

