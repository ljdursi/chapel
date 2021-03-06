/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */


/* Line 268 of yacc.c  */
#line 71 "bison-chapel.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 288 of yacc.c  */
#line 32 "chapel.ypp"

  #include <string>
  extern int         captureTokens;
  extern std::string captureString;


/* Line 288 of yacc.c  */
#line 45 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_0_
  #define _BISON_CHAPEL_DEFINES_0_

  #define YYLEX_NEWLINE                  -1
  #define YYLEX_SINGLE_LINE_COMMENT      -2
  #define YYLEX_BLOCK_COMMENT            -3

  typedef void* yyscan_t;

  int processNewline(yyscan_t scanner);
  void stringBufferInit();

  #endif


/* Line 288 of yacc.c  */
#line 65 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_1_
  #define _BISON_CHAPEL_DEFINES_1_

  #include "symbol.h"

  #include <cstdio>
  #include <utility>
  #include <vector>

  class ArgSymbol;
  class BlockStmt;
  class CallExpr;
  class DefExpr;
  class EnumType;
  class Expr;
  class FnSymbol;
  class Type;

  enum   ProcIter {
    ProcIter_PROC,
    ProcIter_ITER
  };

  struct IntentExpr {
    Expr*     iVar;
    IntentTag tfIntent; // undefined for a reduce intent
    Expr*     riExp;    // non-NULL for a reduce intent
  };

  struct OnlyRename {
    enum{SINGLE, DOUBLE} tag;

    union {
      Expr*  elem;
      std::pair<Expr*, Expr*>* renamed;
    };
  };

  // The lexer only uses pch.
  // The remaining types are for parser productions
  union  YYSTYPE {
    const char*               pch;

    Vec<const char*>*         vpch;
    RetTag                    retTag;
    AggregateTag              aggrTag;
    bool                      b;
    IntentTag                 pt;
    Expr*                     pexpr;
    DefExpr*                  pdefexpr;
    CallExpr*                 pcallexpr;
    BlockStmt*                pblockstmt;
    Type*                     ptype;
    EnumType*                 penumtype;
    FnSymbol*                 pfnsymbol;
    Flag                      flag;
    ProcIter                  procIter;
    FlagSet*                  flagSet;
    IntentExpr                pIntentExpr;
    ForallIntents*            pForallIntents;
    std::vector<OnlyRename*>* ponlylist;
  };

  #endif


/* Line 288 of yacc.c  */
#line 136 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_2_
  #define _BISON_CHAPEL_DEFINES_2_

  struct YYLTYPE {
    int         first_line;
    int         first_column;
    int         last_line;
    int         last_column;
    const char* comment;
  };

  #define YYLTYPE_IS_DECLARED 1
  #define YYLTYPE_IS_TRIVIAL  1

  #endif


/* Line 288 of yacc.c  */
#line 158 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_3_
  #define _BISON_CHAPEL_DEFINES_3_

  class ParserContext {
  public:
    ParserContext()
    {
      scanner       = 0;
      latestComment = 0;
      generatedStmt = 0;
    }

    ParserContext(yyscan_t scannerIn)
    {
      scanner       = scannerIn;
      latestComment = 0;
      generatedStmt = 0;
    }

    yyscan_t    scanner;
    const char* latestComment;
    BaseAST*    generatedStmt;
  };

  #endif



/* Line 288 of yacc.c  */
#line 240 "bison-chapel.cpp"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TIDENT = 258,
     INTLITERAL = 259,
     REALLITERAL = 260,
     IMAGLITERAL = 261,
     STRINGLITERAL = 262,
     CSTRINGLITERAL = 263,
     EXTERNCODE = 264,
     TALIGN = 265,
     TAS = 266,
     TATOMIC = 267,
     TBEGIN = 268,
     TBREAK = 269,
     TBY = 270,
     TCATCH = 271,
     TCLASS = 272,
     TCOBEGIN = 273,
     TCOFORALL = 274,
     TCONFIG = 275,
     TCONST = 276,
     TCONTINUE = 277,
     TDELETE = 278,
     TDMAPPED = 279,
     TDO = 280,
     TDOMAIN = 281,
     TELSE = 282,
     TENUM = 283,
     TEXCEPT = 284,
     TEXPORT = 285,
     TEXTERN = 286,
     TFOR = 287,
     TFORALL = 288,
     TFORWARDING = 289,
     TIF = 290,
     TIN = 291,
     TINDEX = 292,
     TINLINE = 293,
     TINOUT = 294,
     TITER = 295,
     TLABEL = 296,
     TLAMBDA = 297,
     TLET = 298,
     TLOCAL = 299,
     TMINUSMINUS = 300,
     TMODULE = 301,
     TNEW = 302,
     TNIL = 303,
     TNOINIT = 304,
     TON = 305,
     TONLY = 306,
     TOTHERWISE = 307,
     TOUT = 308,
     TPARAM = 309,
     TPLUSPLUS = 310,
     TPRAGMA = 311,
     TPRIMITIVE = 312,
     TPRIVATE = 313,
     TPROC = 314,
     TPUBLIC = 315,
     TRECORD = 316,
     TREDUCE = 317,
     TREF = 318,
     TREQUIRE = 319,
     TRETURN = 320,
     TSCAN = 321,
     TSELECT = 322,
     TSERIAL = 323,
     TSINGLE = 324,
     TSPARSE = 325,
     TSUBDOMAIN = 326,
     TSYNC = 327,
     TTHEN = 328,
     TTHROW = 329,
     TTHROWS = 330,
     TTRY = 331,
     TTRYBANG = 332,
     TTYPE = 333,
     TUNDERSCORE = 334,
     TUNION = 335,
     TUSE = 336,
     TVAR = 337,
     TWHEN = 338,
     TWHERE = 339,
     TWHILE = 340,
     TWITH = 341,
     TYIELD = 342,
     TZIP = 343,
     TALIAS = 344,
     TAND = 345,
     TASSIGN = 346,
     TASSIGNBAND = 347,
     TASSIGNBOR = 348,
     TASSIGNBXOR = 349,
     TASSIGNDIVIDE = 350,
     TASSIGNEXP = 351,
     TASSIGNLAND = 352,
     TASSIGNLOR = 353,
     TASSIGNMINUS = 354,
     TASSIGNMOD = 355,
     TASSIGNMULTIPLY = 356,
     TASSIGNPLUS = 357,
     TASSIGNSL = 358,
     TASSIGNSR = 359,
     TBAND = 360,
     TBNOT = 361,
     TBOR = 362,
     TBXOR = 363,
     TCOLON = 364,
     TCOMMA = 365,
     TDIVIDE = 366,
     TDOT = 367,
     TDOTDOT = 368,
     TDOTDOTDOT = 369,
     TEQUAL = 370,
     TEXP = 371,
     TGREATER = 372,
     TGREATEREQUAL = 373,
     THASH = 374,
     TLESS = 375,
     TLESSEQUAL = 376,
     TMINUS = 377,
     TMOD = 378,
     TNOT = 379,
     TNOTEQUAL = 380,
     TOR = 381,
     TPLUS = 382,
     TQUESTION = 383,
     TSEMI = 384,
     TSHIFTLEFT = 385,
     TSHIFTRIGHT = 386,
     TSTAR = 387,
     TSWAP = 388,
     TASSIGNREDUCE = 389,
     TIO = 390,
     TLCBR = 391,
     TRCBR = 392,
     TLP = 393,
     TRP = 394,
     TLSBR = 395,
     TRSBR = 396,
     TNOELSE = 397,
     TUMINUS = 398,
     TUPLUS = 399
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

#ifndef YYPUSH_DECLS
#  define YYPUSH_DECLS
struct yypstate;
typedef struct yypstate yypstate;
enum { YYPUSH_MORE = 4 };

#if defined __STDC__ || defined __cplusplus
int yypush_parse (yypstate *yyps, int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE const *yypushed_loc, ParserContext* context);
#else
int yypush_parse ();
#endif

#if defined __STDC__ || defined __cplusplus
yypstate * yypstate_new (void);
#else
yypstate * yypstate_new ();
#endif
#if defined __STDC__ || defined __cplusplus
void yypstate_delete (yypstate *yyps);
#else
void yypstate_delete ();
#endif
#endif

/* "%code provides" blocks.  */

/* Line 340 of yacc.c  */
#line 189 "chapel.ypp"

  extern int yydebug;

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str);



/* Line 340 of yacc.c  */
#line 452 "bison-chapel.cpp"

/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 458 "bison-chapel.cpp"
/* Unqualified %code blocks.  */

/* Line 344 of yacc.c  */
#line 38 "chapel.ypp"

  #include <string>
  int         captureTokens;
  std::string captureString;


/* Line 344 of yacc.c  */
#line 197 "chapel.ypp"

  #include "build.h"
  #include "CatchStmt.h"
  #include "DoWhileStmt.h"
  #include "driver.h"
  #include "flex-chapel.h"
  #include "ForLoop.h"
  #include "parser.h"
  #include "stmt.h"
  #include "stringutil.h"
  #include "TryStmt.h"
  #include "vec.h"
  #include "WhileDoStmt.h"

  #include <cstdio>
  #include <cstdlib>
  #include <cstring>
  #include <stdint.h>

  static int query_uid = 1;

  #define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
    if (N) {                                                              \
      (Current).first_line   = (Rhs)[1].first_line;                       \
      (Current).first_column = (Rhs)[1].first_column;                     \
      (Current).last_line    = (Rhs)[N].last_line;                        \
      (Current).last_column  = (Rhs)[N].last_column;                      \
      (Current).comment      = NULL;                                      \
                                                                          \
      if ((Current).first_line)                                           \
        yystartlineno = (Current).first_line;                             \
                                                                          \
    } else  {                                                             \
      (Current) = yylloc;                                                 \
    }

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str) {
    // TODO -- should this begin with error:
    if (!chplParseString) {
      const char* yyText = yyget_text(context->scanner);

      fprintf(stderr, "%s:%d: %s", yyfilename, chplLineno, str);

      if (strlen(yyText) > 0) {
        fprintf(stderr, ": near '%s'", yyText);
      }
    } else {
      fprintf(stderr, "%s: %s", yyfilename, str);

      if (chplParseStringMsg && (strlen(chplParseStringMsg) > 0)) {
        fprintf(stderr, " %s", chplParseStringMsg);
      }
    }

    fprintf(stderr, "\n");

    clean_exit(1);
  }



/* Line 344 of yacc.c  */
#line 535 "bison-chapel.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   13171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  145
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  120
/* YYNRULES -- Number of rules.  */
#define YYNRULES  477
/* YYNRULES -- Number of states.  */
#define YYNSTATES  906

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   399

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    11,    14,    17,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    47,    50,    53,    57,    61,    65,    69,    73,
      77,    80,    84,    88,    91,    94,    98,   100,   106,   113,
     114,   116,   118,   121,   125,   127,   130,   132,   136,   140,
     146,   147,   149,   151,   153,   157,   163,   169,   173,   178,
     183,   188,   193,   198,   203,   208,   213,   218,   223,   228,
     233,   238,   243,   248,   253,   254,   256,   258,   260,   262,
     265,   267,   270,   274,   276,   278,   281,   284,   286,   288,
     290,   292,   294,   296,   300,   306,   312,   315,   318,   324,
     328,   335,   342,   347,   353,   359,   363,   367,   374,   380,
     387,   393,   400,   404,   409,   416,   424,   431,   439,   444,
     450,   455,   460,   464,   471,   477,   481,   485,   488,   491,
     495,   499,   500,   503,   506,   510,   516,   518,   522,   526,
     532,   533,   536,   540,   543,   547,   554,   563,   565,   567,
     569,   570,   573,   574,   577,   581,   587,   589,   592,   596,
     598,   602,   603,   604,   613,   614,   616,   619,   622,   623,
     624,   635,   639,   643,   649,   655,   657,   661,   663,   666,
     668,   670,   672,   674,   676,   678,   680,   682,   684,   686,
     688,   690,   692,   694,   696,   698,   700,   702,   704,   706,
     708,   710,   712,   714,   716,   718,   720,   722,   724,   726,
     728,   730,   732,   734,   736,   738,   739,   743,   747,   748,
     750,   754,   759,   764,   771,   778,   779,   781,   783,   785,
     787,   789,   792,   795,   797,   799,   801,   802,   804,   806,
     809,   811,   813,   815,   817,   818,   820,   823,   825,   827,
     829,   830,   832,   834,   836,   838,   840,   843,   845,   846,
     848,   851,   854,   855,   858,   862,   867,   872,   875,   880,
     881,   884,   887,   892,   897,   902,   908,   913,   914,   916,
     918,   920,   924,   928,   933,   939,   941,   943,   947,   949,
     952,   956,   957,   960,   963,   964,   969,   970,   973,   976,
     978,   983,   988,   995,   997,   998,  1000,  1002,  1006,  1011,
    1015,  1020,  1027,  1028,  1031,  1034,  1037,  1040,  1043,  1046,
    1048,  1050,  1054,  1058,  1060,  1062,  1064,  1068,  1072,  1073,
    1075,  1077,  1081,  1085,  1089,  1091,  1093,  1095,  1097,  1099,
    1101,  1103,  1105,  1108,  1113,  1118,  1123,  1129,  1132,  1135,
    1142,  1149,  1154,  1164,  1174,  1182,  1189,  1196,  1201,  1211,
    1221,  1229,  1234,  1241,  1248,  1258,  1268,  1275,  1277,  1279,
    1281,  1283,  1285,  1287,  1289,  1291,  1295,  1296,  1298,  1303,
    1305,  1309,  1314,  1316,  1320,  1323,  1327,  1331,  1333,  1337,
    1340,  1345,  1347,  1349,  1351,  1353,  1355,  1357,  1359,  1361,
    1366,  1370,  1374,  1377,  1380,  1382,  1384,  1386,  1388,  1390,
    1392,  1394,  1399,  1404,  1409,  1413,  1417,  1421,  1425,  1430,
    1434,  1439,  1441,  1443,  1445,  1447,  1449,  1453,  1458,  1462,
    1467,  1471,  1476,  1480,  1486,  1490,  1494,  1498,  1502,  1506,
    1510,  1514,  1518,  1522,  1526,  1530,  1534,  1538,  1542,  1546,
    1550,  1554,  1558,  1562,  1566,  1570,  1574,  1578,  1581,  1584,
    1587,  1590,  1593,  1596,  1600,  1604,  1608,  1612,  1616,  1620,
    1624,  1628,  1630,  1632,  1634,  1636,  1638,  1640
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     146,     0,    -1,   147,    -1,    -1,   147,   148,    -1,   150,
      -1,   149,   150,    -1,    56,     7,    -1,   149,    56,     7,
      -1,   151,    -1,   153,    -1,   158,    -1,   159,    -1,   166,
      -1,   160,    -1,   169,    -1,   172,    -1,   170,    -1,   178,
      -1,   173,    -1,   177,    -1,   165,    -1,   242,   129,    -1,
      12,   150,    -1,    13,   243,   150,    -1,    14,   161,   129,
      -1,    18,   243,   153,    -1,    22,   161,   129,    -1,    23,
     252,   129,    -1,    41,   162,   150,    -1,    44,   150,    -1,
      50,   252,   164,    -1,    68,   252,   164,    -1,    68,   164,
      -1,    72,   150,    -1,    87,   252,   129,    -1,     1,    -1,
     152,    46,   162,   136,   137,    -1,   152,    46,   162,   136,
     154,   137,    -1,    -1,    60,    -1,    58,    -1,   136,   137,
      -1,   136,   154,   137,    -1,   148,    -1,   154,   148,    -1,
     252,    -1,   252,    11,   252,    -1,   155,   110,   252,    -1,
     155,   110,   252,    11,   252,    -1,    -1,   155,    -1,   132,
      -1,   155,    -1,    81,   231,   129,    -1,    81,   252,    29,
     157,   129,    -1,    81,   252,    51,   156,   129,    -1,    64,
     231,   129,    -1,   253,    91,   252,   129,    -1,   253,   102,
     252,   129,    -1,   253,    99,   252,   129,    -1,   253,   101,
     252,   129,    -1,   253,    95,   252,   129,    -1,   253,   100,
     252,   129,    -1,   253,    96,   252,   129,    -1,   253,    92,
     252,   129,    -1,   253,    93,   252,   129,    -1,   253,    94,
     252,   129,    -1,   253,   104,   252,   129,    -1,   253,   103,
     252,   129,    -1,   253,   133,   252,   129,    -1,   253,   134,
     252,   129,    -1,   253,    97,   252,   129,    -1,   253,    98,
     252,   129,    -1,    -1,   162,    -1,     3,    -1,   161,    -1,
       7,    -1,    25,   150,    -1,   153,    -1,    65,   129,    -1,
      65,   252,   129,    -1,   129,    -1,   167,    -1,    60,   167,
      -1,    58,   167,    -1,   185,    -1,   215,    -1,   181,    -1,
     168,    -1,   192,    -1,   218,    -1,    34,   252,   129,    -1,
      34,   252,    29,   157,   129,    -1,    34,   252,    51,   156,
     129,    -1,    34,   218,    -1,    31,     9,    -1,    25,   150,
      85,   252,   129,    -1,    85,   252,   164,    -1,    19,   252,
      36,   252,   243,   164,    -1,    19,   252,    36,   171,   243,
     164,    -1,    19,   252,   243,   164,    -1,    32,   252,    36,
     252,   164,    -1,    32,   252,    36,   171,   164,    -1,    32,
     252,   164,    -1,    32,   171,   164,    -1,    32,    54,   162,
      36,   252,   164,    -1,    33,   252,    36,   252,   164,    -1,
      33,   252,    36,   252,   246,   164,    -1,    33,   252,    36,
     171,   164,    -1,    33,   252,    36,   171,   246,   164,    -1,
      33,   252,   164,    -1,    33,   252,   246,   164,    -1,   140,
     231,    36,   252,   141,   150,    -1,   140,   231,    36,   252,
     246,   141,   150,    -1,   140,   231,    36,   171,   141,   150,
      -1,   140,   231,    36,   171,   246,   141,   150,    -1,   140,
     231,   141,   150,    -1,   140,   231,   246,   141,   150,    -1,
      88,   138,   231,   139,    -1,    35,   252,    73,   150,    -1,
      35,   252,   153,    -1,    35,   252,    73,   150,    27,   150,
      -1,    35,   252,   153,    27,   150,    -1,    76,   252,   129,
      -1,    77,   252,   129,    -1,    76,   160,    -1,    77,   160,
      -1,    76,   153,   174,    -1,    77,   153,   174,    -1,    -1,
     174,   175,    -1,    16,   153,    -1,    16,   176,   153,    -1,
      16,   138,   176,   139,   153,    -1,   162,    -1,   162,   109,
     252,    -1,    74,   252,   129,    -1,    67,   252,   136,   179,
     137,    -1,    -1,   179,   180,    -1,    83,   231,   164,    -1,
      52,   150,    -1,    52,    25,   150,    -1,   182,   162,   183,
     136,   184,   137,    -1,    31,   163,   182,   162,   183,   136,
     184,   137,    -1,    17,    -1,    61,    -1,    80,    -1,    -1,
     109,   231,    -1,    -1,   184,   166,    -1,   184,   149,   166,
      -1,    28,   162,   136,   186,   137,    -1,   187,    -1,   186,
     110,    -1,   186,   110,   187,    -1,   162,    -1,   162,    91,
     252,    -1,    -1,    -1,    42,   189,   200,   190,   207,   226,
     214,   210,    -1,    -1,    38,    -1,    30,   163,    -1,    31,
     163,    -1,    -1,    -1,   191,   206,   193,   195,   194,   207,
     226,   208,   214,   209,    -1,   205,   197,   199,    -1,   205,
     198,   199,    -1,   205,   196,   112,   197,   199,    -1,   205,
     196,   112,   198,   199,    -1,   237,    -1,   138,   252,   139,
      -1,   162,    -1,   106,   162,    -1,   105,    -1,   107,    -1,
     108,    -1,   106,    -1,   115,    -1,   125,    -1,   121,    -1,
     118,    -1,   120,    -1,   117,    -1,   127,    -1,   122,    -1,
     132,    -1,   111,    -1,   130,    -1,   131,    -1,   123,    -1,
     116,    -1,   124,    -1,    15,    -1,   119,    -1,    10,    -1,
     133,    -1,   135,    -1,    91,    -1,   102,    -1,    99,    -1,
     101,    -1,    95,    -1,   100,    -1,    96,    -1,    92,    -1,
      93,    -1,    94,    -1,   104,    -1,   103,    -1,    -1,   138,
     201,   139,    -1,   138,   201,   139,    -1,    -1,   202,    -1,
     201,   110,   202,    -1,   203,   162,   230,   224,    -1,   203,
     162,   230,   213,    -1,   203,   138,   223,   139,   230,   224,
      -1,   203,   138,   223,   139,   230,   213,    -1,    -1,   204,
      -1,    36,    -1,    39,    -1,    53,    -1,    21,    -1,    21,
      36,    -1,    21,    63,    -1,    54,    -1,    63,    -1,    78,
      -1,    -1,    54,    -1,    63,    -1,    21,    63,    -1,    21,
      -1,    78,    -1,    59,    -1,    40,    -1,    -1,    21,    -1,
      21,    63,    -1,    63,    -1,    54,    -1,    78,    -1,    -1,
      75,    -1,   129,    -1,   210,    -1,   153,    -1,   165,    -1,
     128,   162,    -1,   128,    -1,    -1,   211,    -1,   114,   252,
      -1,   114,   212,    -1,    -1,    84,   252,    -1,    78,   216,
     129,    -1,    20,    78,   216,   129,    -1,    31,    78,   216,
     129,    -1,   162,   217,    -1,   162,   217,   110,   216,    -1,
      -1,    91,   238,    -1,    91,   227,    -1,   219,    54,   220,
     129,    -1,   219,    21,   220,   129,    -1,   219,    63,   220,
     129,    -1,   219,    21,    63,   220,   129,    -1,   219,    82,
     220,   129,    -1,    -1,    20,    -1,    31,    -1,   221,    -1,
     220,   110,   221,    -1,   162,   226,   224,    -1,   162,   225,
      89,   252,    -1,   138,   223,   139,   226,   224,    -1,    79,
      -1,   162,    -1,   138,   223,   139,    -1,   222,    -1,   222,
     110,    -1,   222,   110,   223,    -1,    -1,    91,    49,    -1,
      91,   252,    -1,    -1,   109,   140,   231,   141,    -1,    -1,
     109,   238,    -1,   109,   227,    -1,     1,    -1,   140,   231,
     141,   238,    -1,   140,   231,   141,   227,    -1,   140,   231,
      36,   252,   141,   238,    -1,     1,    -1,    -1,   238,    -1,
     211,    -1,   140,   141,   228,    -1,   140,   231,   141,   228,
      -1,   140,   141,   229,    -1,   140,   231,   141,   229,    -1,
     140,   231,    36,   252,   141,   228,    -1,    -1,   109,   238,
      -1,   109,   211,    -1,   109,    26,    -1,   109,    69,    -1,
     109,    72,    -1,   109,   229,    -1,   252,    -1,   211,    -1,
     231,   110,   252,    -1,   231,   110,   211,    -1,    79,    -1,
     252,    -1,   211,    -1,   232,   110,   232,    -1,   233,   110,
     232,    -1,    -1,   235,    -1,   236,    -1,   235,   110,   236,
      -1,   162,    91,   211,    -1,   162,    91,   252,    -1,   211,
      -1,   252,    -1,   162,    -1,   241,    -1,   253,    -1,   240,
      -1,   261,    -1,   260,    -1,    69,   252,    -1,    37,   138,
     234,   139,    -1,    26,   138,   234,   139,    -1,    71,   138,
     234,   139,    -1,    70,    71,   138,   234,   139,    -1,    12,
     252,    -1,    72,   252,    -1,    32,   252,    36,   252,    25,
     252,    -1,    32,   252,    36,   171,    25,   252,    -1,    32,
     252,    25,   252,    -1,    32,   252,    36,   252,    25,    35,
     252,    73,   252,    -1,    32,   252,    36,   171,    25,    35,
     252,    73,   252,    -1,    32,   252,    25,    35,   252,    73,
     252,    -1,    33,   252,    36,   252,    25,   252,    -1,    33,
     252,    36,   171,    25,   252,    -1,    33,   252,    25,   252,
      -1,    33,   252,    36,   252,    25,    35,   252,    73,   252,
      -1,    33,   252,    36,   171,    25,    35,   252,    73,   252,
      -1,    33,   252,    25,    35,   252,    73,   252,    -1,   140,
     231,   141,   252,    -1,   140,   231,    36,   252,   141,   252,
      -1,   140,   231,    36,   171,   141,   252,    -1,   140,   231,
      36,   252,   141,    35,   252,    73,   252,    -1,   140,   231,
      36,   171,   141,    35,   252,    73,   252,    -1,    35,   252,
      73,   252,    27,   252,    -1,    48,    -1,   241,    -1,   237,
      -1,   256,    -1,   255,    -1,   188,    -1,   250,    -1,   251,
      -1,   249,   135,   252,    -1,    -1,   244,    -1,    86,   138,
     245,   139,    -1,   248,    -1,   245,   110,   248,    -1,    86,
     138,   247,   139,    -1,   248,    -1,   247,   110,   248,    -1,
     204,   237,    -1,   252,    62,   237,    -1,   264,    62,   237,
      -1,   253,    -1,   249,   135,   252,    -1,    47,   252,    -1,
      43,   220,    36,   252,    -1,   258,    -1,   238,    -1,   239,
      -1,   262,    -1,   263,    -1,   188,    -1,   250,    -1,   251,
      -1,   138,   114,   252,   139,    -1,   252,   109,   252,    -1,
     252,   113,   252,    -1,   252,   113,    -1,   113,   252,    -1,
     113,    -1,   237,    -1,   255,    -1,   256,    -1,   257,    -1,
     253,    -1,   188,    -1,   254,   138,   234,   139,    -1,   254,
     140,   234,   141,    -1,    57,   138,   234,   139,    -1,   252,
     112,   162,    -1,   252,   112,    78,    -1,   252,   112,    26,
      -1,   138,   232,   139,    -1,   138,   232,   110,   139,    -1,
     138,   233,   139,    -1,   138,   233,   110,   139,    -1,     4,
      -1,     5,    -1,     6,    -1,     7,    -1,     8,    -1,   136,
     231,   137,    -1,   136,   231,   110,   137,    -1,   140,   231,
     141,    -1,   140,   231,   110,   141,    -1,   140,   259,   141,
      -1,   140,   259,   110,   141,    -1,   252,    89,   252,    -1,
     259,   110,   252,    89,   252,    -1,   252,   127,   252,    -1,
     252,   122,   252,    -1,   252,   132,   252,    -1,   252,   111,
     252,    -1,   252,   130,   252,    -1,   252,   131,   252,    -1,
     252,   123,   252,    -1,   252,   115,   252,    -1,   252,   125,
     252,    -1,   252,   121,   252,    -1,   252,   118,   252,    -1,
     252,   120,   252,    -1,   252,   117,   252,    -1,   252,   105,
     252,    -1,   252,   107,   252,    -1,   252,   108,   252,    -1,
     252,    90,   252,    -1,   252,   126,   252,    -1,   252,   116,
     252,    -1,   252,    15,   252,    -1,   252,    10,   252,    -1,
     252,   119,   252,    -1,   252,    24,   252,    -1,   127,   252,
      -1,   122,   252,    -1,    45,   252,    -1,    55,   252,    -1,
     124,   252,    -1,   106,   252,    -1,   252,    62,   252,    -1,
     252,    62,   171,    -1,   264,    62,   252,    -1,   264,    62,
     171,    -1,   252,    66,   252,    -1,   252,    66,   171,    -1,
     264,    66,   252,    -1,   264,    66,   171,    -1,   127,    -1,
     132,    -1,    90,    -1,   126,    -1,   105,    -1,   107,    -1,
     108,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   435,   435,   440,   441,   447,   448,   453,   454,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   490,   492,   497,
     498,   499,   514,   515,   520,   521,   526,   531,   536,   540,
     547,   552,   556,   561,   565,   566,   567,   571,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   594,   595,   599,   603,   604,   608,
     609,   613,   614,   618,   619,   620,   621,   622,   623,   624,
     625,   629,   630,   634,   635,   636,   637,   641,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   678,   684,   690,   696,   703,
     713,   717,   718,   719,   720,   724,   725,   726,   727,   728,
     729,   733,   734,   738,   739,   740,   744,   745,   749,   752,
     757,   758,   762,   764,   766,   773,   783,   796,   801,   806,
     814,   815,   820,   821,   823,   828,   838,   847,   851,   859,
     860,   865,   870,   864,   895,   901,   908,   916,   928,   934,
     927,   962,   966,   971,   975,   983,   984,   988,   989,   990,
     991,   992,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,  1012,  1013,  1017,  1018,  1019,  1020,  1021,  1022,  1023,
    1024,  1025,  1026,  1027,  1028,  1032,  1033,  1037,  1041,  1042,
    1043,  1047,  1049,  1051,  1053,  1058,  1059,  1063,  1064,  1065,
    1066,  1067,  1068,  1069,  1070,  1071,  1075,  1076,  1077,  1078,
    1079,  1080,  1084,  1085,  1089,  1090,  1091,  1092,  1093,  1094,
    1098,  1099,  1102,  1103,  1107,  1108,  1112,  1114,  1119,  1120,
    1124,  1125,  1129,  1130,  1134,  1136,  1138,  1143,  1156,  1173,
    1174,  1176,  1181,  1189,  1197,  1205,  1214,  1224,  1225,  1226,
    1230,  1231,  1239,  1241,  1248,  1253,  1255,  1257,  1262,  1264,
    1266,  1273,  1274,  1275,  1279,  1280,  1285,  1286,  1287,  1288,
    1308,  1312,  1316,  1324,  1328,  1329,  1330,  1334,  1336,  1342,
    1344,  1346,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1363,
    1364,  1365,  1366,  1370,  1371,  1372,  1376,  1377,  1381,  1382,
    1386,  1387,  1391,  1392,  1393,  1394,  1398,  1409,  1410,  1411,
    1412,  1413,  1414,  1416,  1418,  1420,  1422,  1424,  1426,  1431,
    1433,  1435,  1437,  1439,  1441,  1443,  1445,  1447,  1449,  1451,
    1453,  1455,  1462,  1468,  1474,  1480,  1489,  1497,  1505,  1506,
    1507,  1508,  1509,  1510,  1511,  1512,  1517,  1518,  1522,  1527,
    1530,  1535,  1540,  1543,  1548,  1552,  1553,  1557,  1558,  1563,
    1568,  1576,  1577,  1578,  1579,  1580,  1581,  1582,  1583,  1584,
    1586,  1588,  1590,  1592,  1594,  1599,  1600,  1601,  1602,  1613,
    1614,  1618,  1619,  1620,  1624,  1625,  1626,  1634,  1635,  1636,
    1637,  1641,  1642,  1643,  1644,  1645,  1646,  1647,  1648,  1649,
    1650,  1654,  1662,  1663,  1667,  1668,  1669,  1670,  1671,  1672,
    1673,  1674,  1675,  1676,  1677,  1678,  1679,  1680,  1681,  1682,
    1683,  1684,  1685,  1686,  1687,  1688,  1689,  1693,  1694,  1695,
    1696,  1697,  1698,  1702,  1703,  1704,  1705,  1709,  1710,  1711,
    1712,  1717,  1718,  1719,  1720,  1721,  1722,  1723
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIDENT", "INTLITERAL", "REALLITERAL",
  "IMAGLITERAL", "STRINGLITERAL", "CSTRINGLITERAL", "EXTERNCODE", "TALIGN",
  "TAS", "TATOMIC", "TBEGIN", "TBREAK", "TBY", "TCATCH", "TCLASS",
  "TCOBEGIN", "TCOFORALL", "TCONFIG", "TCONST", "TCONTINUE", "TDELETE",
  "TDMAPPED", "TDO", "TDOMAIN", "TELSE", "TENUM", "TEXCEPT", "TEXPORT",
  "TEXTERN", "TFOR", "TFORALL", "TFORWARDING", "TIF", "TIN", "TINDEX",
  "TINLINE", "TINOUT", "TITER", "TLABEL", "TLAMBDA", "TLET", "TLOCAL",
  "TMINUSMINUS", "TMODULE", "TNEW", "TNIL", "TNOINIT", "TON", "TONLY",
  "TOTHERWISE", "TOUT", "TPARAM", "TPLUSPLUS", "TPRAGMA", "TPRIMITIVE",
  "TPRIVATE", "TPROC", "TPUBLIC", "TRECORD", "TREDUCE", "TREF", "TREQUIRE",
  "TRETURN", "TSCAN", "TSELECT", "TSERIAL", "TSINGLE", "TSPARSE",
  "TSUBDOMAIN", "TSYNC", "TTHEN", "TTHROW", "TTHROWS", "TTRY", "TTRYBANG",
  "TTYPE", "TUNDERSCORE", "TUNION", "TUSE", "TVAR", "TWHEN", "TWHERE",
  "TWHILE", "TWITH", "TYIELD", "TZIP", "TALIAS", "TAND", "TASSIGN",
  "TASSIGNBAND", "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE",
  "TASSIGNEXP", "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNSL", "TASSIGNSR", "TBAND",
  "TBNOT", "TBOR", "TBXOR", "TCOLON", "TCOMMA", "TDIVIDE", "TDOT",
  "TDOTDOT", "TDOTDOTDOT", "TEQUAL", "TEXP", "TGREATER", "TGREATEREQUAL",
  "THASH", "TLESS", "TLESSEQUAL", "TMINUS", "TMOD", "TNOT", "TNOTEQUAL",
  "TOR", "TPLUS", "TQUESTION", "TSEMI", "TSHIFTLEFT", "TSHIFTRIGHT",
  "TSTAR", "TSWAP", "TASSIGNREDUCE", "TIO", "TLCBR", "TRCBR", "TLP", "TRP",
  "TLSBR", "TRSBR", "TNOELSE", "TUMINUS", "TUPLUS", "$accept", "program",
  "toplevel_stmt_ls", "toplevel_stmt", "pragma_ls", "stmt",
  "module_decl_stmt", "access_control", "block_stmt", "stmt_ls", "only_ls",
  "opt_only_ls", "except_ls", "use_stmt", "require_stmt",
  "assignment_stmt", "opt_ident", "ident", "opt_ident_or_string",
  "do_stmt", "return_stmt", "class_level_stmt", "private_decl",
  "forwarding_stmt", "extern_block_stmt", "loop_stmt", "zippered_iterator",
  "if_stmt", "try_stmt", "catch_stmt_ls", "catch_stmt", "catch_expr",
  "throw_stmt", "select_stmt", "when_stmt_ls", "when_stmt",
  "class_decl_stmt", "class_tag", "opt_inherit", "class_level_stmt_ls",
  "enum_decl_stmt", "enum_ls", "enum_item", "lambda_decl_expr", "$@1",
  "$@2", "linkage_spec", "fn_decl_stmt", "$@3", "$@4",
  "fn_decl_stmt_inner", "fn_decl_receiver_expr", "fn_ident",
  "assignop_ident", "opt_formal_ls", "req_formal_ls", "formal_ls",
  "formal", "opt_intent_tag", "required_intent_tag", "opt_this_intent_tag",
  "proc_or_iter", "opt_ret_tag", "opt_throws_error",
  "opt_function_body_stmt", "function_body_stmt", "query_expr",
  "opt_query_expr", "var_arg_expr", "opt_where_part",
  "type_alias_decl_stmt", "type_alias_decl_stmt_inner", "opt_init_type",
  "var_decl_stmt", "opt_config", "var_decl_stmt_inner_ls",
  "var_decl_stmt_inner", "tuple_var_decl_component",
  "tuple_var_decl_stmt_inner_ls", "opt_init_expr", "opt_reindex_expr",
  "opt_type", "array_type", "opt_formal_array_elt_type",
  "formal_array_type", "opt_formal_type", "expr_ls", "tuple_component",
  "tuple_expr_ls", "opt_actual_ls", "actual_ls", "actual_expr",
  "ident_expr", "type_level_expr", "for_expr", "cond_expr", "nil_expr",
  "stmt_level_expr", "opt_task_intent_ls", "task_intent_clause",
  "task_intent_ls", "forall_intent_clause", "forall_intent_ls",
  "intent_expr", "io_expr", "new_expr", "let_expr", "expr", "lhs_expr",
  "fun_expr", "call_expr", "dot_expr", "parenthesized_expr",
  "literal_expr", "assoc_expr_ls", "binary_op_expr", "unary_op_expr",
  "reduce_expr", "scan_expr", "reduce_scan_op_expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   145,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   151,   151,   152,
     152,   152,   153,   153,   154,   154,   155,   155,   155,   155,
     156,   156,   157,   157,   158,   158,   158,   159,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   161,   161,   162,   163,   163,   164,
     164,   165,   165,   166,   166,   166,   166,   166,   166,   166,
     166,   167,   167,   168,   168,   168,   168,   169,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     171,   172,   172,   172,   172,   173,   173,   173,   173,   173,
     173,   174,   174,   175,   175,   175,   176,   176,   177,   178,
     179,   179,   180,   180,   180,   181,   181,   182,   182,   182,
     183,   183,   184,   184,   184,   185,   186,   186,   186,   187,
     187,   189,   190,   188,   191,   191,   191,   191,   193,   194,
     192,   195,   195,   195,   195,   196,   196,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   199,   199,   200,   201,   201,
     201,   202,   202,   202,   202,   203,   203,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   205,   205,   205,   205,
     205,   205,   206,   206,   207,   207,   207,   207,   207,   207,
     208,   208,   209,   209,   210,   210,   211,   211,   212,   212,
     213,   213,   214,   214,   215,   215,   215,   216,   216,   217,
     217,   217,   218,   218,   218,   218,   218,   219,   219,   219,
     220,   220,   221,   221,   221,   222,   222,   222,   223,   223,
     223,   224,   224,   224,   225,   225,   226,   226,   226,   226,
     227,   227,   227,   227,   228,   228,   228,   229,   229,   229,
     229,   229,   230,   230,   230,   230,   230,   230,   230,   231,
     231,   231,   231,   232,   232,   232,   233,   233,   234,   234,
     235,   235,   236,   236,   236,   236,   237,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   240,   241,   242,   242,
     242,   242,   242,   242,   242,   242,   243,   243,   244,   245,
     245,   246,   247,   247,   248,   248,   248,   249,   249,   250,
     251,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   253,   253,   253,   253,   254,
     254,   255,   255,   255,   256,   256,   256,   257,   257,   257,
     257,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   259,   259,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   261,   261,   261,
     261,   261,   261,   262,   262,   262,   262,   263,   263,   263,
     263,   264,   264,   264,   264,   264,   264,   264
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     2,     2,     3,     1,     5,     6,     0,
       1,     1,     2,     3,     1,     2,     1,     3,     3,     5,
       0,     1,     1,     1,     3,     5,     5,     3,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     1,     1,     1,     1,     2,
       1,     2,     3,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     3,     5,     5,     2,     2,     5,     3,
       6,     6,     4,     5,     5,     3,     3,     6,     5,     6,
       5,     6,     3,     4,     6,     7,     6,     7,     4,     5,
       4,     4,     3,     6,     5,     3,     3,     2,     2,     3,
       3,     0,     2,     2,     3,     5,     1,     3,     3,     5,
       0,     2,     3,     2,     3,     6,     8,     1,     1,     1,
       0,     2,     0,     2,     3,     5,     1,     2,     3,     1,
       3,     0,     0,     8,     0,     1,     2,     2,     0,     0,
      10,     3,     3,     5,     5,     1,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     3,     0,     1,
       3,     4,     4,     6,     6,     0,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     0,     1,     1,     2,
       1,     1,     1,     1,     0,     1,     2,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     2,     1,     0,     1,
       2,     2,     0,     2,     3,     4,     4,     2,     4,     0,
       2,     2,     4,     4,     4,     5,     4,     0,     1,     1,
       1,     3,     3,     4,     5,     1,     1,     3,     1,     2,
       3,     0,     2,     2,     0,     4,     0,     2,     2,     1,
       4,     4,     6,     1,     0,     1,     1,     3,     4,     3,
       4,     6,     0,     2,     2,     2,     2,     2,     2,     1,
       1,     3,     3,     1,     1,     1,     3,     3,     0,     1,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     4,     5,     2,     2,     6,
       6,     4,     9,     9,     7,     6,     6,     4,     9,     9,
       7,     4,     6,     6,     9,     9,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     1,     4,     1,
       3,     4,     1,     3,     2,     3,     3,     1,     3,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     3,     3,     3,     3,     4,     3,
       4,     1,     1,     1,     1,     1,     3,     4,     3,     4,
       3,     4,     3,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,    36,    76,   421,   422,   423,   424,
     425,     0,   376,    74,   147,   376,     0,   278,    74,     0,
       0,     0,     0,    74,    74,     0,     0,   277,     0,     0,
     165,     0,   161,     0,     0,     0,     0,   367,     0,     0,
       0,     0,   277,   277,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   149,     0,     0,
       0,   473,   475,     0,   476,   477,   404,     0,     0,   474,
     471,    83,   472,     0,     0,     0,     4,     0,     5,     9,
       0,    10,    11,    12,    14,   336,    21,    13,    84,    90,
      15,    17,    16,    19,    20,    18,    89,     0,    87,   396,
       0,    91,    88,    92,     0,   405,   392,   393,   339,   337,
       0,     0,   397,   398,     0,   338,     0,   406,   407,   408,
     391,   341,   340,   394,   395,     0,    23,   347,     0,     0,
     377,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,   396,   405,   337,   397,   398,   376,   338,   406,   407,
       0,     0,     0,     0,   328,     0,    78,    77,   166,    97,
       0,   167,     0,     0,     0,     0,     0,   278,   279,    96,
       0,     0,   328,     0,     0,     0,     0,     0,   280,    30,
     459,   389,     0,   460,     7,   328,   279,    86,    85,   257,
     320,     0,   319,    81,     0,     0,     0,    80,    33,     0,
     342,     0,   328,    34,   348,     0,   131,   127,     0,   338,
     131,   128,     0,   269,     0,     0,   319,     0,     0,   462,
     403,   458,   461,   457,    42,    44,     0,     0,   323,     0,
     325,     0,     0,   324,     0,   319,     0,     0,     6,     0,
     150,   243,   242,   168,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   328,   328,     0,     0,     0,    24,
      25,     0,    26,     0,     0,     0,     0,     0,     0,     0,
      27,    28,     0,   336,   334,     0,   329,   330,   335,     0,
       0,     0,     0,     0,   106,     0,     0,   105,     0,     0,
       0,   112,     0,     0,    50,    93,     0,   122,     0,    29,
     218,   162,   285,     0,   286,   288,     0,   299,     0,     0,
     291,     0,     0,    31,     0,   167,   256,     0,    57,    82,
     140,    79,    32,   328,     0,   138,   129,   125,   130,   126,
       0,   267,   264,    54,     0,    50,    99,    35,    43,    45,
       0,   426,     0,     0,   417,     0,   419,     0,     0,     0,
       0,     0,     0,   430,     8,     0,     0,     0,   236,     0,
       0,     0,     0,     0,   375,   454,   453,   456,   464,   463,
     468,   467,   450,   447,   448,   449,   400,   437,   416,   415,
     414,   401,   441,   452,   446,   444,   455,   445,   443,   435,
     440,   442,   451,   434,   438,   439,   436,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   466,   465,   470,   469,   230,
     227,   228,   229,   233,   234,   235,     0,     0,   379,     0,
       0,     0,     0,     0,     0,     0,     0,   428,   376,   376,
     102,   265,     0,     0,   344,     0,   159,     0,   156,   266,
     150,     0,     0,     0,   351,     0,     0,     0,   357,     0,
       0,     0,   113,   472,    53,     0,    46,    51,     0,   121,
       0,     0,   343,     0,   219,     0,   226,   244,     0,   289,
       0,   303,     0,   298,   392,     0,     0,   282,   390,   281,
     413,   322,   321,     0,     0,   345,     0,   132,     0,   271,
     392,     0,     0,     0,   427,   399,   418,   326,   420,   327,
       0,     0,   429,   118,   361,     0,   432,   431,     0,     0,
     151,   152,   240,   237,   238,   241,   169,     0,     0,   273,
     272,   274,   276,    58,    65,    66,    67,    62,    64,    72,
      73,    60,    63,    61,    59,    69,    68,    70,    71,   411,
     412,   231,   232,   384,     0,   378,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,   332,
     333,   331,     0,   157,   155,     0,     0,   120,     0,     0,
     104,     0,   103,     0,     0,   110,     0,     0,   108,     0,
       0,   382,     0,    94,     0,    95,     0,     0,   124,   225,
     217,     0,   312,   245,   248,   247,   249,     0,   287,   290,
       0,   291,     0,   283,   292,   293,     0,     0,   139,   141,
     346,     0,   133,   136,     0,     0,   268,    55,    56,     0,
       0,     0,     0,   119,     0,    37,     0,   277,   239,   244,
     200,   198,   203,   210,   211,   212,   207,   209,   205,   208,
     206,   204,   214,   213,   179,   182,   180,   181,   192,   183,
     196,   188,   186,   199,   187,   185,   190,   195,   197,   184,
     189,   193,   194,   191,   201,   202,     0,   177,     0,   215,
     215,   175,   275,   380,   405,   405,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   100,   160,   158,   152,   107,
       0,     0,   350,     0,   349,     0,     0,   356,   111,     0,
     355,   109,     0,   381,    48,    47,   123,   366,   220,     0,
       0,   291,   246,   262,   284,     0,     0,     0,   143,     0,
       0,     0,   134,     0,     0,   116,   363,     0,     0,   114,
     362,     0,   433,    38,    74,   277,   277,   145,   277,   153,
       0,   178,     0,     0,   218,   171,   172,     0,     0,     0,
       0,     0,     0,     0,     0,   277,   354,     0,     0,   360,
       0,     0,   383,     0,   312,   315,   316,   317,     0,   314,
     318,   392,   258,   222,   221,     0,     0,     0,   301,   392,
     144,   142,     0,   137,     0,   117,     0,   115,   154,   250,
     176,   177,   215,   215,     0,     0,     0,     0,     0,     0,
       0,   146,     0,     0,     0,     0,    49,   291,   304,     0,
     259,   261,   260,   263,   254,   255,   163,     0,   135,     0,
       0,   251,   262,   173,   174,   216,     0,     0,     0,     0,
       0,     0,   353,   352,   359,   358,   224,   223,   306,   307,
     309,   392,     0,   428,   392,   365,   364,     0,     0,   308,
     310,   252,   170,   253,   304,   311
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   225,    77,   509,    79,    80,    81,   226,
     504,   508,   505,    82,    83,    84,   157,    85,   161,   198,
      86,    87,    88,    89,    90,    91,   604,    92,    93,   366,
     537,   664,    94,    95,   533,   659,    96,    97,   397,   677,
      98,   487,   488,   141,   174,   517,   100,   101,   398,   679,
     566,   718,   719,   720,   795,   341,   513,   514,   515,   466,
     567,   243,   647,   872,   902,   866,   190,   861,   823,   826,
     102,   214,   371,   103,   104,   177,   178,   345,   346,   527,
     349,   350,   523,   889,   820,   761,   227,   231,   232,   315,
     316,   317,   142,   106,   107,   108,   143,   110,   129,   130,
     467,   332,   630,   468,   111,   144,   145,   114,   147,   116,
     148,   149,   119,   120,   236,   121,   122,   123,   124,   125
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -813
static const yytype_int16 yypact[] =
{
    -813,    76,  2532,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  3636,    56,   104,  -813,    56,  7520,    12,   104,  7520,
    3636,    54,   104,   411,   571,  6270,  7520,  6381,  7520,    71,
    -813,   104,  -813,    30,  3636,  7520,  7520,  -813,  7520,  7520,
     215,   162,   598,   909,  -813,  6605,  6716,  7520,  6854,  7520,
     154,   183,  3636,  7520,  7631,  7631,   104,  -813,  6605,  7520,
    7520,  -813,  -813,  7520,  -813,  -813,  2373,  7520,  7520,  -813,
    7520,  -813,  -813,  2808,  5935,  6605,  -813,  3498,  -813,  -813,
     189,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,   104,  -813,   253,
      52,  -813,  -813,  -813,   272,   199,  -813,  -813,  -813,   205,
     221,   216,   230,   242, 12977,  1352,   204,   268,   275,  -813,
    -813,  -813,  -813,  -813,  -813,    44,  -813, 12977,   267,  3636,
    -813,   305,  -813,   306,  7520,  7520,  7520,  7520,  7520,  6605,
    6605,   286,  -813,  -813,  -813,  -813, 10228,   333,  -813,  -813,
     104,   319, 10487,   366,  6605,   323,  -813,  -813,  -813,  -813,
     104,   233,   104,   340,    35,  9216,  9138,  -813,  -813,  -813,
   10166,  9345,  6605,  3636,   341,    10,    86,    83,  -813,  -813,
     384,   372,  9407,   384,  -813,  6605,   299,  -813,  -813,   104,
    -813,    31, 12977,  -813, 10549, 10027,  3636,  -813,  -813,  9407,
   12977,   353,  6605,  -813, 12977, 10611,  -813,  -813, 10673,  1692,
    -813,  -813, 10735,   407,   365,    87, 10301,  9407, 10797,   287,
    1298,   384,   287,   384,  -813,  -813,  2946,   -57,  -813,  7520,
    -813,   -31,   -27, 12977,    46, 10859,   -56,   497,  -813,   104,
     397,  -813,  -813,  -813,     9,    30,    30,    30,  -813,  7520,
    7520,  7520,  7520,  6965,  6965,  7520,  7520,  7520,  7520,  7520,
    7520,    74,  2373,  7520,  7520,  7520,  7520,  7520,  7520,  7520,
    7520,  7520,  7520,  7520,  7520,  7520,  7520,  7520,  7520,  7520,
    7520,  7520,  7520,  7520,  7520,  7520,  7520,  7520,  7520,  7520,
    7520,  7520,  7520,  7520,  6605,  6605,  6965,  6965,  5824,  -813,
    -813,  3084,  -813, 10363, 10425, 10921,    57,  6965,    35,   380,
    -813,  -813,  7520,   421,  -813,   379,   409,  -813, 12977,   104,
     393,   104,   477,  6605,  -813,  3774,  6965,  -813,  3912,  6965,
     385,  -813,    35,  7742,  7520,  -813,  3636,   498,   389,  -813,
      81,  -813,  -813,    10,  -813,   420,   392,  -813,  5267,   443,
     442,  7520,    30,  -813,   395,  -813,  -813,  6605,  -813,  -813,
    -813,  -813,  -813,  6605,   398,  -813,   520,  -813,   520,  -813,
    5378,   429,  -813,  -813,  7742,  7520,  -813,  -813,  -813,  -813,
    6492,  -813,  2345,  6048,  -813,  6159,  -813,  6965,  5489,  2670,
     401,  7520,  5711,  -813,  -813,   410,  6605,   412,   352,    30,
     100,   187,   200,   231, 10089,  1580,  1580,   376,  -813,   376,
    -813,   376,  2066,  1224,  1063,   324,   372,   287,  -813,  -813,
    -813,  1298, 12576,   376,   579,   579,  1580,   579,   579,   910,
     287, 12576,  8924,   910,   384,   384,   287, 10983, 11045, 11107,
   11169, 11231, 11293, 11355, 11417, 11479, 11541, 11603, 11665, 11727,
   11789, 11851, 11913,   404,   408,  -813,   376,  -813,   376,   115,
    -813,  -813,  -813,  -813,  -813,  -813,   104,    89,  -813, 13039,
     377,  7853,  6965,  7964,  6965,  7520,  6965,  8741,    56, 11975,
    -813,  -813, 12042,  6605,  -813,  6605,   454,   193,  -813,  -813,
     397,  7520,    91,  7520, 12977,    48,  9469,  7520, 12977,    50,
    9278,  5824,  -813,   424,   440,   426, 12104,   440,   427,   531,
   12166,  3636,  -813,    92,  -813,    42,  -813,   390,   423,    10,
     103,  -813,  6605,  -813,   347,  7520,  7076,  -813, 12977,  -813,
    -813,  -813, 12977,    66,   431,  -813,    28,  -813,  6605,  -813,
     265,   104,   437,   444,  -813,  -813,  -813,  -813,  -813,  -813,
       5,  8709,  -813,  -813, 12977,  3636, 12977,  -813, 12228,  3222,
     449,  -813,   509,  -813,  -813,  -813,  -813,  8791,   288,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  5824,  -813,  6965,  6965,  7520,   535,
   12290,  7520,   556, 12352,   441,  1869,    35,    35,  -813,  -813,
   12977,  -813,  7520,   104,  -813,   448,  9407,  -813,  9531,  4050,
    -813,  4188,  -813,  9593,  4326,  -813,    35,  4464,  -813,    35,
      94,  -813,  7520,  -813,  7520,  -813,  3636,  7520,  -813,   374,
    -813,    10,   479,   526,  -813,  -813,  -813,    29,  -813,  -813,
    5378,   442,    59, 12977,  -813, 12977,  4602,  6605,  -813,  -813,
    -813,   104,  -813,   482,   306,    73,  -813,  -813,  -813,  4740,
     458,  4878,   461,  -813,  7520,  -813,  3360,   537,  -813,   390,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,   104,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  7520,   493,   494,   469,
     469,  -813,  -813,  -813,    95,    98, 12414,  8075,  8186, 12476,
    8297,  8408,  8519,  8630,  -813,  -813, 12977,  -813,  -813,  -813,
    3636,  7520, 12977,  7520, 12977,  3636,  7520, 12977,  -813,  7520,
   12977,  -813,  5824,  -813, 12543, 12977,  -813, 12977,  -813,   470,
    7187,   217,  -813,   528,  -813,  6965,  4991,  3636,  -813,    45,
     472,  7520,  -813,  5129,  7520,  -813, 12977,  3636,  7520,  -813,
   12977,  3636, 12977,  -813,  1027,   307,   307,  -813,  1100,  -813,
      21,  -813,  9076,  8839,    81,  -813,  -813,  7520,  7520,  7520,
    7520,  7520,  7520,  7520,  7520,   872, 12166,  9655,  9717, 12166,
    9779,  9841,  -813,  7520,   479,    54,  7520,  7520,  5600,  -813,
    -813,    97,  6605,  -813,  -813,  7520,   -33,  8958,  -813,   762,
     366,  -813,   306, 12977,  9903,  -813,  9965,  -813,  -813,   539,
    -813,  -813,   469,   469,   185, 12605, 12667, 12729, 12791, 12853,
   12915,  -813,  3636,  3636,  3636,  3636, 12977,   217,  7298,    80,
    -813,  -813, 12977, 12977,  -813,  -813,  -813,  8630,  -813,  3636,
    3636,  -813,   528,  -813,  -813,  -813,  7520,  7520,  7520,  7520,
    7520,  7520, 12166, 12166, 12166, 12166,  -813,  -813,  -813,  -813,
    -813,   430,  6965,  2198,   878, 12166, 12166,    34,  9002,  -813,
    -813,  -813,  -813,  -813,  7409,  -813
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -813,  -813,  -813,     1,  -651,  1727,  -813,  -813,  1473,    60,
    -260,   247,   250,  -813,  -813,    43,   403,  1873,    -4,   486,
    -757,  -626,   -41,  -813,  -813,  -813,    36,  -813,  -813,   417,
    -813,   -30,  -813,  -813,  -813,  -813,  -813,   474,   140,  -101,
    -813,  -813,    26,   527,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -153,  -151,  -670,  -813,  -147,    15,  -813,  -319,
    -813,  -813,   -24,  -813,  -813,  -249,     4,  -813,  -198,  -211,
    -813,  -140,  -813,   635,  -813,  -179,   312,  -813,  -334,  -640,
    -813,  -502,  -366,  -536,  -812,  -149,    13,   120,  -813,   -71,
    -813,   182,   368,  -341,  -813,  -813,   722,  -813,    -9,  -813,
    -813,  -195,  -813,  -461,  -813,   748,   959,   -11,   447,  -813,
    1216,  1286,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -275
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -429
static const yytype_int16 yytable[] =
{
     127,   187,   188,    76,   539,   146,   133,   524,   152,   518,
     309,   764,     5,     5,   165,   166,   170,   171,   651,   158,
     320,   516,   347,   470,   180,   181,   788,   182,   183,   540,
     347,     5,    46,     5,   192,   194,   195,   199,   200,   390,
     631,   204,   205,   208,   212,     5,   890,   216,   217,   218,
     796,   789,   219,   380,   392,   220,   221,   222,   191,   223,
     196,   164,   192,   233,   235,   400,   401,   402,   403,   865,
     196,   215,   399,   619,   507,   624,     3,     5,   230,   383,
     381,   900,   387,   385,  -225,   393,  -296,   347,   234,   342,
     150,   330,   241,   476,  -296,   765,  -296,   207,   211,    46,
     418,   338,   459,   301,   347,  -296,   296,     5,   384,   765,
     297,   242,   386,  -296,   354,   507,   892,   460,   656,   351,
     461,   824,  -296,   127,   303,   304,   305,   204,   192,   235,
     650,   364,   330,   723,   462,   463,   330,   308,   650,  -296,
     865,   357,   128,   318,   464,   763,   669,   175,   343,   657,
    -296,   591,   419,   306,   788,   357,   388,  -296,   314,   465,
     358,   318,   838,   901,   301,  -296,   661,   388,   175,   388,
     301,   301,   873,   874,   318,  -294,   314,  -296,   592,   789,
     641,   301,   355,   388,   301,   649,   301,   389,  -313,   314,
     388,   318,   154,   352,  -296,   348,  -296,   357,   477,   594,
     766,   357,   639,   658,   752,  -385,   314,  -313,  -386,   172,
     352,  -313,   650,  -296,   773,  -296,   373,   887,   382,  -225,
     568,   893,   184,   453,   454,   201,   470,   379,   595,   569,
     617,   640,  -296,   753,  -385,   239,  -313,  -386,   404,   405,
     406,   407,   409,   411,   412,   413,   414,   415,   416,   417,
      14,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   318,   318,   456,   458,   469,   839,   408,
     410,   812,   534,   244,    44,   639,   479,   352,   314,   314,
     185,   482,     5,   613,   626,   629,   156,   759,   526,   524,
     352,   252,   192,    57,   494,   496,   570,   498,   500,   470,
     516,   202,   506,   506,   875,   510,   245,   167,  -369,   571,
     614,   822,   455,   457,  -368,   246,   492,    23,   186,   -74,
     528,   352,   294,   478,   295,    30,   532,  -164,   252,   253,
     248,   249,   318,   254,   247,   670,   672,   899,   -74,  -373,
     572,   531,   495,   506,   506,   499,  -164,   314,   905,   532,
     105,  -374,   233,   562,   233,  -270,   551,   532,   554,   105,
     556,   558,  -372,  -297,   531,   192,   253,   230,   105,   230,
     254,  -410,   531,  -410,  -270,   459,   259,  -371,   352,   261,
     828,   666,   105,   264,  -370,   298,   563,   828,   252,   560,
     460,   643,  -297,   461,     5,   564,   131,   722,   156,   821,
     105,   151,  -297,   550,  -410,   829,  -410,   462,   463,   256,
     565,  -297,   829,   259,   300,   260,   261,   464,  -297,   597,
     264,   105,   301,   297,   644,   105,   253,   271,   310,   115,
     254,   312,   465,   645,   275,   276,   277,  -297,   115,   319,
     494,   600,   498,   603,   510,   605,   554,   115,   646,   606,
     607,  -409,   610,  -409,   318,   516,  -297,   470,   323,   340,
     616,   115,   618,  -297,   261,   259,   623,   609,   261,   314,
     469,   363,   264,   259,   372,   260,   261,   105,   370,   115,
     264,   209,   209,   547,   394,   549,   396,   271,   599,   481,
     602,   235,   483,   491,   653,   655,   277,   891,   484,   485,
     115,  -305,   489,   501,   115,   511,   894,   235,   512,    99,
     519,   520,   525,   526,   530,   652,   536,   535,    99,   541,
    -305,   105,   555,   589,  -305,   612,   559,    99,   561,   590,
     632,   665,   891,   -52,    14,   633,   635,    17,   636,   357,
     727,    99,   648,   891,   105,    22,   667,    23,   784,  -305,
     660,    27,   678,   668,     5,    30,   115,  -164,   156,    99,
     159,   730,   732,   469,   738,   409,   456,   726,   760,   762,
     729,   771,  -279,    40,   105,   785,  -164,   786,    44,   777,
      99,   736,   781,   252,    99,  -336,   793,   794,   742,   814,
     744,   832,   825,   747,   871,    56,   750,    57,   167,   676,
     115,   754,   543,   755,   542,  -279,   757,   368,    23,   186,
     615,   770,   408,   455,  -279,   321,    30,   805,  -164,   737,
     842,   253,   843,   115,   -41,   254,   192,   844,   903,   160,
     324,   327,   331,  -279,   758,   790,    99,  -164,   776,   886,
     780,   897,   169,   782,   529,   857,    71,   611,   353,   105,
     769,     0,     0,   115,   787,     0,     0,   379,     0,     0,
       0,     0,     0,     0,   256,   362,   257,   258,   259,     0,
     260,   261,   262,   105,     0,   264,   105,     0,     0,     0,
      99,   270,   271,   376,   105,   792,   274,     0,     0,   275,
     276,   277,     0,     0,     0,     0,   742,   744,     0,   747,
     750,   776,   780,    99,   109,     0,     0,     0,     0,   806,
     807,     0,   808,   109,   809,   810,     0,     0,   811,     0,
       0,   469,   109,     0,   187,   188,     0,     0,   115,     0,
     112,     0,     0,    99,   827,   554,   109,   105,     0,   112,
     833,     0,   554,   834,   819,     0,     0,   836,   112,     0,
       0,     0,   115,     0,   109,   115,     0,     0,     0,     0,
       0,     0,   112,   115,     0,     0,   806,   845,   846,   809,
     847,   848,   849,   850,   480,   109,     0,     0,  -300,   109,
     112,     0,   856,     0,     0,   200,   204,   235,     0,     0,
       0,   862,     0,     0,   863,     0,     0,     0,   502,     0,
       0,   112,     0,     0,     0,   112,   860,  -300,    99,     0,
       0,   859,     0,     0,   593,     0,   115,  -300,     0,     0,
       0,   882,   883,   884,   885,     0,  -300,     0,     0,     0,
       0,   109,    99,  -300,     0,    99,   780,     0,   895,   896,
       0,     0,   888,    99,     0,   882,   883,   884,   885,   895,
     896,     0,  -300,     0,     0,     0,     0,   112,     0,   105,
       0,   898,   554,     0,     0,     0,     0,     0,     0,    14,
       0,  -300,    17,   780,     0,   109,     0,   888,  -300,     0,
      22,     0,    23,   784,     0,     0,    27,     0,   888,     0,
      30,     0,  -164,     0,  -302,     0,    99,     0,   109,     0,
       0,   112,     0,   105,     0,     0,     0,   105,    40,   167,
     785,  -164,   786,    44,   252,   721,     0,     0,     0,    23,
     186,     0,     0,  -302,   112,     0,     0,    30,   109,  -164,
      56,     0,    57,  -302,     0,   -40,     0,     0,   115,     0,
       0,   113,  -302,     0,   724,   725,     0,     0,  -164,  -302,
     113,     0,   253,     0,   112,     0,   254,     0,     0,   113,
       0,   620,   622,     0,     0,   625,   628,   105,  -302,   105,
       0,     0,   105,   113,     0,   105,     0,     0,     0,     0,
       0,    71,   115,     0,   105,     0,   115,  -302,     0,   851,
       0,   113,     0,     0,  -302,   256,     0,   257,   258,   259,
       0,   260,   261,   109,   105,     0,   264,     0,     0,     0,
       5,     0,   113,   271,   156,     0,   113,   105,    99,   105,
     275,   276,   277,     0,   105,     0,     0,   109,  -279,   112,
     109,     0,     0,     0,     0,     0,     0,     0,   109,     0,
       0,     0,     0,     0,     0,     0,   115,     0,   115,     0,
       0,   115,     0,   112,   115,     0,   112,     0,     0,     0,
       0,  -279,    99,   115,   112,     0,    99,   252,   113,     0,
    -279,     0,   734,   735,     0,     0,     0,     0,     0,     0,
       0,     0,   739,   115,     0,   160,     0,     0,   105,  -279,
       0,   109,   748,   105,     0,   751,   115,    14,   115,     0,
      17,     0,     0,   115,     0,   253,     0,     0,    22,   254,
      23,   784,   113,     0,    27,   105,     0,   112,    30,     0,
    -164,     0,     0,     0,     0,   105,    99,     0,    99,   105,
       0,    99,     0,     0,    99,   113,   237,     0,   785,  -164,
     786,    44,     0,    99,     0,     0,     0,     0,   256,     0,
       0,   258,   259,     0,   260,   261,     0,     0,    56,   264,
      57,     0,     0,    99,     0,   113,   271,   115,     0,     0,
       0,     0,   115,   275,   276,   277,    99,     0,    99,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   117,     0,
     105,   105,   105,   105,   115,     0,     0,   117,   115,    71,
       0,     0,     0,   109,     0,     0,   117,   105,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   252,     0,
     117,     0,     0,     0,     0,   831,     0,     0,     0,   112,
     113,     0,     0,     0,     0,     0,     0,    99,   117,     0,
       0,     0,    99,     0,     0,     0,     0,   109,     0,     0,
       0,   109,     0,     0,   113,     0,   253,   113,   118,   117,
     254,     0,     0,   117,    99,   113,     0,   118,     0,   115,
     115,   115,   115,   112,    99,     0,   118,   112,    99,     0,
       0,     0,     0,     0,     0,     0,   115,   115,     0,     0,
     118,     0,   252,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   259,     0,   260,   261,     0,   118,     0,
     264,   109,     0,   109,     0,   117,   109,   271,   113,   109,
       0,     0,     0,     0,   275,   276,   277,     0,   109,   118,
     253,     0,     0,   118,   254,     0,     0,   112,     0,   112,
       0,     0,   112,     0,     0,   112,     0,     0,   109,    99,
      99,    99,    99,     0,   112,     0,     0,     0,     0,   117,
       0,   109,     0,   109,     0,     0,    99,    99,   109,     0,
       0,     0,     0,   256,   112,   257,   258,   259,     0,   260,
     261,     0,   117,     0,   264,   118,     0,   112,     0,   112,
     270,   271,     0,     0,   112,   274,     0,     0,   275,   276,
     277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,     0,     0,   118,
       0,     0,   109,     0,     0,     0,     0,   109,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,   292,   293,  -387,   112,   109,
    -409,     0,  -409,   112,     0,     0,     0,     0,     0,   109,
       0,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,   113,   112,     0,   117,   113,     0,
       0,   197,     0,     0,     0,   112,     0,   206,   210,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,   117,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   109,   109,   109,   113,     0,
     113,     0,     0,   113,     0,     0,   113,   118,     0,     0,
       0,   109,   109,     0,     0,   113,     0,     0,     0,     0,
     112,   112,   112,   112,   252,   117,   302,     0,     0,     0,
       0,   118,     0,     0,   118,   113,     0,   112,   112,     0,
       0,     0,   118,     0,     0,     0,     0,     0,   113,     0,
     113,     0,     0,     0,     0,   113,     0,   197,   197,   197,
       0,     0,   253,     0,   337,     0,   254,     0,     0,     0,
       0,     0,     0,     0,     0,   197,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,   197,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   256,     0,   257,   258,   259,
     197,   260,   261,   262,     0,   263,   264,   265,   266,   113,
     268,   269,   270,   271,   113,   272,   273,   274,     0,     0,
     275,   276,   277,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   117,     0,    78,
       0,     0,     0,     0,     0,     0,   113,     0,   126,     0,
     113,     0,     0,     0,     0,     0,     0,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   117,     0,     0,     0,   203,
       0,   197,     0,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   118,     0,     0,
      78,     0,     0,     0,   238,   197,     0,     0,     0,     0,
       0,   113,   113,   113,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   292,   293,     0,   113,   113,
    -409,     0,  -409,     0,     0,   117,     0,   117,     0,     0,
     117,   118,     0,   117,     0,   118,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,   299,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,   250,
       0,     0,     0,     0,   251,   117,   132,   117,     0,     0,
       0,   132,   117,   252,     0,   155,   132,   132,     0,     0,
     339,     0,     0,     0,   173,   118,   176,   118,     0,     0,
     118,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,   118,   361,     0,     0,     0,     0,     0,   213,
       0,   253,     0,     0,     0,   254,     0,     0,     0,     0,
       0,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,   118,   117,   118,     0,   255,
       0,   117,   118,     0,     0,     0,     0,     0,   197,   197,
     240,     0,   197,   197,   256,     0,   257,   258,   259,     0,
     260,   261,   262,   117,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   117,   272,   273,   274,   117,     0,   275,
     276,   277,     0,     0,     0,     0,     0,     0,     0,   662,
     733,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   213,     0,     0,   118,   313,    78,     0,
       0,   118,     0,   213,     0,   322,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   313,     0,     0,   344,     0,
       0,     0,   361,   118,     0,   361,     0,     0,   313,   132,
       0,     0,   356,   118,     0,     0,     0,   118,   117,   117,
     117,   117,     0,     0,     0,   313,     0,     0,     0,   197,
     197,     0,     0,     0,     0,   117,   117,     0,     0,   197,
     252,   337,     0,     0,     0,     0,   337,     0,     0,   197,
       0,     0,   197,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   395,     0,     0,     0,   553,   176,   176,   176,
     176,     0,     0,     0,     0,     0,     0,     0,   253,     0,
       0,     0,   254,     0,   420,     0,     0,   772,   118,   118,
     118,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   313,   313,     0,
       0,   256,     0,   257,   258,   259,     0,   260,   261,   262,
       0,   263,   264,   265,   266,     0,   268,   269,   270,   271,
       0,   272,   486,   274,   490,     0,   275,   276,   277,     0,
       0,     5,     6,     7,     8,     9,    10,     0,     0,     0,
     134,     0,     0,     0,     0,     0,   344,     0,     0,     0,
       0,     0,     0,     0,    21,   176,     0,     0,     0,     0,
     135,   136,     0,   137,     0,    29,   313,     0,   638,     0,
      32,    33,   197,    35,     0,    36,    37,     0,     0,     0,
       0,     0,     0,    39,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    50,    51,
     138,     0,   176,     0,     0,     0,     0,     0,     0,     0,
     337,   337,   673,   337,   337,     0,    78,     0,     0,  -304,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   864,
       0,     0,     0,     0,    63,   868,     0,   337,  -304,   337,
       0,     0,  -304,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,   189,     0,     0,     0,
       0,     0,     0,     0,   139,     0,    74,  -304,   818,     0,
       0,     0,     0,     0,     0,     0,   361,     0,   361,     0,
       0,   361,     0,     0,   361,   250,     0,     0,   313,     0,
     251,     0,     0,   756,     0,     0,     0,     0,     0,   252,
     864,     0,     0,     0,     0,     0,     5,     6,     7,     8,
       9,    10,     0,   768,     0,   134,     0,     0,   642,     0,
       0,     0,   344,     0,     0,     0,   775,     0,   779,    21,
       0,     0,     0,    78,     0,   135,   136,   253,   137,   663,
      29,   254,     0,     0,   213,    32,    33,     0,    35,     0,
      36,    37,     0,     0,     0,     0,     0,     0,    39,     0,
      41,     0,     0,     0,     0,   255,     0,     0,     0,     0,
     717,     0,    49,    50,    51,   138,     0,     0,     0,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,     0,
     272,   273,   274,     0,     0,   275,   276,   277,    62,    63,
      64,    65,     0,     0,   545,     0,   486,     0,     0,     0,
       0,     0,     0,     0,   830,    67,     0,    68,     0,     0,
      70,     0,     0,     0,   835,    72,     0,     0,   837,   139,
       0,    74,     0,   140,   344,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -2,     4,   663,     5,     6,     7,     8,     9,
      10,     0,     0,     0,    11,    12,    13,     0,     0,    14,
      15,    16,    17,  -277,    18,    19,     0,    20,    21,     0,
      22,     0,    23,    24,    25,    26,    27,    28,   791,    29,
      30,     0,  -164,    31,    32,    33,    34,    35,   -39,    36,
      37,     0,    38,     0,     0,     0,  -277,    39,    40,    41,
      42,  -164,    43,    44,     0,  -277,    45,    46,     0,    47,
      48,    49,    50,    51,    52,     0,    53,     0,    54,    55,
      56,     0,    57,    58,  -277,     0,     0,    59,     0,    60,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,    67,     0,    68,   132,    69,    70,
       0,    71,     0,     0,    72,     0,   841,     0,    73,     0,
      74,     4,    75,     5,     6,     7,     8,     9,    10,     0,
    -428,     0,    11,    12,    13,  -428,     0,    14,    15,    16,
      17,  -277,    18,    19,  -428,    20,    21,  -428,    22,     0,
      23,    24,    25,    26,    27,    28,     0,    29,    30,     0,
    -164,    31,    32,    33,    34,    35,   -39,    36,    37,     0,
      38,     0,     0,     0,  -277,    39,     0,    41,    42,  -164,
      43,    44,  -428,  -277,    45,    46,  -428,    47,    48,    49,
      50,    51,    52,     0,    53,     0,    54,    55,    56,     0,
      57,    58,  -277,     0,     0,    59,     0,    60,     0,     0,
    -428,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -428,    63,  -428,  -428,  -428,
    -428,  -428,  -428,  -428,     0,  -428,  -428,  -428,  -428,  -428,
    -428,  -428,  -428,  -428,    68,  -428,  -428,  -428,     0,    71,
    -428,  -428,  -428,     0,     0,     0,    73,  -428,    74,     4,
      75,     5,     6,     7,     8,     9,    10,     0,     0,     0,
      11,    12,    13,     0,     0,    14,    15,    16,    17,  -277,
      18,    19,     0,    20,    21,     0,    22,     0,    23,    24,
      25,    26,    27,    28,     0,    29,    30,     0,  -164,    31,
      32,    33,    34,    35,   -39,    36,    37,     0,    38,     0,
       0,     0,  -277,    39,    40,    41,    42,  -164,    43,    44,
       0,  -277,    45,    46,     0,    47,    48,    49,    50,    51,
      52,     0,    53,     0,    54,    55,    56,     0,    57,    58,
    -277,     0,     0,    59,     0,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,    68,     0,    69,    70,   189,    71,     0,     0,
      72,     0,     0,     0,    73,   224,    74,     4,    75,     5,
       6,     7,     8,     9,    10,     0,     0,     0,    11,    12,
      13,     0,     0,    14,    15,    16,    17,  -277,    18,    19,
       0,    20,    21,     0,    22,     0,    23,    24,    25,    26,
      27,    28,     0,    29,    30,     0,  -164,    31,    32,    33,
      34,    35,   -39,    36,    37,     0,    38,     0,     0,     0,
    -277,    39,    40,    41,    42,  -164,    43,    44,     0,  -277,
      45,    46,     0,    47,    48,    49,    50,    51,    52,     0,
      53,     0,    54,    55,    56,     0,    57,    58,  -277,     0,
       0,    59,     0,    60,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
      68,     0,    69,    70,     0,    71,     0,     0,    72,     0,
       0,     0,    73,   378,    74,     4,    75,     5,     6,     7,
       8,     9,    10,     0,     0,     0,    11,    12,    13,     0,
       0,    14,    15,    16,    17,  -277,    18,    19,     0,    20,
      21,     0,    22,     0,    23,    24,    25,    26,    27,    28,
       0,    29,    30,     0,  -164,    31,    32,    33,    34,    35,
     -39,    36,    37,     0,    38,     0,     0,     0,  -277,    39,
      40,    41,    42,  -164,    43,    44,     0,  -277,    45,    46,
       0,    47,    48,    49,    50,    51,    52,     0,    53,     0,
      54,    55,    56,     0,    57,    58,  -277,     0,     0,    59,
       0,    60,     0,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,    68,     0,
      69,    70,     0,    71,     0,     0,    72,     0,     0,     0,
      73,   224,    74,     4,    75,     5,     6,     7,     8,     9,
      10,     0,     0,     0,    11,    12,    13,     0,     0,    14,
      15,    16,    17,  -277,    18,    19,     0,    20,    21,     0,
      22,     0,    23,    24,    25,    26,    27,    28,     0,    29,
      30,     0,  -164,    31,    32,    33,    34,    35,   -39,    36,
      37,     0,    38,     0,     0,     0,  -277,    39,    40,    41,
      42,  -164,    43,    44,     0,  -277,    45,    46,     0,    47,
      48,    49,    50,    51,    52,     0,    53,     0,    54,    55,
      56,     0,    57,    58,  -277,     0,     0,    59,     0,    60,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,    67,     0,    68,     0,    69,    70,
       0,    71,     0,     0,    72,     0,     0,     0,    73,   675,
      74,     4,    75,     5,     6,     7,     8,     9,    10,     0,
       0,     0,    11,    12,    13,     0,     0,    14,    15,    16,
      17,  -277,    18,    19,     0,    20,    21,     0,    22,     0,
      23,    24,    25,    26,    27,    28,     0,    29,    30,     0,
    -164,    31,    32,    33,    34,    35,   -39,    36,    37,     0,
      38,     0,     0,     0,  -277,    39,    40,    41,    42,  -164,
      43,    44,     0,  -277,    45,    46,     0,    47,    48,    49,
      50,    51,    52,     0,    53,     0,    54,    55,    56,     0,
      57,    58,  -277,     0,     0,    59,     0,    60,     0,     0,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,    67,     0,    68,     0,    69,    70,     0,    71,
       0,     0,    72,     0,     0,     0,    73,   783,    74,     4,
      75,     5,     6,     7,     8,     9,    10,     0,     0,     0,
      11,    12,    13,     0,     0,    14,    15,    16,    17,  -277,
      18,    19,     0,    20,    21,     0,    22,     0,    23,    24,
      25,    26,    27,    28,     0,    29,    30,     0,  -164,    31,
      32,    33,    34,    35,   -39,    36,    37,     0,    38,     0,
       0,     0,  -277,    39,   237,    41,    42,  -164,    43,    44,
       0,  -277,    45,    46,     0,    47,    48,    49,    50,    51,
      52,     0,    53,     0,    54,    55,    56,     0,    57,    58,
    -277,     0,     0,    59,     0,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,    68,     0,    69,    70,     0,    71,     0,     0,
      72,     0,     0,     0,    73,     0,    74,     4,    75,     5,
       6,     7,     8,     9,    10,     0,     0,     0,    11,    12,
      13,     0,     0,    14,    15,    16,    17,  -277,    18,    19,
       0,    20,    21,     0,    22,     0,    23,    24,    25,    26,
      27,    28,     0,    29,    30,     0,  -164,    31,    32,    33,
      34,    35,   -39,    36,    37,     0,    38,     0,     0,     0,
    -277,    39,     0,    41,    42,  -164,    43,    44,     0,  -277,
      45,    46,     0,    47,    48,    49,    50,    51,    52,     0,
      53,     0,    54,    55,    56,     0,    57,    58,  -277,     0,
       0,    59,     0,    60,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
      68,     0,    69,    70,     0,    71,     0,     0,    72,     0,
       0,     0,    73,     0,    74,     4,    75,     5,     6,     7,
       8,     9,    10,     0,     0,     0,    11,    12,    13,     0,
       0,    14,    15,    16,    17,  -277,    18,    19,     0,    20,
      21,     0,    22,     0,    23,    24,    25,    26,    27,   493,
       0,    29,    30,     0,  -164,    31,    32,    33,    34,    35,
     -39,    36,    37,     0,    38,     0,     0,     0,  -277,    39,
       0,    41,    42,  -164,    43,    44,     0,  -277,    45,    46,
       0,    47,    48,    49,    50,    51,    52,     0,    53,     0,
      54,    55,    56,     0,    57,    58,  -277,     0,     0,    59,
       0,    60,     0,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,    68,     0,
      69,    70,     0,    71,     0,     0,    72,     0,     0,     0,
      73,     0,    74,     4,    75,     5,     6,     7,     8,     9,
      10,     0,     0,     0,    11,    12,    13,     0,     0,    14,
      15,    16,    17,  -277,    18,    19,     0,    20,    21,     0,
      22,     0,    23,    24,    25,    26,    27,   497,     0,    29,
      30,     0,  -164,    31,    32,    33,    34,    35,   -39,    36,
      37,     0,    38,     0,     0,     0,  -277,    39,     0,    41,
      42,  -164,    43,    44,     0,  -277,    45,    46,     0,    47,
      48,    49,    50,    51,    52,     0,    53,     0,    54,    55,
      56,     0,    57,    58,  -277,     0,     0,    59,     0,    60,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,    67,     0,    68,     0,    69,    70,
       0,    71,     0,     0,    72,     0,     0,     0,    73,     0,
      74,     4,    75,     5,     6,     7,     8,     9,    10,     0,
       0,     0,    11,    12,    13,     0,     0,    14,    15,    16,
      17,  -277,    18,    19,     0,    20,    21,     0,    22,     0,
      23,    24,    25,    26,    27,   741,     0,    29,    30,     0,
    -164,    31,    32,    33,    34,    35,   -39,    36,    37,     0,
      38,     0,     0,     0,  -277,    39,     0,    41,    42,  -164,
      43,    44,     0,  -277,    45,    46,     0,    47,    48,    49,
      50,    51,    52,     0,    53,     0,    54,    55,    56,     0,
      57,    58,  -277,     0,     0,    59,     0,    60,     0,     0,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,    67,     0,    68,     0,    69,    70,     0,    71,
       0,     0,    72,     0,     0,     0,    73,     0,    74,     4,
      75,     5,     6,     7,     8,     9,    10,     0,     0,     0,
      11,    12,    13,     0,     0,    14,    15,    16,    17,  -277,
      18,    19,     0,    20,    21,     0,    22,     0,    23,    24,
      25,    26,    27,   743,     0,    29,    30,     0,  -164,    31,
      32,    33,    34,    35,   -39,    36,    37,     0,    38,     0,
       0,     0,  -277,    39,     0,    41,    42,  -164,    43,    44,
       0,  -277,    45,    46,     0,    47,    48,    49,    50,    51,
      52,     0,    53,     0,    54,    55,    56,     0,    57,    58,
    -277,     0,     0,    59,     0,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,    66,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,    68,     0,    69,    70,     0,    71,     0,     0,
      72,     0,     0,     0,    73,     0,    74,     4,    75,     5,
       6,     7,     8,     9,    10,     0,     0,     0,    11,    12,
      13,     0,     0,    14,    15,    16,    17,  -277,    18,    19,
       0,    20,    21,     0,    22,     0,    23,    24,    25,    26,
      27,   746,     0,    29,    30,     0,  -164,    31,    32,    33,
      34,    35,   -39,    36,    37,     0,    38,     0,     0,     0,
    -277,    39,     0,    41,    42,  -164,    43,    44,     0,  -277,
      45,    46,     0,    47,    48,    49,    50,    51,    52,     0,
      53,     0,    54,    55,    56,     0,    57,    58,  -277,     0,
       0,    59,     0,    60,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
      68,     0,    69,    70,     0,    71,     0,     0,    72,     0,
       0,     0,    73,     0,    74,     4,    75,     5,     6,     7,
       8,     9,    10,     0,     0,     0,    11,    12,    13,     0,
       0,    14,    15,    16,    17,  -277,    18,    19,     0,    20,
      21,     0,    22,     0,    23,    24,    25,    26,    27,   749,
       0,    29,    30,     0,  -164,    31,    32,    33,    34,    35,
     -39,    36,    37,     0,    38,     0,     0,     0,  -277,    39,
       0,    41,    42,  -164,    43,    44,     0,  -277,    45,    46,
       0,    47,    48,    49,    50,    51,    52,     0,    53,     0,
      54,    55,    56,     0,    57,    58,  -277,     0,     0,    59,
       0,    60,     0,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,    68,     0,
      69,    70,     0,    71,     0,     0,    72,     0,     0,     0,
      73,     0,    74,     4,    75,     5,     6,     7,     8,     9,
      10,     0,     0,     0,    11,    12,    13,     0,     0,    14,
      15,    16,    17,  -277,    18,    19,     0,   767,    21,     0,
      22,     0,    23,    24,    25,    26,    27,    28,     0,    29,
      30,     0,  -164,    31,    32,    33,    34,    35,   -39,    36,
      37,     0,    38,     0,     0,     0,  -277,    39,     0,    41,
      42,  -164,    43,    44,     0,  -277,    45,    46,     0,    47,
      48,    49,    50,    51,    52,     0,    53,     0,    54,    55,
      56,     0,    57,    58,  -277,     0,     0,    59,     0,    60,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,    67,     0,    68,     0,    69,    70,
       0,    71,     0,     0,    72,     0,     0,     0,    73,     0,
      74,     4,    75,     5,     6,     7,     8,     9,    10,     0,
       0,     0,    11,    12,    13,     0,     0,    14,    15,    16,
      17,  -277,    18,    19,     0,    20,    21,     0,    22,     0,
      23,    24,    25,    26,    27,   774,     0,    29,    30,     0,
    -164,    31,    32,    33,    34,    35,   -39,    36,    37,     0,
      38,     0,     0,     0,  -277,    39,     0,    41,    42,  -164,
      43,    44,     0,  -277,    45,    46,     0,    47,    48,    49,
      50,    51,    52,     0,    53,     0,    54,    55,    56,     0,
      57,    58,  -277,     0,     0,    59,     0,    60,     0,     0,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,    67,     0,    68,     0,    69,    70,     0,    71,
       0,     0,    72,     0,     0,     0,    73,     0,    74,     4,
      75,     5,     6,     7,     8,     9,    10,     0,     0,     0,
      11,    12,    13,     0,     0,    14,    15,    16,    17,  -277,
      18,    19,     0,    20,    21,     0,    22,     0,    23,    24,
      25,    26,    27,   778,     0,    29,    30,     0,  -164,    31,
      32,    33,    34,    35,   -39,    36,    37,     0,    38,     0,
       0,     0,  -277,    39,     0,    41,    42,  -164,    43,    44,
       0,  -277,    45,    46,     0,    47,    48,    49,    50,    51,
      52,     0,    53,     0,    54,    55,    56,     0,    57,    58,
    -277,     0,     0,    59,     0,    60,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,    66,   521,     0,     5,     6,     7,     8,     9,    10,
      67,  -428,    68,   134,    69,    70,  -428,    71,     0,     0,
      72,     0,     0,     0,    73,  -428,    74,    21,    75,     0,
       0,     0,     0,   135,   136,     0,   137,     0,    29,     0,
       0,     0,     0,    32,    33,     0,    35,     0,    36,    37,
       0,     0,     0,     0,     0,     0,    39,     0,    41,     0,
       0,     0,     0,  -428,     0,     0,     0,  -428,     0,     0,
      49,    50,    51,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -295,  -428,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -428,    63,  -428,  -428,
    -428,     0,  -428,  -428,  -428,     0,  -428,  -428,  -428,  -428,
    -428,  -428,  -428,  -428,  -428,    68,  -428,  -428,  -428,     0,
       0,  -428,  -428,  -428,     0,     0,     0,   139,     0,    74,
     521,   538,     5,     6,     7,     8,     9,    10,     0,  -428,
       0,   134,     0,     0,  -428,     0,     0,     0,     0,     0,
       0,     0,     0,  -428,     0,    21,     0,     0,     0,     0,
       0,   135,   136,     0,   137,     0,    29,     0,     0,     0,
       0,    32,    33,     0,    35,     0,    36,    37,     0,     0,
       0,     0,     0,     0,    39,     0,    41,     0,     0,     0,
       0,  -428,     0,     0,     0,  -428,     0,     0,    49,    50,
      51,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -428,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -428,    63,  -428,  -428,  -428,     0,
    -428,  -428,  -428,     0,  -428,  -428,  -428,  -428,  -428,  -428,
    -428,  -428,  -428,    68,  -428,  -428,  -428,     0,     0,  -428,
    -428,  -428,     0,     0,     0,   139,     0,    74,   521,   538,
       5,     6,     7,     8,     9,    10,     0,     0,     0,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,   135,
     136,     0,   137,     0,    29,     0,     0,     0,     0,    32,
      33,     0,    35,     0,    36,    37,     0,     0,     0,     0,
       0,     0,    39,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    50,    51,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,     0,     0,     0,   521,
      66,     5,     6,     7,     8,     9,    10,     0,     0,    67,
     134,    68,     0,    69,    70,     0,     0,     0,     0,    72,
       0,     0,     0,   139,    21,    74,     0,   522,     0,     0,
     135,   136,     0,   137,     0,    29,     0,     0,     0,     0,
      32,    33,     0,    35,     0,    36,    37,     0,     0,     0,
       0,     0,     0,    39,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    50,    51,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,    66,     5,     6,     7,     8,     9,    10,     0,     0,
      67,   134,    68,     0,    69,    70,     0,     0,     0,     0,
      72,     0,     0,     0,   139,    21,    74,     0,   538,     0,
       0,   135,   136,     0,   137,     0,    29,     0,     0,     0,
       0,    32,    33,     0,    35,     0,    36,    37,     0,     0,
       0,     0,     0,     0,    39,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,    50,
      51,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,     0,     0,
       0,     0,    66,     5,     6,     7,     8,     9,    10,     0,
       0,    67,   134,    68,     0,    69,    70,   189,     0,     0,
       0,    72,     0,     0,     0,   139,    21,    74,     0,   140,
     552,     0,   135,   136,     0,   137,     0,    29,     0,     0,
       0,     0,    32,    33,     0,    35,     0,    36,    37,     0,
       0,     0,     0,     0,     0,    39,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
      50,    51,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,    66,     5,     6,     7,     8,     9,    10,
       0,     0,    67,   134,    68,     0,    69,    70,   189,     0,
       0,     0,    72,     0,     0,     0,   139,    21,    74,     0,
     140,   858,     0,   135,   136,     0,   137,     0,    29,     0,
       0,     0,     0,    32,    33,     0,    35,     0,    36,    37,
       0,     0,     0,     0,     0,     0,    39,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    51,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
       0,     0,     0,     0,    66,     0,     0,     5,     6,     7,
       8,     9,    10,    67,     0,    68,   134,    69,    70,     0,
       0,     0,     0,    72,     0,   459,     0,   139,     0,    74,
      21,   140,   557,     0,     0,     0,   135,   136,     0,   137,
     460,    29,     0,   461,     0,     0,    32,    33,     0,    35,
       0,    36,    37,     0,     0,     0,     0,   462,   463,    39,
       0,    41,     0,     0,     0,     0,     0,   464,     0,     0,
       0,     0,     0,    49,    50,    51,   138,     0,     0,     0,
       0,     0,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,    66,     5,     6,
       7,     8,     9,    10,     0,     0,    67,   134,    68,     0,
      69,    70,     0,     0,     0,     0,    72,     0,     0,     0,
     139,    21,    74,     0,   140,     0,     0,   135,   136,     0,
     137,     0,    29,     0,     0,     0,     0,    32,    33,     0,
      35,     0,    36,    37,     0,     0,     0,     0,     0,     0,
      39,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,   138,     0,     0,
       0,     0,     0,     0,   228,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,    65,     0,     0,     0,     0,    66,   229,
       0,     5,     6,     7,     8,     9,    10,    67,     0,    68,
     134,    69,    70,   189,     0,     0,     0,    72,     0,     0,
       0,   139,     0,    74,    21,   140,     0,     0,     0,     0,
     135,   136,     0,   137,     0,    29,     0,     0,     0,     0,
      32,    33,     0,    35,     0,    36,    37,     0,     0,     0,
       0,     0,     0,    39,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    50,    51,
     138,     0,     0,     0,     0,     0,     0,   228,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,    66,     5,     6,     7,     8,     9,    10,     0,     0,
      67,   134,    68,     0,    69,    70,   189,     0,     0,     0,
      72,     0,     0,     0,   139,    21,    74,   546,   140,     0,
       0,   135,   136,     0,   137,     0,    29,     0,     0,     0,
       0,    32,    33,     0,    35,     0,    36,    37,     0,     0,
       0,     0,     0,     0,    39,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,    50,
      51,   138,     0,     0,     0,     0,     0,     0,   228,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,     0,     0,
       0,     0,    66,     5,     6,     7,     8,     9,    10,     0,
       0,    67,   134,    68,     0,    69,    70,   189,     0,     0,
       0,    72,     0,     0,     0,   139,    21,    74,   548,   140,
       0,     0,   135,   136,     0,   137,     0,    29,     0,     0,
       0,     0,    32,    33,     0,    35,     0,    36,    37,     0,
       0,     0,     0,     0,   162,    39,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
      50,    51,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   163,     0,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,    66,     5,     6,     7,     8,     9,    10,
       0,     0,    67,   134,    68,     0,    69,    70,     0,     0,
       0,   167,    72,     0,     0,     0,   139,    21,    74,     0,
     140,     0,   168,   135,   136,     0,   137,     0,    29,     0,
       0,     0,     0,    32,    33,     0,    35,     0,    36,    37,
       0,     0,     0,     0,     0,     0,    39,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    51,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
       0,     0,     0,     0,    66,     5,     6,     7,     8,     9,
      10,     0,     0,    67,   134,    68,     0,    69,    70,     0,
       0,     0,     0,    72,     0,     0,     0,   139,    21,    74,
       0,   140,     0,     0,   135,   136,     0,   137,     0,    29,
       0,     0,     0,     0,    32,    33,     0,    35,     0,    36,
      37,     0,     0,     0,     0,     0,     0,    39,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,    50,    51,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,    66,     0,     0,     5,     6,
       7,     8,     9,    10,    67,     0,    68,   134,    69,    70,
     189,     0,     0,     0,    72,     0,     0,     0,   139,   544,
      74,    21,   140,     0,     0,     0,     0,   135,   136,     0,
     137,     0,    29,     0,     0,     0,     0,    32,    33,     0,
      35,     0,    36,    37,     0,     0,     0,     0,     0,     0,
      39,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,   138,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,    65,     0,     0,     0,     0,    66,     5,
       6,     7,     8,     9,    10,     0,     0,    67,   134,    68,
       0,    69,    70,   189,     0,     0,     0,    72,     0,     0,
       0,   139,    21,    74,     0,   140,     0,     0,   135,   136,
       0,   137,     0,    29,     0,     0,     0,     0,    32,    33,
       0,    35,     0,    36,    37,     0,     0,     0,     0,     0,
       0,    39,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    50,    51,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,    65,     0,     0,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
      68,     0,    69,    70,     0,   193,     0,     0,    72,     0,
       0,     0,   139,     0,    74,     0,   140,     5,     6,     7,
       8,     9,    10,     0,     0,     0,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
      21,     0,     0,     0,     0,     0,   135,   136,     0,   137,
       0,    29,     0,     0,     0,     0,    32,    33,     0,    35,
       0,    36,    37,     0,     0,     0,     0,     0,     0,    39,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,    50,    51,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,    66,     5,     6,
       7,     8,     9,    10,     0,     0,    67,   134,    68,     0,
      69,    70,     0,     0,     0,     0,    72,     0,     0,     0,
      73,    21,    74,     0,   140,     0,     0,   135,   136,     0,
     137,     0,    29,     0,     0,     0,     0,    32,    33,     0,
      35,     0,    36,    37,     0,     0,     0,     0,     0,     0,
      39,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,   138,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,     0,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,    65,     0,     0,     0,     0,    66,     5,
       6,     7,     8,     9,    10,     0,     0,    67,   134,    68,
       0,    69,    70,     0,     0,     0,     0,    72,     0,     0,
       0,   139,    21,    74,     0,   140,     0,     0,   135,   136,
       0,   137,     0,    29,     0,     0,     0,     0,    32,    33,
       0,    35,     0,    36,    37,   654,     0,     0,     0,     0,
       0,    39,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    50,    51,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,    65,     0,     0,     0,     0,    66,
       5,     6,     7,     8,     9,    10,     0,     0,    67,   134,
      68,     0,    69,    70,     0,     0,     0,     0,    72,     0,
       0,     0,   139,   815,    74,     0,   140,     0,     0,   135,
     136,     0,   137,     0,    29,     0,     0,     0,     0,    32,
      33,     0,    35,     0,    36,    37,     0,     0,     0,     0,
       0,     0,    39,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   816,    50,    51,   817,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,     0,     0,     0,     0,
      66,     5,     6,     7,     8,     9,    10,     0,     0,    67,
     134,    68,     0,    69,    70,   189,     0,     0,     0,    72,
       0,     0,     0,   139,    21,    74,     0,   818,     0,     0,
     135,   136,     0,   137,     0,    29,     0,     0,     0,     0,
      32,    33,     0,    35,     0,    36,    37,     0,     0,     0,
       0,     0,     0,    39,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    50,    51,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,    66,     5,     6,     7,     8,     9,    10,     0,     0,
      67,   134,    68,     0,    69,    70,   189,     0,     0,     0,
      72,     0,     0,     0,   139,    21,    74,     0,   818,     0,
       0,   135,   136,     0,   804,     0,    29,     0,     0,     0,
       0,    32,    33,     0,    35,     0,    36,    37,     0,     0,
       0,     0,     0,     0,    39,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,    50,
      51,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,     0,     0,
       0,     0,    66,     5,     6,     7,     8,     9,    10,     0,
       0,    67,   134,    68,     0,    69,    70,   189,     0,     0,
       0,    72,     0,     0,     0,   139,    21,    74,     0,   140,
       0,     0,   135,   136,     0,   137,     0,    29,     0,     0,
       0,     0,    32,    33,     0,    35,     0,    36,    37,     0,
       0,     0,     0,     0,     0,    39,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
      50,    51,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,    66,     5,     6,     7,     8,     9,    10,
       0,     0,    67,   134,    68,     0,    69,    70,     0,     0,
       0,     0,    72,     0,     0,     0,   139,    21,    74,     0,
     140,     0,     0,   135,   136,     0,   137,     0,    29,     0,
       0,     0,     0,    32,    33,     0,    35,     0,    36,    37,
       0,     0,     0,     0,     0,     0,    39,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    51,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
       0,     0,     0,     0,    66,     5,     6,     7,     8,     9,
      10,     0,     0,    67,   134,    68,     0,    69,    70,     0,
       0,     0,     0,    72,     0,     0,     0,    73,    21,    74,
       0,   140,     0,     0,   135,   136,     0,   137,     0,    29,
       0,     0,     0,     0,    32,    33,     0,    35,     0,    36,
      37,     0,     0,     0,     0,     0,     0,    39,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,    50,    51,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,    66,     5,     6,     7,     8,
       9,    10,     0,     0,    67,   134,    68,     0,    69,    70,
       0,     0,     0,     0,   503,     0,     0,     0,   139,    21,
      74,     0,   140,     0,     0,   135,   136,     0,   598,     0,
      29,     0,     0,     0,     0,    32,    33,     0,    35,     0,
      36,    37,     0,     0,     0,     0,     0,     0,    39,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    50,    51,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,     0,     0,     0,     0,    66,     5,     6,     7,
       8,     9,    10,     0,     0,    67,   134,    68,     0,    69,
      70,     0,     0,     0,     0,    72,     0,     0,     0,   139,
      21,    74,     0,   140,     0,     0,   135,   136,     0,   601,
       0,    29,     0,     0,     0,     0,    32,    33,     0,    35,
       0,    36,    37,     0,     0,     0,     0,     0,     0,    39,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,    50,    51,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,    66,     5,     6,
       7,     8,     9,    10,     0,     0,    67,   134,    68,     0,
      69,    70,     0,     0,     0,     0,    72,     0,     0,     0,
     139,    21,    74,     0,   140,     0,     0,   135,   136,     0,
     798,     0,    29,     0,     0,     0,     0,    32,    33,     0,
      35,     0,    36,    37,     0,     0,     0,     0,     0,     0,
      39,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,   138,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,    65,     0,     0,     0,     0,    66,     5,
       6,     7,     8,     9,    10,     0,     0,    67,   134,    68,
       0,    69,    70,     0,     0,     0,     0,    72,     0,     0,
       0,   139,    21,    74,     0,   140,     0,     0,   135,   136,
       0,   799,     0,    29,     0,     0,     0,     0,    32,    33,
       0,    35,     0,    36,    37,     0,     0,     0,     0,     0,
       0,    39,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    50,    51,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,    65,     0,     0,     0,     0,    66,
       5,     6,     7,     8,     9,    10,     0,     0,    67,   134,
      68,     0,    69,    70,     0,     0,     0,     0,    72,     0,
       0,     0,   139,    21,    74,     0,   140,     0,     0,   135,
     136,     0,   801,     0,    29,     0,     0,     0,     0,    32,
      33,     0,    35,     0,    36,    37,     0,     0,     0,     0,
       0,     0,    39,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    50,    51,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,     0,     0,     0,     0,
      66,     5,     6,     7,     8,     9,    10,     0,     0,    67,
     134,    68,     0,    69,    70,     0,     0,     0,     0,    72,
       0,     0,     0,   139,    21,    74,     0,   140,     0,     0,
     135,   136,     0,   802,     0,    29,     0,     0,     0,     0,
      32,    33,     0,    35,     0,    36,    37,     0,     0,     0,
       0,     0,     0,    39,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    50,    51,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,    66,     5,     6,     7,     8,     9,    10,     0,     0,
      67,   134,    68,     0,    69,    70,     0,     0,     0,     0,
      72,     0,     0,     0,   139,    21,    74,     0,   140,     0,
       0,   135,   136,     0,   803,     0,    29,     0,     0,     0,
       0,    32,    33,     0,    35,     0,    36,    37,     0,     0,
       0,     0,     0,     0,    39,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,    50,
      51,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,     0,     0,
       0,     0,    66,     5,     6,     7,     8,     9,    10,     0,
       0,    67,   134,    68,     0,    69,    70,     0,     0,     0,
       0,    72,     0,     0,     0,   139,    21,    74,     0,   140,
       0,     0,   135,   136,     0,   804,     0,    29,     0,     0,
       0,     0,    32,    33,     0,    35,     0,    36,    37,     0,
       0,     0,     0,     0,     0,    39,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
      50,    51,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
      61,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,    62,    63,    64,    65,     0,
       0,     0,     0,    66,     5,     6,     7,     8,     9,    10,
       0,     0,    67,   134,    68,     0,    69,    70,     0,     0,
       0,     0,    72,     0,     0,     0,   139,    21,    74,     0,
     140,   253,     0,   135,   136,   254,   137,     0,    29,     0,
       0,     0,     0,    32,    33,     0,    35,     0,    36,    37,
       0,     0,     0,     0,     5,   330,    39,     0,    41,   255,
       0,   680,     0,     0,     0,     0,   681,     0,     0,     0,
      49,    50,    51,   138,   256,     0,   257,   258,   259,     0,
     260,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,     0,   272,   273,   274,     0,     0,   275,
     276,   277,     5,     0,     0,     0,     0,    63,     0,   680,
     671,     0,     0,     0,   681,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,   140,   682,   683,   684,   685,   686,   687,     0,     0,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
       0,     0,   698,     0,     0,     0,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,   709,     0,   710,     0,
       0,   711,   712,   713,   714,     0,   715,     0,     0,   716,
     682,   683,   684,   685,   686,   687,     0,     0,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   252,     0,
     698,     0,     0,     0,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,     0,   710,     0,   250,   711,
     712,   713,   714,   251,   715,     0,     0,     0,     0,     0,
       0,     0,   252,     0,     0,     0,   253,     0,     0,     0,
     254,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,   255,     0,     0,   251,     0,     0,
     253,     0,     0,     0,   254,     0,   252,     0,     0,   256,
       0,   257,   258,   259,     0,   260,   261,   262,     0,   263,
     264,   265,   266,     0,   268,   269,   270,   271,   255,   272,
       0,   274,     0,     0,   275,   276,   277,     0,     0,     0,
       0,     0,     0,   256,   253,   257,   258,   259,   254,   260,
     261,   262,     0,   263,   264,   265,   266,   267,   268,   269,
     270,   271,     0,   272,   273,   274,   250,     0,   275,   276,
     277,   251,   255,     0,     0,     0,     0,     0,     0,   867,
     252,     0,     0,     0,     0,     0,     0,   256,     0,   257,
     258,   259,     0,   260,   261,   262,     0,   263,   264,   265,
     266,   267,   268,   269,   270,   271,     0,   272,   273,   274,
       0,     0,   275,   276,   277,     0,     0,     0,   253,     0,
       0,     0,   254,   904,     0,     0,     0,     0,   250,     0,
       0,     0,     0,   251,     0,     0,     0,     0,     0,     0,
       0,     0,   252,   328,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,   329,     0,     0,     0,     0,     0,
       0,   256,     0,   257,   258,   259,     0,   260,   261,   262,
       0,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     253,   272,   273,   274,   254,     0,   275,   276,   277,     0,
       0,     0,     0,     0,     0,   840,     0,     0,     0,     0,
       0,     0,     0,     0,   330,     0,   250,     0,   255,     0,
       0,   251,     0,     0,     0,     0,     0,     0,     0,     0,
     252,   325,     0,   256,     0,   257,   258,   259,     0,   260,
     261,   262,   326,   263,   264,   265,   266,   267,   268,   269,
     270,   271,     0,   272,   273,   274,     0,     0,   275,   276,
     277,     0,     0,     0,   301,     0,     0,     0,   253,     0,
       0,     0,   254,     0,     0,     0,     0,     0,   250,     0,
       0,     0,     0,   251,     0,     0,     0,     0,     0,     0,
       0,     0,   252,   627,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,     0,   257,   258,   259,     0,   260,   261,   262,
       0,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     253,   272,   273,   274,   254,     0,   275,   276,   277,     0,
       0,     0,   301,     0,     0,   250,     0,     0,     0,     0,
     251,     0,     0,     0,   330,     0,     0,     0,   255,   252,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   256,     0,   257,   258,   259,     0,   260,
     261,   262,     0,   263,   264,   265,   266,   267,   268,   269,
     270,   271,     0,   272,   273,   274,     0,   253,   275,   276,
     277,   254,     0,     0,   301,     0,     0,   250,   336,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   252,   196,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   253,
     272,   273,   274,   254,     0,   275,   276,   277,     0,   250,
       0,   301,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,   621,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,     0,   257,   258,   259,     0,   260,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   253,   272,   273,   274,   254,     0,   275,   276,   277,
       0,   250,     0,   301,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,   257,   258,   259,     0,
     260,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   253,   272,   273,   274,   254,     0,   275,
     276,   277,     0,   250,   740,   301,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,   257,   258,
     259,     0,   260,   261,   262,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   253,   272,   273,   274,   254,
       0,   275,   276,   277,     0,   250,   745,   301,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,   255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,     0,
     257,   258,   259,     0,   260,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   253,   272,   273,
     274,   254,     0,   275,   276,   277,     0,   250,   852,   301,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   253,
     272,   273,   274,   254,     0,   275,   276,   277,     0,   250,
     853,   301,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,     0,   257,   258,   259,     0,   260,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   253,   272,   273,   274,   254,     0,   275,   276,   277,
       0,   250,   854,   301,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,   257,   258,   259,     0,
     260,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   253,   272,   273,   274,   254,     0,   275,
     276,   277,     0,   250,   855,   301,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,   257,   258,
     259,     0,   260,   261,   262,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   253,   272,   273,   274,   254,
       0,   275,   276,   277,     0,   250,   869,   301,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,   255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,     0,
     257,   258,   259,     0,   260,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   253,   272,   273,
     274,   254,     0,   275,   276,   277,     0,   250,   870,   301,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   253,
     272,   273,   274,   254,     0,   275,   276,   277,     0,   250,
       0,   301,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,     0,   257,   258,   259,     0,   260,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   253,   272,   273,   274,   254,     0,   275,   276,   277,
       0,     0,     0,   360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,     0,     0,   255,
       0,   251,     0,     0,     0,     0,     0,     0,     0,     0,
     252,     0,     0,     0,   256,   333,   257,   258,   259,     0,
     260,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,     0,   272,   273,   274,   334,     0,   275,
     276,   277,     0,     0,  -388,     0,     0,     0,   253,     0,
       0,     0,   254,     0,     0,     0,     0,     0,   250,     0,
       0,     0,     0,   251,     0,     0,     0,     0,     0,     0,
       0,     0,   252,     0,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,   307,     0,     0,     0,     0,     0,
       0,   256,     0,   257,   258,   259,     0,   260,   261,   262,
       0,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     253,   272,   273,   274,   254,   335,   275,   276,   277,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,     0,     0,   128,     0,   251,     0,   255,     0,
       0,     0,     0,     0,     0,   252,     0,     0,     0,     0,
     374,     0,     0,   256,     0,   257,   258,   259,     0,   260,
     261,   262,     0,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   375,   272,   273,   274,     0,     0,   275,   276,
     277,     0,     0,   253,     0,     0,     0,   254,     0,     0,
       0,     0,     0,   250,     0,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,   252,   471,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,   472,
       0,     0,     0,     0,     0,     0,   256,     0,   257,   258,
     259,     0,   260,   261,   262,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   253,   272,   273,   274,   254,
       0,   275,   276,   277,     0,   250,     0,     0,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
     473,     0,     0,   255,     0,     0,     0,     0,     0,     0,
       0,   474,     0,     0,     0,     0,     0,     0,   256,     0,
     257,   258,   259,     0,   260,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   253,   272,   273,
     274,   254,     0,   275,   276,   277,     0,   250,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   253,
     272,   273,   274,   254,     0,   275,   276,   277,     0,   250,
       0,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,     0,   257,   258,   259,     0,   260,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   253,   272,   273,   274,   254,   311,   275,   276,   277,
       0,   250,     0,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,   257,   258,   259,     0,
     260,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   253,   272,   273,   274,   254,   359,   275,
     276,   277,     0,   250,     0,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,   257,   258,
     259,     0,   260,   261,   262,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   253,   272,   273,   274,   254,
     365,   275,   276,   277,     0,   250,     0,     0,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,   255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,     0,
     257,   258,   259,     0,   260,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   253,   272,   273,
     274,   254,   367,   275,   276,   277,     0,   250,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   253,
     272,   273,   274,   254,   369,   275,   276,   277,     0,   250,
       0,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,     0,   257,   258,   259,     0,   260,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   253,   272,   273,   274,   254,   377,   275,   276,   277,
       0,   250,     0,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,     0,   391,   255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,   257,   258,   259,     0,
     260,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   253,   272,   273,   274,   254,     0,   275,
     276,   277,     0,   250,   475,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,   257,   258,
     259,     0,   260,   261,   262,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   253,   272,   273,   274,   254,
       0,   275,   276,   277,     0,   250,     0,     0,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,   255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,     0,
     257,   258,   259,     0,   260,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   253,   272,   273,
     274,   254,   573,   275,   276,   277,     0,   250,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   253,
     272,   273,   274,   254,   574,   275,   276,   277,     0,   250,
       0,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,     0,   257,   258,   259,     0,   260,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   253,   272,   273,   274,   254,   575,   275,   276,   277,
       0,   250,     0,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,   257,   258,   259,     0,
     260,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   253,   272,   273,   274,   254,   576,   275,
     276,   277,     0,   250,     0,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,   257,   258,
     259,     0,   260,   261,   262,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   253,   272,   273,   274,   254,
     577,   275,   276,   277,     0,   250,     0,     0,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,   255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,     0,
     257,   258,   259,     0,   260,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   253,   272,   273,
     274,   254,   578,   275,   276,   277,     0,   250,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   253,
     272,   273,   274,   254,   579,   275,   276,   277,     0,   250,
       0,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,     0,   257,   258,   259,     0,   260,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   253,   272,   273,   274,   254,   580,   275,   276,   277,
       0,   250,     0,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,   257,   258,   259,     0,
     260,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   253,   272,   273,   274,   254,   581,   275,
     276,   277,     0,   250,     0,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,   257,   258,
     259,     0,   260,   261,   262,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   253,   272,   273,   274,   254,
     582,   275,   276,   277,     0,   250,     0,     0,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,   255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,     0,
     257,   258,   259,     0,   260,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   253,   272,   273,
     274,   254,   583,   275,   276,   277,     0,   250,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   253,
     272,   273,   274,   254,   584,   275,   276,   277,     0,   250,
       0,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,     0,   257,   258,   259,     0,   260,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   253,   272,   273,   274,   254,   585,   275,   276,   277,
       0,   250,     0,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,   257,   258,   259,     0,
     260,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   253,   272,   273,   274,   254,   586,   275,
     276,   277,     0,   250,     0,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,   257,   258,
     259,     0,   260,   261,   262,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   253,   272,   273,   274,   254,
     587,   275,   276,   277,     0,   250,     0,     0,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,   255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,     0,
     257,   258,   259,     0,   260,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   253,   272,   273,
     274,   254,   588,   275,   276,   277,     0,     0,     0,     0,
       0,     0,   250,     0,     0,     0,     0,   251,     0,     0,
       0,   128,     0,     0,     0,   255,   252,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,     0,
     272,   273,   274,     0,   253,   275,   276,   277,   254,     0,
       0,     0,     0,     0,   250,   634,     0,     0,     0,   251,
       0,     0,     0,     0,     0,     0,     0,     0,   252,     0,
       0,     0,   255,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   256,     0,   257,
     258,   259,     0,   260,   261,   262,     0,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   253,   272,   273,   274,
     254,   608,   275,   276,   277,     0,   250,     0,     0,     0,
       0,   251,     0,     0,     0,     0,     0,     0,     0,     0,
     252,     0,     0,   637,   255,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   256,
       0,   257,   258,   259,     0,   260,   261,   262,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   253,   272,
     273,   274,   254,     0,   275,   276,   277,     0,   250,     0,
       0,     0,     0,   251,     0,     0,     0,     0,     0,     0,
       0,     0,   252,     0,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,     0,   257,   258,   259,     0,   260,   261,   262,
       0,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     253,   272,   273,   274,   254,     0,   275,   276,   277,     0,
     250,     0,     0,     0,     0,   251,     0,     0,     0,     0,
       0,     0,     0,     0,   252,   728,     0,   674,   255,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   256,     0,   257,   258,   259,     0,   260,
     261,   262,     0,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   253,   272,   273,   274,   254,     0,   275,   276,
     277,     0,   250,     0,     0,     0,     0,   251,     0,     0,
       0,     0,     0,     0,     0,     0,   252,   731,     0,     0,
     255,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   256,     0,   257,   258,   259,
       0,   260,   261,   262,     0,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   253,   272,   273,   274,   254,     0,
     275,   276,   277,     0,   250,     0,     0,     0,     0,   251,
       0,     0,     0,     0,     0,     0,     0,     0,   252,     0,
       0,     0,   255,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   256,     0,   257,
     258,   259,     0,   260,   261,   262,     0,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   253,   272,   273,   274,
     254,     0,   275,   276,   277,     0,   250,   797,     0,     0,
       0,   251,     0,     0,     0,     0,     0,     0,     0,     0,
     252,     0,     0,     0,   255,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   256,
       0,   257,   258,   259,     0,   260,   261,   262,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   253,   272,
     273,   274,   254,     0,   275,   276,   277,     0,     0,   800,
       0,     0,     0,   250,   813,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,   255,   252,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,     0,   257,   258,   259,     0,   260,   261,   262,
       0,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     252,   272,   273,   274,     0,   253,   275,   276,   277,   254,
       0,     0,     0,     0,     0,   250,     0,     0,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,   255,     0,     0,     0,     0,   253,     0,
       0,     0,   254,     0,     0,     0,     0,     0,   256,     0,
     257,   258,   259,     0,   260,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   253,   272,   273,
     274,   254,     0,   275,   276,   277,     0,   250,   876,     0,
       0,   256,   251,   257,   258,   259,     0,   260,   261,   262,
       0,   252,   264,   265,   266,   255,   268,   269,   270,   271,
       0,     0,     0,   274,     0,     0,   275,   276,   277,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   253,
     272,   273,   274,   254,     0,   275,   276,   277,     0,   250,
     877,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,     0,   257,   258,   259,     0,   260,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   253,   272,   273,   274,   254,     0,   275,   276,   277,
       0,   250,   878,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,   257,   258,   259,     0,
     260,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   253,   272,   273,   274,   254,     0,   275,
     276,   277,     0,   250,   879,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,   257,   258,
     259,     0,   260,   261,   262,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   253,   272,   273,   274,   254,
       0,   275,   276,   277,     0,   250,   880,     0,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,   255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,     0,
     257,   258,   259,     0,   260,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   253,   272,   273,
     274,   254,     0,   275,   276,   277,     0,   250,   881,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     256,     0,   257,   258,   259,     0,   260,   261,   262,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   253,
     272,   273,   274,   254,     0,   275,   276,   277,     0,   250,
       0,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,     0,   257,   258,   259,     0,   260,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   596,   272,   273,   274,   254,     0,   275,   276,   277,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,   257,   258,   259,     0,
     260,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,     0,   272,   273,   274,     0,     0,   275,
     276,   277
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-813))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      11,    42,    43,     2,   370,    16,    15,   348,    19,   343,
     150,   651,     3,     3,    25,    26,    27,    28,   520,    23,
     160,   340,     1,   298,    35,    36,   677,    38,    39,   370,
       1,     3,    65,     3,    45,    46,    47,    48,    49,   234,
     501,    52,    53,    54,    55,     3,   858,    58,    59,    60,
     720,   677,    63,   110,   110,    66,    67,    68,    45,    70,
      25,    25,    73,    74,    75,   244,   245,   246,   247,   826,
      25,    58,    63,    25,   334,    25,     0,     3,    74,   110,
     137,   893,    36,   110,     3,   141,    65,     1,    75,    79,
      78,    86,    40,    36,    65,    36,    75,    54,    55,    65,
      26,   172,    21,   136,     1,    84,    62,     3,   139,    36,
      66,    59,   139,    84,   185,   375,    36,    36,    52,    36,
      39,   761,    36,   134,   135,   136,   137,   138,   139,   140,
     109,   202,    86,   594,    53,    54,    86,   146,   109,    36,
     897,   110,    86,   154,    63,   647,   141,   138,   138,    83,
     129,    36,    78,   140,   805,   110,   110,   136,   154,    78,
     129,   172,   788,   129,   136,   136,   138,   110,   138,   110,
     136,   136,   842,   843,   185,    89,   172,    91,    63,   805,
     138,   136,   186,   110,   136,   519,   136,   141,    91,   185,
     110,   202,   138,   110,    91,   109,   110,   110,   141,   110,
     141,   110,   110,   137,   110,   110,   202,   110,   110,   138,
     110,   114,   109,   110,   141,   129,   129,   857,   229,   138,
     399,   141,     7,   294,   295,    71,   501,   226,   139,   129,
     139,   139,   129,   139,   139,    46,   139,   139,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
      17,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   790,   253,
     254,   752,   363,    21,    61,   110,   307,   110,   294,   295,
     138,   312,     3,   110,   499,   500,     7,   641,    91,   650,
     110,    24,   323,    80,   325,   326,   129,   328,   329,   594,
     639,   138,   333,   334,   139,   336,    54,    20,   129,   129,
     137,   114,   296,   297,   129,    63,   323,    30,    31,    40,
     351,   110,   138,   307,   140,    38,   357,    40,    24,    62,
     129,   135,   363,    66,    82,   550,   551,   893,    59,   129,
     129,   357,   326,   374,   375,   329,    59,   363,   904,   380,
       2,   129,   383,    21,   385,   110,   387,   388,   389,    11,
     391,   392,   129,    36,   380,   396,    62,   383,    20,   385,
      66,   138,   388,   140,   129,    21,   109,   129,   110,   112,
     766,   541,    34,   116,   129,   138,    54,   773,    24,   396,
      36,    21,    65,    39,     3,    63,    13,   129,     7,   760,
      52,    18,    75,   387,   138,   766,   140,    53,    54,   105,
      78,    84,   773,   109,   129,   111,   112,    63,    91,    62,
     116,    73,   136,    66,    54,    77,    62,   123,   129,     2,
      66,    85,    78,    63,   130,   131,   132,   110,    11,   136,
     471,   472,   473,   474,   475,   476,   477,    20,    78,   478,
     479,   138,   483,   140,   485,   794,   129,   752,   138,   138,
     491,    34,   493,   136,   112,   109,   497,   483,   112,   485,
     501,   138,   116,   109,   129,   111,   112,   129,    91,    52,
     116,    54,    55,   383,     7,   385,   109,   123,   472,   129,
     474,   522,    91,    36,   525,   526,   132,   858,   139,   110,
      73,    91,   129,   138,    77,    27,   867,   538,   139,     2,
     110,   139,    89,    91,   139,   522,    16,   139,    11,   110,
     110,   173,   141,   139,   114,    91,   136,    20,   136,   141,
     110,   538,   893,   129,    17,   129,   129,    20,    27,   110,
      25,    34,   139,   904,   196,    28,   129,    30,    31,   139,
     139,    34,    63,   129,     3,    38,   129,    40,     7,    52,
       9,    25,   141,   594,   136,   596,   597,   598,   109,    63,
     601,   109,    21,    56,   226,    58,    59,    60,    61,   141,
      73,   612,   141,    24,    77,   112,   112,   138,   619,   139,
     621,   139,    84,   624,    75,    78,   627,    80,    20,   559,
     173,   632,   375,   634,   374,    54,   637,   210,    30,    31,
     490,   661,   596,   597,    63,   161,    38,   738,    40,   613,
     793,    62,   793,   196,    46,    66,   657,   794,   897,    78,
     164,   165,   166,    82,   639,   679,   129,    59,   669,   857,
     671,   872,    27,   674,   352,   814,   129,   485,   182,   301,
     657,    -1,    -1,   226,   137,    -1,    -1,   676,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   199,   107,   108,   109,    -1,
     111,   112,   113,   325,    -1,   116,   328,    -1,    -1,    -1,
     173,   122,   123,   217,   336,   716,   127,    -1,    -1,   130,
     131,   132,    -1,    -1,    -1,    -1,   727,   728,    -1,   730,
     731,   732,   733,   196,     2,    -1,    -1,    -1,    -1,   740,
     741,    -1,   743,    11,   745,   746,    -1,    -1,   749,    -1,
      -1,   752,    20,    -1,   785,   786,    -1,    -1,   301,    -1,
       2,    -1,    -1,   226,   765,   766,    34,   389,    -1,    11,
     771,    -1,   773,   774,   760,    -1,    -1,   778,    20,    -1,
      -1,    -1,   325,    -1,    52,   328,    -1,    -1,    -1,    -1,
      -1,    -1,    34,   336,    -1,    -1,   797,   798,   799,   800,
     801,   802,   803,   804,   308,    73,    -1,    -1,    36,    77,
      52,    -1,   813,    -1,    -1,   816,   817,   818,    -1,    -1,
      -1,   822,    -1,    -1,   825,    -1,    -1,    -1,   332,    -1,
      -1,    73,    -1,    -1,    -1,    77,   822,    65,   301,    -1,
      -1,   818,    -1,    -1,   466,    -1,   389,    75,    -1,    -1,
      -1,   852,   853,   854,   855,    -1,    84,    -1,    -1,    -1,
      -1,   129,   325,    91,    -1,   328,   867,    -1,   869,   870,
      -1,    -1,   858,   336,    -1,   876,   877,   878,   879,   880,
     881,    -1,   110,    -1,    -1,    -1,    -1,   129,    -1,   511,
      -1,   892,   893,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,   129,    20,   904,    -1,   173,    -1,   893,   136,    -1,
      28,    -1,    30,    31,    -1,    -1,    34,    -1,   904,    -1,
      38,    -1,    40,    -1,    36,    -1,   389,    -1,   196,    -1,
      -1,   173,    -1,   555,    -1,    -1,    -1,   559,    56,    20,
      58,    59,    60,    61,    24,   567,    -1,    -1,    -1,    30,
      31,    -1,    -1,    65,   196,    -1,    -1,    38,   226,    40,
      78,    -1,    80,    75,    -1,    46,    -1,    -1,   511,    -1,
      -1,     2,    84,    -1,   596,   597,    -1,    -1,    59,    91,
      11,    -1,    62,    -1,   226,    -1,    66,    -1,    -1,    20,
      -1,   495,   496,    -1,    -1,   499,   500,   619,   110,   621,
      -1,    -1,   624,    34,    -1,   627,    -1,    -1,    -1,    -1,
      -1,   129,   555,    -1,   636,    -1,   559,   129,    -1,   137,
      -1,    52,    -1,    -1,   136,   105,    -1,   107,   108,   109,
      -1,   111,   112,   301,   656,    -1,   116,    -1,    -1,    -1,
       3,    -1,    73,   123,     7,    -1,    77,   669,   511,   671,
     130,   131,   132,    -1,   676,    -1,    -1,   325,    21,   301,
     328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   619,    -1,   621,    -1,
      -1,   624,    -1,   325,   627,    -1,   328,    -1,    -1,    -1,
      -1,    54,   555,   636,   336,    -1,   559,    24,   129,    -1,
      63,    -1,   606,   607,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   616,   656,    -1,    78,    -1,    -1,   740,    82,
      -1,   389,   626,   745,    -1,   629,   669,    17,   671,    -1,
      20,    -1,    -1,   676,    -1,    62,    -1,    -1,    28,    66,
      30,    31,   173,    -1,    34,   767,    -1,   389,    38,    -1,
      40,    -1,    -1,    -1,    -1,   777,   619,    -1,   621,   781,
      -1,   624,    -1,    -1,   627,   196,    56,    -1,    58,    59,
      60,    61,    -1,   636,    -1,    -1,    -1,    -1,   105,    -1,
      -1,   108,   109,    -1,   111,   112,    -1,    -1,    78,   116,
      80,    -1,    -1,   656,    -1,   226,   123,   740,    -1,    -1,
      -1,    -1,   745,   130,   131,   132,   669,    -1,   671,    -1,
      -1,    -1,    -1,   676,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   767,    -1,    -1,    -1,     2,    -1,
     852,   853,   854,   855,   777,    -1,    -1,    11,   781,   129,
      -1,    -1,    -1,   511,    -1,    -1,    20,   869,   870,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      34,    -1,    -1,    -1,    -1,   769,    -1,    -1,    -1,   511,
     301,    -1,    -1,    -1,    -1,    -1,    -1,   740,    52,    -1,
      -1,    -1,   745,    -1,    -1,    -1,    -1,   555,    -1,    -1,
      -1,   559,    -1,    -1,   325,    -1,    62,   328,     2,    73,
      66,    -1,    -1,    77,   767,   336,    -1,    11,    -1,   852,
     853,   854,   855,   555,   777,    -1,    20,   559,   781,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   869,   870,    -1,    -1,
      34,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,   112,    -1,    52,    -1,
     116,   619,    -1,   621,    -1,   129,   624,   123,   389,   627,
      -1,    -1,    -1,    -1,   130,   131,   132,    -1,   636,    73,
      62,    -1,    -1,    77,    66,    -1,    -1,   619,    -1,   621,
      -1,    -1,   624,    -1,    -1,   627,    -1,    -1,   656,   852,
     853,   854,   855,    -1,   636,    -1,    -1,    -1,    -1,   173,
      -1,   669,    -1,   671,    -1,    -1,   869,   870,   676,    -1,
      -1,    -1,    -1,   105,   656,   107,   108,   109,    -1,   111,
     112,    -1,   196,    -1,   116,   129,    -1,   669,    -1,   671,
     122,   123,    -1,    -1,   676,   127,    -1,    -1,   130,   131,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,   173,
      -1,    -1,   740,    -1,    -1,    -1,    -1,   745,    -1,    -1,
     511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,   133,   134,   135,   740,   767,
     138,    -1,   140,   745,    -1,    -1,    -1,    -1,    -1,   777,
      -1,    -1,    -1,   781,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,    -1,   555,   767,    -1,   301,   559,    -1,
      -1,    48,    -1,    -1,    -1,   777,    -1,    54,    55,   781,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   325,    -1,    -1,   328,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   852,   853,   854,   855,   619,    -1,
     621,    -1,    -1,   624,    -1,    -1,   627,   301,    -1,    -1,
      -1,   869,   870,    -1,    -1,   636,    -1,    -1,    -1,    -1,
     852,   853,   854,   855,    24,   389,   133,    -1,    -1,    -1,
      -1,   325,    -1,    -1,   328,   656,    -1,   869,   870,    -1,
      -1,    -1,   336,    -1,    -1,    -1,    -1,    -1,   669,    -1,
     671,    -1,    -1,    -1,    -1,   676,    -1,   164,   165,   166,
      -1,    -1,    62,    -1,   171,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    -1,   199,    -1,    -1,   389,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
     217,   111,   112,   113,    -1,   115,   116,   117,   118,   740,
     120,   121,   122,   123,   745,   125,   126,   127,    -1,    -1,
     130,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   767,   511,    -1,     2,
      -1,    -1,    -1,    -1,    -1,    -1,   777,    -1,    11,    -1,
     781,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   555,    -1,    -1,    -1,   559,    -1,    -1,    -1,    52,
      -1,   308,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   511,    -1,    -1,
      73,    -1,    -1,    -1,    77,   332,    -1,    -1,    -1,    -1,
      -1,   852,   853,   854,   855,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,   134,    -1,   869,   870,
     138,    -1,   140,    -1,    -1,   619,    -1,   621,    -1,    -1,
     624,   555,    -1,   627,    -1,   559,    -1,    -1,    -1,    -1,
      -1,    -1,   636,    -1,    -1,    -1,   129,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   656,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    15,   669,    13,   671,    -1,    -1,
      -1,    18,   676,    24,    -1,    22,    23,    24,    -1,    -1,
     173,    -1,    -1,    -1,    31,   619,    33,   621,    -1,    -1,
     624,    -1,    -1,   627,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   636,   196,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,   656,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,    -1,   669,   740,   671,    -1,    90,
      -1,   745,   676,    -1,    -1,    -1,    -1,    -1,   495,   496,
      97,    -1,   499,   500,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,   767,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   777,   125,   126,   127,   781,    -1,   130,
     131,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   536,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   150,    -1,    -1,   740,   154,   301,    -1,
      -1,   745,    -1,   160,    -1,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,
      -1,    -1,   325,   767,    -1,   328,    -1,    -1,   185,   186,
      -1,    -1,   189,   777,    -1,    -1,    -1,   781,   852,   853,
     854,   855,    -1,    -1,    -1,   202,    -1,    -1,    -1,   606,
     607,    -1,    -1,    -1,    -1,   869,   870,    -1,    -1,   616,
      24,   618,    -1,    -1,    -1,    -1,   623,    -1,    -1,   626,
      -1,    -1,   629,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   239,    -1,    -1,    -1,   389,   244,   245,   246,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,   261,    -1,    -1,   664,   852,   853,
     854,   855,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   869,   870,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,   295,    -1,
      -1,   105,    -1,   107,   108,   109,    -1,   111,   112,   113,
      -1,   115,   116,   117,   118,    -1,   120,   121,   122,   123,
      -1,   125,   319,   127,   321,    -1,   130,   131,   132,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,   352,    -1,    -1,    -1,    -1,
      32,    33,    -1,    35,    -1,    37,   363,    -1,   511,    -1,
      42,    43,   769,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,   399,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     807,   808,   555,   810,   811,    -1,   559,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   826,
      -1,    -1,    -1,    -1,   106,   832,    -1,   834,   110,   836,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,    -1,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   619,    -1,   621,    -1,
      -1,   624,    -1,    -1,   627,    10,    -1,    -1,   485,    -1,
      15,    -1,    -1,   636,    -1,    -1,    -1,    -1,    -1,    24,
     897,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,   656,    -1,    12,    -1,    -1,   515,    -1,
      -1,    -1,   519,    -1,    -1,    -1,   669,    -1,   671,    26,
      -1,    -1,    -1,   676,    -1,    32,    33,    62,    35,   536,
      37,    66,    -1,    -1,   541,    42,    43,    -1,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
     567,    -1,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,    -1,    -1,   130,   131,   132,   105,   106,
     107,   108,    -1,    -1,   139,    -1,   613,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   767,   122,    -1,   124,    -1,    -1,
     127,    -1,    -1,    -1,   777,   132,    -1,    -1,   781,   136,
      -1,   138,    -1,   140,   641,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     0,     1,   661,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,   695,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    -1,    74,    -1,    76,    77,
      78,    -1,    80,    81,    82,    -1,    -1,    85,    -1,    87,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   124,   784,   126,   127,
      -1,   129,    -1,    -1,   132,    -1,   793,    -1,   136,    -1,
     138,     1,   140,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    81,    82,    -1,    -1,    85,    -1,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,    -1,   129,
     130,   131,   132,    -1,    -1,    -1,   136,   137,   138,     1,
     140,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    67,    68,    69,    70,    71,
      72,    -1,    74,    -1,    76,    77,    78,    -1,    80,    81,
      82,    -1,    -1,    85,    -1,    87,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,   124,    -1,   126,   127,   128,   129,    -1,    -1,
     132,    -1,    -1,    -1,   136,   137,   138,     1,   140,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    -1,
      74,    -1,    76,    77,    78,    -1,    80,    81,    82,    -1,
      -1,    85,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
     124,    -1,   126,   127,    -1,   129,    -1,    -1,   132,    -1,
      -1,    -1,   136,   137,   138,     1,   140,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    67,    68,    69,    70,    71,    72,    -1,    74,    -1,
      76,    77,    78,    -1,    80,    81,    82,    -1,    -1,    85,
      -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,    -1,
     126,   127,    -1,   129,    -1,    -1,   132,    -1,    -1,    -1,
     136,   137,   138,     1,   140,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    -1,    74,    -1,    76,    77,
      78,    -1,    80,    81,    82,    -1,    -1,    85,    -1,    87,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   124,    -1,   126,   127,
      -1,   129,    -1,    -1,   132,    -1,    -1,    -1,   136,   137,
     138,     1,   140,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    81,    82,    -1,    -1,    85,    -1,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,   124,    -1,   126,   127,    -1,   129,
      -1,    -1,   132,    -1,    -1,    -1,   136,   137,   138,     1,
     140,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    67,    68,    69,    70,    71,
      72,    -1,    74,    -1,    76,    77,    78,    -1,    80,    81,
      82,    -1,    -1,    85,    -1,    87,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,   124,    -1,   126,   127,    -1,   129,    -1,    -1,
     132,    -1,    -1,    -1,   136,    -1,   138,     1,   140,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    -1,
      74,    -1,    76,    77,    78,    -1,    80,    81,    82,    -1,
      -1,    85,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
     124,    -1,   126,   127,    -1,   129,    -1,    -1,   132,    -1,
      -1,    -1,   136,    -1,   138,     1,   140,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    67,    68,    69,    70,    71,    72,    -1,    74,    -1,
      76,    77,    78,    -1,    80,    81,    82,    -1,    -1,    85,
      -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,    -1,
     126,   127,    -1,   129,    -1,    -1,   132,    -1,    -1,    -1,
     136,    -1,   138,     1,   140,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    -1,    74,    -1,    76,    77,
      78,    -1,    80,    81,    82,    -1,    -1,    85,    -1,    87,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   124,    -1,   126,   127,
      -1,   129,    -1,    -1,   132,    -1,    -1,    -1,   136,    -1,
     138,     1,   140,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    81,    82,    -1,    -1,    85,    -1,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,   124,    -1,   126,   127,    -1,   129,
      -1,    -1,   132,    -1,    -1,    -1,   136,    -1,   138,     1,
     140,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
      -1,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    67,    68,    69,    70,    71,
      72,    -1,    74,    -1,    76,    77,    78,    -1,    80,    81,
      82,    -1,    -1,    85,    -1,    87,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,   124,    -1,   126,   127,    -1,   129,    -1,    -1,
     132,    -1,    -1,    -1,   136,    -1,   138,     1,   140,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    -1,
      74,    -1,    76,    77,    78,    -1,    80,    81,    82,    -1,
      -1,    85,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
     124,    -1,   126,   127,    -1,   129,    -1,    -1,   132,    -1,
      -1,    -1,   136,    -1,   138,     1,   140,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    67,    68,    69,    70,    71,    72,    -1,    74,    -1,
      76,    77,    78,    -1,    80,    81,    82,    -1,    -1,    85,
      -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,    -1,
     126,   127,    -1,   129,    -1,    -1,   132,    -1,    -1,    -1,
     136,    -1,   138,     1,   140,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    -1,    74,    -1,    76,    77,
      78,    -1,    80,    81,    82,    -1,    -1,    85,    -1,    87,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   124,    -1,   126,   127,
      -1,   129,    -1,    -1,   132,    -1,    -1,    -1,   136,    -1,
     138,     1,   140,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    81,    82,    -1,    -1,    85,    -1,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,   124,    -1,   126,   127,    -1,   129,
      -1,    -1,   132,    -1,    -1,    -1,   136,    -1,   138,     1,
     140,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
      -1,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    67,    68,    69,    70,    71,
      72,    -1,    74,    -1,    76,    77,    78,    -1,    80,    81,
      82,    -1,    -1,    85,    -1,    87,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,     1,    -1,     3,     4,     5,     6,     7,     8,
     122,    10,   124,    12,   126,   127,    15,   129,    -1,    -1,
     132,    -1,    -1,    -1,   136,    24,   138,    26,   140,    -1,
      -1,    -1,    -1,    32,    33,    -1,    35,    -1,    37,    -1,
      -1,    -1,    -1,    42,    43,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,
     109,    -1,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,   130,   131,   132,    -1,    -1,    -1,   136,    -1,   138,
       1,   140,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,
      -1,    42,    43,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,   130,
     131,   132,    -1,    -1,    -1,   136,    -1,   138,     1,   140,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    42,
      43,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,     1,
     113,     3,     4,     5,     6,     7,     8,    -1,    -1,   122,
      12,   124,    -1,   126,   127,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,   136,    26,   138,    -1,   140,    -1,    -1,
      32,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,     3,     4,     5,     6,     7,     8,    -1,    -1,
     122,    12,   124,    -1,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,    -1,    -1,   136,    26,   138,    -1,   140,    -1,
      -1,    32,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,
      -1,    42,    43,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,   113,     3,     4,     5,     6,     7,     8,    -1,
      -1,   122,    12,   124,    -1,   126,   127,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,   136,    26,   138,    -1,   140,
     141,    -1,    32,    33,    -1,    35,    -1,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,     3,     4,     5,     6,     7,     8,
      -1,    -1,   122,    12,   124,    -1,   126,   127,   128,    -1,
      -1,    -1,   132,    -1,    -1,    -1,   136,    26,   138,    -1,
     140,   141,    -1,    32,    33,    -1,    35,    -1,    37,    -1,
      -1,    -1,    -1,    42,    43,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,   113,    -1,    -1,     3,     4,     5,
       6,     7,     8,   122,    -1,   124,    12,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,    21,    -1,   136,    -1,   138,
      26,   140,   141,    -1,    -1,    -1,    32,    33,    -1,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    -1,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    53,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,     3,     4,
       5,     6,     7,     8,    -1,    -1,   122,    12,   124,    -1,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
     136,    26,   138,    -1,   140,    -1,    -1,    32,    33,    -1,
      35,    -1,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,   114,
      -1,     3,     4,     5,     6,     7,     8,   122,    -1,   124,
      12,   126,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,
      -1,   136,    -1,   138,    26,   140,    -1,    -1,    -1,    -1,
      32,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,     3,     4,     5,     6,     7,     8,    -1,    -1,
     122,    12,   124,    -1,   126,   127,   128,    -1,    -1,    -1,
     132,    -1,    -1,    -1,   136,    26,   138,   139,   140,    -1,
      -1,    32,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,
      -1,    42,    43,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,   113,     3,     4,     5,     6,     7,     8,    -1,
      -1,   122,    12,   124,    -1,   126,   127,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,   136,    26,   138,   139,   140,
      -1,    -1,    32,    33,    -1,    35,    -1,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,     3,     4,     5,     6,     7,     8,
      -1,    -1,   122,    12,   124,    -1,   126,   127,    -1,    -1,
      -1,    20,   132,    -1,    -1,    -1,   136,    26,   138,    -1,
     140,    -1,    31,    32,    33,    -1,    35,    -1,    37,    -1,
      -1,    -1,    -1,    42,    43,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,   113,     3,     4,     5,     6,     7,
       8,    -1,    -1,   122,    12,   124,    -1,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,   136,    26,   138,
      -1,   140,    -1,    -1,    32,    33,    -1,    35,    -1,    37,
      -1,    -1,    -1,    -1,    42,    43,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,    -1,    -1,     3,     4,
       5,     6,     7,     8,   122,    -1,   124,    12,   126,   127,
     128,    -1,    -1,    -1,   132,    -1,    -1,    -1,   136,   137,
     138,    26,   140,    -1,    -1,    -1,    -1,    32,    33,    -1,
      35,    -1,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,     3,
       4,     5,     6,     7,     8,    -1,    -1,   122,    12,   124,
      -1,   126,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,
      -1,   136,    26,   138,    -1,   140,    -1,    -1,    32,    33,
      -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
     124,    -1,   126,   127,    -1,   129,    -1,    -1,   132,    -1,
      -1,    -1,   136,    -1,   138,    -1,   140,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    35,
      -1,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,     3,     4,
       5,     6,     7,     8,    -1,    -1,   122,    12,   124,    -1,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
     136,    26,   138,    -1,   140,    -1,    -1,    32,    33,    -1,
      35,    -1,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,     3,
       4,     5,     6,     7,     8,    -1,    -1,   122,    12,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,   136,    26,   138,    -1,   140,    -1,    -1,    32,    33,
      -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    45,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
       3,     4,     5,     6,     7,     8,    -1,    -1,   122,    12,
     124,    -1,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,   136,    26,   138,    -1,   140,    -1,    -1,    32,
      33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    42,
      43,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
     113,     3,     4,     5,     6,     7,     8,    -1,    -1,   122,
      12,   124,    -1,   126,   127,   128,    -1,    -1,    -1,   132,
      -1,    -1,    -1,   136,    26,   138,    -1,   140,    -1,    -1,
      32,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,     3,     4,     5,     6,     7,     8,    -1,    -1,
     122,    12,   124,    -1,   126,   127,   128,    -1,    -1,    -1,
     132,    -1,    -1,    -1,   136,    26,   138,    -1,   140,    -1,
      -1,    32,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,
      -1,    42,    43,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,   113,     3,     4,     5,     6,     7,     8,    -1,
      -1,   122,    12,   124,    -1,   126,   127,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,   136,    26,   138,    -1,   140,
      -1,    -1,    32,    33,    -1,    35,    -1,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,     3,     4,     5,     6,     7,     8,
      -1,    -1,   122,    12,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    -1,   136,    26,   138,    -1,
     140,    -1,    -1,    32,    33,    -1,    35,    -1,    37,    -1,
      -1,    -1,    -1,    42,    43,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,   113,     3,     4,     5,     6,     7,
       8,    -1,    -1,   122,    12,   124,    -1,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,   136,    26,   138,
      -1,   140,    -1,    -1,    32,    33,    -1,    35,    -1,    37,
      -1,    -1,    -1,    -1,    42,    43,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,     3,     4,     5,     6,
       7,     8,    -1,    -1,   122,    12,   124,    -1,   126,   127,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,   136,    26,
     138,    -1,   140,    -1,    -1,    32,    33,    -1,    35,    -1,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,   113,     3,     4,     5,
       6,     7,     8,    -1,    -1,   122,    12,   124,    -1,   126,
     127,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,   136,
      26,   138,    -1,   140,    -1,    -1,    32,    33,    -1,    35,
      -1,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,     3,     4,
       5,     6,     7,     8,    -1,    -1,   122,    12,   124,    -1,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
     136,    26,   138,    -1,   140,    -1,    -1,    32,    33,    -1,
      35,    -1,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,     3,
       4,     5,     6,     7,     8,    -1,    -1,   122,    12,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,   136,    26,   138,    -1,   140,    -1,    -1,    32,    33,
      -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
       3,     4,     5,     6,     7,     8,    -1,    -1,   122,    12,
     124,    -1,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,   136,    26,   138,    -1,   140,    -1,    -1,    32,
      33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    42,
      43,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
     113,     3,     4,     5,     6,     7,     8,    -1,    -1,   122,
      12,   124,    -1,   126,   127,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,   136,    26,   138,    -1,   140,    -1,    -1,
      32,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      42,    43,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,   113,     3,     4,     5,     6,     7,     8,    -1,    -1,
     122,    12,   124,    -1,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,    -1,    -1,   136,    26,   138,    -1,   140,    -1,
      -1,    32,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,
      -1,    42,    43,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,   113,     3,     4,     5,     6,     7,     8,    -1,
      -1,   122,    12,   124,    -1,   126,   127,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,   136,    26,   138,    -1,   140,
      -1,    -1,    32,    33,    -1,    35,    -1,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      90,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,     3,     4,     5,     6,     7,     8,
      -1,    -1,   122,    12,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    -1,   136,    26,   138,    -1,
     140,    62,    -1,    32,    33,    66,    35,    -1,    37,    -1,
      -1,    -1,    -1,    42,    43,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,     3,    86,    55,    -1,    57,    90,
      -1,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      69,    70,    71,    72,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,   125,   126,   127,    -1,    -1,   130,
     131,   132,     3,    -1,    -1,    -1,    -1,   106,    -1,    10,
     141,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
      -1,   140,    91,    92,    93,    94,    95,    96,    -1,    -1,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,    -1,   127,    -1,
      -1,   130,   131,   132,   133,    -1,   135,    -1,    -1,   138,
      91,    92,    93,    94,    95,    96,    -1,    -1,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    24,    -1,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,    -1,   127,    -1,    10,   130,
     131,   132,   133,    15,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    90,    -1,    -1,    15,    -1,    -1,
      62,    -1,    -1,    -1,    66,    -1,    24,    -1,    -1,   105,
      -1,   107,   108,   109,    -1,   111,   112,   113,    -1,   115,
     116,   117,   118,    -1,   120,   121,   122,   123,    90,   125,
      -1,   127,    -1,    -1,   130,   131,   132,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    62,   107,   108,   109,    66,   111,
     112,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,   125,   126,   127,    10,    -1,   130,   131,
     132,    15,    90,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      24,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,   125,   126,   127,
      -1,    -1,   130,   131,   132,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,   141,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,   107,   108,   109,    -1,   111,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      62,   125,   126,   127,    66,    -1,   130,   131,   132,    -1,
      -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    10,    -1,    90,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    -1,   105,    -1,   107,   108,   109,    -1,   111,
     112,   113,    36,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,   125,   126,   127,    -1,    -1,   130,   131,
     132,    -1,    -1,    -1,   136,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,   107,   108,   109,    -1,   111,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      62,   125,   126,   127,    66,    -1,   130,   131,   132,    -1,
      -1,    -1,   136,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,
     112,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,   125,   126,   127,    -1,    62,   130,   131,
     132,    66,    -1,    -1,   136,    -1,    -1,    10,    73,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    62,
     125,   126,   127,    66,    -1,   130,   131,   132,    -1,    10,
      -1,   136,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    62,   125,   126,   127,    66,    -1,   130,   131,   132,
      -1,    10,    -1,   136,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    62,   125,   126,   127,    66,    -1,   130,
     131,   132,    -1,    10,    73,   136,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,    -1,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    62,   125,   126,   127,    66,
      -1,   130,   131,   132,    -1,    10,    73,   136,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    62,   125,   126,
     127,    66,    -1,   130,   131,   132,    -1,    10,    73,   136,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    62,
     125,   126,   127,    66,    -1,   130,   131,   132,    -1,    10,
      73,   136,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    62,   125,   126,   127,    66,    -1,   130,   131,   132,
      -1,    10,    73,   136,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    62,   125,   126,   127,    66,    -1,   130,
     131,   132,    -1,    10,    73,   136,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,    -1,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    62,   125,   126,   127,    66,
      -1,   130,   131,   132,    -1,    10,    73,   136,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    62,   125,   126,
     127,    66,    -1,   130,   131,   132,    -1,    10,    73,   136,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    62,
     125,   126,   127,    66,    -1,   130,   131,   132,    -1,    10,
      -1,   136,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    62,   125,   126,   127,    66,    -1,   130,   131,   132,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    90,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,   105,    29,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,   125,   126,   127,    51,    -1,   130,
     131,   132,    -1,    -1,   135,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,   107,   108,   109,    -1,   111,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      62,   125,   126,   127,    66,   129,   130,   131,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    86,    -1,    15,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,
     112,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    51,   125,   126,   127,    -1,    -1,   130,   131,
     132,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,    -1,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    62,   125,   126,   127,    66,
      -1,   130,   131,   132,    -1,    10,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    62,   125,   126,
     127,    66,    -1,   130,   131,   132,    -1,    10,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    62,
     125,   126,   127,    66,    -1,   130,   131,   132,    -1,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    62,   125,   126,   127,    66,   129,   130,   131,   132,
      -1,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    62,   125,   126,   127,    66,   129,   130,
     131,   132,    -1,    10,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,    -1,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    62,   125,   126,   127,    66,
     129,   130,   131,   132,    -1,    10,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    62,   125,   126,
     127,    66,   129,   130,   131,   132,    -1,    10,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    62,
     125,   126,   127,    66,   129,   130,   131,   132,    -1,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    62,   125,   126,   127,    66,   129,   130,   131,   132,
      -1,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    62,   125,   126,   127,    66,    -1,   130,
     131,   132,    -1,    10,    73,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,    -1,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    62,   125,   126,   127,    66,
      -1,   130,   131,   132,    -1,    10,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    62,   125,   126,
     127,    66,   129,   130,   131,   132,    -1,    10,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    62,
     125,   126,   127,    66,   129,   130,   131,   132,    -1,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    62,   125,   126,   127,    66,   129,   130,   131,   132,
      -1,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    62,   125,   126,   127,    66,   129,   130,
     131,   132,    -1,    10,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,    -1,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    62,   125,   126,   127,    66,
     129,   130,   131,   132,    -1,    10,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    62,   125,   126,
     127,    66,   129,   130,   131,   132,    -1,    10,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    62,
     125,   126,   127,    66,   129,   130,   131,   132,    -1,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    62,   125,   126,   127,    66,   129,   130,   131,   132,
      -1,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    62,   125,   126,   127,    66,   129,   130,
     131,   132,    -1,    10,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,    -1,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    62,   125,   126,   127,    66,
     129,   130,   131,   132,    -1,    10,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    62,   125,   126,
     127,    66,   129,   130,   131,   132,    -1,    10,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    62,
     125,   126,   127,    66,   129,   130,   131,   132,    -1,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    62,   125,   126,   127,    66,   129,   130,   131,   132,
      -1,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    62,   125,   126,   127,    66,   129,   130,
     131,   132,    -1,    10,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,    -1,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    62,   125,   126,   127,    66,
     129,   130,   131,   132,    -1,    10,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    62,   125,   126,
     127,    66,   129,   130,   131,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,    -1,    62,   130,   131,   132,    66,    -1,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    62,   125,   126,   127,
      66,   129,   130,   131,   132,    -1,    10,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    27,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,    -1,   111,   112,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    62,   125,
     126,   127,    66,    -1,   130,   131,   132,    -1,    10,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,   107,   108,   109,    -1,   111,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      62,   125,   126,   127,    66,    -1,   130,   131,   132,    -1,
      10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,
     112,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    62,   125,   126,   127,    66,    -1,   130,   131,
     132,    -1,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,
      -1,   111,   112,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    62,   125,   126,   127,    66,    -1,
     130,   131,   132,    -1,    10,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    62,   125,   126,   127,
      66,    -1,   130,   131,   132,    -1,    10,    73,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,   107,   108,   109,    -1,   111,   112,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    62,   125,
     126,   127,    66,    -1,   130,   131,   132,    -1,    -1,    73,
      -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,   107,   108,   109,    -1,   111,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      24,   125,   126,   127,    -1,    62,   130,   131,   132,    66,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    62,   125,   126,
     127,    66,    -1,   130,   131,   132,    -1,    10,    73,    -1,
      -1,   105,    15,   107,   108,   109,    -1,   111,   112,   113,
      -1,    24,   116,   117,   118,    90,   120,   121,   122,   123,
      -1,    -1,    -1,   127,    -1,    -1,   130,   131,   132,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    62,
     125,   126,   127,    66,    -1,   130,   131,   132,    -1,    10,
      73,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    62,   125,   126,   127,    66,    -1,   130,   131,   132,
      -1,    10,    73,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    62,   125,   126,   127,    66,    -1,   130,
     131,   132,    -1,    10,    73,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   107,   108,
     109,    -1,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    62,   125,   126,   127,    66,
      -1,   130,   131,   132,    -1,    10,    73,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,   108,   109,    -1,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    62,   125,   126,
     127,    66,    -1,   130,   131,   132,    -1,    10,    73,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,   107,   108,   109,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    62,
     125,   126,   127,    66,    -1,   130,   131,   132,    -1,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    62,   125,   126,   127,    66,    -1,   130,   131,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,   107,   108,   109,    -1,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,   125,   126,   127,    -1,    -1,   130,
     131,   132
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   146,   147,     0,     1,     3,     4,     5,     6,     7,
       8,    12,    13,    14,    17,    18,    19,    20,    22,    23,
      25,    26,    28,    30,    31,    32,    33,    34,    35,    37,
      38,    41,    42,    43,    44,    45,    47,    48,    50,    55,
      56,    57,    58,    60,    61,    64,    65,    67,    68,    69,
      70,    71,    72,    74,    76,    77,    78,    80,    81,    85,
      87,    90,   105,   106,   107,   108,   113,   122,   124,   126,
     127,   129,   132,   136,   138,   140,   148,   149,   150,   151,
     152,   153,   158,   159,   160,   162,   165,   166,   167,   168,
     169,   170,   172,   173,   177,   178,   181,   182,   185,   188,
     191,   192,   215,   218,   219,   237,   238,   239,   240,   241,
     242,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   260,   261,   262,   263,   264,   150,   252,    86,   243,
     244,   161,   162,   243,    12,    32,    33,    35,    72,   136,
     140,   188,   237,   241,   250,   251,   252,   253,   255,   256,
      78,   161,   252,   150,   138,   162,     7,   161,   163,     9,
      78,   163,    54,    88,   171,   252,   252,    20,    31,   218,
     252,   252,   138,   162,   189,   138,   162,   220,   221,   150,
     252,   252,   252,   252,     7,   138,    31,   167,   167,   128,
     211,   231,   252,   129,   252,   252,    25,   153,   164,   252,
     252,    71,   138,   150,   252,   252,   153,   160,   252,   253,
     153,   160,   252,   162,   216,   231,   252,   252,   252,   252,
     252,   252,   252,   252,   137,   148,   154,   231,    79,   114,
     211,   232,   233,   252,   231,   252,   259,    56,   150,    46,
     162,    40,    59,   206,    21,    54,    63,    82,   129,   135,
      10,    15,    24,    62,    66,    90,   105,   107,   108,   109,
     111,   112,   113,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   125,   126,   127,   130,   131,   132,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   133,   134,   138,   140,    62,    66,   138,   150,
     129,   136,   153,   252,   252,   252,   231,    36,   243,   216,
     129,   129,    85,   162,   211,   234,   235,   236,   252,   136,
     216,   182,   162,   138,   164,    25,    36,   164,    25,    36,
      86,   164,   246,    29,    51,   129,    73,   153,   234,   150,
     138,   200,    79,   138,   162,   222,   223,     1,   109,   225,
     226,    36,   110,   164,   234,   163,   162,   110,   129,   129,
     136,   150,   164,   138,   234,   129,   174,   129,   174,   129,
      91,   217,   129,   129,    29,    51,   164,   129,   137,   148,
     110,   137,   252,   110,   139,   110,   139,    36,   110,   141,
     246,    89,   110,   141,     7,   162,   109,   183,   193,    63,
     220,   220,   220,   220,   252,   252,   252,   252,   171,   252,
     171,   252,   252,   252,   252,   252,   252,   252,    26,    78,
     162,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   234,   234,   171,   252,   171,   252,    21,
      36,    39,    53,    54,    63,    78,   204,   245,   248,   252,
     264,    25,    36,    25,    36,    73,    36,   141,   171,   252,
     164,   129,   252,    91,   139,   110,   162,   186,   187,   129,
     162,    36,   231,    35,   252,   171,   252,    35,   252,   171,
     252,   138,   164,   132,   155,   157,   252,   155,   156,   150,
     252,    27,   139,   201,   202,   203,   204,   190,   223,   110,
     139,     1,   140,   227,   238,    89,    91,   224,   252,   221,
     139,   211,   252,   179,   234,   139,    16,   175,   140,   227,
     238,   110,   157,   156,   137,   139,   139,   232,   139,   232,
     171,   252,   141,   150,   252,   141,   252,   141,   252,   136,
     231,   136,    21,    54,    63,    78,   195,   205,   220,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   139,
     141,    36,    63,   237,   110,   139,    62,    62,    35,   171,
     252,    35,   171,   252,   171,   252,   243,   243,   129,   211,
     252,   236,    91,   110,   137,   183,   252,   139,   252,    25,
     164,    25,   164,   252,    25,   164,   246,    25,   164,   246,
     247,   248,   110,   129,    11,   129,    27,    27,   150,   110,
     139,   138,   162,    21,    54,    63,    78,   207,   139,   223,
     109,   226,   231,   252,    49,   252,    52,    83,   137,   180,
     139,   138,   153,   162,   176,   231,   216,   129,   129,   141,
     246,   141,   246,   150,    89,   137,   154,   184,    63,   194,
      10,    15,    91,    92,    93,    94,    95,    96,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   111,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     127,   130,   131,   132,   133,   135,   138,   162,   196,   197,
     198,   237,   129,   248,   237,   237,   252,    25,    25,   252,
      25,    25,   141,   141,   164,   164,   252,   187,   136,   164,
      73,    35,   252,    35,   252,    73,    35,   252,   164,    35,
     252,   164,   110,   139,   252,   252,   150,   252,   202,   223,
     109,   230,    63,   226,   224,    36,   141,    25,   150,   231,
     176,   109,   153,   141,    35,   150,   252,   141,    35,   150,
     252,   141,   252,   137,    31,    58,    60,   137,   149,   166,
     207,   162,   252,   112,   138,   199,   199,    73,    35,    35,
      73,    35,    35,    35,    35,   184,   252,   252,   252,   252,
     252,   252,   248,    11,   139,    26,    69,    72,   140,   211,
     229,   238,   114,   213,   224,    84,   214,   252,   227,   238,
     150,   164,   139,   252,   252,   150,   252,   150,   166,   226,
     139,   162,   197,   198,   201,   252,   252,   252,   252,   252,
     252,   137,    73,    73,    73,    73,   252,   230,   141,   231,
     211,   212,   252,   252,   153,   165,   210,   141,   153,    73,
      73,    75,   208,   199,   199,   139,    73,    73,    73,    73,
      73,    73,   252,   252,   252,   252,   213,   224,   211,   228,
     229,   238,    36,   141,   238,   252,   252,   214,   252,   228,
     229,   129,   209,   210,   141,   228
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, context); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    ParserContext* context;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (context);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    ParserContext* context;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ParserContext* context)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, context)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    ParserContext* context;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, context); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserContext* context)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, context)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    ParserContext* context;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;
    /* Used to determine if this is the first time this instance has
       been used.  */
    int yynew;
  };

/* Initialize the parser data structure.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
yypstate *
yypstate_new (void)
#else
yypstate *
yypstate_new ()

#endif
{
  yypstate *yyps;
  yyps = (yypstate *) malloc (sizeof *yyps);
  if (!yyps)
    return 0;
  yyps->yynew = 1;
  return yyps;
}

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void
yypstate_delete (yypstate *yyps)
#else
void
yypstate_delete (yyps)
    yypstate *yyps;
#endif
{
#ifndef yyoverflow
  /* If the stack was reallocated but the parse did not complete, then the
     stack still needs to be freed.  */
  if (!yyps->yynew && yyps->yyss != yyps->yyssa)
    YYSTACK_FREE (yyps->yyss);
#endif
  free (yyps);
}

#define yynerrs yyps->yynerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yyerror_range yyps->yyerror_range
#define yystacksize yyps->yystacksize


/*---------------.
| yypush_parse.  |
`---------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yypush_parse (yypstate *yyps, int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE const *yypushed_loc, ParserContext* context)
#else
int
yypush_parse (yyps, yypushed_char, yypushed_val, yypushed_loc, context)
    yypstate *yyps;
    int yypushed_char;
    YYSTYPE const *yypushed_val;
    YYLTYPE const *yypushed_loc;
    ParserContext* context;
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  if (!yyps->yynew)
    {
      yyn = yypact[yystate];
      goto yyread_pushed_token;
    }

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
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
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1821 of yacc.c  */
#line 435 "chapel.ypp"
    { yyblock = (yyval.pblockstmt); }
    break;

  case 3:

/* Line 1821 of yacc.c  */
#line 440 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt();                                  resetTempID(); }
    break;

  case 4:

/* Line 1821 of yacc.c  */
#line 441 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->appendChapelStmt((yyvsp[(2) - (2)].pblockstmt)); context->generatedStmt = (yyvsp[(1) - (2)].pblockstmt); resetTempID(); }
    break;

  case 6:

/* Line 1821 of yacc.c  */
#line 448 "chapel.ypp"
    { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[(1) - (2)].vpch), (yyvsp[(2) - (2)].pblockstmt) ); }
    break;

  case 7:

/* Line 1821 of yacc.c  */
#line 453 "chapel.ypp"
    { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[(2) - (2)].pch))); }
    break;

  case 8:

/* Line 1821 of yacc.c  */
#line 454 "chapel.ypp"
    { (yyvsp[(1) - (3)].vpch)->add(astr((yyvsp[(3) - (3)].pch))); }
    break;

  case 22:

/* Line 1821 of yacc.c  */
#line 472 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (2)].pexpr)); }
    break;

  case 23:

/* Line 1821 of yacc.c  */
#line 473 "chapel.ypp"
    { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 24:

/* Line 1821 of yacc.c  */
#line 474 "chapel.ypp"
    { (yyval.pblockstmt) = buildBeginStmt((yyvsp[(2) - (3)].pcallexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 25:

/* Line 1821 of yacc.c  */
#line 475 "chapel.ypp"
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[(2) - (3)].pch)); }
    break;

  case 26:

/* Line 1821 of yacc.c  */
#line 476 "chapel.ypp"
    { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[(2) - (3)].pcallexpr), (yyvsp[(3) - (3)].pblockstmt));  }
    break;

  case 27:

/* Line 1821 of yacc.c  */
#line 477 "chapel.ypp"
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[(2) - (3)].pch)); }
    break;

  case 28:

/* Line 1821 of yacc.c  */
#line 478 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_DELETE, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 29:

/* Line 1821 of yacc.c  */
#line 479 "chapel.ypp"
    { (yyval.pblockstmt) = buildLabelStmt((yyvsp[(2) - (3)].pch), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 30:

/* Line 1821 of yacc.c  */
#line 480 "chapel.ypp"
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 31:

/* Line 1821 of yacc.c  */
#line 481 "chapel.ypp"
    { (yyval.pblockstmt) = buildOnStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 32:

/* Line 1821 of yacc.c  */
#line 482 "chapel.ypp"
    { (yyval.pblockstmt) = buildSerialStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 33:

/* Line 1821 of yacc.c  */
#line 483 "chapel.ypp"
    { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 34:

/* Line 1821 of yacc.c  */
#line 484 "chapel.ypp"
    { (yyval.pblockstmt) = buildSyncStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 35:

/* Line 1821 of yacc.c  */
#line 485 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 36:

/* Line 1821 of yacc.c  */
#line 486 "chapel.ypp"
    { printf("syntax error"); clean_exit(1); }
    break;

  case 37:

/* Line 1821 of yacc.c  */
#line 491 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[(3) - (5)].pch), currentModuleType, new BlockStmt(), yyfilename, (yyvsp[(1) - (5)].b), (yylsp[(1) - (5)]).comment))); }
    break;

  case 38:

/* Line 1821 of yacc.c  */
#line 493 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[(3) - (6)].pch), currentModuleType, (yyvsp[(5) - (6)].pblockstmt), yyfilename, (yyvsp[(1) - (6)].b), (yylsp[(1) - (6)]).comment))); }
    break;

  case 39:

/* Line 1821 of yacc.c  */
#line 497 "chapel.ypp"
    { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
    break;

  case 40:

/* Line 1821 of yacc.c  */
#line 498 "chapel.ypp"
    { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
    break;

  case 41:

/* Line 1821 of yacc.c  */
#line 499 "chapel.ypp"
    { (yyval.b) = true; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
    break;

  case 42:

/* Line 1821 of yacc.c  */
#line 514 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
    break;

  case 43:

/* Line 1821 of yacc.c  */
#line 515 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (3)].pblockstmt);              }
    break;

  case 44:

/* Line 1821 of yacc.c  */
#line 520 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[(1) - (1)].pblockstmt)); }
    break;

  case 45:

/* Line 1821 of yacc.c  */
#line 521 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->appendChapelStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 46:

/* Line 1821 of yacc.c  */
#line 526 "chapel.ypp"
    { (yyval.ponlylist) = new std::vector<OnlyRename*>();
                                         OnlyRename* cur = new OnlyRename();
                                         cur->tag = OnlyRename::SINGLE;
                                         cur->elem = (yyvsp[(1) - (1)].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
    break;

  case 47:

/* Line 1821 of yacc.c  */
#line 531 "chapel.ypp"
    { (yyval.ponlylist) = new std::vector<OnlyRename*>();
                                         OnlyRename* cur = new OnlyRename();
                                         cur->tag = OnlyRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
    break;

  case 48:

/* Line 1821 of yacc.c  */
#line 536 "chapel.ypp"
    { OnlyRename* cur = new OnlyRename();
                                         cur->tag = OnlyRename::SINGLE;
                                         cur->elem = (yyvsp[(3) - (3)].pexpr);
                                         (yyvsp[(1) - (3)].ponlylist)->push_back(cur); }
    break;

  case 49:

/* Line 1821 of yacc.c  */
#line 540 "chapel.ypp"
    { OnlyRename* cur = new OnlyRename();
                                         cur->tag = OnlyRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[(3) - (5)].pexpr), (yyvsp[(5) - (5)].pexpr));
                                         (yyvsp[(1) - (5)].ponlylist)->push_back(cur); }
    break;

  case 50:

/* Line 1821 of yacc.c  */
#line 547 "chapel.ypp"
    { (yyval.ponlylist) = new std::vector<OnlyRename*>();
                                         OnlyRename* cur = new OnlyRename();
                                         cur->tag = OnlyRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
    break;

  case 52:

/* Line 1821 of yacc.c  */
#line 556 "chapel.ypp"
    { (yyval.ponlylist) = new std::vector<OnlyRename*>();
                                         OnlyRename* cur = new OnlyRename();
                                         cur->tag = OnlyRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
    break;

  case 54:

/* Line 1821 of yacc.c  */
#line 565 "chapel.ypp"
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 55:

/* Line 1821 of yacc.c  */
#line 566 "chapel.ypp"
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].ponlylist), true); }
    break;

  case 56:

/* Line 1821 of yacc.c  */
#line 567 "chapel.ypp"
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].ponlylist), false); }
    break;

  case 57:

/* Line 1821 of yacc.c  */
#line 571 "chapel.ypp"
    { (yyval.pblockstmt) = buildRequireStmt((yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 58:

/* Line 1821 of yacc.c  */
#line 575 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "=");   }
    break;

  case 59:

/* Line 1821 of yacc.c  */
#line 576 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "+=");  }
    break;

  case 60:

/* Line 1821 of yacc.c  */
#line 577 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "-=");  }
    break;

  case 61:

/* Line 1821 of yacc.c  */
#line 578 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "*=");  }
    break;

  case 62:

/* Line 1821 of yacc.c  */
#line 579 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "/=");  }
    break;

  case 63:

/* Line 1821 of yacc.c  */
#line 580 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "%=");  }
    break;

  case 64:

/* Line 1821 of yacc.c  */
#line 581 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "**="); }
    break;

  case 65:

/* Line 1821 of yacc.c  */
#line 582 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "&=");  }
    break;

  case 66:

/* Line 1821 of yacc.c  */
#line 583 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "|=");  }
    break;

  case 67:

/* Line 1821 of yacc.c  */
#line 584 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "^=");  }
    break;

  case 68:

/* Line 1821 of yacc.c  */
#line 585 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), ">>="); }
    break;

  case 69:

/* Line 1821 of yacc.c  */
#line 586 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "<<="); }
    break;

  case 70:

/* Line 1821 of yacc.c  */
#line 587 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "<=>"); }
    break;

  case 71:

/* Line 1821 of yacc.c  */
#line 588 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), PRIM_REDUCE_ASSIGN); }
    break;

  case 72:

/* Line 1821 of yacc.c  */
#line 589 "chapel.ypp"
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr));    }
    break;

  case 73:

/* Line 1821 of yacc.c  */
#line 590 "chapel.ypp"
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr));     }
    break;

  case 74:

/* Line 1821 of yacc.c  */
#line 594 "chapel.ypp"
    { (yyval.pch) = NULL; }
    break;

  case 76:

/* Line 1821 of yacc.c  */
#line 599 "chapel.ypp"
    { (yyval.pch) = (yyvsp[(1) - (1)].pch); }
    break;

  case 77:

/* Line 1821 of yacc.c  */
#line 603 "chapel.ypp"
    { (yyval.pch) = (yyvsp[(1) - (1)].pch); }
    break;

  case 78:

/* Line 1821 of yacc.c  */
#line 604 "chapel.ypp"
    { (yyval.pch) = (yyvsp[(1) - (1)].pch); }
    break;

  case 79:

/* Line 1821 of yacc.c  */
#line 608 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (2)].pblockstmt); }
    break;

  case 80:

/* Line 1821 of yacc.c  */
#line 609 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(1) - (1)].pblockstmt); }
    break;

  case 81:

/* Line 1821 of yacc.c  */
#line 613 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN); }
    break;

  case 82:

/* Line 1821 of yacc.c  */
#line 614 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 83:

/* Line 1821 of yacc.c  */
#line 618 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
    break;

  case 85:

/* Line 1821 of yacc.c  */
#line 620 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (2)].pblockstmt); }
    break;

  case 86:

/* Line 1821 of yacc.c  */
#line 621 "chapel.ypp"
    { applyPrivateToBlock((yyvsp[(2) - (2)].pblockstmt)); (yyval.pblockstmt) = (yyvsp[(2) - (2)].pblockstmt); }
    break;

  case 93:

/* Line 1821 of yacc.c  */
#line 634 "chapel.ypp"
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[(2) - (3)].pexpr)); }
    break;

  case 94:

/* Line 1821 of yacc.c  */
#line 635 "chapel.ypp"
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].ponlylist), true); }
    break;

  case 95:

/* Line 1821 of yacc.c  */
#line 636 "chapel.ypp"
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].ponlylist), false); }
    break;

  case 96:

/* Line 1821 of yacc.c  */
#line 637 "chapel.ypp"
    { (yyval.pblockstmt) = buildForwardingDeclStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 97:

/* Line 1821 of yacc.c  */
#line 642 "chapel.ypp"
    {
#ifdef HAVE_LLVM
      if (externC) {
        (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[(2) - (2)].pch)));
      } else {
        USR_FATAL(new BlockStmt(), "extern block syntax is turned off. Use --extern-c flag to turn on.");
      }
#else
      USR_FATAL(new BlockStmt(), "Chapel must be built with llvm in order to use the extern block syntax");
#endif
    }
    break;

  case 98:

/* Line 1821 of yacc.c  */
#line 656 "chapel.ypp"
    { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[(4) - (5)].pexpr), (yyvsp[(2) - (5)].pblockstmt)); }
    break;

  case 99:

/* Line 1821 of yacc.c  */
#line 657 "chapel.ypp"
    { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 100:

/* Line 1821 of yacc.c  */
#line 658 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(5) - (6)].pcallexpr), (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 101:

/* Line 1821 of yacc.c  */
#line 659 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[(2) - (6)].pexpr), zipToTuple((yyvsp[(4) - (6)].pcallexpr)), (yyvsp[(5) - (6)].pcallexpr), (yyvsp[(6) - (6)].pblockstmt), true); }
    break;

  case 102:

/* Line 1821 of yacc.c  */
#line 660 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr), (yyvsp[(4) - (4)].pblockstmt)); }
    break;

  case 103:

/* Line 1821 of yacc.c  */
#line 661 "chapel.ypp"
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt), false, false); }
    break;

  case 104:

/* Line 1821 of yacc.c  */
#line 662 "chapel.ypp"
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pcallexpr), (yyvsp[(5) - (5)].pblockstmt), false,  true); }
    break;

  case 105:

/* Line 1821 of yacc.c  */
#line 663 "chapel.ypp"
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt), false, false); }
    break;

  case 106:

/* Line 1821 of yacc.c  */
#line 664 "chapel.ypp"
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[(2) - (3)].pcallexpr), (yyvsp[(3) - (3)].pblockstmt), false,  true); }
    break;

  case 107:

/* Line 1821 of yacc.c  */
#line 665 "chapel.ypp"
    { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[(3) - (6)].pch), (yyvsp[(5) - (6)].pexpr), (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 108:

/* Line 1821 of yacc.c  */
#line 666 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), NULL, (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 109:

/* Line 1821 of yacc.c  */
#line 667 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(5) - (6)].pForallIntents),   (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 110:

/* Line 1821 of yacc.c  */
#line 668 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (5)].pexpr), zipToTuple((yyvsp[(4) - (5)].pcallexpr)), NULL, (yyvsp[(5) - (5)].pblockstmt), true); }
    break;

  case 111:

/* Line 1821 of yacc.c  */
#line 669 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (6)].pexpr), zipToTuple((yyvsp[(4) - (6)].pcallexpr)), (yyvsp[(5) - (6)].pForallIntents),   (yyvsp[(6) - (6)].pblockstmt), true); }
    break;

  case 112:

/* Line 1821 of yacc.c  */
#line 670 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[(2) - (3)].pexpr), NULL, (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 113:

/* Line 1821 of yacc.c  */
#line 671 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(3) - (4)].pForallIntents),   (yyvsp[(4) - (4)].pblockstmt)); }
    break;

  case 114:

/* Line 1821 of yacc.c  */
#line 673 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), NULL, new BlockStmt((yyvsp[(6) - (6)].pblockstmt)));
    }
    break;

  case 115:

/* Line 1821 of yacc.c  */
#line 679 "chapel.ypp"
    {
      if ((yyvsp[(2) - (7)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (7)].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (7)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (7)].pexpr), (yyvsp[(5) - (7)].pForallIntents),   new BlockStmt((yyvsp[(7) - (7)].pblockstmt)));
    }
    break;

  case 116:

/* Line 1821 of yacc.c  */
#line 685 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), zipToTuple((yyvsp[(4) - (6)].pcallexpr)), NULL, new BlockStmt((yyvsp[(6) - (6)].pblockstmt)), true);
    }
    break;

  case 117:

/* Line 1821 of yacc.c  */
#line 691 "chapel.ypp"
    {
      if ((yyvsp[(2) - (7)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (7)].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (7)].pcallexpr)->get(1)->remove(), zipToTuple((yyvsp[(4) - (7)].pcallexpr)), (yyvsp[(5) - (7)].pForallIntents),   new BlockStmt((yyvsp[(7) - (7)].pblockstmt)), true);
    }
    break;

  case 118:

/* Line 1821 of yacc.c  */
#line 697 "chapel.ypp"
    {
      if ((yyvsp[(2) - (4)].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), NULL, new BlockStmt((yyvsp[(4) - (4)].pblockstmt)));
      else
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[(2) - (4)].pcallexpr)->get(1)->remove(), NULL, new BlockStmt((yyvsp[(4) - (4)].pblockstmt)));
    }
    break;

  case 119:

/* Line 1821 of yacc.c  */
#line 704 "chapel.ypp"
    {
      if ((yyvsp[(2) - (5)].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (5)].pcallexpr)), (yyvsp[(3) - (5)].pForallIntents),   new BlockStmt((yyvsp[(5) - (5)].pblockstmt)));
      else
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[(2) - (5)].pcallexpr)->get(1)->remove(), (yyvsp[(3) - (5)].pForallIntents),   new BlockStmt((yyvsp[(5) - (5)].pblockstmt)));
    }
    break;

  case 120:

/* Line 1821 of yacc.c  */
#line 713 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ZIP, (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 121:

/* Line 1821 of yacc.c  */
#line 717 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pblockstmt)); }
    break;

  case 122:

/* Line 1821 of yacc.c  */
#line 718 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 123:

/* Line 1821 of yacc.c  */
#line 719 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pblockstmt), (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 124:

/* Line 1821 of yacc.c  */
#line 720 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(3) - (5)].pblockstmt), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 125:

/* Line 1821 of yacc.c  */
#line 724 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 126:

/* Line 1821 of yacc.c  */
#line 725 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 127:

/* Line 1821 of yacc.c  */
#line 726 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 128:

/* Line 1821 of yacc.c  */
#line 727 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 129:

/* Line 1821 of yacc.c  */
#line 728 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[(2) - (3)].pblockstmt), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 130:

/* Line 1821 of yacc.c  */
#line 729 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[(2) - (3)].pblockstmt), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 131:

/* Line 1821 of yacc.c  */
#line 733 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(); }
    break;

  case 132:

/* Line 1821 of yacc.c  */
#line 734 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pexpr)); }
    break;

  case 133:

/* Line 1821 of yacc.c  */
#line 738 "chapel.ypp"
    { (yyval.pexpr) = CatchStmt::build((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 134:

/* Line 1821 of yacc.c  */
#line 739 "chapel.ypp"
    { (yyval.pexpr) = CatchStmt::build((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 135:

/* Line 1821 of yacc.c  */
#line 740 "chapel.ypp"
    { (yyval.pexpr) = CatchStmt::build((yyvsp[(3) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 136:

/* Line 1821 of yacc.c  */
#line 744 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[(1) - (1)].pch)), NULL, new UnresolvedSymExpr("Error")); }
    break;

  case 137:

/* Line 1821 of yacc.c  */
#line 745 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[(1) - (3)].pch)), NULL, (yyvsp[(3) - (3)].pexpr));   }
    break;

  case 138:

/* Line 1821 of yacc.c  */
#line 749 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_THROW, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 139:

/* Line 1821 of yacc.c  */
#line 753 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pblockstmt))); }
    break;

  case 140:

/* Line 1821 of yacc.c  */
#line 757 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(); }
    break;

  case 141:

/* Line 1821 of yacc.c  */
#line 758 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pexpr)); }
    break;

  case 142:

/* Line 1821 of yacc.c  */
#line 763 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[(2) - (3)].pcallexpr)), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 143:

/* Line 1821 of yacc.c  */
#line 765 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 144:

/* Line 1821 of yacc.c  */
#line 767 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 145:

/* Line 1821 of yacc.c  */
#line 774 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[(2) - (6)].pch),
                                             NULL,
                                             (yyvsp[(1) - (6)].aggrTag),
                                             (yyvsp[(3) - (6)].pcallexpr),
                                             (yyvsp[(5) - (6)].pblockstmt),
                                             FLAG_UNKNOWN,
                                             (yylsp[(1) - (6)]).comment));
    }
    break;

  case 146:

/* Line 1821 of yacc.c  */
#line 784 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[(4) - (8)].pch),
                                             (yyvsp[(2) - (8)].pch),
                                             (yyvsp[(3) - (8)].aggrTag),
                                             (yyvsp[(5) - (8)].pcallexpr),
                                             (yyvsp[(7) - (8)].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[(3) - (8)]).comment));
    }
    break;

  case 147:

/* Line 1821 of yacc.c  */
#line 796 "chapel.ypp"
    {
             (yyval.aggrTag)                     = AGGREGATE_CLASS;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
    break;

  case 148:

/* Line 1821 of yacc.c  */
#line 801 "chapel.ypp"
    {
             (yyval.aggrTag)                     = AGGREGATE_RECORD;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
    break;

  case 149:

/* Line 1821 of yacc.c  */
#line 806 "chapel.ypp"
    {
             (yyval.aggrTag)                     = AGGREGATE_UNION;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
    break;

  case 150:

/* Line 1821 of yacc.c  */
#line 814 "chapel.ypp"
    { (yyval.pcallexpr) = NULL; }
    break;

  case 151:

/* Line 1821 of yacc.c  */
#line 815 "chapel.ypp"
    { (yyval.pcallexpr) = (yyvsp[(2) - (2)].pcallexpr); }
    break;

  case 152:

/* Line 1821 of yacc.c  */
#line 820 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
    break;

  case 153:

/* Line 1821 of yacc.c  */
#line 822 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 154:

/* Line 1821 of yacc.c  */
#line 824 "chapel.ypp"
    { (yyvsp[(1) - (3)].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[(2) - (3)].vpch), (yyvsp[(3) - (3)].pblockstmt))); }
    break;

  case 155:

/* Line 1821 of yacc.c  */
#line 829 "chapel.ypp"
    {
      EnumType* pdt = (yyvsp[(4) - (5)].penumtype);
      TypeSymbol* pst = new TypeSymbol((yyvsp[(2) - (5)].pch), pdt);
      (yyvsp[(4) - (5)].penumtype)->symbol = pst;
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(pst));
    }
    break;

  case 156:

/* Line 1821 of yacc.c  */
#line 839 "chapel.ypp"
    {
      (yyval.penumtype) = new EnumType();
      (yyvsp[(1) - (1)].pdefexpr)->sym->type = (yyval.penumtype);
      (yyval.penumtype)->constants.insertAtTail((yyvsp[(1) - (1)].pdefexpr));
      (yyval.penumtype)->defaultValue = (yyvsp[(1) - (1)].pdefexpr)->sym;
      (yyval.penumtype)->doc = context->latestComment;
      context->latestComment = NULL;
    }
    break;

  case 157:

/* Line 1821 of yacc.c  */
#line 848 "chapel.ypp"
    {
      (yyval.penumtype) = (yyvsp[(1) - (2)].penumtype);
    }
    break;

  case 158:

/* Line 1821 of yacc.c  */
#line 852 "chapel.ypp"
    {
      (yyvsp[(1) - (3)].penumtype)->constants.insertAtTail((yyvsp[(3) - (3)].pdefexpr));
      (yyvsp[(3) - (3)].pdefexpr)->sym->type = (yyvsp[(1) - (3)].penumtype);
    }
    break;

  case 159:

/* Line 1821 of yacc.c  */
#line 859 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[(1) - (1)].pch))); }
    break;

  case 160:

/* Line 1821 of yacc.c  */
#line 860 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[(1) - (3)].pch)), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 161:

/* Line 1821 of yacc.c  */
#line 865 "chapel.ypp"
    {
      captureTokens = 1;
      captureString.clear();
    }
    break;

  case 162:

/* Line 1821 of yacc.c  */
#line 870 "chapel.ypp"
    {
      captureTokens = 0;
      (yyvsp[(3) - (3)].pfnsymbol)->userString = astr(captureString);
    }
    break;

  case 163:

/* Line 1821 of yacc.c  */
#line 875 "chapel.ypp"
    {
      (yyvsp[(3) - (8)].pfnsymbol)->retTag = (yyvsp[(5) - (8)].retTag);
      if ((yyvsp[(5) - (8)].retTag) == RET_REF || (yyvsp[(5) - (8)].retTag) == RET_CONST_REF)
        USR_FATAL("'ref' return types are not allowed in lambdas");
      if ((yyvsp[(5) - (8)].retTag) == RET_PARAM)
        USR_FATAL("'param' return types are not allowed in lambdas");
      if ((yyvsp[(5) - (8)].retTag) == RET_TYPE)
        USR_FATAL("'type' return types are not allowed in lambdas");
      if ((yyvsp[(6) - (8)].pexpr))
        (yyvsp[(3) - (8)].pfnsymbol)->retExprType = new BlockStmt((yyvsp[(6) - (8)].pexpr), BLOCK_SCOPELESS);
      if ((yyvsp[(7) - (8)].pexpr))
        (yyvsp[(3) - (8)].pfnsymbol)->where = new BlockStmt((yyvsp[(7) - (8)].pexpr));
      (yyvsp[(3) - (8)].pfnsymbol)->insertAtTail((yyvsp[(8) - (8)].pblockstmt));
      (yyval.pexpr) = new DefExpr(buildLambda((yyvsp[(3) - (8)].pfnsymbol)));
    }
    break;

  case 164:

/* Line 1821 of yacc.c  */
#line 895 "chapel.ypp"
    {
                  (yyval.pfnsymbol) = new FnSymbol("");

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
    break;

  case 165:

/* Line 1821 of yacc.c  */
#line 901 "chapel.ypp"
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
    break;

  case 166:

/* Line 1821 of yacc.c  */
#line 908 "chapel.ypp"
    {
                  (yyval.pfnsymbol) = new FnSymbol((yyvsp[(2) - (2)].pch));
                  (yyval.pfnsymbol)->addFlag(FLAG_EXPORT);
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
    break;

  case 167:

/* Line 1821 of yacc.c  */
#line 916 "chapel.ypp"
    {
                  (yyval.pfnsymbol) = new FnSymbol((yyvsp[(2) - (2)].pch));
                  (yyval.pfnsymbol)->addFlag(FLAG_EXTERN);
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
    break;

  case 168:

/* Line 1821 of yacc.c  */
#line 928 "chapel.ypp"
    {
      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString.clear();
    }
    break;

  case 169:

/* Line 1821 of yacc.c  */
#line 934 "chapel.ypp"
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[(4) - (4)].pfnsymbol)->userString = astr(captureString);
    }
    break;

  case 170:

/* Line 1821 of yacc.c  */
#line 941 "chapel.ypp"
    {
      FnSymbol* fn = (yyvsp[(4) - (10)].pfnsymbol);

      fn->copyFlags((yyvsp[(1) - (10)].pfnsymbol));
      // The user explicitly named this function (controls mangling).
      if (*(yyvsp[(1) - (10)].pfnsymbol)->name)
        fn->cname = (yyvsp[(1) - (10)].pfnsymbol)->name;

      if ((yyvsp[(2) - (10)].procIter) == ProcIter_ITER)
      {
        if (fn->hasFlag(FLAG_EXTERN))
          USR_FATAL_CONT(fn, "'iter' is not legal with 'extern'");
        fn->addFlag(FLAG_ITERATOR_FN);
      }

      (yyval.pblockstmt) = buildFunctionDecl((yyvsp[(4) - (10)].pfnsymbol), (yyvsp[(6) - (10)].retTag), (yyvsp[(7) - (10)].pexpr), (yyvsp[(8) - (10)].b), (yyvsp[(9) - (10)].pexpr), (yyvsp[(10) - (10)].pblockstmt), (yylsp[(1) - (10)]).comment);
      context->latestComment = NULL;
    }
    break;

  case 171:

/* Line 1821 of yacc.c  */
#line 963 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(3) - (3)].pfnsymbol), (yyvsp[(2) - (3)].pch), (yyvsp[(1) - (3)].pt), NULL);
    }
    break;

  case 172:

/* Line 1821 of yacc.c  */
#line 967 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(3) - (3)].pfnsymbol), (yyvsp[(2) - (3)].pch), (yyvsp[(1) - (3)].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
    break;

  case 173:

/* Line 1821 of yacc.c  */
#line 972 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(5) - (5)].pfnsymbol), (yyvsp[(4) - (5)].pch), (yyvsp[(1) - (5)].pt), (yyvsp[(2) - (5)].pexpr));
    }
    break;

  case 174:

/* Line 1821 of yacc.c  */
#line 976 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(5) - (5)].pfnsymbol), (yyvsp[(4) - (5)].pch), (yyvsp[(1) - (5)].pt), (yyvsp[(2) - (5)].pexpr));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
    break;

  case 176:

/* Line 1821 of yacc.c  */
#line 984 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (3)].pexpr); }
    break;

  case 178:

/* Line 1821 of yacc.c  */
#line 989 "chapel.ypp"
    { (yyval.pch) = astr("~", (yyvsp[(2) - (2)].pch)); }
    break;

  case 179:

/* Line 1821 of yacc.c  */
#line 990 "chapel.ypp"
    { (yyval.pch) = "&"; }
    break;

  case 180:

/* Line 1821 of yacc.c  */
#line 991 "chapel.ypp"
    { (yyval.pch) = "|"; }
    break;

  case 181:

/* Line 1821 of yacc.c  */
#line 992 "chapel.ypp"
    { (yyval.pch) = "^"; }
    break;

  case 182:

/* Line 1821 of yacc.c  */
#line 993 "chapel.ypp"
    { (yyval.pch) = "~"; }
    break;

  case 183:

/* Line 1821 of yacc.c  */
#line 994 "chapel.ypp"
    { (yyval.pch) = "=="; }
    break;

  case 184:

/* Line 1821 of yacc.c  */
#line 995 "chapel.ypp"
    { (yyval.pch) = "!="; }
    break;

  case 185:

/* Line 1821 of yacc.c  */
#line 996 "chapel.ypp"
    { (yyval.pch) = "<="; }
    break;

  case 186:

/* Line 1821 of yacc.c  */
#line 997 "chapel.ypp"
    { (yyval.pch) = ">="; }
    break;

  case 187:

/* Line 1821 of yacc.c  */
#line 998 "chapel.ypp"
    { (yyval.pch) = "<"; }
    break;

  case 188:

/* Line 1821 of yacc.c  */
#line 999 "chapel.ypp"
    { (yyval.pch) = ">"; }
    break;

  case 189:

/* Line 1821 of yacc.c  */
#line 1000 "chapel.ypp"
    { (yyval.pch) = "+"; }
    break;

  case 190:

/* Line 1821 of yacc.c  */
#line 1001 "chapel.ypp"
    { (yyval.pch) = "-"; }
    break;

  case 191:

/* Line 1821 of yacc.c  */
#line 1002 "chapel.ypp"
    { (yyval.pch) = "*"; }
    break;

  case 192:

/* Line 1821 of yacc.c  */
#line 1003 "chapel.ypp"
    { (yyval.pch) = "/"; }
    break;

  case 193:

/* Line 1821 of yacc.c  */
#line 1004 "chapel.ypp"
    { (yyval.pch) = "<<"; }
    break;

  case 194:

/* Line 1821 of yacc.c  */
#line 1005 "chapel.ypp"
    { (yyval.pch) = ">>"; }
    break;

  case 195:

/* Line 1821 of yacc.c  */
#line 1006 "chapel.ypp"
    { (yyval.pch) = "%"; }
    break;

  case 196:

/* Line 1821 of yacc.c  */
#line 1007 "chapel.ypp"
    { (yyval.pch) = "**"; }
    break;

  case 197:

/* Line 1821 of yacc.c  */
#line 1008 "chapel.ypp"
    { (yyval.pch) = "!"; }
    break;

  case 198:

/* Line 1821 of yacc.c  */
#line 1009 "chapel.ypp"
    { (yyval.pch) = "chpl_by"; }
    break;

  case 199:

/* Line 1821 of yacc.c  */
#line 1010 "chapel.ypp"
    { (yyval.pch) = "#"; }
    break;

  case 200:

/* Line 1821 of yacc.c  */
#line 1011 "chapel.ypp"
    { (yyval.pch) = "chpl_align"; }
    break;

  case 201:

/* Line 1821 of yacc.c  */
#line 1012 "chapel.ypp"
    { (yyval.pch) = "<=>"; }
    break;

  case 202:

/* Line 1821 of yacc.c  */
#line 1013 "chapel.ypp"
    { (yyval.pch) = "<~>"; }
    break;

  case 203:

/* Line 1821 of yacc.c  */
#line 1017 "chapel.ypp"
    { (yyval.pch) = "="; }
    break;

  case 204:

/* Line 1821 of yacc.c  */
#line 1018 "chapel.ypp"
    { (yyval.pch) = "+="; }
    break;

  case 205:

/* Line 1821 of yacc.c  */
#line 1019 "chapel.ypp"
    { (yyval.pch) = "-="; }
    break;

  case 206:

/* Line 1821 of yacc.c  */
#line 1020 "chapel.ypp"
    { (yyval.pch) = "*="; }
    break;

  case 207:

/* Line 1821 of yacc.c  */
#line 1021 "chapel.ypp"
    { (yyval.pch) = "/="; }
    break;

  case 208:

/* Line 1821 of yacc.c  */
#line 1022 "chapel.ypp"
    { (yyval.pch) = "%="; }
    break;

  case 209:

/* Line 1821 of yacc.c  */
#line 1023 "chapel.ypp"
    { (yyval.pch) = "**="; }
    break;

  case 210:

/* Line 1821 of yacc.c  */
#line 1024 "chapel.ypp"
    { (yyval.pch) = "&="; }
    break;

  case 211:

/* Line 1821 of yacc.c  */
#line 1025 "chapel.ypp"
    { (yyval.pch) = "|="; }
    break;

  case 212:

/* Line 1821 of yacc.c  */
#line 1026 "chapel.ypp"
    { (yyval.pch) = "^="; }
    break;

  case 213:

/* Line 1821 of yacc.c  */
#line 1027 "chapel.ypp"
    { (yyval.pch) = ">>="; }
    break;

  case 214:

/* Line 1821 of yacc.c  */
#line 1028 "chapel.ypp"
    { (yyval.pch) = "<<="; }
    break;

  case 215:

/* Line 1821 of yacc.c  */
#line 1032 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
    break;

  case 216:

/* Line 1821 of yacc.c  */
#line 1033 "chapel.ypp"
    { (yyval.pfnsymbol) = (yyvsp[(2) - (3)].pfnsymbol); }
    break;

  case 217:

/* Line 1821 of yacc.c  */
#line 1037 "chapel.ypp"
    { (yyval.pfnsymbol) = (yyvsp[(2) - (3)].pfnsymbol); }
    break;

  case 218:

/* Line 1821 of yacc.c  */
#line 1041 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
    break;

  case 219:

/* Line 1821 of yacc.c  */
#line 1042 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[(1) - (1)].pdefexpr)); }
    break;

  case 220:

/* Line 1821 of yacc.c  */
#line 1043 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[(1) - (3)].pfnsymbol), (yyvsp[(3) - (3)].pdefexpr)); }
    break;

  case 221:

/* Line 1821 of yacc.c  */
#line 1048 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[(1) - (4)].pt), (yyvsp[(2) - (4)].pch), (yyvsp[(3) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr), NULL); }
    break;

  case 222:

/* Line 1821 of yacc.c  */
#line 1050 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[(1) - (4)].pt), (yyvsp[(2) - (4)].pch), (yyvsp[(3) - (4)].pexpr), NULL, (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 223:

/* Line 1821 of yacc.c  */
#line 1052 "chapel.ypp"
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[(1) - (6)].pt), (yyvsp[(3) - (6)].pblockstmt), (yyvsp[(5) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 224:

/* Line 1821 of yacc.c  */
#line 1054 "chapel.ypp"
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
    break;

  case 225:

/* Line 1821 of yacc.c  */
#line 1058 "chapel.ypp"
    { (yyval.pt) = INTENT_BLANK; }
    break;

  case 226:

/* Line 1821 of yacc.c  */
#line 1059 "chapel.ypp"
    { (yyval.pt) = (yyvsp[(1) - (1)].pt); }
    break;

  case 227:

/* Line 1821 of yacc.c  */
#line 1063 "chapel.ypp"
    { (yyval.pt) = INTENT_IN; }
    break;

  case 228:

/* Line 1821 of yacc.c  */
#line 1064 "chapel.ypp"
    { (yyval.pt) = INTENT_INOUT; }
    break;

  case 229:

/* Line 1821 of yacc.c  */
#line 1065 "chapel.ypp"
    { (yyval.pt) = INTENT_OUT; }
    break;

  case 230:

/* Line 1821 of yacc.c  */
#line 1066 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST; }
    break;

  case 231:

/* Line 1821 of yacc.c  */
#line 1067 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST_IN; }
    break;

  case 232:

/* Line 1821 of yacc.c  */
#line 1068 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST_REF; }
    break;

  case 233:

/* Line 1821 of yacc.c  */
#line 1069 "chapel.ypp"
    { (yyval.pt) = INTENT_PARAM; }
    break;

  case 234:

/* Line 1821 of yacc.c  */
#line 1070 "chapel.ypp"
    { (yyval.pt) = INTENT_REF; }
    break;

  case 235:

/* Line 1821 of yacc.c  */
#line 1071 "chapel.ypp"
    { (yyval.pt) = INTENT_TYPE; }
    break;

  case 236:

/* Line 1821 of yacc.c  */
#line 1075 "chapel.ypp"
    { (yyval.pt) = INTENT_BLANK; }
    break;

  case 237:

/* Line 1821 of yacc.c  */
#line 1076 "chapel.ypp"
    { (yyval.pt) = INTENT_PARAM; }
    break;

  case 238:

/* Line 1821 of yacc.c  */
#line 1077 "chapel.ypp"
    { (yyval.pt) = INTENT_REF;   }
    break;

  case 239:

/* Line 1821 of yacc.c  */
#line 1078 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST_REF;   }
    break;

  case 240:

/* Line 1821 of yacc.c  */
#line 1079 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST;   }
    break;

  case 241:

/* Line 1821 of yacc.c  */
#line 1080 "chapel.ypp"
    { (yyval.pt) = INTENT_TYPE;  }
    break;

  case 242:

/* Line 1821 of yacc.c  */
#line 1084 "chapel.ypp"
    { (yyval.procIter) = ProcIter_PROC; }
    break;

  case 243:

/* Line 1821 of yacc.c  */
#line 1085 "chapel.ypp"
    { (yyval.procIter) = ProcIter_ITER; }
    break;

  case 244:

/* Line 1821 of yacc.c  */
#line 1089 "chapel.ypp"
    { (yyval.retTag) = RET_VALUE; }
    break;

  case 245:

/* Line 1821 of yacc.c  */
#line 1090 "chapel.ypp"
    { (yyval.retTag) = RET_VALUE; }
    break;

  case 246:

/* Line 1821 of yacc.c  */
#line 1091 "chapel.ypp"
    { (yyval.retTag) = RET_CONST_REF; }
    break;

  case 247:

/* Line 1821 of yacc.c  */
#line 1092 "chapel.ypp"
    { (yyval.retTag) = RET_REF; }
    break;

  case 248:

/* Line 1821 of yacc.c  */
#line 1093 "chapel.ypp"
    { (yyval.retTag) = RET_PARAM; }
    break;

  case 249:

/* Line 1821 of yacc.c  */
#line 1094 "chapel.ypp"
    { (yyval.retTag) = RET_TYPE; }
    break;

  case 250:

/* Line 1821 of yacc.c  */
#line 1098 "chapel.ypp"
    { (yyval.b) = false; }
    break;

  case 251:

/* Line 1821 of yacc.c  */
#line 1099 "chapel.ypp"
    { (yyval.b) = true;  }
    break;

  case 252:

/* Line 1821 of yacc.c  */
#line 1102 "chapel.ypp"
    { (yyval.pblockstmt) = NULL; }
    break;

  case 255:

/* Line 1821 of yacc.c  */
#line 1108 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt((yyvsp[(1) - (1)].pblockstmt)); }
    break;

  case 256:

/* Line 1821 of yacc.c  */
#line 1113 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[(2) - (2)].pch))); }
    break;

  case 257:

/* Line 1821 of yacc.c  */
#line 1115 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
    break;

  case 258:

/* Line 1821 of yacc.c  */
#line 1119 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
    break;

  case 260:

/* Line 1821 of yacc.c  */
#line 1124 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 261:

/* Line 1821 of yacc.c  */
#line 1125 "chapel.ypp"
    { (yyvsp[(2) - (2)].pdefexpr)->sym->addFlag(FLAG_PARAM); (yyval.pexpr) = (yyvsp[(2) - (2)].pdefexpr); }
    break;

  case 262:

/* Line 1821 of yacc.c  */
#line 1129 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 263:

/* Line 1821 of yacc.c  */
#line 1130 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 264:

/* Line 1821 of yacc.c  */
#line 1135 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (3)].pblockstmt); }
    break;

  case 265:

/* Line 1821 of yacc.c  */
#line 1137 "chapel.ypp"
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[(3) - (4)].pblockstmt)); }
    break;

  case 266:

/* Line 1821 of yacc.c  */
#line 1139 "chapel.ypp"
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[(3) - (4)].pblockstmt)); }
    break;

  case 267:

/* Line 1821 of yacc.c  */
#line 1144 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[(1) - (2)].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[(2) - (2)].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
    break;

  case 268:

/* Line 1821 of yacc.c  */
#line 1157 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[(1) - (4)].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[(2) - (4)].pexpr));

      (yyvsp[(4) - (4)].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[(4) - (4)].pblockstmt));
    }
    break;

  case 269:

/* Line 1821 of yacc.c  */
#line 1173 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 270:

/* Line 1821 of yacc.c  */
#line 1175 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 271:

/* Line 1821 of yacc.c  */
#line 1177 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[(2) - (2)].pcallexpr)); }
    break;

  case 272:

/* Line 1821 of yacc.c  */
#line 1182 "chapel.ypp"
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[(1) - (4)].flag));
      flags.insert(FLAG_PARAM);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(3) - (4)].pblockstmt), flags, (yylsp[(1) - (4)]).comment);
      context->latestComment = NULL;
    }
    break;

  case 273:

/* Line 1821 of yacc.c  */
#line 1190 "chapel.ypp"
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[(1) - (4)].flag));
      flags.insert(FLAG_CONST);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(3) - (4)].pblockstmt), flags, (yylsp[(1) - (4)]).comment);
      context->latestComment = NULL;
    }
    break;

  case 274:

/* Line 1821 of yacc.c  */
#line 1198 "chapel.ypp"
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[(1) - (4)].flag));
      flags.insert(FLAG_REF_VAR);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(3) - (4)].pblockstmt), flags, (yylsp[(1) - (4)]).comment);
      context->latestComment = NULL;
    }
    break;

  case 275:

/* Line 1821 of yacc.c  */
#line 1206 "chapel.ypp"
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[(1) - (5)].flag));
      flags.insert(FLAG_CONST);
      flags.insert(FLAG_REF_VAR);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(4) - (5)].pblockstmt), flags, (yylsp[(1) - (5)]).comment);
      context->latestComment = NULL;
    }
    break;

  case 276:

/* Line 1821 of yacc.c  */
#line 1215 "chapel.ypp"
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[(1) - (4)].flag));
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(3) - (4)].pblockstmt), flags, (yylsp[(1) - (4)]).comment);
      context->latestComment = NULL;
    }
    break;

  case 277:

/* Line 1821 of yacc.c  */
#line 1224 "chapel.ypp"
    { (yyval.flag) = FLAG_UNKNOWN; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
    break;

  case 278:

/* Line 1821 of yacc.c  */
#line 1225 "chapel.ypp"
    { (yyval.flag) = FLAG_CONFIG;  (yyloc).comment = context->latestComment; context->latestComment = NULL; }
    break;

  case 279:

/* Line 1821 of yacc.c  */
#line 1226 "chapel.ypp"
    { (yyval.flag) = FLAG_EXTERN;  (yyloc).comment = context->latestComment; context->latestComment = NULL; }
    break;

  case 281:

/* Line 1821 of yacc.c  */
#line 1232 "chapel.ypp"
    {
      for_alist(expr, (yyvsp[(3) - (3)].pblockstmt)->body)
        (yyvsp[(1) - (3)].pblockstmt)->insertAtTail(expr->remove());
    }
    break;

  case 282:

/* Line 1821 of yacc.c  */
#line 1240 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[(1) - (3)].pch)), (yyvsp[(3) - (3)].pexpr), (yyvsp[(2) - (3)].pexpr))); }
    break;

  case 283:

/* Line 1821 of yacc.c  */
#line 1242 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[(1) - (4)].pch));
      var->addFlag(FLAG_ARRAY_ALIAS);
      USR_WARN(var, "support for '=>' to alias arrays is deprecated as of chpl version 1.15.  Use a 'ref' declaration instead.");
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(var, (yyvsp[(4) - (4)].pexpr), (yyvsp[(2) - (4)].pexpr)));
    }
    break;

  case 284:

/* Line 1821 of yacc.c  */
#line 1249 "chapel.ypp"
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[(2) - (5)].pblockstmt), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pexpr)); }
    break;

  case 285:

/* Line 1821 of yacc.c  */
#line 1254 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
    break;

  case 286:

/* Line 1821 of yacc.c  */
#line 1256 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[(1) - (1)].pch))); }
    break;

  case 287:

/* Line 1821 of yacc.c  */
#line 1258 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (3)].pblockstmt); }
    break;

  case 288:

/* Line 1821 of yacc.c  */
#line 1263 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (1)].pexpr)); }
    break;

  case 289:

/* Line 1821 of yacc.c  */
#line 1265 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (2)].pexpr)); }
    break;

  case 290:

/* Line 1821 of yacc.c  */
#line 1267 "chapel.ypp"
    { (yyval.pblockstmt) = ((yyvsp[(3) - (3)].pblockstmt)->insertAtHead((yyvsp[(1) - (3)].pexpr)), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 291:

/* Line 1821 of yacc.c  */
#line 1273 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 292:

/* Line 1821 of yacc.c  */
#line 1274 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gNoInit); }
    break;

  case 293:

/* Line 1821 of yacc.c  */
#line 1275 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 294:

/* Line 1821 of yacc.c  */
#line 1279 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 295:

/* Line 1821 of yacc.c  */
#line 1281 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__ensureDomainExpr", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 296:

/* Line 1821 of yacc.c  */
#line 1285 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 297:

/* Line 1821 of yacc.c  */
#line 1286 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 298:

/* Line 1821 of yacc.c  */
#line 1287 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pcallexpr); }
    break;

  case 299:

/* Line 1821 of yacc.c  */
#line 1288 "chapel.ypp"
    {printf("bad type specification"); }
    break;

  case 300:

/* Line 1821 of yacc.c  */
#line 1309 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pexpr));
    }
    break;

  case 301:

/* Line 1821 of yacc.c  */
#line 1313 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pcallexpr));
    }
    break;

  case 302:

/* Line 1821 of yacc.c  */
#line 1317 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(4) - (6)].pexpr)), (yyvsp[(6) - (6)].pexpr), (yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(4) - (6)].pexpr)->copy()));
    }
    break;

  case 303:

/* Line 1821 of yacc.c  */
#line 1324 "chapel.ypp"
    {printf("bad array type specification"); clean_exit(1); }
    break;

  case 304:

/* Line 1821 of yacc.c  */
#line 1328 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 305:

/* Line 1821 of yacc.c  */
#line 1329 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 306:

/* Line 1821 of yacc.c  */
#line 1330 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pdefexpr); }
    break;

  case 307:

/* Line 1821 of yacc.c  */
#line 1335 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 308:

/* Line 1821 of yacc.c  */
#line 1337 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(2) - (4)].pcallexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 309:

/* Line 1821 of yacc.c  */
#line 1343 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 310:

/* Line 1821 of yacc.c  */
#line 1345 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(2) - (4)].pcallexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 311:

/* Line 1821 of yacc.c  */
#line 1347 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), (yyvsp[(2) - (6)].pcallexpr)); }
    break;

  case 312:

/* Line 1821 of yacc.c  */
#line 1351 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 313:

/* Line 1821 of yacc.c  */
#line 1352 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 314:

/* Line 1821 of yacc.c  */
#line 1353 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pdefexpr); }
    break;

  case 315:

/* Line 1821 of yacc.c  */
#line 1354 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_domain"); }
    break;

  case 316:

/* Line 1821 of yacc.c  */
#line 1355 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr( "_singlevar"); }
    break;

  case 317:

/* Line 1821 of yacc.c  */
#line 1356 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr( "_syncvar"); }
    break;

  case 318:

/* Line 1821 of yacc.c  */
#line 1357 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 319:

/* Line 1821 of yacc.c  */
#line 1363 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 320:

/* Line 1821 of yacc.c  */
#line 1364 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pdefexpr)); }
    break;

  case 321:

/* Line 1821 of yacc.c  */
#line 1365 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 322:

/* Line 1821 of yacc.c  */
#line 1366 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pdefexpr)); }
    break;

  case 323:

/* Line 1821 of yacc.c  */
#line 1370 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
    break;

  case 324:

/* Line 1821 of yacc.c  */
#line 1371 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 325:

/* Line 1821 of yacc.c  */
#line 1372 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pdefexpr); }
    break;

  case 326:

/* Line 1821 of yacc.c  */
#line 1376 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 327:

/* Line 1821 of yacc.c  */
#line 1377 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 328:

/* Line 1821 of yacc.c  */
#line 1381 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
    break;

  case 330:

/* Line 1821 of yacc.c  */
#line 1386 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 331:

/* Line 1821 of yacc.c  */
#line 1387 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 332:

/* Line 1821 of yacc.c  */
#line 1391 "chapel.ypp"
    { (yyval.pexpr) = buildNamedActual((yyvsp[(1) - (3)].pch), (yyvsp[(3) - (3)].pdefexpr)); }
    break;

  case 333:

/* Line 1821 of yacc.c  */
#line 1392 "chapel.ypp"
    { (yyval.pexpr) = buildNamedActual((yyvsp[(1) - (3)].pch), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 334:

/* Line 1821 of yacc.c  */
#line 1393 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pdefexpr); }
    break;

  case 336:

/* Line 1821 of yacc.c  */
#line 1398 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[(1) - (1)].pch)); }
    break;

  case 342:

/* Line 1821 of yacc.c  */
#line 1415 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 343:

/* Line 1821 of yacc.c  */
#line 1417 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 344:

/* Line 1821 of yacc.c  */
#line 1419 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 345:

/* Line 1821 of yacc.c  */
#line 1421 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 346:

/* Line 1821 of yacc.c  */
#line 1423 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", buildDotExpr((yyvsp[(4) - (5)].pcallexpr)->copy(), "defaultSparseDist"), (yyvsp[(4) - (5)].pcallexpr)); }
    break;

  case 347:

/* Line 1821 of yacc.c  */
#line 1425 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 348:

/* Line 1821 of yacc.c  */
#line 1427 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 349:

/* Line 1821 of yacc.c  */
#line 1432 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 350:

/* Line 1821 of yacc.c  */
#line 1434 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (6)].pexpr), zipToTuple((yyvsp[(4) - (6)].pcallexpr)), (yyvsp[(6) - (6)].pexpr), NULL, false, true); }
    break;

  case 351:

/* Line 1821 of yacc.c  */
#line 1436 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 352:

/* Line 1821 of yacc.c  */
#line 1438 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr)); }
    break;

  case 353:

/* Line 1821 of yacc.c  */
#line 1440 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (9)].pexpr), zipToTuple((yyvsp[(4) - (9)].pcallexpr)), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true); }
    break;

  case 354:

/* Line 1821 of yacc.c  */
#line 1442 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[(2) - (7)].pexpr), (yyvsp[(7) - (7)].pexpr), (yyvsp[(5) - (7)].pexpr)); }
    break;

  case 355:

/* Line 1821 of yacc.c  */
#line 1444 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 356:

/* Line 1821 of yacc.c  */
#line 1446 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pexpr), zipToTuple((yyvsp[(4) - (6)].pcallexpr)), (yyvsp[(6) - (6)].pexpr), NULL, false, true); }
    break;

  case 357:

/* Line 1821 of yacc.c  */
#line 1448 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 358:

/* Line 1821 of yacc.c  */
#line 1450 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr)); }
    break;

  case 359:

/* Line 1821 of yacc.c  */
#line 1452 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pexpr), zipToTuple((yyvsp[(4) - (9)].pcallexpr)), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true); }
    break;

  case 360:

/* Line 1821 of yacc.c  */
#line 1454 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (7)].pexpr), (yyvsp[(7) - (7)].pexpr), (yyvsp[(5) - (7)].pexpr)); }
    break;

  case 361:

/* Line 1821 of yacc.c  */
#line 1456 "chapel.ypp"
    {
      if ((yyvsp[(2) - (4)].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (4)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (4)].pexpr), NULL, true);
    }
    break;

  case 362:

/* Line 1821 of yacc.c  */
#line 1463 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), NULL, true);
    }
    break;

  case 363:

/* Line 1821 of yacc.c  */
#line 1469 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), zipToTuple((yyvsp[(4) - (6)].pcallexpr)), (yyvsp[(6) - (6)].pexpr), NULL, false, true);
    }
    break;

  case 364:

/* Line 1821 of yacc.c  */
#line 1475 "chapel.ypp"
    {
      if ((yyvsp[(2) - (9)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (9)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr));
    }
    break;

  case 365:

/* Line 1821 of yacc.c  */
#line 1481 "chapel.ypp"
    {
      if ((yyvsp[(2) - (9)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (9)].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pcallexpr)->get(1)->remove(), zipToTuple((yyvsp[(4) - (9)].pcallexpr)), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true);
    }
    break;

  case 366:

/* Line 1821 of yacc.c  */
#line 1490 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(new DefExpr(buildIfExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)))); }
    break;

  case 367:

/* Line 1821 of yacc.c  */
#line 1497 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gNil); }
    break;

  case 375:

/* Line 1821 of yacc.c  */
#line 1513 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 376:

/* Line 1821 of yacc.c  */
#line 1517 "chapel.ypp"
    { (yyval.pcallexpr) = NULL; }
    break;

  case 378:

/* Line 1821 of yacc.c  */
#line 1522 "chapel.ypp"
    { (yyval.pcallexpr) = (yyvsp[(3) - (4)].pcallexpr); }
    break;

  case 379:

/* Line 1821 of yacc.c  */
#line 1528 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST);
      addTaskIntent((yyval.pcallexpr), (yyvsp[(1) - (1)].pIntentExpr).iVar, (yyvsp[(1) - (1)].pIntentExpr).tfIntent, (yyvsp[(1) - (1)].pIntentExpr).riExp); }
    break;

  case 380:

/* Line 1821 of yacc.c  */
#line 1531 "chapel.ypp"
    { addTaskIntent((yyvsp[(1) - (3)].pcallexpr), (yyvsp[(3) - (3)].pIntentExpr).iVar, (yyvsp[(3) - (3)].pIntentExpr).tfIntent, (yyvsp[(3) - (3)].pIntentExpr).riExp); }
    break;

  case 381:

/* Line 1821 of yacc.c  */
#line 1535 "chapel.ypp"
    { (yyval.pForallIntents) = (yyvsp[(3) - (4)].pForallIntents); }
    break;

  case 382:

/* Line 1821 of yacc.c  */
#line 1541 "chapel.ypp"
    { (yyval.pForallIntents) = new ForallIntents();
      addForallIntent((yyval.pForallIntents), (yyvsp[(1) - (1)].pIntentExpr).iVar, (yyvsp[(1) - (1)].pIntentExpr).tfIntent, (yyvsp[(1) - (1)].pIntentExpr).riExp); }
    break;

  case 383:

/* Line 1821 of yacc.c  */
#line 1544 "chapel.ypp"
    { addForallIntent((yyvsp[(1) - (3)].pForallIntents), (yyvsp[(3) - (3)].pIntentExpr).iVar, (yyvsp[(3) - (3)].pIntentExpr).tfIntent, (yyvsp[(3) - (3)].pIntentExpr).riExp); }
    break;

  case 384:

/* Line 1821 of yacc.c  */
#line 1549 "chapel.ypp"
    {
      (yyval.pIntentExpr).tfIntent = (yyvsp[(1) - (2)].pt); (yyval.pIntentExpr).iVar = (yyvsp[(2) - (2)].pexpr); (yyval.pIntentExpr).riExp = NULL;
    }
    break;

  case 385:

/* Line 1821 of yacc.c  */
#line 1552 "chapel.ypp"
    { (yyval.pIntentExpr).riExp = (yyvsp[(1) - (3)].pexpr), (yyval.pIntentExpr).iVar = (yyvsp[(3) - (3)].pexpr); }
    break;

  case 386:

/* Line 1821 of yacc.c  */
#line 1553 "chapel.ypp"
    { (yyval.pIntentExpr).riExp = (yyvsp[(1) - (3)].pexpr), (yyval.pIntentExpr).iVar = (yyvsp[(3) - (3)].pexpr); }
    break;

  case 388:

/* Line 1821 of yacc.c  */
#line 1559 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 389:

/* Line 1821 of yacc.c  */
#line 1564 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW, (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 390:

/* Line 1821 of yacc.c  */
#line 1569 "chapel.ypp"
    { (yyval.pexpr) = buildLetExpr((yyvsp[(2) - (4)].pblockstmt), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 399:

/* Line 1821 of yacc.c  */
#line 1585 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[(3) - (4)].pexpr)); }
    break;

  case 400:

/* Line 1821 of yacc.c  */
#line 1587 "chapel.ypp"
    { (yyval.pexpr) = createCast((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 401:

/* Line 1821 of yacc.c  */
#line 1589 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_build_bounded_range", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 402:

/* Line 1821 of yacc.c  */
#line 1591 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_build_low_bounded_range", (yyvsp[(1) - (2)].pexpr)); }
    break;

  case 403:

/* Line 1821 of yacc.c  */
#line 1593 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_build_high_bounded_range", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 404:

/* Line 1821 of yacc.c  */
#line 1595 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_build_unbounded_range"); }
    break;

  case 411:

/* Line 1821 of yacc.c  */
#line 1618 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 412:

/* Line 1821 of yacc.c  */
#line 1619 "chapel.ypp"
    { (yyval.pexpr) = buildSquareCallExpr((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 413:

/* Line 1821 of yacc.c  */
#line 1620 "chapel.ypp"
    { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 414:

/* Line 1821 of yacc.c  */
#line 1624 "chapel.ypp"
    { (yyval.pexpr) = buildDotExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pch)); }
    break;

  case 415:

/* Line 1821 of yacc.c  */
#line 1625 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[(1) - (3)].pexpr)); }
    break;

  case 416:

/* Line 1821 of yacc.c  */
#line 1626 "chapel.ypp"
    { (yyval.pexpr) = buildDotExpr((yyvsp[(1) - (3)].pexpr), "_dom"); }
    break;

  case 417:

/* Line 1821 of yacc.c  */
#line 1634 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (3)].pexpr); }
    break;

  case 418:

/* Line 1821 of yacc.c  */
#line 1635 "chapel.ypp"
    { (yyval.pexpr) = buildOneTuple((yyvsp[(2) - (4)].pexpr)); }
    break;

  case 419:

/* Line 1821 of yacc.c  */
#line 1636 "chapel.ypp"
    { (yyval.pexpr) = buildTuple((yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 420:

/* Line 1821 of yacc.c  */
#line 1637 "chapel.ypp"
    { (yyval.pexpr) = buildTuple((yyvsp[(2) - (4)].pcallexpr)); }
    break;

  case 421:

/* Line 1821 of yacc.c  */
#line 1641 "chapel.ypp"
    { (yyval.pexpr) = buildIntLiteral((yyvsp[(1) - (1)].pch));    }
    break;

  case 422:

/* Line 1821 of yacc.c  */
#line 1642 "chapel.ypp"
    { (yyval.pexpr) = buildRealLiteral((yyvsp[(1) - (1)].pch));   }
    break;

  case 423:

/* Line 1821 of yacc.c  */
#line 1643 "chapel.ypp"
    { (yyval.pexpr) = buildImagLiteral((yyvsp[(1) - (1)].pch));   }
    break;

  case 424:

/* Line 1821 of yacc.c  */
#line 1644 "chapel.ypp"
    { (yyval.pexpr) = buildStringLiteral((yyvsp[(1) - (1)].pch)); }
    break;

  case 425:

/* Line 1821 of yacc.c  */
#line 1645 "chapel.ypp"
    { (yyval.pexpr) = buildCStringLiteral((yyvsp[(1) - (1)].pch)); }
    break;

  case 426:

/* Line 1821 of yacc.c  */
#line 1646 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 427:

/* Line 1821 of yacc.c  */
#line 1647 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[(2) - (4)].pcallexpr)); }
    break;

  case 428:

/* Line 1821 of yacc.c  */
#line 1648 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 429:

/* Line 1821 of yacc.c  */
#line 1649 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[(2) - (4)].pcallexpr)); }
    break;

  case 430:

/* Line 1821 of yacc.c  */
#line 1651 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[(2) - (3)].pcallexpr));
    }
    break;

  case 431:

/* Line 1821 of yacc.c  */
#line 1655 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[(2) - (4)].pcallexpr));
    }
    break;

  case 432:

/* Line 1821 of yacc.c  */
#line 1662 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 433:

/* Line 1821 of yacc.c  */
#line 1663 "chapel.ypp"
    { (yyvsp[(1) - (5)].pcallexpr)->insertAtTail((yyvsp[(3) - (5)].pexpr)); (yyvsp[(1) - (5)].pcallexpr)->insertAtTail((yyvsp[(5) - (5)].pexpr)); }
    break;

  case 434:

/* Line 1821 of yacc.c  */
#line 1667 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 435:

/* Line 1821 of yacc.c  */
#line 1668 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 436:

/* Line 1821 of yacc.c  */
#line 1669 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("*", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 437:

/* Line 1821 of yacc.c  */
#line 1670 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("/", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 438:

/* Line 1821 of yacc.c  */
#line 1671 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<<", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 439:

/* Line 1821 of yacc.c  */
#line 1672 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 440:

/* Line 1821 of yacc.c  */
#line 1673 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("%", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 441:

/* Line 1821 of yacc.c  */
#line 1674 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("==", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 442:

/* Line 1821 of yacc.c  */
#line 1675 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("!=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 443:

/* Line 1821 of yacc.c  */
#line 1676 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 444:

/* Line 1821 of yacc.c  */
#line 1677 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 445:

/* Line 1821 of yacc.c  */
#line 1678 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 446:

/* Line 1821 of yacc.c  */
#line 1679 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 447:

/* Line 1821 of yacc.c  */
#line 1680 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("&", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 448:

/* Line 1821 of yacc.c  */
#line 1681 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("|", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 449:

/* Line 1821 of yacc.c  */
#line 1682 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("^", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 450:

/* Line 1821 of yacc.c  */
#line 1683 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("&&", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 451:

/* Line 1821 of yacc.c  */
#line 1684 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("||", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 452:

/* Line 1821 of yacc.c  */
#line 1685 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("**", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 453:

/* Line 1821 of yacc.c  */
#line 1686 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 454:

/* Line 1821 of yacc.c  */
#line 1687 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_align", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 455:

/* Line 1821 of yacc.c  */
#line 1688 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("#", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 456:

/* Line 1821 of yacc.c  */
#line 1689 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[(3) - (3)].pexpr), (yyvsp[(1) - (3)].pexpr)); }
    break;

  case 457:

/* Line 1821 of yacc.c  */
#line 1693 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 458:

/* Line 1821 of yacc.c  */
#line 1694 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 459:

/* Line 1821 of yacc.c  */
#line 1695 "chapel.ypp"
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[(2) - (2)].pexpr), '-'); }
    break;

  case 460:

/* Line 1821 of yacc.c  */
#line 1696 "chapel.ypp"
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[(2) - (2)].pexpr), '+'); }
    break;

  case 461:

/* Line 1821 of yacc.c  */
#line 1697 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("!", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 462:

/* Line 1821 of yacc.c  */
#line 1698 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("~", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 463:

/* Line 1821 of yacc.c  */
#line 1702 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 464:

/* Line 1821 of yacc.c  */
#line 1703 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), zipToTuple((yyvsp[(3) - (3)].pcallexpr)), true); }
    break;

  case 465:

/* Line 1821 of yacc.c  */
#line 1704 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 466:

/* Line 1821 of yacc.c  */
#line 1705 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), zipToTuple((yyvsp[(3) - (3)].pcallexpr)), true); }
    break;

  case 467:

/* Line 1821 of yacc.c  */
#line 1709 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 468:

/* Line 1821 of yacc.c  */
#line 1710 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), zipToTuple((yyvsp[(3) - (3)].pcallexpr)), true); }
    break;

  case 469:

/* Line 1821 of yacc.c  */
#line 1711 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 470:

/* Line 1821 of yacc.c  */
#line 1712 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), zipToTuple((yyvsp[(3) - (3)].pcallexpr)), true); }
    break;

  case 471:

/* Line 1821 of yacc.c  */
#line 1717 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
    break;

  case 472:

/* Line 1821 of yacc.c  */
#line 1718 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
    break;

  case 473:

/* Line 1821 of yacc.c  */
#line 1719 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
    break;

  case 474:

/* Line 1821 of yacc.c  */
#line 1720 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
    break;

  case 475:

/* Line 1821 of yacc.c  */
#line 1721 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
    break;

  case 476:

/* Line 1821 of yacc.c  */
#line 1722 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
    break;

  case 477:

/* Line 1821 of yacc.c  */
#line 1723 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
    break;



/* Line 1821 of yacc.c  */
#line 8379 "bison-chapel.cpp"
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
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, context, YY_("syntax error"));
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
        yyerror (&yylloc, context, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc, context);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  yyps->yynew = 1;

yypushreturn:
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



