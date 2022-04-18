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
    ENDIF = 279,
    identifier = 280,
    array_identifier = 281,
    func_identifier = 282,
    integer_constant = 283,
    string_constant = 284,
    float_constant = 285,
    character_constant = 286,
    ELSE = 287,
    leftshift_assignment_operator = 288,
    rightshift_assignment_operator = 289,
    XOR_assignment_operator = 290,
    OR_assignment_operator = 291,
    AND_assignment_operator = 292,
    modulo_assignment_operator = 293,
    multiplication_assignment_operator = 294,
    division_assignment_operator = 295,
    addition_assignment_operator = 296,
    subtraction_assignment_operator = 297,
    assignment_operator = 298,
    OR_operator = 299,
    AND_operator = 300,
    pipe_operator = 301,
    caret_operator = 302,
    amp_operator = 303,
    equality_operator = 304,
    inequality_operator = 305,
    lessthan_assignment_operator = 306,
    lessthan_operator = 307,
    greaterthan_assignment_operator = 308,
    greaterthan_operator = 309,
    leftshift_operator = 310,
    rightshift_operator = 311,
    add_operator = 312,
    subtract_operator = 313,
    multiplication_operator = 314,
    division_operator = 315,
    modulo_operator = 316,
    SIZEOF = 317,
    tilde_operator = 318,
    exclamation_operator = 319,
    increment_operator = 320,
    decrement_operator = 321
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
#define ENDIF 279
#define identifier 280
#define array_identifier 281
#define func_identifier 282
#define integer_constant 283
#define string_constant 284
#define float_constant 285
#define character_constant 286
#define ELSE 287
#define leftshift_assignment_operator 288
#define rightshift_assignment_operator 289
#define XOR_assignment_operator 290
#define OR_assignment_operator 291
#define AND_assignment_operator 292
#define modulo_assignment_operator 293
#define multiplication_assignment_operator 294
#define division_assignment_operator 295
#define addition_assignment_operator 296
#define subtraction_assignment_operator 297
#define assignment_operator 298
#define OR_operator 299
#define AND_operator 300
#define pipe_operator 301
#define caret_operator 302
#define amp_operator 303
#define equality_operator 304
#define inequality_operator 305
#define lessthan_assignment_operator 306
#define lessthan_operator 307
#define greaterthan_assignment_operator 308
#define greaterthan_operator 309
#define leftshift_operator 310
#define rightshift_operator 311
#define add_operator 312
#define subtract_operator 313
#define multiplication_operator 314
#define division_operator 315
#define modulo_operator 316
#define SIZEOF 317
#define tilde_operator 318
#define exclamation_operator 319
#define increment_operator 320
#define decrement_operator 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
