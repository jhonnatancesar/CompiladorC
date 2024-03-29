/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef PARSER_HEADER_FILE
#define PARSER_HEADER_FILE

#include <stdio.h>
#include "Absyn.h"

Prog  pProg(FILE *inp);
Prog psProg(const char *str);
Id  pId(FILE *inp);
Id psId(const char *str);
Ident_type  pIdent_type(FILE *inp);
Ident_type psIdent_type(const char *str);
Dec  pDec(FILE *inp);
Dec psDec(const char *str);
Label  pLabel(FILE *inp);
Label psLabel(const char *str);
Uses  pUses(FILE *inp);
Uses psUses(const char *str);
Variable  pVariable(FILE *inp);
Variable psVariable(const char *str);
Type  pType(FILE *inp);
Type psType(const char *str);
Type_specifier  pType_specifier(FILE *inp);
Type_specifier psType_specifier(const char *str);
Constant  pConstant(FILE *inp);
Constant psConstant(const char *str);
Cmdlist  pCmdlist(FILE *inp);
Cmdlist psCmdlist(const char *str);
Cmd  pCmd(FILE *inp);
Cmd psCmd(const char *str);
Cmd_type  pCmd_type(FILE *inp);
Cmd_type psCmd_type(const char *str);
Exp  pExp(FILE *inp);
Exp psExp(const char *str);
Exp  pExp2(FILE *inp);
Exp psExp2(const char *str);
Exp  pExp3(FILE *inp);
Exp psExp3(const char *str);
Exp  pExp4(FILE *inp);
Exp psExp4(const char *str);
Exp  pExp5(FILE *inp);
Exp psExp5(const char *str);
Exp  pExp6(FILE *inp);
Exp psExp6(const char *str);
Exp  pExp7(FILE *inp);
Exp psExp7(const char *str);
Exp  pExp8(FILE *inp);
Exp psExp8(const char *str);
Exp  pExp9(FILE *inp);
Exp psExp9(const char *str);
Exp  pExp10(FILE *inp);
Exp psExp10(const char *str);
Exp  pExp11(FILE *inp);
Exp psExp11(const char *str);
Exp  pExp12(FILE *inp);
Exp psExp12(const char *str);
Exp  pExp13(FILE *inp);
Exp psExp13(const char *str);
Exp  pExp14(FILE *inp);
Exp psExp14(const char *str);
Exp  pExp15(FILE *inp);
Exp psExp15(const char *str);
Exp  pExp16(FILE *inp);
Exp psExp16(const char *str);
Procedure  pProcedure(FILE *inp);
Procedure psProcedure(const char *str);
Assignment_op  pAssignment_op(FILE *inp);
Assignment_op psAssignment_op(const char *str);

#endif
