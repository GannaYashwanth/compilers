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
	extern char print_str[1000];
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

	int called_type=0;
	int func_called = 0;
	int arr_count=0;
	int arr_size=0;
	char arr_type;
	int params_count=0;
	int call_params_count=0;
	int top = 0,count=0,ltop=0,lno=0;
	char temp[100] = "t";
	char tempo[100] = "\0";
	char tempo2[100] = "\0";
	char tempo3[100] = "\0";
	char decl_id[100] = "\0";
	char func_assign[100] = "\0";
	char breakLabel[100] = "\0";
	
	char typ;
	int check = 1;
	int chk = 0;
	int another_chk=0;
	int chk2=0;
	int tip=3;
	int print_chk=1;
	int pc=0;
	int inside=0;
	int declaring = 0;
	int decl_check=1;
	int print_expr=0;
	int can_use_func=0;
	int func_params_top=0;
	int in_call=0, added_temp=0;


#line 163 "y.tab.c"

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
    PRINT_STR = 271,
    RETURN = 272,
    MAIN = 273,
    VOID = 274,
    WHILE = 275,
    FOR = 276,
    DO = 277,
    BREAK = 278,
    CONTINUE = 279,
    ENDIF = 280,
    identifier = 281,
    array_identifier = 282,
    func_identifier = 283,
    integer_constant = 284,
    string_constant = 285,
    float_constant = 286,
    character_constant = 287,
    ELSE = 288,
    leftshift_assignment_operator = 289,
    rightshift_assignment_operator = 290,
    XOR_assignment_operator = 291,
    OR_assignment_operator = 292,
    AND_assignment_operator = 293,
    modulo_assignment_operator = 294,
    multiplication_assignment_operator = 295,
    division_assignment_operator = 296,
    addition_assignment_operator = 297,
    subtraction_assignment_operator = 298,
    assignment_operator = 299,
    OR_operator = 300,
    AND_operator = 301,
    pipe_operator = 302,
    caret_operator = 303,
    amp_operator = 304,
    equality_operator = 305,
    inequality_operator = 306,
    lessthan_assignment_operator = 307,
    lessthan_operator = 308,
    greaterthan_assignment_operator = 309,
    greaterthan_operator = 310,
    leftshift_operator = 311,
    rightshift_operator = 312,
    add_operator = 313,
    subtract_operator = 314,
    multiplication_operator = 315,
    division_operator = 316,
    modulo_operator = 317,
    SIZEOF = 318,
    tilde_operator = 319,
    exclamation_operator = 320,
    increment_operator = 321,
    decrement_operator = 322
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
#define PRINT_STR 271
#define RETURN 272
#define MAIN 273
#define VOID 274
#define WHILE 275
#define FOR 276
#define DO 277
#define BREAK 278
#define CONTINUE 279
#define ENDIF 280
#define identifier 281
#define array_identifier 282
#define func_identifier 283
#define integer_constant 284
#define string_constant 285
#define float_constant 286
#define character_constant 287
#define ELSE 288
#define leftshift_assignment_operator 289
#define rightshift_assignment_operator 290
#define XOR_assignment_operator 291
#define OR_assignment_operator 292
#define AND_assignment_operator 293
#define modulo_assignment_operator 294
#define multiplication_assignment_operator 295
#define division_assignment_operator 296
#define addition_assignment_operator 297
#define subtraction_assignment_operator 298
#define assignment_operator 299
#define OR_operator 300
#define AND_operator 301
#define pipe_operator 302
#define caret_operator 303
#define amp_operator 304
#define equality_operator 305
#define inequality_operator 306
#define lessthan_assignment_operator 307
#define lessthan_operator 308
#define greaterthan_assignment_operator 309
#define greaterthan_operator 310
#define leftshift_operator 311
#define rightshift_operator 312
#define add_operator 313
#define subtract_operator 314
#define multiplication_operator 315
#define division_operator 316
#define modulo_operator 317
#define SIZEOF 318
#define tilde_operator 319
#define exclamation_operator 320
#define increment_operator 321
#define decrement_operator 322

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
#define YYLAST   317

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  195
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  287

#define YYUNDEFTOK  2
#define YYMAXUTOK   322


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
      72,    73,     2,     2,    69,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    68,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    71,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,    75,     2,     2,     2,     2,
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
      65,    66,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   135,   135,   138,   141,   142,   145,   146,   149,   149,
     152,   152,   152,   155,   155,   185,   185,   198,   198,   198,
     201,   202,   205,   205,   236,   239,   240,   241,   242,   245,
     245,   245,   245,   246,   247,   248,   249,   250,   253,   253,
     253,   253,   256,   256,   256,   256,   259,   259,   262,   262,
     265,   268,   271,   271,   271,   274,   274,   277,   277,   280,
     283,   284,   287,   287,   310,   311,   314,   314,   315,   315,
     316,   316,   317,   317,   319,   320,   323,   323,   325,   325,
     325,   329,   329,   403,   474,   480,   479,   488,   490,   539,
     539,   542,   543,   546,   547,   550,   550,   550,   550,   553,
     554,   557,   557,   557,   558,   558,   558,   559,   559,   559,
     559,   561,   564,   574,   575,   579,   582,   582,   613,   613,
     645,   645,   657,   658,   661,   661,   673,   674,   678,   677,
     706,   706,   713,   713,   720,   720,   727,   727,   733,   733,
     740,   741,   742,   747,   747,   749,   752,   752,   753,   757,
     757,   758,   761,   761,   762,   765,   765,   765,   765,   765,
     765,   768,   768,   772,   775,   776,   779,   779,   780,   783,
     783,   783,   786,   787,   791,   828,   828,   828,   828,   846,
    1010,  1167,  1168,  1169,  1172,  1172,  1211,  1211,  1214,  1214,
    1216,  1218,  1221,  1222,  1223,  1224
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "SCAN", "PRINT",
  "PRINTLN", "PRINT_STR", "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO",
  "BREAK", "CONTINUE", "ENDIF", "identifier", "array_identifier",
  "func_identifier", "integer_constant", "string_constant",
  "float_constant", "character_constant", "ELSE",
  "leftshift_assignment_operator", "rightshift_assignment_operator",
  "XOR_assignment_operator", "OR_assignment_operator",
  "AND_assignment_operator", "modulo_assignment_operator",
  "multiplication_assignment_operator", "division_assignment_operator",
  "addition_assignment_operator", "subtraction_assignment_operator",
  "assignment_operator", "OR_operator", "AND_operator", "pipe_operator",
  "caret_operator", "amp_operator", "equality_operator",
  "inequality_operator", "lessthan_assignment_operator",
  "lessthan_operator", "greaterthan_assignment_operator",
  "greaterthan_operator", "leftshift_operator", "rightshift_operator",
  "add_operator", "subtract_operator", "multiplication_operator",
  "division_operator", "modulo_operator", "SIZEOF", "tilde_operator",
  "exclamation_operator", "increment_operator", "decrement_operator",
  "';'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "$accept",
  "program", "declaration_list", "D", "declaration",
  "variable_declaration", "$@1", "variable_declaration_list", "$@2",
  "variable_declaration_identifier", "$@3", "$@4", "vdi", "$@5",
  "identifier_array_type", "initilization_params", "$@6", "initilization",
  "type_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "$@7", "$@8", "params",
  "parameters_list", "$@9", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@10",
  "param_identifier_breakup", "statement", "io_statement", "print_stmt",
  "$@11", "$@12", "$@13", "print_args", "$@14", "$@15", "scan_stmt",
  "compound_statement", "$@16", "statment_list", "expression_statment",
  "conditional_statements", "@17", "$@18", "$@19",
  "conditional_statements_breakup", "iterative_statements", "$@20", "$@21",
  "$@22", "$@23", "$@24", "$@25", "$@26", "return_statement",
  "break_statement", "string_initilization", "array_int_initialization",
  "$@27", "array_char_initialization", "$@28", "array_int_declarations",
  "$@29", "array_int_declarations_breakup", "array_char_declarations",
  "$@30", "array_char_declarations_breakup", "expression", "$@31", "$@32",
  "$@33", "$@34", "$@35", "@36", "simple_expression", "$@37",
  "and_expression", "@38", "unary_relation_expression", "$@39",
  "regular_expression", "$@40", "relational_operators", "sum_expression",
  "$@41", "sum_operators", "term", "$@42", "MULOP", "factor", "mutable",
  "$@43", "$@44", "$@45", "index", "immutable", "call", "@46", "arguments",
  "arguments_list", "$@47", "exp", "constant", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,    59,    44,
      91,    93,    40,    41,   123,   125
};
# endif

#define YYPACT_NINF (-182)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-192)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     153,  -182,  -182,  -182,  -182,    -1,     9,   109,   135,  -182,
       5,  -182,   153,  -182,    79,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,    -1,     9,  -182,  -182,    -1,     9,  -182,  -182,
    -182,  -182,   -46,  -182,    -8,  -182,  -182,   153,  -182,  -182,
    -182,  -182,  -182,   -26,   -26,  -182,    29,  -182,    -6,  -182,
    -182,   -15,  -182,  -182,  -182,   126,  -182,    93,  -182,     1,
    -182,    78,  -182,  -182,  -182,  -182,  -182,    55,   245,    60,
    -182,  -182,  -182,  -182,  -182,  -182,     1,    95,   121,  -182,
      47,   107,   -50,  -182,  -182,  -182,  -182,  -182,    74,   125,
    -182,   103,   153,  -182,   102,   104,   105,   106,     8,   108,
     111,   116,   120,  -182,  -182,   126,  -182,  -182,  -182,  -182,
    -182,   101,  -182,  -182,  -182,   157,  -182,  -182,   122,    95,
      43,  -182,   117,     1,   118,     1,  -182,    49,   110,    89,
      50,  -182,   123,  -182,  -182,  -182,   144,  -182,  -182,  -182,
     124,  -182,     1,  -182,  -182,   215,   245,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,    16,  -182,  -182,  -182,
     121,     1,  -182,  -182,  -182,  -182,  -182,  -182,    16,  -182,
    -182,    16,  -182,  -182,  -182,    16,   -23,   145,  -182,  -182,
    -182,  -182,  -182,     1,  -182,   128,    -7,    -7,  -182,     1,
     127,   215,   129,   173,     1,     1,     1,     1,     1,     1,
     -11,   130,   133,  -182,    23,  -182,  -182,   107,   -50,  -182,
    -182,   132,   -16,  -182,   138,  -182,    38,   136,    -9,  -182,
    -182,  -182,   142,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,   137,   156,   160,   167,  -182,  -182,  -182,   170,  -182,
    -182,  -182,     1,  -182,    16,  -182,  -182,   140,   165,   245,
      -7,  -182,    -7,   245,    44,     1,  -182,  -182,   164,  -182,
    -182,   182,  -182,  -182,  -182,  -182,  -182,    25,   167,  -182,
     171,  -182,   166,     1,  -182,  -182,   165,  -182,   245,  -182,
     188,   195,  -182,  -182,   245,  -182,  -182
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    29,    30,    31,    32,    47,    49,    45,    41,    37,
       0,     2,     5,     6,     0,     7,    52,    46,    33,    48,
      34,    42,    47,    49,    36,    38,    47,    49,    35,     1,
       4,     3,    13,    15,     8,    12,    50,    56,    43,    44,
      39,    40,    51,    21,    21,    10,     0,    57,     0,    55,
      18,     0,    14,    17,    16,     0,     9,     0,    53,     0,
      22,     0,    20,    13,    11,    62,    58,    61,    89,   174,
     175,   192,   193,   194,   195,   149,     0,    19,   145,   148,
     152,   154,   163,   168,   173,   172,   182,   183,     0,     0,
      24,    65,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    72,     0,    54,    73,    75,    74,
      67,     0,    66,    68,    69,     0,    70,    71,     0,   142,
     173,   184,     0,     0,     0,     0,   146,     0,     0,     0,
      28,   115,     0,    63,    60,    95,     0,    78,    76,   111,
     161,   101,     0,   113,   114,    89,    89,    93,   138,   134,
     136,   130,   132,   128,   140,   141,   187,   176,   150,   181,
     143,     0,   159,   160,   156,   158,   155,   157,     0,   164,
     165,     0,   169,   170,   171,     0,     0,     0,    23,    25,
      26,    27,    64,     0,   174,     0,    87,    87,   112,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
     161,     0,   186,   190,     0,   144,   147,   153,   162,   167,
     116,     0,     0,    88,    84,    79,   161,     0,     0,   104,
      91,    90,     0,   139,   135,   137,   131,   133,   129,   185,
     188,   192,   161,     0,     0,   118,    96,    85,     0,    81,
      77,   102,     0,   108,     0,   177,   120,     0,     0,    89,
      87,    80,    87,    89,     0,     0,   189,   178,   123,   117,
     124,     0,    97,    86,    82,   103,   105,     0,     0,   121,
     127,   119,   100,     0,   109,   122,     0,   125,    89,    98,
       0,     0,   126,    99,    89,   110,   106
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,   186,  -182,  -182,    63,  -182,  -182,  -182,   218,
    -182,  -182,   226,  -182,  -182,  -182,  -182,  -182,     4,  -182,
    -182,    99,   119,  -182,  -182,  -182,  -182,  -182,  -182,   187,
    -182,  -182,  -182,  -182,  -182,  -182,   -67,  -182,  -182,  -182,
    -182,  -182,  -181,  -182,  -182,  -182,  -182,  -182,    87,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,   151,  -182,  -182,  -182,  -182,
      14,  -182,  -182,    10,  -182,  -182,   -61,  -182,  -182,  -182,
    -182,  -182,  -182,   -42,  -182,   159,  -182,  -102,  -182,  -182,
    -182,  -182,   -96,  -182,  -182,   114,  -182,  -182,   113,   -68,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
      45,  -182
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    31,    12,   104,    46,    34,    55,    35,
      43,    44,    52,    59,    53,    62,    88,   178,   105,    28,
      24,    18,    20,    15,    16,    36,    37,    68,    48,    49,
      57,    66,    93,    67,    91,   133,   191,   107,   108,   187,
     186,   238,   215,   252,   250,   109,   110,   111,   192,   112,
     113,   183,   249,   272,   279,   114,   189,   253,   242,   273,
     115,   255,   281,   116,   117,    90,   180,   234,   181,   248,
     247,   258,   269,   261,   270,   277,   118,   199,   197,   198,
     195,   196,   194,   119,   205,    78,   161,    79,   123,    80,
     127,   168,    81,   128,   171,    82,   129,   175,    83,    84,
     122,   204,   257,   233,    85,    86,   156,   201,   202,   244,
     203,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,   106,   140,    17,    14,    29,   217,   131,   120,   214,
    -166,  -166,  -166,    19,    60,   124,    14,    77,    50,    69,
      70,   158,    71,    72,    73,    74,    42,    69,    70,   125,
      71,    72,    73,    74,    69,    70,   125,    71,    72,    73,
      74,    47,    69,    70,    51,    71,    72,    73,    74,    69,
      70,   210,   231,    72,    73,    74,    61,   236,  -191,   206,
     200,    45,  -191,    13,   241,    76,    75,    58,   185,   263,
     125,   264,   207,    76,   120,    13,   139,   120,   120,   193,
      76,   190,   148,   149,   150,   151,   152,   153,    76,   125,
     216,   216,  -151,  -151,   176,    76,    47,    56,   274,   162,
     163,   164,   165,   166,   167,    32,    33,   239,   232,   154,
     155,   -83,   266,    21,   177,  -151,  -151,    22,    23,    65,
    -151,    38,    89,   120,    92,    40,   120,   120,   120,   120,
     120,   120,   121,   223,   224,   225,   226,   227,   228,    25,
     125,   212,    39,    26,    27,   130,    41,   218,   200,   172,
     173,   174,    63,    33,   216,   131,   216,     1,     2,     3,
       4,     5,     6,     7,     8,  -161,  -161,   126,   169,   170,
     184,    70,     9,   132,   135,   145,   136,   137,   138,   146,
     141,   120,   262,   142,   143,   120,   265,   157,   144,   211,
     147,   159,   188,   222,   182,   219,   246,   260,    30,   278,
     254,   213,   230,   229,   221,   120,   235,   237,  -180,   240,
     120,   283,   280,   267,   243,   259,   120,   286,    94,     1,
       2,     3,     4,     5,     6,     7,     8,  -179,    95,    96,
      97,   245,    98,   268,     9,    99,   100,  -107,   101,   102,
     276,    69,    70,   251,    71,    72,    73,    74,    94,     1,
       2,     3,     4,     5,     6,     7,     8,   271,    95,    96,
      97,   284,    98,   285,     9,    99,   100,  -107,   101,   102,
      54,    69,    70,    64,    71,    72,    73,    74,   220,   134,
      75,   179,   275,   103,   160,   208,   282,    76,   209,   256,
     -92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,   103,     0,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
      68,    68,    98,     4,     0,     0,   187,    30,    76,    16,
      60,    61,    62,     4,    29,    76,    12,    59,    44,    26,
      27,   123,    29,    30,    31,    32,    72,    26,    27,    45,
      29,    30,    31,    32,    26,    27,    45,    29,    30,    31,
      32,    37,    26,    27,    70,    29,    30,    31,    32,    26,
      27,    74,    29,    30,    31,    32,    71,    73,    69,   161,
     156,    69,    73,     0,    73,    72,    65,    73,   136,   250,
      45,   252,   168,    72,   142,    12,    68,   145,   146,   146,
      72,   142,    39,    40,    41,    42,    43,    44,    72,    45,
     186,   187,    45,    46,    44,    72,    92,    68,    73,    50,
      51,    52,    53,    54,    55,    26,    27,    69,   204,    66,
      67,    73,    68,     4,    64,    68,    69,     8,     9,    26,
      73,    22,    44,   191,    69,    26,   194,   195,   196,   197,
     198,   199,    72,   194,   195,   196,   197,   198,   199,     4,
      45,   183,    23,     8,     9,    71,    27,   189,   244,    60,
      61,    62,    26,    27,   250,    30,   252,     4,     5,     6,
       7,     8,     9,    10,    11,    58,    59,    46,    58,    59,
      26,    27,    19,    70,    72,    74,    72,    72,    72,    22,
      72,   249,   249,    72,    68,   253,   253,    70,    68,    44,
      68,    73,    68,    20,    71,    68,    29,    32,    12,    33,
     242,    73,    69,    73,    75,   273,    74,    69,    71,    73,
     278,   278,   273,   255,    72,    75,   284,   284,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    71,    13,    14,
      15,    71,    17,    69,    19,    20,    21,    22,    23,    24,
      69,    26,    27,    73,    29,    30,    31,    32,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    75,    13,    14,
      15,    73,    17,    68,    19,    20,    21,    22,    23,    24,
      44,    26,    27,    55,    29,    30,    31,    32,   191,    92,
      65,   130,   268,    68,   125,   171,   276,    72,   175,   244,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    68,    -1,    -1,    -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    19,
      77,    78,    80,    81,    94,    99,   100,     4,    97,     4,
      98,     4,     8,     9,    96,     4,     8,     9,    95,     0,
      78,    79,    26,    27,    83,    85,   101,   102,    97,    98,
      97,    98,    72,    86,    87,    69,    82,    94,   104,   105,
      44,    70,    88,    90,    88,    84,    68,   106,    73,    89,
      29,    71,    91,    26,    85,    26,   107,   109,   103,    26,
      27,    29,    30,    31,    32,    65,    72,   159,   161,   163,
     165,   168,   171,   174,   175,   180,   181,   187,    92,    44,
     141,   110,    69,   108,     3,    13,    14,    15,    17,    20,
      21,    23,    24,    68,    81,    94,   112,   113,   114,   121,
     122,   123,   125,   126,   131,   136,   139,   140,   152,   159,
     175,    72,   176,   164,   152,    45,    46,   166,   169,   172,
      71,    30,    70,   111,   105,    72,    72,    72,    72,    68,
     168,    72,    72,    68,    68,    74,    22,    68,    39,    40,
      41,    42,    43,    44,    66,    67,   182,    70,   163,    73,
     161,   162,    50,    51,    52,    53,    54,    55,   167,    58,
      59,   170,    60,    61,    62,   173,    44,    64,    93,   141,
     142,   144,    71,   127,    26,   175,   116,   115,    68,   132,
     152,   112,   124,   112,   158,   156,   157,   154,   155,   153,
     168,   183,   184,   186,   177,   160,   163,   168,   171,   174,
      74,    44,   159,    73,    16,   118,   168,   118,   159,    68,
     124,    75,    20,   152,   152,   152,   152,   152,   152,    73,
      69,    29,   168,   179,   143,    74,    73,    69,   117,    69,
      73,    73,   134,    72,   185,    71,    29,   146,   145,   128,
     120,    73,   119,   133,   159,   137,   186,   178,   147,    75,
      32,   149,   112,   118,   118,   112,    68,   159,    69,   148,
     150,    75,   129,   135,    73,   146,    69,   151,    33,   130,
     152,   138,   149,   112,    73,    68,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    79,    79,    80,    80,    82,    81,
      84,    83,    83,    86,    85,    87,    85,    88,    89,    88,
      90,    90,    92,    91,    91,    93,    93,    93,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    96,    96,    96,    96,    97,    97,    98,    98,
      99,   100,   102,   103,   101,   104,   104,   106,   105,   107,
     108,   108,   110,   109,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   115,   114,   116,   117,
     114,   119,   118,   118,   118,   120,   118,   118,   121,   123,
     122,   124,   124,   125,   125,   127,   128,   129,   126,   130,
     130,   132,   133,   131,   134,   135,   131,   136,   137,   138,
     131,   139,   139,   140,   140,   141,   143,   142,   145,   144,
     147,   146,   148,   148,   150,   149,   151,   151,   153,   152,
     154,   152,   155,   152,   156,   152,   157,   152,   158,   152,
     152,   152,   152,   160,   159,   159,   162,   161,   161,   164,
     163,   163,   166,   165,   165,   167,   167,   167,   167,   167,
     167,   169,   168,   168,   170,   170,   172,   171,   171,   173,
     173,   173,   174,   174,   175,   176,   177,   178,   175,   179,
     179,   180,   180,   180,   182,   181,   183,   183,   185,   184,
     184,   186,   187,   187,   187,   187
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     0,     4,
       0,     4,     1,     0,     3,     0,     3,     1,     0,     3,
       2,     0,     0,     4,     2,     1,     1,     1,     0,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     2,
       2,     0,     1,     2,     2,     0,     1,     0,     1,     0,
       2,     3,     0,     0,     5,     1,     0,     0,     3,     2,
       2,     0,     0,     3,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     0,     0,
       6,     0,     4,     1,     1,     0,     4,     0,     4,     0,
       4,     2,     0,     2,     1,     0,     0,     0,     9,     2,
       0,     0,     0,     7,     0,     0,    11,     0,     0,     0,
      10,     2,     3,     2,     2,     2,     0,     5,     0,     6,
       0,     3,     2,     0,     0,     3,     2,     0,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       2,     2,     1,     0,     4,     1,     0,     4,     1,     0,
       3,     1,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     1,     1,     1,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     0,     7,     1,
       1,     3,     1,     1,     0,     5,     1,     0,     0,     4,
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
  case 8:
#line 149 "parser.y"
                                                                    {decl_check=1;}
#line 1788 "y.tab.c"
    break;

  case 10:
#line 152 "parser.y"
                                                        {decl_check=1;}
#line 1794 "y.tab.c"
    break;

  case 13:
#line 155 "parser.y"
                                     {if(duplicate(curid))
			{printf("Duplicate at line no. %d!!!	Variable	%s is already declared in this scope \n", yylineno, curid);
			exit(0);}
			insertSTnest(curid,currnest); 
			ins(); 
			char id[1000] = "\0";
			char y_type[10] = "\0";
			char ch = gettype(curid, 0);
			getid_scope(id, curid);
			//	printf("%s 	%d\n\n", id, decl_check);
				if(decl_check)
				{

						strcpy(decl_id, id);
						decl_check=0;
				}
			if(ch == 'c')
			{
				strcpy(y_type, "char\0");
			}
			else if(ch == 'i')
			{
					strcpy(y_type, "int\0");
			}
			else{
					strcpy(y_type, "float\0");
			}
				
				printf("%s %s\n", y_type, id);
			 }
#line 1829 "y.tab.c"
    break;

  case 15:
#line 185 "parser.y"
                                             { if(duplicate(curid)){printf("Duplicate\n");exit(0);}
				insertSTnest(curid,currnest); ins(); 
				if(gettype(curid, 0) == 'i') arr_type='i'; else arr_type = 'c'; 
				//	printf("%s %c -- %c!!!!!!\n\n\n",  curid, arr_type, gettype(curid, 0));
					
				}
#line 1840 "y.tab.c"
    break;

  case 16:
#line 190 "parser.y"
                                      {	// printf("%s  %d\n\n\n", curid, arr_size);

						
						arr_size = 0;
				}
#line 1850 "y.tab.c"
    break;

  case 18:
#line 198 "parser.y"
                                                  {can_use_func = 1; }
#line 1856 "y.tab.c"
    break;

  case 19:
#line 198 "parser.y"
                                                                                         {can_use_func = 0; inline_decl(); }
#line 1862 "y.tab.c"
    break;

  case 22:
#line 205 "parser.y"
                                           {arr_size = yylval; 
				char id[1000] = "\0";
						/*	getid_scope(id, curid);*/
								
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
							char y_type[10] = "\0";
							char ch = gettype(curid, 0);
							if(ch == 'c')
							{
								strcpy(y_type, "char\0");
							}
							else if(ch == 'i')
							{
									strcpy(y_type, "int\0");
							}
							else{
									strcpy(y_type, "float\0");
							}
							getid_scope(id, curid);
							printf("%s %s %s \n", y_type,id, temp);
			}
#line 1898 "y.tab.c"
    break;

  case 23:
#line 235 "parser.y"
                                             {if(yyval < 1) {printf("Wrong array size\n"); exit(0);} }
#line 1904 "y.tab.c"
    break;

  case 51:
#line 268 "parser.y"
                                                         { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); funcgen(); printf("params start\n"); }
#line 1910 "y.tab.c"
    break;

  case 52:
#line 271 "parser.y"
                          {params_count=0;}
#line 1916 "y.tab.c"
    break;

  case 53:
#line 271 "parser.y"
                                                      {printf("params end\n");}
#line 1922 "y.tab.c"
    break;

  case 54:
#line 271 "parser.y"
                                                                                          {funcgenend();}
#line 1928 "y.tab.c"
    break;

  case 55:
#line 274 "parser.y"
                                          { insertSTparamscount(currfunc, params_count); }
#line 1934 "y.tab.c"
    break;

  case 56:
#line 274 "parser.y"
                                                                                            { insertSTparamscount(currfunc, params_count); }
#line 1940 "y.tab.c"
    break;

  case 57:
#line 277 "parser.y"
                                         { check_params(curtype);}
#line 1946 "y.tab.c"
    break;

  case 62:
#line 287 "parser.y"
                                     { ins();insertSTnest(curid,1); params_count++; 

					char id[100] = "\0";
					char y_type[10] = "\0";
							char ch = gettype(curid, 0);
							if(ch == 'c')
							{
								strcpy(y_type, "char\0");
							}
							else if(ch == 'i')
							{
									strcpy(y_type, "int\0");
							}
							else{
									strcpy(y_type, "float\0");
							}
							strcpy(id, curid);
							strcat(id, "._.1");
							printf("%s %s\n", y_type,id);
			
			 }
#line 1972 "y.tab.c"
    break;

  case 76:
#line 323 "parser.y"
                            {another_chk=0; can_use_func=1; }
#line 1978 "y.tab.c"
    break;

  case 77:
#line 323 "parser.y"
                                                                             { can_use_func=0; printf("print new line\n");}
#line 1984 "y.tab.c"
    break;

  case 78:
#line 325 "parser.y"
                                                    {another_chk=0; can_use_func=1;}
#line 1990 "y.tab.c"
    break;

  case 79:
#line 325 "parser.y"
                                                                                                {can_use_func=0; }
#line 1996 "y.tab.c"
    break;

  case 81:
#line 329 "parser.y"
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

		//	printf("%d\n\n", tip);
				if(print_expr==1)
				{
					//printf("ttt\n\n\n");
					print_expr=0;
					if(temp[0]!='L' && another_chk!=0)
					{printf("print int %s\n", temp);
						another_chk=0;
					}
					else
					{printf("print int %s\n", tempo2);
						
					}
				}
				else if(tip == 2)
				{

					 // printf("%s hello	-- %s --	%s -- \n\n\n", temp, tempo, tempo2);
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
					// printf("%s	-- %s --	%s -- \n\n\n", temp, tempo, tempo2);
					 	char var[100] = "\0";
											for(int i=0 ; i<100 && tempo2[i]!='.' ; i++)
											{
												var[i] = tempo2[i];
											}

					if(gettype(var, 0) == 'i')
					{
							printf("print int %s \n", tempo2);
					}
					else if(gettype(var, 0) == 'c')
					{
						printf("print char %s \n", tempo2);
					}
					else if(gettype(var, 0) == 'f')
					{
							printf("print float %s \n", tempo2);
					}
				}

				pc = 0;
				tip = 3;
				cln(tempo2, 100);	
			
		 }
#line 2072 "y.tab.c"
    break;

  case 83:
#line 403 "parser.y"
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

		//	printf("%d\n\n", tip);
				if(print_expr==1)
				{
				///	printf("ttt\n\n\n");
					print_expr=0;
				//	printf("%d\n\n", another_chk);
					if(temp[0]!='L' && another_chk!=0)
					{printf("print int %s\n", temp);
					another_chk=0;
					}
					else
					{printf("print int %s\n", tempo2);	
					}
				}
				else if(tip == 2)
				{

					 // printf("%s hello	-- %s --	%s -- \n\n\n", temp, tempo, tempo2);
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
					// printf("%s	-- %s --	%s -- \n\n\n", temp, tempo, tempo2);
					 	char var[100] = "\0";
											for(int i=0 ; i<100 && tempo2[i]!='.' ; i++)
											{
												var[i] = tempo2[i];
											}

					if(gettype(var, 0) == 'i')
					{
							printf("print int %s \n", tempo2);
					}
					else if(gettype(var, 0) == 'c')
					{
						printf("print char %s \n", tempo2);
					}
					else if(gettype(var, 0) == 'f')
					{
							printf("print float %s \n", tempo2);
					}
				}

				pc = 0;
				tip = 3;
				cln(tempo2, 100);
		 }
#line 2147 "y.tab.c"
    break;

  case 84:
#line 474 "parser.y"
                            {
				printf("print %s\n", print_str);
				cln(print_str, 1000);
			}
#line 2156 "y.tab.c"
    break;

  case 85:
#line 480 "parser.y"
                        {
				printf("print %s\n", print_str);
				cln(print_str, 1000);
			}
#line 2165 "y.tab.c"
    break;

  case 88:
#line 490 "parser.y"
                                      {

								//printf("%s --- %d \n\n", tempo2, tip);
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
											//printf("%d\n", gettype(tempo2,0));
											char var[100] = "\0";
											for(int i=0 ; i<100 && tempo2[i]!='.' ; i++)
											{
												var[i] = tempo2[i];
											}

											if(gettype(var,0) == 'i')
											{
													printf("scan int %s \n", tempo2);
											}
											else if(gettype(var,0) == 'c')
											{
													printf("scan char %s \n", tempo2);
											}
											else if(gettype(var,0) == 'f')
											{
													printf("scan float %s \n", tempo2);
											}
									}
									
									tip = 3;
									cln(tempo2, 100);

							}
#line 2216 "y.tab.c"
    break;

  case 89:
#line 539 "parser.y"
                          {currnest++;}
#line 2222 "y.tab.c"
    break;

  case 90:
#line 539 "parser.y"
                                                                {deletedata(currnest);currnest--;}
#line 2228 "y.tab.c"
    break;

  case 95:
#line 550 "parser.y"
                                 {can_use_func = 1; }
#line 2234 "y.tab.c"
    break;

  case 96:
#line 550 "parser.y"
                                                                            {can_use_func = 0; label1();if(yyvsp[-2]!=1);}
#line 2240 "y.tab.c"
    break;

  case 97:
#line 550 "parser.y"
                                                                                                                              {label2();}
#line 2246 "y.tab.c"
    break;

  case 99:
#line 553 "parser.y"
                                         {label3();}
#line 2252 "y.tab.c"
    break;

  case 100:
#line 554 "parser.y"
                          {label3();}
#line 2258 "y.tab.c"
    break;

  case 101:
#line 557 "parser.y"
                                    { can_use_func = 1; label4(); breakLabel[0] = '\0';}
#line 2264 "y.tab.c"
    break;

  case 102:
#line 557 "parser.y"
                                                                                                               {can_use_func = 0; label1();}
#line 2270 "y.tab.c"
    break;

  case 103:
#line 557 "parser.y"
                                                                                                                                                       {label5(); breakLabel[0] = '\0';}
#line 2276 "y.tab.c"
    break;

  case 104:
#line 558 "parser.y"
                                                 {label4(); can_use_func = 1; breakLabel[0] = '\0';}
#line 2282 "y.tab.c"
    break;

  case 105:
#line 558 "parser.y"
                                                                                                                            {can_use_func = 0; label1();}
#line 2288 "y.tab.c"
    break;

  case 106:
#line 558 "parser.y"
                                                                                                                                                                                  {label5(); breakLabel[0] = '\0';}
#line 2294 "y.tab.c"
    break;

  case 107:
#line 559 "parser.y"
                          {label4();}
#line 2300 "y.tab.c"
    break;

  case 108:
#line 559 "parser.y"
                                                            {can_use_func = 1; }
#line 2306 "y.tab.c"
    break;

  case 109:
#line 559 "parser.y"
                                                                                                       {can_use_func = 0; label1();label5();}
#line 2312 "y.tab.c"
    break;

  case 111:
#line 561 "parser.y"
                                     {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}
				printf("return\n");
			}
#line 2320 "y.tab.c"
    break;

  case 112:
#line 564 "parser.y"
                                                    { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Function is void");
										}

											print_result();
											
									}
#line 2333 "y.tab.c"
    break;

  case 113:
#line 574 "parser.y"
                                    {printf("GoTo %s\n", breakLabel);}
#line 2339 "y.tab.c"
    break;

  case 115:
#line 579 "parser.y"
                                                              {insV();}
#line 2345 "y.tab.c"
    break;

  case 116:
#line 582 "parser.y"
                                                    { 

			//	printf("currently in int initilization\n\n\n");

				if(arr_type != 'i')
				{
					printf("Error!!! using the integer initilization syntax for a character array on lineno: %d", yylineno);
					exit(0);
				}
				strcpy(temp,"t");
				char buffer[100];
				itoa(count,buffer,10);
				strcat(temp,buffer);
				printf("%s \n", temp);
				count++;

				strcpy(tempo,"t");
				cln(buffer, 100);
				itoa(count,buffer,10);
				strcat(tempo,buffer);
				printf("%s \n", tempo);
				count++;

			 }
#line 2374 "y.tab.c"
    break;

  case 117:
#line 605 "parser.y"
                                                      {if(arr_count > arr_size) {printf("initilization of array with too many variables on line no %d\n"); exit(0);}

			

			arr_count = 0;
			}
#line 2385 "y.tab.c"
    break;

  case 118:
#line 613 "parser.y"
                                                        { 

			 //printf("currently in char initilization %c--\n\n\n", arr_type);

				if(arr_type != 'c')
				{
					printf("Error!!! using the character initilization syntax for an integer array on lineno: %d", yylineno);
					exit(0);
				}
				strcpy(temp,"t");
				char buffer[100];
				itoa(count,buffer,10);
				strcat(temp,buffer);
				printf("%s \n", temp);
				count++;

				strcpy(tempo,"t");
				cln(buffer, 100);
				itoa(count,buffer,10);
				strcat(tempo,buffer);
				printf("%s \n", tempo);
				count++;

			 }
#line 2414 "y.tab.c"
    break;

  case 119:
#line 636 "parser.y"
                                                       {if(arr_count > arr_size) {printf("initilization of array with too many variables on line no %d\n"); exit(0);}

			

			arr_count = 0;
			}
#line 2425 "y.tab.c"
    break;

  case 120:
#line 645 "parser.y"
                                           {

						char id[100] = "\0";
						getid_scope(id, curid);

						printf("%s = %d * 4\n", temp, arr_count);
						printf("%s = %s + %s\n", tempo, id, temp);
						printf("*%s = %s\n", tempo, curval);

						arr_count++;}
#line 2440 "y.tab.c"
    break;

  case 123:
#line 658 "parser.y"
                           {  insertSTarrSize(curid, arr_size); }
#line 2446 "y.tab.c"
    break;

  case 124:
#line 661 "parser.y"
                                             {

						char id[100] = "\0";
						getid_scope(id, curid);

						printf("%s = %d * 1\n", temp, arr_count);
						printf("%s = %s + %s\n", tempo, id, temp);
						printf("*%s = %s\n", tempo, curval);

						arr_count++;}
#line 2461 "y.tab.c"
    break;

  case 127:
#line 674 "parser.y"
                           {  insertSTarrSize(curid, arr_size); }
#line 2467 "y.tab.c"
    break;

  case 128:
#line 678 "parser.y"
                                            { can_use_func=1; push("=");  if(tempo[0] != '\0') {strcpy(tempo3, tempo);} }
#line 2473 "y.tab.c"
    break;

  case 129:
#line 678 "parser.y"
                                                                                                                                       {   
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
																	  {	
			                                                          yyval=1;
			                                                          } 
			                                                          else 
			                                                          {} 
																																if(func_called && called_type==1)
																																{
																																	//printf("hello\n\n");
																																	printf("%s = %s\n", func_assign, temp);
																																	func_called = 0;
																																	called_type = 0;
																																	//return;
																																}
																																else if(tempo3[0] != '\0')
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
#line 2506 "y.tab.c"
    break;

  case 130:
#line 706 "parser.y"
                                                               {push("+=");}
#line 2512 "y.tab.c"
    break;

  case 131:
#line 706 "parser.y"
                                                                                       {  
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
			                                                       }
#line 2524 "y.tab.c"
    break;

  case 132:
#line 713 "parser.y"
                                                                  {push("-=");}
#line 2530 "y.tab.c"
    break;

  case 133:
#line 713 "parser.y"
                                                                                            {	  
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
			                                                       }
#line 2542 "y.tab.c"
    break;

  case 134:
#line 720 "parser.y"
                                                                     {push("*=");}
#line 2548 "y.tab.c"
    break;

  case 135:
#line 720 "parser.y"
                                                                                              {
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);}
			                                                          codeassign(); 
			                                                       }
#line 2560 "y.tab.c"
    break;

  case 136:
#line 727 "parser.y"
                                                               {push("/=");}
#line 2566 "y.tab.c"
    break;

  case 137:
#line 727 "parser.y"
                                                                                                { 
																	  if(yyvsp[-3]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 2577 "y.tab.c"
    break;

  case 138:
#line 733 "parser.y"
                                                             {push("%=");}
#line 2583 "y.tab.c"
    break;

  case 139:
#line 733 "parser.y"
                                                                                                { 
																	  if(yyvsp[-3]==1 && yyvsp[-1]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                          codeassign();
																	}
#line 2595 "y.tab.c"
    break;

  case 140:
#line 740 "parser.y"
                                                                                                        { push("++");if(yyvsp[-1] == 1) yyval=1; else yyval=-1; genunary();}
#line 2601 "y.tab.c"
    break;

  case 141:
#line 741 "parser.y"
                                                                                                        {push("--");if(yyvsp[-1] == 1) yyval=1; else yyval=-1; genunary();}
#line 2607 "y.tab.c"
    break;

  case 142:
#line 742 "parser.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2613 "y.tab.c"
    break;

  case 143:
#line 747 "parser.y"
                                                                       {push("||");}
#line 2619 "y.tab.c"
    break;

  case 144:
#line 747 "parser.y"
                                                                                     {if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 2625 "y.tab.c"
    break;

  case 145:
#line 749 "parser.y"
                                       {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2631 "y.tab.c"
    break;

  case 146:
#line 752 "parser.y"
                                                       {push("&&");}
#line 2637 "y.tab.c"
    break;

  case 147:
#line 752 "parser.y"
                                                                                                {	if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 2643 "y.tab.c"
    break;

  case 148:
#line 753 "parser.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2649 "y.tab.c"
    break;

  case 149:
#line 757 "parser.y"
                                               {push("!");}
#line 2655 "y.tab.c"
    break;

  case 150:
#line 757 "parser.y"
                                                                                      {		 yyval=1;  codegen();}
#line 2661 "y.tab.c"
    break;

  case 151:
#line 758 "parser.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2667 "y.tab.c"
    break;

  case 152:
#line 761 "parser.y"
                                             {can_use_func = 1;}
#line 2673 "y.tab.c"
    break;

  case 153:
#line 761 "parser.y"
                                                                                                     {can_use_func = 0; if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 2679 "y.tab.c"
    break;

  case 154:
#line 762 "parser.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2685 "y.tab.c"
    break;

  case 155:
#line 765 "parser.y"
                                                          {push(">=");}
#line 2691 "y.tab.c"
    break;

  case 156:
#line 765 "parser.y"
                                                                                                       {push("<=");}
#line 2697 "y.tab.c"
    break;

  case 157:
#line 765 "parser.y"
                                                                                                                                            {push(">");}
#line 2703 "y.tab.c"
    break;

  case 158:
#line 765 "parser.y"
                                                                                                                                                                            {push("<");}
#line 2709 "y.tab.c"
    break;

  case 159:
#line 765 "parser.y"
                                                                                                                                                                                                            {push("==");}
#line 2715 "y.tab.c"
    break;

  case 160:
#line 765 "parser.y"
                                                                                                                                                                                                                                               {push("!=");}
#line 2721 "y.tab.c"
    break;

  case 161:
#line 768 "parser.y"
                                         {can_use_func = 1;}
#line 2727 "y.tab.c"
    break;

  case 162:
#line 768 "parser.y"
                                                                                  { can_use_func = 0; if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();    
				if(print_chk) print_expr=1; 
				//	print_temps();
				}
#line 2736 "y.tab.c"
    break;

  case 163:
#line 772 "parser.y"
                                {if(yyvsp[0] == 1) yyval=1; else yyval=-1;  }
#line 2742 "y.tab.c"
    break;

  case 164:
#line 775 "parser.y"
                                       { push("+"); another_chk=1; chk=1; if(!inside) {pc=1; chk2=1;} }
#line 2748 "y.tab.c"
    break;

  case 165:
#line 776 "parser.y"
                                            {push("-");another_chk=1; chk=1; if(!inside) {pc=1; chk2=1;} }
#line 2754 "y.tab.c"
    break;

  case 166:
#line 779 "parser.y"
                               {can_use_func = 1;}
#line 2760 "y.tab.c"
    break;

  case 167:
#line 779 "parser.y"
                                                                 {can_use_func = 0;another_chk=1; chk = 1 ; if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 2766 "y.tab.c"
    break;

  case 168:
#line 780 "parser.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2772 "y.tab.c"
    break;

  case 169:
#line 783 "parser.y"
                                                  {push("*");another_chk=1; chk=1; if(!inside) {pc=1; chk2=1; }}
#line 2778 "y.tab.c"
    break;

  case 170:
#line 783 "parser.y"
                                                                                                                                    {push("/"); chk=1; if(!inside) {pc=1; chk2=1; }}
#line 2784 "y.tab.c"
    break;

  case 171:
#line 783 "parser.y"
                                                                                                                                                                                                       {push("%"); chk=1; if(!inside) {pc=1; chk2=1;} }
#line 2790 "y.tab.c"
    break;

  case 172:
#line 786 "parser.y"
                                    {top-=0; if(yyvsp[0] == 1) yyval=1; else yyval=-1; }
#line 2796 "y.tab.c"
    break;

  case 173:
#line 787 "parser.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1; called_type=0;}
#line 2802 "y.tab.c"
    break;

  case 174:
#line 791 "parser.y"
                                     {

							if(tip == 3)
							{
								typ = gettype(curid, 0);
							//	printf("ssss\n\n");
								tip = 1;
							}
							
							if(inside==0)
							called_type = 1;
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

							cln(func_assign, 100);
							strcpy(func_assign, id);

							}
#line 2844 "y.tab.c"
    break;

  case 175:
#line 828 "parser.y"
                                           { typ = gettype(curid, 0); tip=2; if(!checkscope(curid)){printf("%s\n",curid);printf("Undeclared\n");exit(0);} strcpy(tempo, curid); chk=0; }
#line 2850 "y.tab.c"
    break;

  case 176:
#line 828 "parser.y"
                                                                                                                                                                                             { inside=1; print_chk=0;}
#line 2856 "y.tab.c"
    break;

  case 177:
#line 828 "parser.y"
                                                                                                                                                                                                                                 { inside=0; print_chk=1;}
#line 2862 "y.tab.c"
    break;

  case 178:
#line 829 "parser.y"
                                           {	
													 called_type = 0;
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
#line 2882 "y.tab.c"
    break;

  case 179:
#line 848 "parser.y"
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
												printf("IF not %s GoTo L%d \n", temp3, lno);

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

												printf("$exit \n");

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

												printf("IF not %s GoTo L%d\n", temp3, lno);

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

												printf("$exit\n");
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
#line 3047 "y.tab.c"
    break;

  case 180:
#line 1010 "parser.y"
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
												printf("IF not %s GoTo L%d \n", temp3, lno);

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

												printf("$exit \n");

												printf("L%d: \n", lno++);

												cln(temp3, 100);
												cln(buffer, 100);
												strcpy(temp3, "t");
												itoa(count, buffer, 10);
												strcat(temp3, buffer);
												printf("%s\n", temp3);
												count++;

												printf("%s = %s < 0\n", temp3, temp4);

												printf("IF not %s GoTo L%d\n", temp3, lno);

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

												printf("$exit\n");
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
#line 3205 "y.tab.c"
    break;

  case 181:
#line 1167 "parser.y"
                                             { if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 3211 "y.tab.c"
    break;

  case 182:
#line 1168 "parser.y"
                                {	if(yyvsp[0]==-1) yyval=-1; else yyval=1; func_called=1;}
#line 3217 "y.tab.c"
    break;

  case 183:
#line 1169 "parser.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1; if(print_chk) print_expr=1;}
#line 3223 "y.tab.c"
    break;

  case 184:
#line 1172 "parser.y"
                                         {
									
								//	printf("%s 	%c	%d\n\n\n", curid, gettype(curid, 0), yylineno);
									in_call=1;
									if(can_use_func==1 && gettype(curid, 0) == 'v')	
									{printf("can't use a function returing void in an expression at line no: %d , quitting...", yylineno);
										exit(0);
									}

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
#line 3249 "y.tab.c"
    break;

  case 185:
#line 1194 "parser.y"
                                                 { 
							 if(added_temp)
							 top--;
								added_temp=0;
							 in_call=0;
							 if(strcmp(currfunccall,"printf"))
							{ 
								if(getSTparamscount(currfunccall)!=call_params_count)
								{	
									yyerror("Number of arguments in function call doesn't match number of parameters");
									exit(8);
								}
							}
							callgen();
						 }
#line 3269 "y.tab.c"
    break;

  case 186:
#line 1211 "parser.y"
                                         {arggen();}
#line 3275 "y.tab.c"
    break;

  case 188:
#line 1214 "parser.y"
                                             {if(added_temp)
							 top--; added_temp=0;}
#line 3282 "y.tab.c"
    break;

  case 189:
#line 1215 "parser.y"
                                                                                   { call_params_count++; }
#line 3288 "y.tab.c"
    break;

  case 190:
#line 1216 "parser.y"
                              { call_params_count++; }
#line 3294 "y.tab.c"
    break;

  case 191:
#line 1218 "parser.y"
                      {print_temps();}
#line 3300 "y.tab.c"
    break;

  case 192:
#line 1221 "parser.y"
                                                {  insV(); codegencon(); yyval=1; }
#line 3306 "y.tab.c"
    break;

  case 193:
#line 1222 "parser.y"
                                                {  insV(); codegencon();yyval=-1;}
#line 3312 "y.tab.c"
    break;

  case 194:
#line 1223 "parser.y"
                                                {  insV(); codegencon();}
#line 3318 "y.tab.c"
    break;

  case 195:
#line 1224 "parser.y"
                                            {  insV(); codegencon();yyval=1; }
#line 3324 "y.tab.c"
    break;


#line 3328 "y.tab.c"

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
#line 1226 "parser.y"


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

struct func_params{
	char variable[1000];
} function_params[100];

void arggen()
{
	for(int i=0 ; i<func_params_top ; i++)
	{
		printf("param %s\n", function_params[i].variable);
	}

	func_params_top = 0;
}

void print_result()
{
	printf("return %s\n", s[top].value);
	top--;
}

void print_temps()
{
	//printf("%d\n\n", func_params_top);
	strcpy(function_params[func_params_top].variable, s[top].value);
	strcat(function_params[func_params_top].variable, "\0");
	func_params_top++;
	//if(top>=0)
	//printf("param %s \n", s[top].value);
}

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

void inline_decl()
{
	printf("%s = %s\n", decl_id, s[top].value);
	top--;
	cln(decl_id, 100);
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
	strcat(id, "._.");
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

	if(in_call)	added_temp=1;
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
	if(breakLabel[0] == '\0')
	{
		strcat(temp, "\0");
		strcpy(breakLabel, temp);
	}
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
	printf("GoTo %s\n",temp);
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

/*
void arggen(int i)
{
    if(i==1)
    {
			char id[1000] = "\0";
			getid_scope(id, curid);
	printf("refparam %s\n", id);
	}
	else
	{
	printf("refparam %s\n", curval);
	}
}
*/

void callgen()
{
	printf("refparam result\n");
	strcpy(temp, "t");
	char buffer[100];
	itoa(count, buffer, 10);
	strcat(temp, buffer);
	count++;
	push(temp);
	printf("call %s, %d\n",currfunccall,call_params_count);
	printf("%s\n", temp);
	printf("%s = $result\n", temp);
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
