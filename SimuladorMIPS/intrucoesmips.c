#include <stdlib.h>
#include <string.h>
#include "intrucoesmips.h"

void MIPSR_INI(R_TYPE* instruction){
	instruction->op = (char*) malloc(6*sizeof(char));
	instruction->rs = (char*) malloc(5*sizeof(char));
	instruction->rt = (char*) malloc(5*sizeof(char));
	instruction->rd = (char*) malloc(5*sizeof(char));
	instruction->shamt = (char*) malloc(5*sizeof(char));
	instruction->funct = (char*) malloc(6*sizeof(char));
}

void MIPSI_INI(I_TYPE* instruction){
	instruction->op = (char*) malloc(6*sizeof(char));
	instruction->rs = (char*) malloc(5*sizeof(char));
	instruction->rt = (char*) malloc(5*sizeof(char));
	instruction->Immediate = (char*) malloc(16*sizeof(char));
}

void MIPSJ_INI(J_TYPE* instruction){
	instruction->op = (char*) malloc(6*sizeof(char));
	instruction->addr = (char*) malloc(26*sizeof(char));
}

int MIPS_TYPE(char* op){
	if(!strcmp(op, "000000")){
		return 0;
	}else if(!strcmp(op, "000010") || !strcmp(op, "000011")){
		return 2;
	}else{
		return 1;
	}
}