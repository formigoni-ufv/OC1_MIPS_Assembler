#include <stdlib.h>
#include <string.h>
#include "instrucoesmips.h"

void MIPS_RINI(R_TYPE* instruction){
	instruction->op = (char*) malloc(7*sizeof(char));
	instruction->rs = (char*) malloc(6*sizeof(char));
	instruction->rt = (char*) malloc(6*sizeof(char));
	instruction->rd = (char*) malloc(6*sizeof(char));
	instruction->shamt = (char*) malloc(6*sizeof(char));
	instruction->funct = (char*) malloc(7*sizeof(char));
}

void MIPS_IINI(I_TYPE* instruction){
	instruction->op = (char*) malloc(7*sizeof(char));
	instruction->rs = (char*) malloc(6*sizeof(char));
	instruction->rt = (char*) malloc(6*sizeof(char));
	instruction->Immediate = (char*) malloc(17*sizeof(char));
}

void MIPS_JINI(J_TYPE* instruction){
	instruction->op = (char*) malloc(7*sizeof(char));
	instruction->addr = (char*) malloc(27*sizeof(char));
}

int MIPS_TYPE(char* op){
	if(!strcmp(op, "add") || !strcmp(op, "sub") || !strcmp(op, "and") || !strcmp(op, "or") || !strcmp(op, "nor") || !strcmp(op, "sll") || !strcmp(op, "slr")){
		return 0;
	}else if(!strcmp(op, "addi") || !strcmp(op, "andi") || !strcmp(op, "ori")){
		return 1;
	}else{
		return 2;
	}
}