/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
