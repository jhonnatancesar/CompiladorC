/* File generated by the BNF Converter (bnfc 2.9.4). */

/*** Pretty Printer and Abstract Syntax Viewer ***/

#include <ctype.h>   /* isspace */
#include <stddef.h>  /* size_t */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Printer.h"

#define INDENT_WIDTH 2

int _n_;
char *buf_;
size_t cur_;
size_t buf_size;

/* You may wish to change the renderC functions */
void renderC(Char c)
{
  if (c == '{')
  {
     onEmptyLine();
     bufAppendC(c);
     _n_ = _n_ + INDENT_WIDTH;
     bufAppendC('\n');
     indent();
  }
  else if (c == '(' || c == '[')
     bufAppendC(c);
  else if (c == ')' || c == ']')
  {
     removeTrailingWhitespace();
     bufAppendC(c);
     bufAppendC(' ');
  }
  else if (c == '}')
  {
     _n_ = _n_ - INDENT_WIDTH;
     onEmptyLine();
     bufAppendC(c);
     bufAppendC('\n');
     indent();
  }
  else if (c == ',')
  {
     removeTrailingWhitespace();
     bufAppendC(c);
     bufAppendC(' ');
  }
  else if (c == ';')
  {
     removeTrailingWhitespace();
     bufAppendC(c);
     bufAppendC('\n');
     indent();
  }
  else if (c == ' ') bufAppendC(c);
  else if (c == 0) return;
  else
  {
     bufAppendC(c);
     bufAppendC(' ');
  }
}

int allIsSpace(String s)
{
  char c;
  while ((c = *s++))
    if (! isspace(c)) return 0;
  return 1;
}

void renderS(String s)
{
  if (*s) /* s[0] != '\0', string s not empty */
  {
    if (allIsSpace(s)) {
      backup();
      bufAppendS(s);
    } else {
      bufAppendS(s);
      bufAppendC(' ');
    }
  }
}

void indent(void)
{
  int n = _n_;
  while (--n >= 0)
    bufAppendC(' ');
}

void backup(void)
{
  if (cur_ && buf_[cur_ - 1] == ' ')
    buf_[--cur_] = 0;
}

void removeTrailingSpaces()
{
  while (cur_ && buf_[cur_ - 1] == ' ') --cur_;
  buf_[cur_] = 0;
}

void removeTrailingWhitespace()
{
  while (cur_ && (buf_[cur_ - 1] == ' ' || buf_[cur_ - 1] == '\n')) --cur_;
  buf_[cur_] = 0;
}

void onEmptyLine()
{
  removeTrailingSpaces();
  if (cur_ && buf_[cur_ - 1 ] != '\n') bufAppendC('\n');
  indent();
}
char *printProg(Prog p)
{
  _n_ = 0;
  bufReset();
  ppProg(p, 0);
  return buf_;
}
char *printId(Id p)
{
  _n_ = 0;
  bufReset();
  ppId(p, 0);
  return buf_;
}
char *printIdent_type(Ident_type p)
{
  _n_ = 0;
  bufReset();
  ppIdent_type(p, 0);
  return buf_;
}
char *printDec(Dec p)
{
  _n_ = 0;
  bufReset();
  ppDec(p, 0);
  return buf_;
}
char *printLabel(Label p)
{
  _n_ = 0;
  bufReset();
  ppLabel(p, 0);
  return buf_;
}
char *printUses(Uses p)
{
  _n_ = 0;
  bufReset();
  ppUses(p, 0);
  return buf_;
}
char *printVariable(Variable p)
{
  _n_ = 0;
  bufReset();
  ppVariable(p, 0);
  return buf_;
}
char *printType(Type p)
{
  _n_ = 0;
  bufReset();
  ppType(p, 0);
  return buf_;
}
char *printType_specifier(Type_specifier p)
{
  _n_ = 0;
  bufReset();
  ppType_specifier(p, 0);
  return buf_;
}
char *printConstant(Constant p)
{
  _n_ = 0;
  bufReset();
  ppConstant(p, 0);
  return buf_;
}
char *printCmdlist(Cmdlist p)
{
  _n_ = 0;
  bufReset();
  ppCmdlist(p, 0);
  return buf_;
}
char *printCmd(Cmd p)
{
  _n_ = 0;
  bufReset();
  ppCmd(p, 0);
  return buf_;
}
char *printCmd_type(Cmd_type p)
{
  _n_ = 0;
  bufReset();
  ppCmd_type(p, 0);
  return buf_;
}
char *printExprecion(Exprecion p)
{
  _n_ = 0;
  bufReset();
  ppExprecion(p, 0);
  return buf_;
}
char *printExp(Exp p)
{
  _n_ = 0;
  bufReset();
  ppExp(p, 0);
  return buf_;
}
char *printProcedure(Procedure p)
{
  _n_ = 0;
  bufReset();
  ppProcedure(p, 0);
  return buf_;
}
char *showProg(Prog p)
{
  _n_ = 0;
  bufReset();
  shProg(p);
  return buf_;
}
char *showId(Id p)
{
  _n_ = 0;
  bufReset();
  shId(p);
  return buf_;
}
char *showIdent_type(Ident_type p)
{
  _n_ = 0;
  bufReset();
  shIdent_type(p);
  return buf_;
}
char *showDec(Dec p)
{
  _n_ = 0;
  bufReset();
  shDec(p);
  return buf_;
}
char *showLabel(Label p)
{
  _n_ = 0;
  bufReset();
  shLabel(p);
  return buf_;
}
char *showUses(Uses p)
{
  _n_ = 0;
  bufReset();
  shUses(p);
  return buf_;
}
char *showVariable(Variable p)
{
  _n_ = 0;
  bufReset();
  shVariable(p);
  return buf_;
}
char *showType(Type p)
{
  _n_ = 0;
  bufReset();
  shType(p);
  return buf_;
}
char *showType_specifier(Type_specifier p)
{
  _n_ = 0;
  bufReset();
  shType_specifier(p);
  return buf_;
}
char *showConstant(Constant p)
{
  _n_ = 0;
  bufReset();
  shConstant(p);
  return buf_;
}
char *showCmdlist(Cmdlist p)
{
  _n_ = 0;
  bufReset();
  shCmdlist(p);
  return buf_;
}
char *showCmd(Cmd p)
{
  _n_ = 0;
  bufReset();
  shCmd(p);
  return buf_;
}
char *showCmd_type(Cmd_type p)
{
  _n_ = 0;
  bufReset();
  shCmd_type(p);
  return buf_;
}
char *showExprecion(Exprecion p)
{
  _n_ = 0;
  bufReset();
  shExprecion(p);
  return buf_;
}
char *showExp(Exp p)
{
  _n_ = 0;
  bufReset();
  shExp(p);
  return buf_;
}
char *showProcedure(Procedure p)
{
  _n_ = 0;
  bufReset();
  shProcedure(p);
  return buf_;
}
void ppProg(Prog p, int _i_)
{
  switch(p->kind)
  {
  case is_Program:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("program");
    ppIdent(p->u.program_.ident_, 0);
    renderC(';');
    ppDec(p->u.program_.dec_, 0);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Prog!\n");
    exit(1);
  }
}

void ppId(Id p, int _i_)
{
  switch(p->kind)
  {
  case is_Ident:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent_type(p->u.ident_.ident_type_, 0);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Id!\n");
    exit(1);
  }
}

void ppIdent_type(Ident_type p, int _i_)
{
  switch(p->kind)
  {
  case is_Idletter:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("letter");
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Iddigt:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("digit");
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Ident_type!\n");
    exit(1);
  }
}

void ppDec(Dec p, int _i_)
{
  switch(p->kind)
  {
  case is_Block:
    if (_i_ > 0) renderC(_L_PAREN);
    ppLabel(p->u.block_.label_, 0);
    ppUses(p->u.block_.uses_, 0);
    ppVariable(p->u.block_.variable_, 0);
    ppType(p->u.block_.type_, 0);
    ppConstant(p->u.block_.constant_, 0);
    renderS("begin");
    ppCmdlist(p->u.block_.cmdlist_, 0);
    renderS("end.");
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Dec!\n");
    exit(1);
  }
}

void ppLabel(Label p, int _i_)
{
  switch(p->kind)
  {
  case is_Label:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(p->u.label_.ident_, 0);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Label!\n");
    exit(1);
  }
}

void ppUses(Uses p, int _i_)
{
  switch(p->kind)
  {
  case is_Uses:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(p->u.uses_.ident_1, 0);
    renderC('{');
    renderC(',');
    ppIdent(p->u.uses_.ident_2, 0);
    renderC('}');
    renderC(';');
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Uses!\n");
    exit(1);
  }
}

void ppVariable(Variable p, int _i_)
{
  switch(p->kind)
  {
  case is_Variable:
    if (_i_ > 0) renderC(_L_PAREN);
    ppIdent(p->u.variable_.ident_, 0);
    renderC('=');
    ppType(p->u.variable_.type_, 0);
    renderC(';');
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Variable!\n");
    exit(1);
  }
}

void ppType(Type p, int _i_)
{
  switch(p->kind)
  {
  case is_Type:
    if (_i_ > 0) renderC(_L_PAREN);
    ppType_specifier(p->u.type_.type_specifier_, 0);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Type!\n");
    exit(1);
  }
}

void ppType_specifier(Type_specifier p, int _i_)
{
  switch(p->kind)
  {
  case is_Tint:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("int");
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tfloat:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("float");
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Tdouble:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("double");
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Type_specifier!\n");
    exit(1);
  }
}

void ppConstant(Constant p, int _i_)
{
  switch(p->kind)
  {
  case is_Constant:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("number");
    renderC(';');
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Constant!\n");
    exit(1);
  }
}

void ppCmdlist(Cmdlist p, int _i_)
{
  switch(p->kind)
  {
  case is_Cmdlist:
    if (_i_ > 0) renderC(_L_PAREN);
    ppCmd(p->u.cmdlist_.cmd_1, 0);
    renderC('{');
    ppCmd(p->u.cmdlist_.cmd_2, 0);
    renderS("};");
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Cmdlist!\n");
    exit(1);
  }
}

void ppCmd(Cmd p, int _i_)
{
  switch(p->kind)
  {
  case is_Cmd:
    if (_i_ > 0) renderC(_L_PAREN);
    ppCmd_type(p->u.cmd_.cmd_type_, 0);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Cmd!\n");
    exit(1);
  }
}

void ppCmd_type(Cmd_type p, int _i_)
{
  switch(p->kind)
  {
  case is_Cmd_goto:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("goto");
    ppLabel(p->u.cmd_goto_.label_, 0);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Cmd_assign:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("assign");
    ppVariable(p->u.cmd_assign_.variable_, 0);
    renderC('=');
    ppExprecion(p->u.cmd_assign_.exprecion_, 0);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Cmd_while:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("while");
    ppExprecion(p->u.cmd_while_.exprecion_, 0);
    renderS("do");
    ppCmdlist(p->u.cmd_while_.cmdlist_, 0);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Cmd_for:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("for");
    ppExprecion(p->u.cmd_for_.exprecion_, 0);
    ppCmdlist(p->u.cmd_for_.cmdlist_, 0);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Cmd_if:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("if");
    ppExprecion(p->u.cmd_if_.exprecion_, 0);
    renderS("then");
    ppCmdlist(p->u.cmd_if_.cmdlist_1, 0);
    renderC('[');
    renderS("else");
    ppCmdlist(p->u.cmd_if_.cmdlist_2, 0);
    renderC(']');
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Cmd_output:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("Output");
    ppExprecion(p->u.cmd_output_.exprecion_, 0);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Cmd_type!\n");
    exit(1);
  }
}

void ppExprecion(Exprecion p, int _i_)
{
  switch(p->kind)
  {
  case is_Exprecion:
    if (_i_ > 0) renderC(_L_PAREN);
    ppExp(p->u.exprecion_.exp_, 0);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Exprecion!\n");
    exit(1);
  }
}

void ppExp(Exp p, int _i_)
{
  switch(p->kind)
  {
  case is_Expeq:
    if (_i_ > 0) renderC(_L_PAREN);
    ppExp(p->u.expeq_.exp_1, 0);
    renderS("==");
    ppExp(p->u.expeq_.exp_2, 2);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Expenq:
    if (_i_ > 0) renderC(_L_PAREN);
    ppExp(p->u.expenq_.exp_1, 0);
    renderS("<>");
    ppExp(p->u.expenq_.exp_2, 2);
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  case is_Expmaior:
    if (_i_ > 2) renderC(_L_PAREN);
    ppExp(p->u.expmaior_.exp_1, 2);
    renderC('>');
    ppExp(p->u.expmaior_.exp_2, 2);
    if (_i_ > 2) renderC(_R_PAREN);
    break;

  case is_Expmenor:
    if (_i_ > 2) renderC(_L_PAREN);
    ppExp(p->u.expmenor_.exp_1, 2);
    renderC('<');
    ppExp(p->u.expmenor_.exp_2, 2);
    if (_i_ > 2) renderC(_R_PAREN);
    break;

  case is_Expmaioreq:
    if (_i_ > 2) renderC(_L_PAREN);
    ppExp(p->u.expmaioreq_.exp_1, 2);
    renderS(">=");
    ppExp(p->u.expmaioreq_.exp_2, 2);
    if (_i_ > 2) renderC(_R_PAREN);
    break;

  case is_Expmenoreq:
    if (_i_ > 2) renderC(_L_PAREN);
    ppExp(p->u.expmenoreq_.exp_1, 2);
    renderS("<=");
    ppExp(p->u.expmenoreq_.exp_2, 2);
    if (_i_ > 2) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Exp!\n");
    exit(1);
  }
}

void ppProcedure(Procedure p, int _i_)
{
  switch(p->kind)
  {
  case is_Funtion:
    if (_i_ > 0) renderC(_L_PAREN);
    renderS("Procedure");
    ppIdent(p->u.funtion_.ident_, 0);
    renderC('(');
    ppVariable(p->u.funtion_.variable_, 0);
    renderC(')');
    renderS("begin");
    ppCmdlist(p->u.funtion_.cmdlist_, 0);
    renderS("end.");
    if (_i_ > 0) renderC(_R_PAREN);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Procedure!\n");
    exit(1);
  }
}

void ppInteger(Integer n, int i)
{
  char tmp[20];
  sprintf(tmp, "%d", n);
  renderS(tmp);
}
void ppDouble(Double d, int i)
{
  char tmp[24];
  sprintf(tmp, "%.15g", d);
  renderS(tmp);
}
void ppChar(Char c, int i)
{
  char tmp[4];
  sprintf(tmp, "'%c'", c);
  renderS(tmp);
}
void ppString(String s, int i)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
  bufAppendC(' ');
}
void ppIdent(String s, int i)
{
  renderS(s);
}

void shProg(Prog p)
{
  switch(p->kind)
  {
  case is_Program:
    bufAppendC('(');

    bufAppendS("Program");

    bufAppendC(' ');

    shIdent(p->u.program_.ident_);
  bufAppendC(' ');
    shDec(p->u.program_.dec_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Prog!\n");
    exit(1);
  }
}

void shId(Id p)
{
  switch(p->kind)
  {
  case is_Ident:
    bufAppendC('(');

    bufAppendS("Ident");

    bufAppendC(' ');

    shIdent_type(p->u.ident_.ident_type_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Id!\n");
    exit(1);
  }
}

void shIdent_type(Ident_type p)
{
  switch(p->kind)
  {
  case is_Idletter:

    bufAppendS("Idletter");




    break;
  case is_Iddigt:

    bufAppendS("Iddigt");




    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Ident_type!\n");
    exit(1);
  }
}

void shDec(Dec p)
{
  switch(p->kind)
  {
  case is_Block:
    bufAppendC('(');

    bufAppendS("Block");

    bufAppendC(' ');

    shLabel(p->u.block_.label_);
  bufAppendC(' ');
    shUses(p->u.block_.uses_);
  bufAppendC(' ');
    shVariable(p->u.block_.variable_);
  bufAppendC(' ');
    shType(p->u.block_.type_);
  bufAppendC(' ');
    shConstant(p->u.block_.constant_);
  bufAppendC(' ');
    shCmdlist(p->u.block_.cmdlist_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Dec!\n");
    exit(1);
  }
}

void shLabel(Label p)
{
  switch(p->kind)
  {
  case is_Label:
    bufAppendC('(');

    bufAppendS("Label");

    bufAppendC(' ');

    shIdent(p->u.label_.ident_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Label!\n");
    exit(1);
  }
}

void shUses(Uses p)
{
  switch(p->kind)
  {
  case is_Uses:
    bufAppendC('(');

    bufAppendS("Uses");

    bufAppendC(' ');

    shIdent(p->u.uses_.ident_1);
  bufAppendC(' ');
    shIdent(p->u.uses_.ident_2);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Uses!\n");
    exit(1);
  }
}

void shVariable(Variable p)
{
  switch(p->kind)
  {
  case is_Variable:
    bufAppendC('(');

    bufAppendS("Variable");

    bufAppendC(' ');

    shIdent(p->u.variable_.ident_);
  bufAppendC(' ');
    shType(p->u.variable_.type_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Variable!\n");
    exit(1);
  }
}

void shType(Type p)
{
  switch(p->kind)
  {
  case is_Type:
    bufAppendC('(');

    bufAppendS("Type");

    bufAppendC(' ');

    shType_specifier(p->u.type_.type_specifier_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Type!\n");
    exit(1);
  }
}

void shType_specifier(Type_specifier p)
{
  switch(p->kind)
  {
  case is_Tint:

    bufAppendS("Tint");




    break;
  case is_Tfloat:

    bufAppendS("Tfloat");




    break;
  case is_Tdouble:

    bufAppendS("Tdouble");




    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Type_specifier!\n");
    exit(1);
  }
}

void shConstant(Constant p)
{
  switch(p->kind)
  {
  case is_Constant:

    bufAppendS("Constant");




    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Constant!\n");
    exit(1);
  }
}

void shCmdlist(Cmdlist p)
{
  switch(p->kind)
  {
  case is_Cmdlist:
    bufAppendC('(');

    bufAppendS("Cmdlist");

    bufAppendC(' ');

    shCmd(p->u.cmdlist_.cmd_1);
  bufAppendC(' ');
    shCmd(p->u.cmdlist_.cmd_2);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Cmdlist!\n");
    exit(1);
  }
}

void shCmd(Cmd p)
{
  switch(p->kind)
  {
  case is_Cmd:
    bufAppendC('(');

    bufAppendS("Cmd");

    bufAppendC(' ');

    shCmd_type(p->u.cmd_.cmd_type_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Cmd!\n");
    exit(1);
  }
}

void shCmd_type(Cmd_type p)
{
  switch(p->kind)
  {
  case is_Cmd_goto:
    bufAppendC('(');

    bufAppendS("Cmd_goto");

    bufAppendC(' ');

    shLabel(p->u.cmd_goto_.label_);

    bufAppendC(')');

    break;
  case is_Cmd_assign:
    bufAppendC('(');

    bufAppendS("Cmd_assign");

    bufAppendC(' ');

    shVariable(p->u.cmd_assign_.variable_);
  bufAppendC(' ');
    shExprecion(p->u.cmd_assign_.exprecion_);

    bufAppendC(')');

    break;
  case is_Cmd_while:
    bufAppendC('(');

    bufAppendS("Cmd_while");

    bufAppendC(' ');

    shExprecion(p->u.cmd_while_.exprecion_);
  bufAppendC(' ');
    shCmdlist(p->u.cmd_while_.cmdlist_);

    bufAppendC(')');

    break;
  case is_Cmd_for:
    bufAppendC('(');

    bufAppendS("Cmd_for");

    bufAppendC(' ');

    shExprecion(p->u.cmd_for_.exprecion_);
  bufAppendC(' ');
    shCmdlist(p->u.cmd_for_.cmdlist_);

    bufAppendC(')');

    break;
  case is_Cmd_if:
    bufAppendC('(');

    bufAppendS("Cmd_if");

    bufAppendC(' ');

    shExprecion(p->u.cmd_if_.exprecion_);
  bufAppendC(' ');
    shCmdlist(p->u.cmd_if_.cmdlist_1);
  bufAppendC(' ');
    shCmdlist(p->u.cmd_if_.cmdlist_2);

    bufAppendC(')');

    break;
  case is_Cmd_output:
    bufAppendC('(');

    bufAppendS("Cmd_output");

    bufAppendC(' ');

    shExprecion(p->u.cmd_output_.exprecion_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Cmd_type!\n");
    exit(1);
  }
}

void shExprecion(Exprecion p)
{
  switch(p->kind)
  {
  case is_Exprecion:
    bufAppendC('(');

    bufAppendS("Exprecion");

    bufAppendC(' ');

    shExp(p->u.exprecion_.exp_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Exprecion!\n");
    exit(1);
  }
}

void shExp(Exp p)
{
  switch(p->kind)
  {
  case is_Expeq:
    bufAppendC('(');

    bufAppendS("Expeq");

    bufAppendC(' ');

    shExp(p->u.expeq_.exp_1);
  bufAppendC(' ');
    shExp(p->u.expeq_.exp_2);

    bufAppendC(')');

    break;
  case is_Expenq:
    bufAppendC('(');

    bufAppendS("Expenq");

    bufAppendC(' ');

    shExp(p->u.expenq_.exp_1);
  bufAppendC(' ');
    shExp(p->u.expenq_.exp_2);

    bufAppendC(')');

    break;
  case is_Expmaior:
    bufAppendC('(');

    bufAppendS("Expmaior");

    bufAppendC(' ');

    shExp(p->u.expmaior_.exp_1);
  bufAppendC(' ');
    shExp(p->u.expmaior_.exp_2);

    bufAppendC(')');

    break;
  case is_Expmenor:
    bufAppendC('(');

    bufAppendS("Expmenor");

    bufAppendC(' ');

    shExp(p->u.expmenor_.exp_1);
  bufAppendC(' ');
    shExp(p->u.expmenor_.exp_2);

    bufAppendC(')');

    break;
  case is_Expmaioreq:
    bufAppendC('(');

    bufAppendS("Expmaioreq");

    bufAppendC(' ');

    shExp(p->u.expmaioreq_.exp_1);
  bufAppendC(' ');
    shExp(p->u.expmaioreq_.exp_2);

    bufAppendC(')');

    break;
  case is_Expmenoreq:
    bufAppendC('(');

    bufAppendS("Expmenoreq");

    bufAppendC(' ');

    shExp(p->u.expmenoreq_.exp_1);
  bufAppendC(' ');
    shExp(p->u.expmenoreq_.exp_2);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Exp!\n");
    exit(1);
  }
}

void shProcedure(Procedure p)
{
  switch(p->kind)
  {
  case is_Funtion:
    bufAppendC('(');

    bufAppendS("Funtion");

    bufAppendC(' ');

    shIdent(p->u.funtion_.ident_);
  bufAppendC(' ');
    shVariable(p->u.funtion_.variable_);
  bufAppendC(' ');
    shCmdlist(p->u.funtion_.cmdlist_);

    bufAppendC(')');

    break;

  default:
    fprintf(stderr, "Error: bad kind field when showing Procedure!\n");
    exit(1);
  }
}

void shInteger(Integer i)
{
  char tmp[20];
  sprintf(tmp, "%d", i);
  bufAppendS(tmp);
}
void shDouble(Double d)
{
  char tmp[24];
  sprintf(tmp, "%.15g", d);
  bufAppendS(tmp);
}
void shChar(Char c)
{
  bufAppendC('\'');
  bufAppendC(c);
  bufAppendC('\'');
}
void shString(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}
void shIdent(String s)
{
  bufAppendC('\"');
  bufAppendS(s);
  bufAppendC('\"');
}

void bufAppendS(const char *s)
{
  size_t len = strlen(s);
  size_t n;
  while (cur_ + len >= buf_size)
  {
    buf_size *= 2; /* Double the buffer size */
    resizeBuffer();
  }
  for(n = 0; n < len; n++)
  {
    buf_[cur_ + n] = s[n];
  }
  cur_ += len;
  buf_[cur_] = 0;
}
void bufAppendC(const char c)
{
  if (cur_ + 1 >= buf_size)
  {
    buf_size *= 2; /* Double the buffer size */
    resizeBuffer();
  }
  buf_[cur_] = c;
  cur_++;
  buf_[cur_] = 0;
}
void bufReset(void)
{
  cur_ = 0;
  buf_size = BUFFER_INITIAL;
  resizeBuffer();
  memset(buf_, 0, buf_size);
}
void resizeBuffer(void)
{
  char *temp = (char *) malloc(buf_size);
  if (!temp)
  {
    fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
    exit(1);
  }
  if (buf_)
  {
    strncpy(temp, buf_, buf_size); /* peteg: strlcpy is safer, but not POSIX/ISO C. */
    free(buf_);
  }
  buf_ = temp;
}
char *buf_;
size_t cur_, buf_size;

