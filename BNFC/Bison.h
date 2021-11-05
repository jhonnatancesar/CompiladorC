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

#ifndef YY_JAIR_BISON_H_INCLUDED
# define YY_JAIR_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int jair_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _ERROR_ = 258,
    _LPAREN = 259,
    _RPAREN = 260,
    _COMMA = 261,
    _SEMI = 262,
    _LT = 263,
    _LDARROW = 264,
    _LTGT = 265,
    _EQ = 266,
    _DEQ = 267,
    _GT = 268,
    _GTEQ = 269,
    _KW_Output = 270,
    _KW_Procedure = 271,
    _LBRACK = 272,
    _RBRACK = 273,
    _KW_assign = 274,
    _KW_begin = 275,
    _KW_digit = 276,
    _KW_do = 277,
    _KW_double = 278,
    _KW_else = 279,
    _SYMB_1 = 280,
    _KW_float = 281,
    _KW_for = 282,
    _KW_goto = 283,
    _KW_if = 284,
    _KW_int = 285,
    _KW_letter = 286,
    _KW_number = 287,
    _KW_program = 288,
    _KW_then = 289,
    _KW_while = 290,
    _LBRACE = 291,
    _RBRACE = 292,
    _SYMB_6 = 293,
    _IDENT_ = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 51 "Jair.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  Prog prog_;
  Id id_;
  Ident_type ident_type_;
  Dec dec_;
  Label label_;
  Uses uses_;
  Variable variable_;
  Type type_;
  Type_specifier type_specifier_;
  Constant constant_;
  Cmdlist cmdlist_;
  Cmd cmd_;
  Cmd_type cmd_type_;
  Exprecion exprecion_;
  Exp exp_;
  Procedure procedure_;

#line 120 "Bison.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int jair_parse (yyscan_t scanner, YYSTYPE *result);

#endif /* !YY_JAIR_BISON_H_INCLUDED  */
