/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF_STMT = 258,                 /* IF_STMT  */
    CASE = 259,                    /* CASE  */
    SWITCH_STMT = 260,             /* SWITCH_STMT  */
    DEFAULT_STMT = 261,            /* DEFAULT_STMT  */
    CONTINUE = 262,                /* CONTINUE  */
    WHILE_STMT = 263,              /* WHILE_STMT  */
    BREAK = 264,                   /* BREAK  */
    DO = 265,                      /* DO  */
    FOR_LOOP = 266,                /* FOR_LOOP  */
    STRINGLITERAL = 267,           /* STRINGLITERAL  */
    DT = 268,                      /* DT  */
    RETURN_STMT = 269,             /* RETURN_STMT  */
    NOT = 270,                     /* NOT  */
    out_token = 271,               /* out_token  */
    in_token = 272,                /* in_token  */
    IDENTIFIER = 273,              /* IDENTIFIER  */
    LOP = 274,                     /* LOP  */
    end_token = 275,               /* end_token  */
    COP = 276,                     /* COP  */
    UOP = 277,                     /* UOP  */
    BOP = 278,                     /* BOP  */
    COM = 279,                     /* COM  */
    HEAD = 280,                    /* HEAD  */
    NUMBER = 281,                  /* NUMBER  */
    AOP = 282,                     /* AOP  */
    EQU = 283,                     /* EQU  */
    cpp_header = 284,              /* cpp_header  */
    cpp_std = 285,                 /* cpp_std  */
    ELSE_STMT = 286,               /* ELSE_STMT  */
    OUTPUT = 287,                  /* OUTPUT  */
    INPUT = 288                    /* INPUT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF_STMT 258
#define CASE 259
#define SWITCH_STMT 260
#define DEFAULT_STMT 261
#define CONTINUE 262
#define WHILE_STMT 263
#define BREAK 264
#define DO 265
#define FOR_LOOP 266
#define STRINGLITERAL 267
#define DT 268
#define RETURN_STMT 269
#define NOT 270
#define out_token 271
#define in_token 272
#define IDENTIFIER 273
#define LOP 274
#define end_token 275
#define COP 276
#define UOP 277
#define BOP 278
#define COM 279
#define HEAD 280
#define NUMBER 281
#define AOP 282
#define EQU 283
#define cpp_header 284
#define cpp_std 285
#define ELSE_STMT 286
#define OUTPUT 287
#define INPUT 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "parser.y"

    struct quadruple {
        int num;
        int isnum;
        char* arg1;
        char* arg2;
        char* arg3;
        char* arg4;
        char* result;
    } tuple;

#line 145 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
