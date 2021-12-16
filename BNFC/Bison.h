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
    _BANGEQ = 259,
    _PERCENT = 260,
    _PERCENTEQ = 261,
    _AMP = 262,
    _DAMP = 263,
    _AMPEQ = 264,
    _LPAREN = 265,
    _RPAREN = 266,
    _STAR = 267,
    _STAREQ = 268,
    _PLUS = 269,
    _DPLUS = 270,
    _PLUSEQ = 271,
    _COMMA = 272,
    _MINUS = 273,
    _DMINUS = 274,
    _MINUSEQ = 275,
    _RARROW = 276,
    _DOT = 277,
    _SLASH = 278,
    _SLASHEQ = 279,
    _COLON = 280,
    _SEMI = 281,
    _LT = 282,
    _DLT = 283,
    _DLTEQ = 284,
    _LDARROW = 285,
    _EQ = 286,
    _DEQ = 287,
    _GT = 288,
    _GTEQ = 289,
    _DGT = 290,
    _DGTEQ = 291,
    _QUESTION = 292,
    _KW_Procedure = 293,
    _KW_Write = 294,
    _LBRACK = 295,
    _RBRACK = 296,
    _CARET = 297,
    _CARETEQ = 298,
    _KW_assign = 299,
    _KW_begin = 300,
    _KW_digit = 301,
    _KW_do = 302,
    _KW_double = 303,
    _KW_else = 304,
    _SYMB_1 = 305,
    _KW_float = 306,
    _KW_for = 307,
    _KW_goto = 308,
    _KW_if = 309,
    _KW_int = 310,
    _KW_letter = 311,
    _KW_number = 312,
    _KW_program = 313,
    _KW_then = 314,
    _KW_while = 315,
    _LBRACE = 316,
    _BAR = 317,
    _BAREQ = 318,
    _DBAR = 319,
    _RBRACE = 320,
    _SYMB_6 = 321,
    T_CDouble = 322,
    T_CFloat = 323,
    T_CLongDouble = 324,
    T_HexLong = 325,
    T_HexUnsLong = 326,
    T_HexUnsigned = 327,
    T_Hexadecimal = 328,
    T_Long = 329,
    T_Octal = 330,
    T_OctalLong = 331,
    T_OctalUnsLong = 332,
    T_OctalUnsigned = 333,
    T_Unsigned = 334,
    T_UnsignedLong = 335,
    _STRING_ = 336,
    _IDENT_ = 337
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
  Exp exp_;
  Procedure procedure_;
  Assignment_op assignment_op_;

#line 163 "Bison.h"

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
