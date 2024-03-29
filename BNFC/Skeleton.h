/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.h"


void visitProg(Prog p);
void visitId(Id p);
void visitIdent_type(Ident_type p);
void visitDec(Dec p);
void visitLabel(Label p);
void visitUses(Uses p);
void visitVariable(Variable p);
void visitType(Type p);
void visitType_specifier(Type_specifier p);
void visitConstant(Constant p);
void visitCmdlist(Cmdlist p);
void visitCmd(Cmd p);
void visitCmd_type(Cmd_type p);
void visitExp(Exp p);
void visitProcedure(Procedure p);
void visitAssignment_op(Assignment_op p);

void visitUnsigned(Unsigned p);void visitLong(Long p);void visitUnsignedLong(UnsignedLong p);void visitHexadecimal(Hexadecimal p);void visitHexUnsigned(HexUnsigned p);void visitHexLong(HexLong p);void visitHexUnsLong(HexUnsLong p);void visitOctal(Octal p);void visitOctalUnsigned(OctalUnsigned p);void visitOctalLong(OctalLong p);void visitOctalUnsLong(OctalUnsLong p);void visitCDouble(CDouble p);void visitCFloat(CFloat p);void visitCLongDouble(CLongDouble p);
void visitIdent(Ident i);
void visitInteger(Integer i);
void visitDouble(Double d);
void visitChar(Char c);
void visitString(String s);

#endif

