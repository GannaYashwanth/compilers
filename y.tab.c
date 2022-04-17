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
#line 1 "parser.y"

	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	
	void yyerror(char* s);
	int yylex();
	void ins();
	void insV();
	int flag=0;
	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define ANSI_COLOR_RESET	"\x1b[0m"
	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
	extern int currnest;
	extern int yylval;
	extern int yylineno;
	void deletedata (int );
	int checkscope(char*);
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	//int check_present(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int checkarray(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	void push(char *s);
	void codegen();
	void codeassign();
	char* itoa(int num, char* str, int base);
	void reverse(char str[], int length); 
	void swap(char*,char*);
	void label1();
	void label2();
	void label3();
	void label4();
	void label5();
	void label6();
	void genunary();
	void codegencon();
	void funcgen();
	void funcgenend();
	void arggen();
	void callgen();

	int arr_count=0;
	int arr_size=0;
	int params_count=0;
	int call_params_count=0;
	int top = 0,count=0,ltop=0,lno=0;
	char temp[100] = "t";
	char tempo[100] = "\0";
	char tempo2[100] = "\0";
	char tempo3[100] = "\0";
	char typ;
	int check = 1;
	int chk = 0;
	int chk2=0;
	int tip=3;
	int pc=0;
	int inside=0;
	int declaring = 0;

#line 147 "y.tab.c"

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
    IF = 258,
    INT = 259,
    CHAR = 260,
    FLOAT = 261,
    DOUBLE = 262,
    LONG = 263,
    SHORT = 264,
    SIGNED = 265,
    UNSIGNED = 266,
    STRUCT = 267,
    SCAN = 268,
    PRINT = 269,
    PRINTLN = 270,
    RETURN = 271,
    MAIN = 272,
    VOID = 273,
    WHILE = 274,
    FOR = 275,
    DO = 276,
    BREAK = 277,
    ENDIF = 278,
    identifier = 279,
    array_identifier = 280,
    func_identifier = 281,
    integer_constant = 282,
    string_constant = 283,
    float_constant = 284,
    character_constant = 285,
    ELSE = 286,
    leftshift_assignment_operator = 287,
    rightshift_assignment_operator = 288,
    XOR_assignment_operator = 289,
    OR_assignment_operator = 290,
    AND_assignment_operator = 291,
    modulo_assignment_operator = 292,
    multiplication_assignment_operator = 293,
    division_assignment_operator = 294,
    addition_assignment_operator = 295,
    subtraction_assignment_operator = 296,
    assignment_operator = 297,
    OR_operator = 298,
    AND_operator = 299,
    pipe_operator = 300,
    caret_operator = 301,
    amp_operator = 302,
    equality_operator = 303,
    inequality_operator = 304,
    lessthan_assignment_operator = 305,
    lessthan_operator = 306,
    greaterthan_assignment_operator = 307,
    greaterthan_operator = 308,
    leftshift_operator = 309,
    rightshift_operator = 310,
    add_operator = 311,
    subtract_operator = 312,
    multiplication_operator = 313,
    division_operator = 314,
    modulo_operator = 315,
    SIZEOF = 316,
    tilde_operator = 317,
    exclamation_operator = 318,
    increment_operator = 319,
    decrement_operator = 320
  };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define SCAN 268
#define PRINT 269
#define PRINTLN 270
#define RETURN 271
#define MAIN 272
#define VOID 273
#define WHILE 274
#define FOR 275
#define DO 276
#define BREAK 277
#define ENDIF 278
#define identifier 279
#define array_identifier 280
#define func_identifier 281
#define integer_constant 282
#define string_constant 283
#define float_constant 284
#define character_constant 285
#define ELSE 286
#define leftshift_assignment_operator 287
#define rightshift_assignment_operator 288
#define XOR_assignment_operator 289
#define OR_assignment_operator 290
#define AND_assignment_operator 291
#define modulo_assignment_operator 292
#define multiplication_assignment_operator 293
#define division_assignment_operator 294
#define addition_assignment_operator 295
#define subtraction_assignment_operator 296
#define assignment_operator 297
#define OR_operator 298
#define AND_operator 299
#define pipe_operator 300
#define caret_operator 301
#define amp_operator 302
#define equality_operator 303
#define inequality_operator 304
#define lessthan_assignment_operator 305
#define lessthan_operator 306
#define greaterthan_assignment_operator 307
#define greaterthan_operator 308
#define leftshift_operator 309
#define rightshift_operator 310
#define add_operator 311
#define subtract_operator 312
#define multiplication_operator 313
#define division_operator 314
#define modulo_operator 315
#define SIZEOF 316
#define tilde_operator 317
#define exclamation_operator 318
#define increment_operator 319
#define decrement_operator 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  93
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  260

#define YYUNDEFTOK  2
#define YYMAXUTOK   320


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
      70,    71,     2,     2,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    66,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,    73,     2,     2,     2,     2,
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
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   119,   119,   122,   125,   126,   129,   130,   133,   136,
     136,   139,   139,   148,   148,   171,   171,   174,   175,   178,
     178,   179,   182,   183,   184,   187,   187,   187,   187,   188,
     189,   190,   191,   192,   195,   195,   195,   195,   198,   198,
     198,   198,   201,   201,   204,   204,   207,   210,   213,   213,
     213,   216,   216,   219,   219,   222,   225,   226,   229,   229,
     232,   233,   236,   236,   237,   237,   238,   238,   239,   239,
     241,   242,   245,   247,   251,   251,   292,   342,   344,   386,
     386,   389,   390,   393,   394,   397,   397,   397,   400,   401,
     404,   404,   404,   405,   405,   405,   406,   406,   406,   408,
     409,   422,   425,   428,   433,   433,   436,   437,   441,   440,
     461,   461,   468,   468,   475,   475,   482,   482,   488,   488,
     495,   496,   497,   501,   501,   502,   505,   505,   506,   510,
     510,   511,   514,   515,   518,   518,   518,   518,   518,   518,
     521,   522,   525,   526,   529,   530,   533,   533,   533,   536,
     537,   541,   570,   570,   570,   570,   587,   751,   908,   909,
     910,   913,   913,   940,   940,   943,   944,   946,   946,   946,
     946,   946,   949,   950,   951,   952
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "SCAN", "PRINT",
  "PRINTLN", "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK",
  "ENDIF", "identifier", "array_identifier", "func_identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "leftshift_assignment_operator",
  "rightshift_assignment_operator", "XOR_assignment_operator",
  "OR_assignment_operator", "AND_assignment_operator",
  "modulo_assignment_operator", "multiplication_assignment_operator",
  "division_assignment_operator", "addition_assignment_operator",
  "subtraction_assignment_operator", "assignment_operator", "OR_operator",
  "AND_operator", "pipe_operator", "caret_operator", "amp_operator",
  "equality_operator", "inequality_operator",
  "lessthan_assignment_operator", "lessthan_operator",
  "greaterthan_assignment_operator", "greaterthan_operator",
  "leftshift_operator", "rightshift_operator", "add_operator",
  "subtract_operator", "multiplication_operator", "division_operator",
  "modulo_operator", "SIZEOF", "tilde_operator", "exclamation_operator",
  "increment_operator", "decrement_operator", "';'", "','", "'['", "']'",
  "'('", "')'", "'{'", "'}'", "$accept", "program", "declaration_list",
  "D", "declaration", "variable_declaration", "variable_declaration_list",
  "variable_declaration_identifier", "$@1", "$@2", "vdi",
  "identifier_array_type", "initilization_params", "$@3", "initilization",
  "type_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "$@4", "$@5", "params",
  "parameters_list", "$@6", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@7",
  "param_identifier_breakup", "statement", "io_statement", "print_stmt",
  "print_args", "$@8", "scan_stmt", "compound_statement", "$@9",
  "statment_list", "expression_statment", "conditional_statements", "$@10",
  "$@11", "conditional_statements_breakup", "iterative_statements", "$@12",
  "$@13", "$@14", "$@15", "$@16", "$@17", "return_statement",
  "break_statement", "string_initilization", "array_initialization",
  "array_int_declarations", "$@18", "array_int_declarations_breakup",
  "expression", "$@19", "$@20", "$@21", "$@22", "$@23", "@24",
  "simple_expression", "$@25", "and_expression", "@26",
  "unary_relation_expression", "$@27", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "$@28", "$@29", "$@30", "index",
  "immutable", "call", "@31", "arguments", "arguments_list", "exp",
  "constant", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    59,    44,    91,    93,
      40,    41,   123,   125
};
# endif

#define YYPACT_NINF (-159)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-158)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      84,  -159,  -159,  -159,  -159,     3,    11,    64,    71,  -159,
       9,  -159,    84,  -159,    60,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,     3,    11,  -159,  -159,     3,    11,  -159,  -159,
    -159,  -159,   -47,  -159,    77,  -159,  -159,    84,  -159,  -159,
    -159,  -159,  -159,    14,    14,  -159,   122,  -159,   -50,  -159,
       0,   -15,  -159,  -159,  -159,  -159,  -159,     2,  -159,    -8,
    -159,  -159,  -159,  -159,  -159,  -159,     0,    28,    34,  -159,
      76,    96,    39,  -159,  -159,  -159,  -159,  -159,  -159,    54,
    -159,  -159,  -159,    36,   222,  -159,    74,     0,    79,    28,
      67,     0,  -159,  -159,  -159,  -159,  -159,  -159,  -159,     7,
    -159,  -159,     7,  -159,  -159,  -159,     7,    87,   107,  -159,
      80,    84,  -159,    88,    90,    92,    93,   -11,    94,    95,
      91,  -159,  -159,   122,  -159,  -159,  -159,  -159,  -159,    98,
    -159,  -159,  -159,   145,  -159,  -159,   101,   110,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,    34,
       0,    96,    39,  -159,   126,  -159,   102,  -159,  -159,     0,
     130,     7,     7,  -159,   106,  -159,     0,  -159,   194,   222,
    -159,  -159,  -159,  -159,  -159,  -159,   103,   108,  -159,    16,
       0,     0,     0,     0,     0,     0,  -159,  -159,   -23,  -159,
    -159,  -159,  -159,   -10,  -159,   109,   111,    66,   113,  -159,
       0,   112,   194,   100,   158,  -159,   110,   119,    96,   120,
    -159,  -159,  -159,  -159,  -159,  -159,   152,  -159,  -159,  -159,
    -159,  -159,    -4,  -159,  -159,  -159,   121,  -159,  -159,  -159,
     117,   222,     7,  -159,     0,     0,  -159,   114,  -159,  -159,
    -159,   222,    15,     5,   152,  -159,   161,  -159,  -159,  -159,
    -159,   222,  -159,     0,   127,  -159,   123,  -159,   222,  -159
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    26,    27,    28,    43,    45,    41,    37,    33,
       0,     2,     5,     6,     0,     7,    48,    42,    29,    44,
      30,    38,    43,    45,    32,    34,    43,    45,    31,     1,
       4,     3,    11,    13,     0,    10,    46,    52,    39,    40,
      35,    36,    47,    18,    18,     8,     0,    53,     0,    51,
       0,     0,    12,    15,    14,    11,     9,     0,    49,   151,
     152,   172,   173,   174,   175,   129,     0,    16,   125,   128,
     131,   133,   141,   145,   150,   149,   159,   160,    19,     0,
      17,    58,    54,    57,    79,   161,     0,     0,     0,   122,
     150,     0,   126,   138,   139,   135,   137,   134,   136,     0,
     142,   143,     0,   146,   147,   148,     0,     0,     0,    21,
      61,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    68,     0,    50,    69,    71,    70,    63,     0,
      62,    64,    65,     0,    66,    67,     0,   164,   153,   130,
     158,   118,   114,   116,   110,   112,   108,   120,   121,   123,
       0,   132,   140,   144,    24,   102,     0,    59,    56,     0,
       0,    77,    77,    99,     0,    90,     0,   101,    79,    79,
      83,   167,   168,   169,   170,   171,     0,   163,   166,     0,
       0,     0,     0,     0,     0,     0,   124,   127,     0,    20,
      22,    23,    60,     0,   151,     0,     0,    76,     0,   100,
       0,     0,    79,     0,     0,   162,     0,   172,   156,     0,
     119,   115,   117,   111,   113,   109,     0,    85,    78,    73,
      74,    72,     0,    93,    81,    80,     0,   165,   154,   104,
       0,    79,    77,    91,     0,     0,   155,   107,   103,    86,
      75,    79,     0,     0,     0,   105,    89,    92,    94,    97,
     106,    79,    87,     0,     0,    88,     0,    98,    79,    95
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,   199,  -159,  -159,     8,  -159,   160,  -159,  -159,
     173,  -159,  -159,  -159,  -159,    10,  -159,  -159,    38,   118,
    -159,  -159,  -159,  -159,  -159,  -159,   128,  -159,  -159,  -159,
    -159,  -159,  -159,   -82,  -159,  -159,  -158,  -159,  -159,  -159,
    -159,    18,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,    99,  -159,     1,  -159,
    -159,   -66,  -159,  -159,  -159,  -159,  -159,  -159,   -39,  -159,
     143,  -159,   -81,  -159,  -159,  -159,   -96,  -159,   146,  -159,
     148,   -49,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,    49,  -159
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    31,    12,   122,    34,    35,    43,    44,
      52,    53,    80,   107,   189,   123,    28,    24,    18,    20,
      15,    16,    36,    37,    84,    48,    49,    57,    82,   112,
      83,   110,   157,   202,   125,   126,   196,   232,   127,   128,
     129,   203,   130,   131,   231,   246,   252,   132,   200,   241,
     234,   253,   133,   254,   134,   135,   109,   191,   230,   237,
     245,   136,   185,   183,   184,   181,   182,   180,    89,   186,
      68,   150,    69,    87,    70,    99,    71,   102,    72,   106,
      73,    90,    86,   179,   236,   209,    75,    76,   137,   176,
     177,   178,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,    74,   124,   151,   198,   155,   139,    17,    13,    29,
      14,    67,    78,    59,    60,    19,    61,    62,    63,    64,
      13,    58,    14,    42,    59,    60,    81,    61,    62,    63,
      64,    59,    60,    91,    61,    62,    63,    64,    74,    91,
      59,    60,    74,   207,    62,    63,    64,    47,    91,   216,
      74,   164,    65,    74,    79,   163,    50,    74,    91,    66,
      38,   217,    85,    65,    40,   197,   197,   233,    21,   187,
      66,    91,    22,    23,   240,    25,   249,    66,    92,    26,
      27,   248,    51,   208,    32,    33,    66,   204,     1,     2,
       3,     4,     5,     6,     7,     8,   108,   103,   104,   105,
     201,    74,     9,   111,   141,   142,   143,   144,   145,   146,
      74,   195,    74,    74,   210,   211,   212,   213,   214,   215,
     193,    47,   100,   101,    93,    94,    95,    96,    97,    98,
      74,   147,   148,   220,   171,   155,   197,   172,   173,   174,
     175,    39,   138,    45,    46,    41,    55,    33,   156,   239,
     140,    74,   100,   101,   194,    60,   154,   167,   159,   247,
     160,   222,   161,   162,   165,   166,   169,   170,   188,   255,
     168,   192,   199,   225,   205,   206,   259,   226,   223,   229,
     218,   244,   219,    74,   221,    74,    74,   256,  -157,   228,
     238,   235,   251,   257,   258,   242,   243,   113,     1,     2,
       3,     4,     5,     6,     7,     8,    56,   114,   115,   116,
     117,    30,     9,   118,   119,   -96,   120,    54,    59,    60,
     224,    61,    62,    63,    64,   113,     1,     2,     3,     4,
       5,     6,     7,     8,   149,   114,   115,   116,   117,   158,
       9,   118,   119,   -96,   120,   250,    59,    60,   152,    61,
      62,    63,    64,   190,   153,   227,     0,    65,     0,     0,
     121,     0,     0,     0,    66,     0,     0,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     0,     0,   121,     0,
       0,     0,    66
};

static const yytype_int16 yycheck[] =
{
      66,    50,    84,    99,   162,    28,    87,     4,     0,     0,
       0,    50,    27,    24,    25,     4,    27,    28,    29,    30,
      12,    71,    12,    70,    24,    25,    24,    27,    28,    29,
      30,    24,    25,    43,    27,    28,    29,    30,    87,    43,
      24,    25,    91,    27,    28,    29,    30,    37,    43,    72,
      99,   117,    63,   102,    69,    66,    42,   106,    43,    70,
      22,    71,    70,    63,    26,   161,   162,    71,     4,   150,
      70,    43,     8,     9,   232,     4,    71,    70,    44,     8,
       9,    66,    68,   179,    24,    25,    70,   169,     4,     5,
       6,     7,     8,     9,    10,    11,    42,    58,    59,    60,
     166,   150,    18,    67,    37,    38,    39,    40,    41,    42,
     159,   160,   161,   162,   180,   181,   182,   183,   184,   185,
     159,   111,    56,    57,    48,    49,    50,    51,    52,    53,
     179,    64,    65,    67,    24,    28,   232,    27,    28,    29,
      30,    23,    68,    66,    67,    27,    24,    25,    68,   231,
      71,   200,    56,    57,    24,    25,    69,    66,    70,   241,
      70,   200,    70,    70,    70,    70,    21,    66,    42,   251,
      72,    69,    66,    73,    71,    67,   258,    19,    66,    27,
      71,    67,    71,   232,    71,   234,   235,   253,    69,    69,
      73,    70,    31,    66,    71,   234,   235,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    46,    13,    14,    15,
      16,    12,    18,    19,    20,    21,    22,    44,    24,    25,
     202,    27,    28,    29,    30,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    91,    13,    14,    15,    16,   111,
      18,    19,    20,    21,    22,   244,    24,    25,   102,    27,
      28,    29,    30,   154,   106,   206,    -1,    63,    -1,    -1,
      66,    -1,    -1,    -1,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    -1,
      -1,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    18,
      75,    76,    78,    79,    89,    94,    95,     4,    92,     4,
      93,     4,     8,     9,    91,     4,     8,     9,    90,     0,
      76,    77,    24,    25,    80,    81,    96,    97,    92,    93,
      92,    93,    70,    82,    83,    66,    67,    89,    99,   100,
      42,    68,    84,    85,    84,    24,    81,   101,    71,    24,
      25,    27,    28,    29,    30,    63,    70,   142,   144,   146,
     148,   150,   152,   154,   155,   160,   161,   166,    27,    69,
      86,    24,   102,   104,    98,    70,   156,   147,   135,   142,
     155,    43,    44,    48,    49,    50,    51,    52,    53,   149,
      56,    57,   151,    58,    59,    60,   153,    87,    42,   130,
     105,    67,   103,     3,    13,    14,    15,    16,    19,    20,
      22,    66,    79,    89,   107,   108,   109,   112,   113,   114,
     116,   117,   121,   126,   128,   129,   135,   162,    68,   146,
      71,    37,    38,    39,    40,    41,    42,    64,    65,   144,
     145,   150,   152,   154,    69,    28,    68,   106,   100,    70,
      70,    70,    70,    66,   135,    70,    70,    66,    72,    21,
      66,    24,    27,    28,    29,    30,   163,   164,   165,   157,
     141,   139,   140,   137,   138,   136,   143,   146,    42,    88,
     130,   131,    69,   142,    24,   155,   110,   150,   110,    66,
     122,   135,   107,   115,   107,    71,    67,    27,   150,   159,
     135,   135,   135,   135,   135,   135,    72,    71,    71,    71,
      67,    71,   142,    66,   115,    73,    19,   165,    69,    27,
     132,   118,   111,    71,   124,    70,   158,   133,    73,   107,
     110,   123,   142,   142,    67,   134,   119,   107,    66,    71,
     132,    31,   120,   125,   127,   107,   135,    66,    71,   107
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    77,    77,    78,    78,    79,    80,
      80,    82,    81,    83,    81,    84,    84,    85,    85,    87,
      86,    86,    88,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    91,    91,
      91,    91,    92,    92,    93,    93,    94,    95,    97,    98,
      96,    99,    99,   101,   100,   102,   103,   103,   105,   104,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   111,   110,   110,   110,   112,   114,
     113,   115,   115,   116,   116,   118,   119,   117,   120,   120,
     122,   123,   121,   124,   125,   121,   126,   127,   121,   128,
     128,   129,   130,   131,   133,   132,   134,   134,   136,   135,
     137,   135,   138,   135,   139,   135,   140,   135,   141,   135,
     135,   135,   135,   143,   142,   142,   145,   144,   144,   147,
     146,   146,   148,   148,   149,   149,   149,   149,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   153,   154,
     154,   155,   156,   157,   158,   155,   159,   159,   160,   160,
     160,   162,   161,   163,   163,   164,   164,   165,   165,   165,
     165,   165,   166,   166,   166,   166
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     3,
       1,     0,     3,     0,     3,     1,     2,     2,     0,     0,
       4,     2,     1,     1,     0,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     2,     0,     1,     2,
       2,     0,     1,     0,     1,     0,     2,     3,     0,     0,
       5,     1,     0,     0,     3,     2,     2,     0,     0,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     0,     4,     1,     0,     4,     0,
       4,     2,     0,     2,     1,     0,     0,     8,     2,     0,
       0,     0,     7,     0,     0,    11,     0,     0,     9,     2,
       3,     2,     2,     4,     0,     3,     2,     0,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       2,     2,     1,     0,     4,     1,     0,     4,     1,     0,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     0,     0,     7,     1,     1,     3,     1,
       1,     0,     5,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
  case 11:
#line 139 "parser.y"
                                     {if(duplicate(curid))
			{printf("Duplicate at line no. %d!!!	Variable	%s is already declared in this scope \n", yylineno, curid);
			exit(0);}
			insertSTnest(curid,currnest); 
			ins(); 
			char id[1000] = "\0";
				getid_scope(id, curid);
				printf("%s\n", id);
			 }
#line 1750 "y.tab.c"
    break;

  case 13:
#line 148 "parser.y"
                                             {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1756 "y.tab.c"
    break;

  case 14:
#line 148 "parser.y"
                                                                                                                                              {	// printf("%s  %d\n\n\n", curid, arr_size);

							char id[1000] = "\0";
						/*	getid_scope(id, curid);
							printf("%s\n", id);	*/

						  insertSTarrSize(curid, arr_size);

							strcpy(temp, "t");
							char buffer[100];
							itoa(count, buffer, 10);
							strcat(temp, buffer);
							printf("%s\n", temp);
							count++;
						//	printf("%s \n", temp);
							printf("%s = %d \n", temp, arr_size);
							cln(id, 1000);
							getid_scope(id, curid);
							printf("%s %s \n", id, temp);
				}
#line 1781 "y.tab.c"
    break;

  case 19:
#line 178 "parser.y"
                                           {arr_size = yylval; }
#line 1787 "y.tab.c"
    break;

  case 20:
#line 178 "parser.y"
                                                                                   {if(yyval < 1) {printf("Wrong array size\n"); exit(0);} }
#line 1793 "y.tab.c"
    break;

  case 47:
#line 210 "parser.y"
                                                         { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
#line 1799 "y.tab.c"
    break;

  case 48:
#line 213 "parser.y"
                          {params_count=0;}
#line 1805 "y.tab.c"
    break;

  case 49:
#line 213 "parser.y"
                                                      {funcgen();}
#line 1811 "y.tab.c"
    break;

  case 50:
#line 213 "parser.y"
                                                                             {funcgenend();}
#line 1817 "y.tab.c"
    break;

  case 51:
#line 216 "parser.y"
                                          { insertSTparamscount(currfunc, params_count); }
#line 1823 "y.tab.c"
    break;

  case 52:
#line 216 "parser.y"
                                                                                            { insertSTparamscount(currfunc, params_count); }
#line 1829 "y.tab.c"
    break;

  case 53:
#line 219 "parser.y"
                                         { check_params(curtype);}
#line 1835 "y.tab.c"
    break;

  case 58:
#line 229 "parser.y"
                                     { ins();insertSTnest(curid,1); params_count++; }
#line 1841 "y.tab.c"
    break;

  case 72:
#line 245 "parser.y"
                                           {printf("print new line\n");}
#line 1847 "y.tab.c"
    break;

  case 74:
#line 251 "parser.y"
                                        {
					
		if(tip == 2)
				{	
					// printf("%s 	%s 	%s \n\n\n", temp, tempo, tempo2);
						if(typ == 'i')
						{
								printf("print int %s \n", tempo2);
						}
						else if(typ == 'c')
						{
								printf("print char %s \n", tempo2);
						}
						else if(typ == 'f')
						{
								printf("print float %s \n", tempo2);
						}
				}
				else if(tip == 1)
				{
					
					if(gettype(tempo2, 0) == 'i')
					{
							printf("print int %s \n", temp);
					}
					else if(gettype(tempo2, 0) == 'c')
					{
						printf("print char %s \n", temp);
					}
					else if(gettype(tempo2, 0) == 'f')
					{
							printf("print float %s \n", temp);
					}
				}

				tip = 3;
				cln(tempo2, 100);
		 }
#line 1890 "y.tab.c"
    break;

  case 76:
#line 292 "parser.y"
                                                { 
			
			char var[100] = "\0";
			if(pc = 1)
			{
				strcpy(var, temp);
			}
			else
			{
				strcpy(var, tempo2);
			}
				if(tip == 2)
				{

					 printf("%s hello	-- %s --	%s -- \n\n\n", temp, tempo, tempo2);
						if(typ == 'i')
						{
								printf("print int %s \n", var);
						}
						else if(typ == 'c')
						{
								printf("print char %s \n", var);
						}
						else if(typ == 'f')
						{
								printf("print float %s \n", var);
						}
				}
				else if(tip == 1)
				{
					 printf("%s	-- %s --	%s -- \n\n\n", temp, tempo, tempo2);
					if(gettype(tempo2, 0) == 'i')
					{
							printf("print int %s \n", var);
					}
					else if(gettype(tempo2, 0) == 'c')
					{
						printf("print char %s \n", var);
					}
					else if(gettype(tempo2, 0) == 'f')
					{
							printf("print float %s \n", var);
					}
				}

				pc = 0;
				tip = 3;
				cln(tempo2, 100);
		 }
#line 1944 "y.tab.c"
    break;

  case 78:
#line 344 "parser.y"
                                      {

								//	printf("%c\n\n", typ);
									if(tip == 2)
									{
											if(typ == 'i')
											{
													printf("scan int %s \n", tempo2);
											}
											else if(typ == 'c')
											{
													printf("scan char %s \n", tempo2);
											}
											else if(typ == 'f')
											{
													printf("scan float %s \n", tempo2);
											}
									}
									else if(tip == 1)
									{
										//printf("%s\n", curid);
											if(gettype(tempo2,0) == 'i')
											{
													printf("scan int %s \n", tempo2);
											}
											else if(gettype(tempo2,0) == 'c')
											{
													printf("scan char %s \n", tempo2);
											}
											else if(gettype(tempo2,0) == 'f')
											{
													printf("scan float %s \n", tempo2);
											}
									}
									
									tip = 3;
									cln(tempo2, 100);

							}
#line 1988 "y.tab.c"
    break;

  case 79:
#line 386 "parser.y"
                          {currnest++;}
#line 1994 "y.tab.c"
    break;

  case 80:
#line 386 "parser.y"
                                                                {deletedata(currnest);currnest--;}
#line 2000 "y.tab.c"
    break;

  case 85:
#line 397 "parser.y"
                                                       {label1();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 2006 "y.tab.c"
    break;

  case 86:
#line 397 "parser.y"
                                                                                                                                                  {label2();}
#line 2012 "y.tab.c"
    break;

  case 88:
#line 400 "parser.y"
                                         {label3();}
#line 2018 "y.tab.c"
    break;

  case 89:
#line 401 "parser.y"
                          {label3();}
#line 2024 "y.tab.c"
    break;

  case 90:
#line 404 "parser.y"
                                    {label4();}
#line 2030 "y.tab.c"
    break;

  case 91:
#line 404 "parser.y"
                                                                      {label1();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 2036 "y.tab.c"
    break;

  case 92:
#line 404 "parser.y"
                                                                                                                                                                 {label5();}
#line 2042 "y.tab.c"
    break;

  case 93:
#line 405 "parser.y"
                                                 {label4();}
#line 2048 "y.tab.c"
    break;

  case 94:
#line 405 "parser.y"
                                                                                   {label1();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 2054 "y.tab.c"
    break;

  case 95:
#line 405 "parser.y"
                                                                                                                                                                                            {label5();}
#line 2060 "y.tab.c"
    break;

  case 96:
#line 406 "parser.y"
                          {label4();}
#line 2066 "y.tab.c"
    break;

  case 97:
#line 406 "parser.y"
                                                                                 {label1();label5();if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 2072 "y.tab.c"
    break;

  case 99:
#line 408 "parser.y"
                                     {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
#line 2078 "y.tab.c"
    break;

  case 100:
#line 409 "parser.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Function is void");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											printf("Expression doesn't match return type of function\n"); exit(0);
										}

									}
#line 2094 "y.tab.c"
    break;

  case 102:
#line 425 "parser.y"
                                                              {insV();}
#line 2100 "y.tab.c"
    break;

  case 103:
#line 428 "parser.y"
                                                                             {if(arr_count > arr_size) {printf("initilization of array with too many variables on line no %d\n"); exit(0);}
			arr_count = arr_size = 0;
			}
#line 2108 "y.tab.c"
    break;

  case 104:
#line 433 "parser.y"
                                           {arr_count++;}
#line 2114 "y.tab.c"
    break;

  case 108:
#line 441 "parser.y"
                                            {  push("=");  if(tempo[0] != '\0') {strcpy(tempo3, tempo);} }
#line 2120 "y.tab.c"
    break;

  case 109:
#line 441 "parser.y"
                                                                                                                        {   
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
																	  {	
			                                                          yyval=1;
			                                                          } 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
																																if(tempo3[0] != '\0')
																																{
																																	// printf("%d\n", chk2);
																																	//printf("%s 	%s\n", temp, tempo);
																																	if(chk2)
																																	printf("*%s = %s\n", tempo3, temp);
																																	else
																																	printf("*%s = *%s\n", tempo3, tempo);
																																	cln(tempo3, 100);
																																}
																																else
			                                                          codeassign();
			                                                       }
#line 2145 "y.tab.c"
    break;

  case 110:
#line 461 "parser.y"
                                                               {push("+=");}
#line 2151 "y.tab.c"
    break;

  case 111:
#line 461 "parser.y"
                                                                                       {  
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
			                                                       }
#line 2163 "y.tab.c"
    break;

  case 112:
#line 468 "parser.y"
                                                                  {push("-=");}
#line 2169 "y.tab.c"
    break;

  case 113:
#line 468 "parser.y"
                                                                                            {	  
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
			                                                       }
#line 2181 "y.tab.c"
    break;

  case 114:
#line 475 "parser.y"
                                                                     {push("*=");}
#line 2187 "y.tab.c"
    break;

  case 115:
#line 475 "parser.y"
                                                                                              {
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);}
			                                                          codeassign(); 
			                                                       }
#line 2199 "y.tab.c"
    break;

  case 116:
#line 482 "parser.y"
                                                               {push("/=");}
#line 2205 "y.tab.c"
    break;

  case 117:
#line 482 "parser.y"
                                                                                                { 
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 2216 "y.tab.c"
    break;

  case 118:
#line 488 "parser.y"
                                                             {push("%=");}
#line 2222 "y.tab.c"
    break;

  case 119:
#line 488 "parser.y"
                                                                                                { 
																	  if(yyvsp[-3]==1 && yyvsp[-1]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
																	}
#line 2234 "y.tab.c"
    break;

  case 120:
#line 495 "parser.y"
                                                                                                        { push("++");if(yyvsp[-1] == 1) yyval=1; else yyval=-1; genunary();}
#line 2240 "y.tab.c"
    break;

  case 121:
#line 496 "parser.y"
                                                                                                        {push("--");if(yyvsp[-1] == 1) yyval=1; else yyval=-1; genunary();}
#line 2246 "y.tab.c"
    break;

  case 122:
#line 497 "parser.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2252 "y.tab.c"
    break;

  case 123:
#line 501 "parser.y"
                                                                       {push("||");}
#line 2258 "y.tab.c"
    break;

  case 124:
#line 501 "parser.y"
                                                                                     {if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 2264 "y.tab.c"
    break;

  case 125:
#line 502 "parser.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2270 "y.tab.c"
    break;

  case 126:
#line 505 "parser.y"
                                                      {push("&&");}
#line 2276 "y.tab.c"
    break;

  case 127:
#line 505 "parser.y"
                                                                                               {	if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 2282 "y.tab.c"
    break;

  case 128:
#line 506 "parser.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2288 "y.tab.c"
    break;

  case 129:
#line 510 "parser.y"
                                               {push("!");}
#line 2294 "y.tab.c"
    break;

  case 130:
#line 510 "parser.y"
                                                                                      {		 yyval=1;  codegen();}
#line 2300 "y.tab.c"
    break;

  case 131:
#line 511 "parser.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2306 "y.tab.c"
    break;

  case 132:
#line 514 "parser.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 2312 "y.tab.c"
    break;

  case 133:
#line 515 "parser.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2318 "y.tab.c"
    break;

  case 134:
#line 518 "parser.y"
                                                          {push(">=");}
#line 2324 "y.tab.c"
    break;

  case 135:
#line 518 "parser.y"
                                                                                                       {push("<=");}
#line 2330 "y.tab.c"
    break;

  case 136:
#line 518 "parser.y"
                                                                                                                                            {push(">");}
#line 2336 "y.tab.c"
    break;

  case 137:
#line 518 "parser.y"
                                                                                                                                                                            {push("<");}
#line 2342 "y.tab.c"
    break;

  case 138:
#line 518 "parser.y"
                                                                                                                                                                                                            {push("==");}
#line 2348 "y.tab.c"
    break;

  case 139:
#line 518 "parser.y"
                                                                                                                                                                                                                                               {push("!=");}
#line 2354 "y.tab.c"
    break;

  case 140:
#line 521 "parser.y"
                                                              {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen(); }
#line 2360 "y.tab.c"
    break;

  case 141:
#line 522 "parser.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2366 "y.tab.c"
    break;

  case 142:
#line 525 "parser.y"
                                       { push("+"); chk=1; if(!inside) {pc=1; chk2=1;} }
#line 2372 "y.tab.c"
    break;

  case 143:
#line 526 "parser.y"
                                            {push("-"); chk=1; if(!inside) {pc=1; chk2=1;} }
#line 2378 "y.tab.c"
    break;

  case 144:
#line 529 "parser.y"
                                             { chk = 1 ; if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 2384 "y.tab.c"
    break;

  case 145:
#line 530 "parser.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2390 "y.tab.c"
    break;

  case 146:
#line 533 "parser.y"
                                                  {push("*"); chk=1; if(!inside) {pc=1; chk2=1; }}
#line 2396 "y.tab.c"
    break;

  case 147:
#line 533 "parser.y"
                                                                                                                      {push("/"); chk=1; if(!inside) {pc=1; chk2=1; }}
#line 2402 "y.tab.c"
    break;

  case 148:
#line 533 "parser.y"
                                                                                                                                                                                         {push("%"); chk=1; if(!inside) {pc=1; chk2=1;} }
#line 2408 "y.tab.c"
    break;

  case 149:
#line 536 "parser.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2414 "y.tab.c"
    break;

  case 150:
#line 537 "parser.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2420 "y.tab.c"
    break;

  case 151:
#line 541 "parser.y"
                                     {

							if(tip == 3)
							{
								typ = gettype(curid, 0);
								tip = 1;
							}
							
							
						  push(curid);
							
						  if(check_id_is_func(curid))
						  {printf("Function name used as Identifier\n"); exit(8);}
							if(!checkscope(curid))
							{printf("%s\n",curid);printf("Undeclared\n");exit(0);} 
							if(!checkarray(curid))
							{printf("%s => ",curid);printf("Array ID has no subscript at line no. %d\n", yylineno);exit(0);}
							if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
							yyval = 1;
							else
							yyval = -1;

						//	printf("%s 	%d\n\n\n", curid, $$);
							cln(tempo2, 100);
							char id[1000] = "\0";
							getid_scope(id, curid);
							strcpy(tempo2, id);

							}
#line 2454 "y.tab.c"
    break;

  case 152:
#line 570 "parser.y"
                                           { typ = gettype(curid, 0); tip=2; if(!checkscope(curid)){printf("%s\n",curid);printf("Undeclared\n");exit(0);} strcpy(tempo, curid); chk=0; }
#line 2460 "y.tab.c"
    break;

  case 153:
#line 570 "parser.y"
                                                                                                                                                                                             { inside=1; }
#line 2466 "y.tab.c"
    break;

  case 154:
#line 570 "parser.y"
                                                                                                                                                                                                                     { inside=0; }
#line 2472 "y.tab.c"
    break;

  case 155:
#line 571 "parser.y"
                                           {	
													 char temp1[100] = "\0";
													 strcpy(temp1, "*" );
													 strcat(temp1, tempo);
															 check = 1;
															
														//	printf("\n\n%s\n\n", tempo);
													 push(temp1);
													 if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;

												 }
#line 2491 "y.tab.c"
    break;

  case 156:
#line 589 "parser.y"
                        {	 //printf("sum_expression\n\n\n");
				char temp1[100], temp2[100], temp3[100];
												strcpy(temp1, "t");
												char buffer[100];
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												printf("%s\n", temp1);
												count++;

cln(temp2, 100);
cln(buffer, 100);
												strcpy(temp2, "t");
												itoa(count, buffer, 10);
												strcat(temp2, buffer);
												printf("%s\n", temp2);
												count++; 

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												printf("%s\n", temp3);
												count++;

												//printf("%s \n", temp1);
												printf("%s = 0 \n", temp1);

											//	printf("%s \n", temp2);
												
												printf("%s = %d \n", temp2, getSTarrSize(tempo));
												
												printf("%s = %s < ", temp3, temp2);
												if(chk)
												{
													printf("%s\n", temp);	
												}
												else{
													char id[1000] = "\0";
													getid_scope(id, curid);
													printf("%s\n", id);
												}
												printf("IF not %s goto L%d \n", temp3, lno);

cln(temp1, 100);
cln(buffer, 100);
												strcpy(temp1, "t");
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												printf("%s\n", temp1);
												count++;

												printf("%s = 'RUNTIME ERROR: Index out of Bounds' \n", temp1);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												printf("%s\n", temp3);
												count++;

												printf("la %s %s \n", temp3, temp1);
												printf("print string %s \n", temp3);

												printf("exit \n");

												printf("L%d: \n", lno++);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												printf("%s\n", temp3);
												count++;

												printf("%s = ", temp3);

												if(chk)
												{
													printf("%s < 0\n", temp);
													
												}
												else{
													char id[1000] = "\0";
													getid_scope(id, curid);
													printf("%s < 0\n", id);
												}

												printf("IF not %s goto L%d\n", temp3, lno);

cln(temp1, 100);
cln(buffer, 100);
												strcpy(temp1, "t");
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												printf("%s\n", temp1);
												count++;

												printf("%s = 'RUNTIME ERROR: Index is negative' \n", temp1);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												printf("%s\n", temp3);
												count++;

												printf("la %s %s \n", temp3, temp1);
												printf("print string %s \n", temp3);

												printf("exit\n");
												printf("L%d: \n", lno++);

												cln(temp3, 100);
												cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												printf("%s\n", temp3);
												count++;

											//	printf("%s \n", temp3);
												printf("%s = ", temp3, temp);

												if(chk)
												{
													printf("%s * 4\n", temp);
												}
												else{
													char id[1000] = "\0";
													getid_scope(id, curid);
													printf("%s * 4\n", id);
												}

												cln(temp2, 100);
												cln(buffer, 100);
												strcpy(temp2, "t");
												itoa(count, buffer, 10);
												strcat(temp2, buffer);
												printf("%s\n", temp2);
												count++;

											//	printf("%s \n", temp2);
												char id[1000] = "\0";
													getid_scope(id, tempo);
												printf("%s = %s + %s \n", temp2, id , temp3);

												cln(tempo2, 100);
												strcpy(tempo2, "*");
												strcat(tempo2, temp2);
												cln(tempo, 100);
												
												strcpy(tempo, temp2);
												

			              	
			}
#line 2656 "y.tab.c"
    break;

  case 157:
#line 751 "parser.y"
                                                 {

											//	printf("integer_constant\n\n\n");
												char temp1[100], temp2[100], temp3[100], temp4[100];
												strcpy(temp1, "t");
												char buffer[100];
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												printf("%s\n", temp1);
												count++;

						cln(temp2, 100);
						cln(buffer, 100);

												strcpy(temp2, "t");
												itoa(count, buffer, 10);
												strcat(temp2, buffer);
												printf("%s\n", temp2);
												count++; 

			cln(temp3, 100);
			cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												printf("%s\n", temp3);
												count++;

	cln(temp4, 100);
	cln(buffer, 100);
												strcpy(temp4, "t");
												itoa(count, buffer, 10);
												strcat(temp4, buffer);
												printf("%s\n", temp4);
												count++;

											//	printf("%s \n", temp1);
												printf("%s = 0 \n", temp1);

											//	printf("%s \n", temp2);
												//printf("%s \n", curid);
												//int e = getSTarrSize(curid);
												
												printf("%s = %d \n",temp2, getSTarrSize(curid));


												printf("%s = %s\n", temp4, curval);

												printf("%s = %s < %s \n", temp3, temp2, temp4);
												printf("IF not %s goto L%d \n", temp3, lno);

cln(temp1, 100);
cln(buffer, 100);
												strcpy(temp1, "t");
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												printf("%s\n", temp1);
												count++;

												printf("%s = 'RUNTIME ERROR: Index out of Bounds' \n", temp1);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												printf("%s\n", temp3);
												count++;

												printf("la %s %s \n", temp3, temp1);
												printf("print string %s \n", temp3);

												printf("exit \n");

												printf("L%d: \n", lno++);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												printf("%s\n", temp3);
												count++;

												printf("%s = %s < 0\n", temp3, temp4);

												printf("IF not %s goto L%d\n", temp3, lno);

cln(temp1, 100);
cln(buffer, 100);
												strcpy(temp1, "t");
												itoa(count, buffer, 10);
												strcat(temp1, buffer);
												printf("%s\n", temp1);
												count++;

												printf("%s = 'RUNTIME ERROR: Index is negative' \n", temp1);

cln(temp3, 100);
cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												printf("%s\n", temp3);
												count++;

												printf("la %s %s \n", temp3, temp1);
												printf("print string %s \n", temp3);

												printf("exit\n");
												printf("L%d: \n", lno++);
												
												cln(temp3, 100);
												cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												printf("%s\n", temp3);
												count++;

												//printf("%s \n", temp3);
												printf("%s = %s * 4\n", temp3, temp4);

												cln(temp2, 100);
												cln(buffer, 100);
												strcpy(temp2, "t");
												itoa(count, buffer, 10);
												strcat(temp2, buffer);
												printf("%s\n", temp2);
												count++;

											//	printf("%s \n", temp2);
													char id[1000] = "\0";
													getid_scope(id, curid);
												printf("%s = %s + %s \n", temp2, id , temp3);


												cln(tempo2, 100);
												strcpy(tempo2, "*");
												strcat(tempo2, temp2);

												cln(tempo, 100);
												
												strcpy(tempo, temp2);

												/*
												printf("%s\n", temp3);
												printf("%s ==== %s\n", temp3, curval);
												printf("*%s = %s\n", temp2 , temp3);

											*/

			              		}
#line 2814 "y.tab.c"
    break;

  case 158:
#line 908 "parser.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 2820 "y.tab.c"
    break;

  case 159:
#line 909 "parser.y"
                               {if(yyvsp[0]==-1) yyval=-1; else yyval=1;}
#line 2826 "y.tab.c"
    break;

  case 160:
#line 910 "parser.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2832 "y.tab.c"
    break;

  case 161:
#line 913 "parser.y"
                                        {

			             if(!check_declaration(curid, "Function"))
			             { printf("Function not declared"); exit(0);} 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
						 if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
						 {
			             yyval = 1;
			             }
			             else
			             yyval = -1;
                         call_params_count=0;
			             }
#line 2851 "y.tab.c"
    break;

  case 162:
#line 928 "parser.y"
                                                 { if(strcmp(currfunccall,"printf"))
							{ 
								if(getSTparamscount(currfunccall)!=call_params_count)
								{	
									yyerror("Number of arguments in function call doesn't match number of parameters");
									exit(8);
								}
							}
							callgen();
						 }
#line 2866 "y.tab.c"
    break;

  case 165:
#line 943 "parser.y"
                                                 { call_params_count++; }
#line 2872 "y.tab.c"
    break;

  case 166:
#line 944 "parser.y"
                              { call_params_count++; }
#line 2878 "y.tab.c"
    break;

  case 167:
#line 946 "parser.y"
                 {arggen(1);}
#line 2884 "y.tab.c"
    break;

  case 168:
#line 946 "parser.y"
                                                 {arggen(2);}
#line 2890 "y.tab.c"
    break;

  case 169:
#line 946 "parser.y"
                                                                                {arggen(3);}
#line 2896 "y.tab.c"
    break;

  case 170:
#line 946 "parser.y"
                                                                                                              {arggen(4);}
#line 2902 "y.tab.c"
    break;

  case 171:
#line 946 "parser.y"
                                                                                                                                                {arggen(5);}
#line 2908 "y.tab.c"
    break;

  case 172:
#line 949 "parser.y"
                                                {  insV(); codegencon(); yyval=1; }
#line 2914 "y.tab.c"
    break;

  case 173:
#line 950 "parser.y"
                                                {  insV(); codegencon();yyval=-1;}
#line 2920 "y.tab.c"
    break;

  case 174:
#line 951 "parser.y"
                                                {  insV(); codegencon();}
#line 2926 "y.tab.c"
    break;

  case 175:
#line 952 "parser.y"
                                            {  insV(); codegencon();yyval=1; }
#line 2932 "y.tab.c"
    break;


#line 2936 "y.tab.c"

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
#line 954 "parser.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

struct stack
{
	char value[1000];
	int labelvalue;
}s[10000],label[10000];

void tostring(char *str, int num)
{
    int i, rem, len = 0, n;

		if(num == 0)
		{
			str[0] = '0';
			str[1] = '\0';
			return;
		}
		
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';

	//	return str;
}

void getid_scope(char id[], char *currid)
{
	int safety = currnest;
	//printf("%s\n\n", currid);
	while(currnest >= 0)
	{
		if(duplicate(currid))
			break;
		currnest--;
	}

	char str[100] = "\0";
	strcpy(id, currid);
	strcat(id, "@");
	// printf("%s\n\n", tostring(currnest));
	tostring(str, currnest);
	strcat(id, str);

	//printf("%d\n\n", currnest);
	currnest = safety;
	//return id;
}



void push(char *x)
{
	char y[1000] = "\0";
	strcpy(y, x);
	int change=0;
//	printf("%d	%s\n\n", check_present(x), x);
	if(strcmp(x, curid) == 0)
	{
		char id[1000] = "\0";
		getid_scope(id, curid);
		change=1;
		strcpy(x, id);
	}

	if(check)
	{
		if(s[top].value[0] != '+' && s[top].value[0] != '*' && s[top].value[0] != '/' && s[top].value[0] != '%' && s[top].value[0] != '-')
		top--;
		check = 0;
	}
	strcpy(s[++top].value,x);
	if(change)
	strcpy(x, y);
	/*printf("push:	");
	for(int i=0 ; i<top ; i++)
	{
		printf("%s	", s[i].value);
	}
	printf("\n\n");*/
}

void swap(char *x, char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}

void cln(char s[], int length)
{
	// printf("cln called\n");
	for(int i=0 ; i<length ; i++)
	s[i] = '\0';
}

void reverse(char str[], int length) 
{ 
    int start = 0; 
    int end = length -1; 
    while (start < end) 
    { 
        swap((str+start), (str+end)); 
        start++; 
        end--; 
    } 
} 
  
char* itoa(int num, char* str, int base) 
{ 
    int i = 0; 
    int isNegative = 0; 
  
   
    if (num == 0) 
    { 
        str[i++] = '0'; 
        str[i] = '\0'; 
        return str; 
    } 
  
    if (num < 0 && base == 10) 
    { 
        isNegative = 1; 
        num = -num; 
    } 
  
   
    while (num != 0) 
    { 
        int rem = num % base; 
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0'; 
        num = num/base; 
    } 
  
    if (isNegative) 
        str[i++] = '-'; 
  
    str[i] = '\0'; 
  
   
    reverse(str, i); 
  
    return str; 
} 

void codegen()
{
	strcpy(temp,"t");
	char buffer[100];
	itoa(count,buffer,10);
	strcat(temp,buffer);
	printf("%s \n", temp);

	if(strcmp(s[top-1].value, "!") == 0)
	{
		printf("%s = %s %s \n",temp,s[top-1].value, s[top].value);

		top = top - 1;
		strcpy(s[top].value,temp);
		count++;
		return;
	}

	printf("%s = %s %s ",temp,s[top-2].value,s[top-1].value);
	
	{
		printf("%s\n", s[top].value);
	}
	top = top - 2;
	strcpy(s[top].value,temp);
	count++; 
}

void codegencon()
{
	strcpy(temp,"t");
	char buffer[100];
	itoa(count,buffer,10);
	strcat(temp,buffer);
	printf("%s \n", temp);
	printf("%s = %s\n",temp,curval);
	push(temp);
	count++;
	
}

int isunary(char *s)
{
	if(strcmp(s, "--")==0 || strcmp(s, "++")==0)
	{
		return 1;
	}
	return 0;
}

void genunary()
{
	char temp1[100], temp2[100], temp3[100];
	strcpy(temp1, s[top].value);
	strcpy(temp2, s[top-1].value);

	if(isunary(temp1))
	{
		strcpy(temp3, temp1);
		strcpy(temp1, temp2);
		strcpy(temp2, temp3);
	}
	strcpy(temp, "t");
	char buffer[100];
	itoa(count, buffer, 10);
	strcat(temp, buffer);
	printf("%s \n", temp);
	count++;

	if(strcmp(temp2,"--")==0)
	{
		printf("%s = %s - 1\n", temp, temp1);
		printf("%s = %s\n", temp1, temp);
	}

	if(strcmp(temp2,"++")==0)
	{
		printf("%s = %s + 1\n", temp, temp1);
		printf("%s = %s\n", temp1, temp);
	}

	top = top -2;
}

void codeassign()
{
	/*
	for(int i=0 ; i<=top ; i++)
	{
		printf("%s\n\n", s[top].value);
	}*/
	printf("%s = %s\n",s[top-2].value,s[top].value);
	top = top - 2;
}



void label1()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("IF not %s GoTo %s\n",s[top].value,temp);
	label[++ltop].labelvalue = lno++;
}

void label2()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s\n",temp);
	strcpy(temp,"L");
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;
	label[++ltop].labelvalue=lno++;
}

void label3()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;
	
}

void label4()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	label[++ltop].labelvalue = lno++;
}


void label5()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(label[ltop-1].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s:\n",temp);
	strcpy(temp,"L");
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop = ltop - 2;
    
   
}

void funcgen()
{
	printf("func begin %s\n",currfunc);
}

void funcgenend()
{
	printf("func end\n\n");
}

void arggen(int i)
{
    if(i==1)
    {
	printf("refparam %s\n", curid);
	}
	else
	{
	printf("refparam %s\n", curval);
	}
}

void callgen()
{
	printf("refparam result\n");
	push("result");
	printf("call %s, %d\n",currfunccall,call_params_count);
}



int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();


	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Status: Parsing Complete - Valid" ANSI_COLOR_RESET "\n");
		printf("%30s" ANSI_COLOR_CYAN "SYMBOL TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

	//	printf("\n\n%30s" ANSI_COLOR_CYAN "CONSTANT TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "--------------");
	//	printCT();
	}
}

void yyerror(char *s)
{
	printf(ANSI_COLOR_RED "%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
	exit(7);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}
