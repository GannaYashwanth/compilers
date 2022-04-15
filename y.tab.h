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
