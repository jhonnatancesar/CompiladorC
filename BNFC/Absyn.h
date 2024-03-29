/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef ABSYN_HEADER
#define ABSYN_HEADER

/* strdup was not in the ISO C standard before 6/2019 (C2x), but in POSIX 1003.1.
 * See: https://en.cppreference.com/w/c/experimental/dynamic/strdup
 * Setting _POSIX_C_SOURCE to 200809L activates strdup in string.h.
 */
#define _POSIX_C_SOURCE 200809L

#include <stddef.h>  /* NULL */
#include <string.h>  /* strdup */

/* C++ Abstract Syntax Interface.*/

/********************   TypeDef Section    ********************/

typedef int Integer;
typedef char Char;
typedef double Double;
typedef char* String;
typedef char* Ident;
typedef char* Unsigned;
typedef char* Long;
typedef char* UnsignedLong;
typedef char* Hexadecimal;
typedef char* HexUnsigned;
typedef char* HexLong;
typedef char* HexUnsLong;
typedef char* Octal;
typedef char* OctalUnsigned;
typedef char* OctalLong;
typedef char* OctalUnsLong;
typedef char* CDouble;
typedef char* CFloat;
typedef char* CLongDouble;

/********************   Forward Declarations    ***********************/
struct Prog_;
typedef struct Prog_ *Prog;

struct Id_;
typedef struct Id_ *Id;

struct Ident_type_;
typedef struct Ident_type_ *Ident_type;

struct Dec_;
typedef struct Dec_ *Dec;

struct Label_;
typedef struct Label_ *Label;

struct Uses_;
typedef struct Uses_ *Uses;

struct Variable_;
typedef struct Variable_ *Variable;

struct Type_;
typedef struct Type_ *Type;

struct Type_specifier_;
typedef struct Type_specifier_ *Type_specifier;

struct Constant_;
typedef struct Constant_ *Constant;

struct Cmdlist_;
typedef struct Cmdlist_ *Cmdlist;

struct Cmd_;
typedef struct Cmd_ *Cmd;

struct Cmd_type_;
typedef struct Cmd_type_ *Cmd_type;

struct Exp_;
typedef struct Exp_ *Exp;

struct Procedure_;
typedef struct Procedure_ *Procedure;

struct Assignment_op_;
typedef struct Assignment_op_ *Assignment_op;

/********************   Abstract Syntax Classes    ********************/

struct Prog_
{
  enum { is_Program } kind;
  union
  {
    struct { Dec dec_; Ident ident_; } program_;
  } u;
};

Prog make_Program(Ident p0, Dec p1);

struct Id_
{
  enum { is_Ident } kind;
  union
  {
    struct { Ident_type ident_type_; } ident_;
  } u;
};

Id make_Ident(Ident_type p0);

struct Ident_type_
{
  enum { is_Idletter, is_Iddigt } kind;
  union
  {
  } u;
};

Ident_type make_Idletter(void);
Ident_type make_Iddigt(void);

struct Dec_
{
  enum { is_Block } kind;
  union
  {
    struct { Cmdlist cmdlist_; Constant constant_; Label label_; Type type_; Uses uses_; Variable variable_; } block_;
  } u;
};

Dec make_Block(Label p0, Uses p1, Variable p2, Type p3, Constant p4, Cmdlist p5);

struct Label_
{
  enum { is_Label } kind;
  union
  {
    struct { Ident ident_; } label_;
  } u;
};

Label make_Label(Ident p0);

struct Uses_
{
  enum { is_Uses } kind;
  union
  {
    struct { Ident ident_1, ident_2; } uses_;
  } u;
};

Uses make_Uses(Ident p0, Ident p1);

struct Variable_
{
  enum { is_Variable } kind;
  union
  {
    struct { Ident ident_; Type type_; } variable_;
  } u;
};

Variable make_Variable(Ident p0, Type p1);

struct Type_
{
  enum { is_Type } kind;
  union
  {
    struct { Type_specifier type_specifier_; } type_;
  } u;
};

Type make_Type(Type_specifier p0);

struct Type_specifier_
{
  enum { is_Tint, is_Tfloat, is_Tdouble } kind;
  union
  {
  } u;
};

Type_specifier make_Tint(void);
Type_specifier make_Tfloat(void);
Type_specifier make_Tdouble(void);

struct Constant_
{
  enum { is_Constant } kind;
  union
  {
  } u;
};

Constant make_Constant(void);

struct Cmdlist_
{
  enum { is_Cmdlist } kind;
  union
  {
    struct { Cmd cmd_1, cmd_2; } cmdlist_;
  } u;
};

Cmdlist make_Cmdlist(Cmd p0, Cmd p1);

struct Cmd_
{
  enum { is_Cmd } kind;
  union
  {
    struct { Cmd_type cmd_type_; } cmd_;
  } u;
};

Cmd make_Cmd(Cmd_type p0);

struct Cmd_type_
{
  enum { is_Cmd_goto, is_Cmd_assign, is_Cmd_while, is_Cmd_for, is_Cmd_if, is_Cmd_output } kind;
  union
  {
    struct { Label label_; } cmd_goto_;
    struct { Exp exp_; Variable variable_; } cmd_assign_;
    struct { Cmdlist cmdlist_; Exp exp_; } cmd_while_;
    struct { Cmdlist cmdlist_; Exp exp_; } cmd_for_;
    struct { Cmdlist cmdlist_1, cmdlist_2; Exp exp_; } cmd_if_;
    struct { Exp exp_; } cmd_output_;
  } u;
};

Cmd_type make_Cmd_goto(Label p0);
Cmd_type make_Cmd_assign(Variable p0, Exp p1);
Cmd_type make_Cmd_while(Exp p0, Cmdlist p1);
Cmd_type make_Cmd_for(Exp p0, Cmdlist p1);
Cmd_type make_Cmd_if(Exp p0, Cmdlist p1, Cmdlist p2);
Cmd_type make_Cmd_output(Exp p0);

struct Exp_
{
  enum { is_Ecomma, is_Eassign, is_Econdition, is_Elor, is_Eland, is_Ebitor, is_Ebitexor, is_Ebitand, is_Eeq, is_Eneq, is_Elthen, is_Egrthen, is_Ele, is_Ege, is_Eleft, is_Eright, is_Eplus, is_Eminus, is_Etimes, is_Ediv, is_Emod, is_Epreinc, is_Epredec, is_Earray, is_Efunk, is_Efunkpar, is_Eselect, is_Epoint, is_Epostinc, is_Epostdec, is_Evar, is_Econst, is_Estring } kind;
  union
  {
    struct { Exp exp_1, exp_2; } ecomma_;
    struct { Assignment_op assignment_op_; Exp exp_1, exp_2; } eassign_;
    struct { Exp exp_1, exp_2, exp_3; } econdition_;
    struct { Exp exp_1, exp_2; } elor_;
    struct { Exp exp_1, exp_2; } eland_;
    struct { Exp exp_1, exp_2; } ebitor_;
    struct { Exp exp_1, exp_2; } ebitexor_;
    struct { Exp exp_1, exp_2; } ebitand_;
    struct { Exp exp_1, exp_2; } eeq_;
    struct { Exp exp_1, exp_2; } eneq_;
    struct { Exp exp_1, exp_2; } elthen_;
    struct { Exp exp_1, exp_2; } egrthen_;
    struct { Exp exp_1, exp_2; } ele_;
    struct { Exp exp_1, exp_2; } ege_;
    struct { Exp exp_1, exp_2; } eleft_;
    struct { Exp exp_1, exp_2; } eright_;
    struct { Exp exp_1, exp_2; } eplus_;
    struct { Exp exp_1, exp_2; } eminus_;
    struct { Exp exp_1, exp_2; } etimes_;
    struct { Exp exp_1, exp_2; } ediv_;
    struct { Exp exp_1, exp_2; } emod_;
    struct { Exp exp_; } epreinc_;
    struct { Exp exp_; } epredec_;
    struct { Exp exp_1, exp_2; } earray_;
    struct { Exp exp_; } efunk_;
    struct { Exp exp_1, exp_2; } efunkpar_;
    struct { Exp exp_; Ident ident_; } eselect_;
    struct { Exp exp_; Ident ident_; } epoint_;
    struct { Exp exp_; } epostinc_;
    struct { Exp exp_; } epostdec_;
    struct { Ident ident_; } evar_;
    struct { Constant constant_; } econst_;
    struct { String string_; } estring_;
  } u;
};

Exp make_Ecomma(Exp p0, Exp p1);
Exp make_Eassign(Exp p0, Assignment_op p1, Exp p2);
Exp make_Econdition(Exp p0, Exp p1, Exp p2);
Exp make_Elor(Exp p0, Exp p1);
Exp make_Eland(Exp p0, Exp p1);
Exp make_Ebitor(Exp p0, Exp p1);
Exp make_Ebitexor(Exp p0, Exp p1);
Exp make_Ebitand(Exp p0, Exp p1);
Exp make_Eeq(Exp p0, Exp p1);
Exp make_Eneq(Exp p0, Exp p1);
Exp make_Elthen(Exp p0, Exp p1);
Exp make_Egrthen(Exp p0, Exp p1);
Exp make_Ele(Exp p0, Exp p1);
Exp make_Ege(Exp p0, Exp p1);
Exp make_Eleft(Exp p0, Exp p1);
Exp make_Eright(Exp p0, Exp p1);
Exp make_Eplus(Exp p0, Exp p1);
Exp make_Eminus(Exp p0, Exp p1);
Exp make_Etimes(Exp p0, Exp p1);
Exp make_Ediv(Exp p0, Exp p1);
Exp make_Emod(Exp p0, Exp p1);
Exp make_Epreinc(Exp p0);
Exp make_Epredec(Exp p0);
Exp make_Earray(Exp p0, Exp p1);
Exp make_Efunk(Exp p0);
Exp make_Efunkpar(Exp p0, Exp p1);
Exp make_Eselect(Exp p0, Ident p1);
Exp make_Epoint(Exp p0, Ident p1);
Exp make_Epostinc(Exp p0);
Exp make_Epostdec(Exp p0);
Exp make_Evar(Ident p0);
Exp make_Econst(Constant p0);
Exp make_Estring(String p0);

struct Procedure_
{
  enum { is_Funtion } kind;
  union
  {
    struct { Cmdlist cmdlist_; Ident ident_; Variable variable_; } funtion_;
  } u;
};

Procedure make_Funtion(Ident p0, Variable p1, Cmdlist p2);

struct Assignment_op_
{
  enum { is_Assign, is_AssignMul, is_AssignDiv, is_AssignMod, is_AssignAdd, is_AssignSub, is_AssignLeft, is_AssignRight, is_AssignAnd, is_AssignXor, is_AssignOr } kind;
  union
  {
  } u;
};

Assignment_op make_Assign(void);
Assignment_op make_AssignMul(void);
Assignment_op make_AssignDiv(void);
Assignment_op make_AssignMod(void);
Assignment_op make_AssignAdd(void);
Assignment_op make_AssignSub(void);
Assignment_op make_AssignLeft(void);
Assignment_op make_AssignRight(void);
Assignment_op make_AssignAnd(void);
Assignment_op make_AssignXor(void);
Assignment_op make_AssignOr(void);

/***************************   Cloning   ******************************/

Prog clone_Prog(Prog p);
Id clone_Id(Id p);
Ident_type clone_Ident_type(Ident_type p);
Dec clone_Dec(Dec p);
Label clone_Label(Label p);
Uses clone_Uses(Uses p);
Variable clone_Variable(Variable p);
Type clone_Type(Type p);
Type_specifier clone_Type_specifier(Type_specifier p);
Constant clone_Constant(Constant p);
Cmdlist clone_Cmdlist(Cmdlist p);
Cmd clone_Cmd(Cmd p);
Cmd_type clone_Cmd_type(Cmd_type p);
Exp clone_Exp(Exp p);
Procedure clone_Procedure(Procedure p);
Assignment_op clone_Assignment_op(Assignment_op p);

/********************   Recursive Destructors    **********************/

/* These free an entire abstract syntax tree
 * including all subtrees and strings.
 *
 * Will not work properly if there is sharing in the tree,
 * i.e., when some pointers are aliased.  In this case
 * it will attempt to free the same memory twice.
 */

void free_Prog(Prog p);
void free_Id(Id p);
void free_Ident_type(Ident_type p);
void free_Dec(Dec p);
void free_Label(Label p);
void free_Uses(Uses p);
void free_Variable(Variable p);
void free_Type(Type p);
void free_Type_specifier(Type_specifier p);
void free_Constant(Constant p);
void free_Cmdlist(Cmdlist p);
void free_Cmd(Cmd p);
void free_Cmd_type(Cmd_type p);
void free_Exp(Exp p);
void free_Procedure(Procedure p);
void free_Assignment_op(Assignment_op p);


#endif
