/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 12 "yacc.y" /* yacc.c:1909  */

	struct Node * node;
	char * value;

#line 131 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
