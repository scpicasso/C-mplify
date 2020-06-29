/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc.y" /* yacc.c:339  */

	#include <stdio.h>
    #include "node.h"
    #include "variable_handler.h"    
    #include "compiler.h"

    int yylex();
	void yyerror(char * s);
    void headers();

#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    add = 258,
    sub = 259,
    mult = 260,
    divi = 261,
    t_string = 262,
    t_int = 263,
    def = 264,
    t_scanf = 265,
    t_printf = 266,
    increase = 267,
    decrease = 268,
    open_while = 269,
    close_while = 270,
    open_if = 271,
    close_if = 272,
    and = 273,
    or = 274,
    equal = 275,
    neq = 276,
    seq = 277,
    smaller = 278,
    beq = 279,
    bigger = 280,
    main_func = 281,
    comma = 282,
    close_par = 283,
    open_par = 284,
    open_func = 285,
    t_ret = 286,
    end_func = 287,
    end = 288,
    int_var = 289,
    string_var = 290,
    var_name = 291
  };
#endif
/* Tokens.  */
#define add 258
#define sub 259
#define mult 260
#define divi 261
#define t_string 262
#define t_int 263
#define def 264
#define t_scanf 265
#define t_printf 266
#define increase 267
#define decrease 268
#define open_while 269
#define close_while 270
#define open_if 271
#define close_if 272
#define and 273
#define or 274
#define equal 275
#define neq 276
#define seq 277
#define smaller 278
#define beq 279
#define bigger 280
#define main_func 281
#define comma 282
#define close_par 283
#define open_par 284
#define open_func 285
#define t_ret 286
#define end_func 287
#define end 288
#define int_var 289
#define string_var 290
#define var_name 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "yacc.y" /* yacc.c:355  */

	struct Node * node;
	char * value;

#line 194 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 211 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  127

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    50,    51,    54,    59,    62,    73,    74,
      77,    82,    85,    86,    89,   101,   105,   109,   123,   124,
     125,   132,   141,   142,   145,   146,   147,   148,   151,   152,
     156,   176,   182,   189,   190,   191,   192,   193,   194,   197,
     198,   201,   206,   209,   221,   226,   229,   239,   243,   246,
     258,   263,   267,   270,   271,   272,   273,   274,   275,   276,
     279,   288,   297,   309,   323,   329,   330,   333,   342,   352
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "add", "sub", "mult", "divi", "t_string",
  "t_int", "def", "t_scanf", "t_printf", "increase", "decrease",
  "open_while", "close_while", "open_if", "close_if", "and", "or", "equal",
  "neq", "seq", "smaller", "beq", "bigger", "main_func", "comma",
  "close_par", "open_par", "open_func", "t_ret", "end_func", "end",
  "int_var", "string_var", "var_name", "$accept", "PROGRAM", "DEFINED_V",
  "DEF_VARS", "DEF_VAR", "GLOB_VARS", "VARS", "VAR", "DECLARE", "ASSIGN",
  "REASSIGN", "EXP", "OP", "TYPE", "EVALUATE", "COMP", "DEFINED_F",
  "DEF_FUNCS", "DEF_FUNC", "ARGS", "ARG", "FUNCS", "FUNC", "BODY", "LINE",
  "INC", "DEC", "PRINT", "SCAN", "RET", "BLOCK", "IFBLOCK", "WHILEBLOCK",
  "MAIN_FUNC", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -86

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define YYTABLE_NINF -33

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,   -29,    21,    -2,   -86,    -7,   101,   -86,   -86,   -86,
     101,     0,   -86,     7,   -86,   -86,    29,     2,   101,   -86,
     -86,   -86,   100,   -86,    42,   100,    55,    46,   -86,    10,
      -2,   101,   -86,    52,   101,   101,   101,   101,   -86,   -86,
     -86,   -86,   -86,   -86,   101,   101,   101,    62,    55,    68,
      46,     0,   -86,   -86,   100,   -86,    91,    91,   118,   118,
     100,   100,    31,    99,    55,    63,    55,   -86,   -86,   -86,
      71,    70,    81,    55,    80,   -86,   -86,    55,    82,    55,
     -86,    89,    98,     6,   103,   102,   105,   101,   101,   101,
      66,   -86,   -86,    96,   111,   -86,   -86,   -86,   -86,   -86,
       6,   -86,   -86,     6,    93,   101,    -9,    48,   100,   -86,
     -86,   -86,     6,   -86,   113,   119,    65,     6,     6,   -86,
     -86,   -86,   -86,   131,   132,   -86,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     9,     3,     0,     0,     1,    28,    29,
       0,    40,     8,     0,    12,    13,     0,     6,     0,    19,
      18,    20,     7,    22,    23,    17,     0,    48,    39,     0,
      11,    16,     5,     0,     0,     0,     0,     0,    33,    34,
      38,    36,    37,    35,     0,     0,     0,     0,     0,     0,
      48,    42,    10,    14,    15,    21,    24,    25,    26,    27,
      30,     0,    23,    23,    45,     0,     0,     2,    47,    41,
       0,     0,     0,    45,     0,    46,    43,    45,     0,    45,
      44,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,    54,    53,     0,     0,    55,    56,    57,    58,    59,
      52,    65,    66,    52,     0,     0,    23,    23,    64,    60,
      61,    49,    52,    51,     0,     0,     0,    52,    52,    50,
      69,    63,    62,     0,     0,    68,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   133,   -86,   -86,   121,   -86,     5,   -86,
      16,    -6,   -86,   -25,   -43,   -86,   -86,    97,   -86,   -26,
     -86,   104,   -86,   -85,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    11,    12,    13,    91,    53,
      92,    61,    23,    16,    24,    44,    27,    28,    29,    71,
      72,    49,    50,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      22,    47,    62,    63,    25,     8,     9,     6,    14,    45,
      46,     1,    33,     8,     9,   113,    85,    86,   114,    15,
      87,     7,    88,    65,   117,    54,    17,   119,    56,    57,
      58,    59,   123,   124,    10,    14,    26,    89,    60,    70,
      30,    74,    90,    51,   106,   107,    15,    78,    70,   -31,
      46,    80,    70,    82,    70,    34,    35,    36,    37,   -31,
      45,    46,     8,     9,   -31,    31,    45,    46,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   109,   110,
      55,   118,    48,   108,    25,    38,    39,    40,    41,    42,
      43,    64,    73,   122,    66,    18,    36,    37,    76,   116,
      19,    20,    21,    34,    35,    36,    37,    75,    77,    79,
      81,    38,    39,    40,    41,    42,    43,   -32,   -32,    83,
      38,    39,    40,    41,    42,    43,    84,   -32,   111,   115,
      18,   104,   -32,   103,   105,    19,    20,    21,    38,    39,
      40,    41,    42,    43,   112,   120,   125,   121,    69,   126,
      32,    52,     0,     0,    68
};

static const yytype_int8 yycheck[] =
{
       6,    26,    45,    46,    10,     7,     8,    36,     3,    18,
      19,     9,    18,     7,     8,   100,    10,    11,   103,     3,
      14,     0,    16,    48,    33,    31,    33,   112,    34,    35,
      36,    37,   117,   118,    36,    30,    36,    31,    44,    64,
      33,    66,    36,    33,    87,    88,    30,    73,    73,    18,
      19,    77,    77,    79,    79,     3,     4,     5,     6,    28,
      18,    19,     7,     8,    33,    36,    18,    19,     3,     4,
       5,     6,    20,    21,    22,    23,    24,    25,    12,    13,
      28,    33,    36,    89,    90,    20,    21,    22,    23,    24,
      25,    29,    29,    28,    26,    29,     5,     6,    28,   105,
      34,    35,    36,     3,     4,     5,     6,    36,    27,    29,
      28,    20,    21,    22,    23,    24,    25,    18,    19,    30,
      20,    21,    22,    23,    24,    25,    28,    28,    32,    36,
      29,    29,    33,    30,    29,    34,    35,    36,    20,    21,
      22,    23,    24,    25,    33,    32,    15,    28,    51,    17,
      17,    30,    -1,    -1,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    38,    39,    40,    41,    36,     0,     7,     8,
      36,    42,    43,    44,    45,    47,    50,    33,    29,    34,
      35,    36,    48,    49,    51,    48,    36,    53,    54,    55,
      33,    36,    40,    48,     3,     4,     5,     6,    20,    21,
      22,    23,    24,    25,    52,    18,    19,    50,    36,    58,
      59,    33,    43,    46,    48,    28,    48,    48,    48,    48,
      48,    48,    51,    51,    29,    50,    26,    70,    58,    54,
      50,    56,    57,    29,    50,    36,    28,    27,    56,    29,
      56,    28,    56,    30,    28,    10,    11,    14,    16,    31,
      36,    45,    47,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    30,    29,    29,    51,    51,    48,    12,
      13,    32,    33,    60,    60,    36,    48,    33,    33,    60,
      32,    28,    28,    60,    60,    15,    17
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    41,    42,    42,
      43,    43,    44,    44,    45,    46,    46,    47,    48,    48,
      48,    48,    48,    48,    49,    49,    49,    49,    50,    50,
      51,    51,    51,    52,    52,    52,    52,    52,    52,    53,
      53,    54,    54,    55,    56,    56,    57,    58,    58,    59,
      60,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      62,    63,    64,    65,    66,    67,    67,    68,    69,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     1,     0,     3,     0,     3,     1,     0,
       3,     0,     1,     1,     3,     1,     0,     2,     1,     1,
       1,     3,     1,     1,     3,     3,     3,     3,     1,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     5,     3,     0,     2,     2,     0,     8,
       3,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     4,     4,     2,     1,     1,     5,     5,     8
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 39 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
																append((yyval.node), (yyvsp[-4].node));
																append((yyval.node), (yyvsp[-3].node));
																append((yyval.node), (yyvsp[-2].node));
																append((yyval.node), (yyvsp[-1].node));
																append((yyval.node), (yyvsp[0].node));
																headers();
																inorder((yyval.node));
															}
#line 1390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 50 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 51 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;}
#line 1402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 54 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
															append((yyval.node), (yyvsp[-2].node));
															append((yyval.node), newNode(READ_AS_TYPE,"\n"));
															append((yyval.node),(yyvsp[0].node));
														}
#line 1412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 59 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;}
#line 1418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "yacc.y" /* yacc.c:1646  */
    {	if(addVariable((yyvsp[-1].value), (yyvsp[0].node)->type) == -1) {							
																yyerror("Variable limit surpassed \n");
															}
															(yyval.node) = newNode((yyvsp[0].node)->type, NULL);
															append((yyval.node), newNode(READ_AS_TYPE, "#define "));
															append((yyval.node), newNode(READ_AS_TYPE, (yyvsp[-1].value)));
															append((yyval.node), newNode(READ_AS_TYPE, " "));
															append((yyval.node), (yyvsp[0].node));
														}
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 74 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;}
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
															append((yyval.node), (yyvsp[-2].node));
															append((yyval.node), newNode(READ_AS_TYPE, ";\n"));
															append((yyval.node), (yyvsp[0].node));
														}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 82 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;}
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 85 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node)=(yyvsp[0].node);}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 86 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node)=(yyvsp[0].node);}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 89 "yacc.y" /* yacc.c:1646  */
    {	if(addVariable((yyvsp[-1].value), (yyvsp[-2].node)->type) == -1) {																yyerror("Variable limit surpassed \n");
																}
																if((yyvsp[0].node) != NULL && ((yyvsp[-2].node)->type != (yyvsp[0].node)->type)) {
																	yyerror("Cannot assign incompatible types \n");
																}
																(yyval.node) = newNode(EMPTY_TYPE, NULL);
																append((yyval.node), (yyvsp[-2].node));
																append((yyval.node), newNode(READ_AS_TYPE, (yyvsp[-1].value)));
																append((yyval.node), (yyvsp[0].node));
															}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 101 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode((yyvsp[0].node)->type, NULL);
															append((yyval.node), newNode(READ_AS_TYPE, " = "));
															append((yyval.node), (yyvsp[0].node));
														}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 105 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 109 "yacc.y" /* yacc.c:1646  */
    {	int var_type = getType((yyvsp[-1].value));
															if(var_type == -1) {
																yyerror("Undeclared variable \n");
															}
															if(var_type != (yyvsp[0].node)->type) {
																yyerror("Cannot assign incompatible types \n");
															}
															(yyval.node) = newNode(EMPTY_TYPE, NULL);
															append((yyval.node), newNode(READ_AS_TYPE, (yyvsp[-1].value)));
															append((yyval.node), newNode(READ_AS_TYPE, " = "));
															append((yyval.node), (yyvsp[0].node));
														}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 123 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(STR_TYPE, (yyvsp[0].value));}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 124 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(INT_TYPE, (yyvsp[0].value));}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 125 "yacc.y" /* yacc.c:1646  */
    {	int var_type = getType((yyvsp[0].value));
															if (var_type == -1) {
																yyerror("Undeclared variable");
															}
															(yyval.node) = newNode(var_type, NULL);
															append((yyval.node), newNode(READ_AS_TYPE, (yyvsp[0].value)));
														}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 132 "yacc.y" /* yacc.c:1646  */
    {
															(yyval.node) = (yyvsp[-1].node);
															if ((yyvsp[-1].node)->value == NULL) {
																(yyval.node) = newNode((yyvsp[-1].node)->type, NULL);
																append((yyval.node), newNode(READ_AS_TYPE, "("));
																append((yyval.node), (yyvsp[-1].node));
																append((yyval.node), newNode(READ_AS_TYPE,")"));
															}
														}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 141 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 142 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 145 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = addExp((yyvsp[-2].node), (yyvsp[0].node));}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 146 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = subExp((yyvsp[-2].node), (yyvsp[0].node));}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 147 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = multExp((yyvsp[-2].node), (yyvsp[0].node));}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 148 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = divExp((yyvsp[-2].node), (yyvsp[0].node));}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 151 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(STR_TYPE, "char* ");}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 152 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(INT_TYPE, "int ");}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 156 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
															if ((yyvsp[-2].node)->type == INT_TYPE && (yyvsp[0].node)->type == INT_TYPE) {
																append((yyval.node), (yyvsp[-2].node));
																append((yyval.node), (yyvsp[-1].node));
																append((yyval.node), (yyvsp[0].node));
															}
															else if ((yyvsp[-2].node)->type == STR_TYPE && (yyvsp[0].node)->type == STR_TYPE) {
																append((yyval.node), newNode(READ_AS_TYPE, "strcmp("));
																append((yyval.node), (yyvsp[-2].node));
																append((yyval.node), newNode(READ_AS_TYPE,", "));
																append((yyval.node), (yyvsp[0].node));
																append((yyval.node), newNode(READ_AS_TYPE, ")"));
																append((yyval.node), (yyvsp[-1].node));
																append((yyval.node), newNode(READ_AS_TYPE, "0"));	
															}
															else {
																yyerror("Comparing incompatible types");
															}
														}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 176 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
					 										append((yyval.node),(yyvsp[-2].node));
					 										append((yyval.node), newNode(READ_AS_TYPE, "&&"));
					 										append((yyval.node),(yyvsp[0].node));
					 									}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 182 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
					 										append((yyval.node),(yyvsp[-2].node));
					 										append((yyval.node), newNode(READ_AS_TYPE, "||"));
					 										append((yyval.node),(yyvsp[0].node));
					 									}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 189 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(READ_AS_TYPE, "==");}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 190 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(READ_AS_TYPE, "!=");}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 191 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(READ_AS_TYPE, ">");}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 192 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(READ_AS_TYPE, "<");}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 193 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(READ_AS_TYPE, ">=");}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 194 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(READ_AS_TYPE, "<=");}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 197 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 198 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 201 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
															append((yyval.node), (yyvsp[-2].node));
															append((yyval.node), newNode(READ_AS_TYPE, ";\n"));
															append((yyval.node), (yyvsp[0].node));
														}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 206 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 209 "yacc.y" /* yacc.c:1646  */
    {	if(addVariable((yyvsp[-4].value), (yyvsp[-3].node)->type) == -1) {							
																yyerror("Variable limit surpassed \n");
															}
															(yyval.node) = newNode(EMPTY_TYPE, NULL);
															append((yyval.node), (yyvsp[-3].node));
															append((yyval.node), newNode(READ_AS_TYPE, (yyvsp[-4].value)));
															append((yyval.node), newNode(READ_AS_TYPE, "("));
															append((yyval.node), (yyvsp[-1].node));
															append((yyval.node), newNode(READ_AS_TYPE, ")"));
															}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 221 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
															append((yyval.node),(yyvsp[-2].node));
															append((yyval.node), newNode(READ_AS_TYPE, ","));
															append((yyval.node), (yyvsp[0].node));
														}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 226 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 229 "yacc.y" /* yacc.c:1646  */
    {	if(addVariable((yyvsp[0].value), (yyvsp[-1].node)->type) == -1) {
																yyerror("Variable limit surpassed \n");
															}

															(yyval.node) = newNode(EMPTY_TYPE, NULL);
															append((yyval.node),(yyvsp[-1].node));
															append((yyval.node), newNode(READ_AS_TYPE, (yyvsp[0].value)));
														}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 239 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
															append((yyval.node), (yyvsp[-1].node));
															append((yyval.node), (yyvsp[0].node));
														}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 243 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 246 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
																			append((yyval.node), (yyvsp[-6].node));
																			append((yyval.node), newNode(READ_AS_TYPE, (yyvsp[-7].value)));
																			append((yyval.node), newNode(READ_AS_TYPE, "("));
																			append((yyval.node), (yyvsp[-4].node));
																			append((yyval.node), newNode(READ_AS_TYPE, ")"));
																			append((yyval.node), newNode(READ_AS_TYPE, "{\n"));
																			append((yyval.node), (yyvsp[-1].node));
																			append((yyval.node), newNode(READ_AS_TYPE, "\n} \n"));
																	}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 258 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
																		append((yyval.node), (yyvsp[-2].node));
																		append((yyval.node), newNode(READ_AS_TYPE, ";\n"));
																		append((yyval.node), (yyvsp[0].node));
																	}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 263 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
	 																	append((yyval.node), (yyvsp[-1].node));
	 																	append((yyval.node), (yyvsp[0].node));
	 																}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 267 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = NULL;}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 270 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 271 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 272 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 273 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 274 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 275 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 276 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 279 "yacc.y" /* yacc.c:1646  */
    {	if(getType((yyvsp[-1].value)) != INT_TYPE) {
																			yyerror("This operation is only for int types \n");

																		}
																		append((yyval.node), newNode(READ_AS_TYPE, (yyvsp[-1].value)));
																		append((yyval.node), newNode(READ_AS_TYPE, "++"));
																	}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 288 "yacc.y" /* yacc.c:1646  */
    {	if(getType((yyvsp[-1].value)) != INT_TYPE) {
																			yyerror("This operation is only for int types \n");

																		}
																		append((yyval.node), newNode(READ_AS_TYPE, (yyvsp[-1].value)));
																		append((yyval.node), newNode(READ_AS_TYPE, "--"));
																	}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 297 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
																		if((yyvsp[-1].node)->type == INT_TYPE) {
																			append((yyval.node), newNode(READ_AS_TYPE, "printf(\"%d\", "));
																		}
																		else if((yyvsp[-1].node)->type == STR_TYPE) {
																			append((yyval.node), newNode(READ_AS_TYPE, "printf(\"%s\", "));
																		}
																		append((yyval.node), (yyvsp[-1].node));
																		append((yyval.node), newNode(READ_AS_TYPE, ")"));
																	}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 309 "yacc.y" /* yacc.c:1646  */
    {	int type = getType((yyvsp[-1].value));
																		if(type == -1) {
																			yyerror("Undeclared variable\n");
																		}
																		else if(type != STR_TYPE) {
																			yyerror("Incompatible type\n");
																		}
																		(yyval.node) = newNode(EMPTY_TYPE, NULL);
																		append((yyval.node), newNode(READ_AS_TYPE, "scanf(\"%s\", &"));
																		append((yyval.node), newNode(READ_AS_TYPE, (yyvsp[-1].value)));
																		append((yyval.node), newNode(READ_AS_TYPE, ")"));
																	}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 323 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
																		append((yyval.node), newNode(READ_AS_TYPE, "return "));
																		append((yyval.node), (yyvsp[0].node));
																	}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 329 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 330 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = (yyvsp[0].node);}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 333 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
																		append((yyval.node), newNode(READ_AS_TYPE, "if("));
																		append((yyval.node), (yyvsp[-3].node));
																		append((yyval.node), newNode(READ_AS_TYPE, ") {/n"));
																		append((yyval.node), (yyvsp[-1].node));
																		append((yyval.node), newNode(READ_AS_TYPE, "}\n"));
																	}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 342 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
																		append((yyval.node), newNode(READ_AS_TYPE, "while("));
																		append((yyval.node), (yyvsp[-3].node));
																		append((yyval.node), newNode(READ_AS_TYPE, ") {/n"));
																		append((yyval.node), (yyvsp[-1].node));
																		append((yyval.node), newNode(READ_AS_TYPE, "}\n"));
																	}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 352 "yacc.y" /* yacc.c:1646  */
    {	(yyval.node) = newNode(EMPTY_TYPE, NULL);
																				if(mainFunc() < 0) {
																					yyerror("There should be only one main function");
																				}
																				append((yyval.node), (yyvsp[-6].node));
																				append((yyval.node), newNode(READ_AS_TYPE, "main("));
																				append((yyval.node), (yyvsp[-4].node));
																				append((yyval.node), newNode(READ_AS_TYPE, ")"));
																				append((yyval.node), newNode(READ_AS_TYPE, "{ \n"));
																				append((yyval.node), (yyvsp[-1].node));
																				append((yyval.node), newNode(READ_AS_TYPE, "\n} \n"));
																			}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1976 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 366 "yacc.y" /* yacc.c:1906  */


void headers() {
	fprintf(temp_file, "#include <stdio.h> \n"
	"#include <stdlib.h> \n"
	"#include <string.h> \n");
}

void yyerror(char* str) {
	fprintf(stderr, "Error: %s", str);
	closeParser(false);
	exit(1);
}
