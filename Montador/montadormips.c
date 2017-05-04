#include <string.h>
#include "montadormips.h"
#include "instrucoesmips.h"
#include "misc_functions.h"

void Assembler_RREAD(FILE** input, R_TYPE* instruction){
	fscanf(*input, "%s %s %s\n",instruction->rd, instruction->rs, instruction->rt);
	Remove_Virgula(instruction->rd);
	Remove_Virgula(instruction->rs);
	Remove_Virgula(instruction->rt);

}

void Assembler_IREAD(FILE** input, I_TYPE* instruction){
	fscanf(*input, "%s %s %s\n", instruction->rt, instruction->rs, instruction->Immediate);
	Remove_Virgula(instruction->rs);
	Remove_Virgula(instruction->rt);
	Remove_Virgula(instruction->Immediate);
}

void Assembler_RBIN(R_TYPE* instruction){
	if(!strcmp(instruction->op, "add")){
		strcpy(instruction->op, "000000");
		strcpy(instruction->shamt, "00000");
		strcpy(instruction->funct, "100000");
		return;
	}
	if(!strcmp(instruction->op, "sub")){
		strcpy(instruction->op, "000000");
		strcpy(instruction->shamt, "00000");
		strcpy(instruction->funct, "100010");
		return;
	}
	if(!strcmp(instruction->op, "and")){
		strcpy(instruction->op, "000000");
		strcpy(instruction->shamt, "00000");
		strcpy(instruction->funct, "100100");
		return;
	}
	if(!strcmp(instruction->op, "or")){
		strcpy(instruction->op, "000000");
		strcpy(instruction->shamt, "00000");
		strcpy(instruction->funct, "100101");
		return;
	}
	if(!strcmp(instruction->op, "or")){
		strcpy(instruction->op, "000000");
		strcpy(instruction->shamt, "00000");
		strcpy(instruction->funct, "100101");
		return;
	}
	if(!strcmp(instruction->op, "nor")){
		strcpy(instruction->op, "000000");
		strcpy(instruction->shamt, "00000");
		strcpy(instruction->funct, "100111");
		return;
	}

	if(!strcmp(instruction->op, "sll")){
		char shamt[17];
		char temp[8];
		Inteiro_Binario(atoi(instruction->rt), shamt, 5);

		strcpy(temp, instruction->rs);
		strcpy(instruction->rs, instruction->rd);
		strcpy(instruction->rt, temp);

		strcpy(instruction->op, "000000");
		strcpy(instruction->shamt, shamt);
		strcpy(instruction->funct, "000000");
		return;
	}
	if(!strcmp(instruction->op, "slr")){
		char shamt[17];
		char temp[8];
		Inteiro_Binario(atoi(instruction->rt), shamt, 5);

		strcpy(temp, instruction->rs);
		strcpy(instruction->rs, instruction->rd);
		strcpy(instruction->rt, temp);

		strcpy(instruction->op, "000000");
		strcpy(instruction->shamt, shamt);
		strcpy(instruction->funct, "000010");
		return;
	}
}

void Assembler_IBIN(I_TYPE* instruction){
	if(!strcmp(instruction->op, "addi")){
		strcpy(instruction->op, "001000");
		return;
	}
	if(!strcmp(instruction->op, "andi")){
		strcpy(instruction->op, "001100");
		return;
	}
	if(!strcmp(instruction->op, "ori")){
		strcpy(instruction->op, "001101");
		return;
	}
}

void Assembler_REGBIN(char* entrada, char* saida){
	if(!strcmp(entrada, "$s0")){
		strcpy(saida, "10000");
	}else if(!strcmp(entrada, "$s1")){
		strcpy(saida, "10001");
	}else if(!strcmp(entrada, "$s2")){
		strcpy(saida, "10010");
	}else if(!strcmp(entrada, "$s3")){
		strcpy(saida, "10011");
	}else if(!strcmp(entrada, "$s4")){
		strcpy(saida, "10100");
	}else if(!strcmp(entrada, "$s5")){
		strcpy(saida, "10101");
	}else if(!strcmp(entrada, "$s6")){
		strcpy(saida, "10110");
	}else if(!strcmp(entrada, "$s7")){
		strcpy(saida, "10111");
	}else if(!strcmp(entrada, "$t0")){
		strcpy(saida, "01000");
	}else if(!strcmp(entrada, "$t1")){
		strcpy(saida, "01001");
	}else if(!strcmp(entrada, "$t2")){
		strcpy(saida, "01010");
	}else if(!strcmp(entrada, "$t3")){
		strcpy(saida, "01011");
	}else if(!strcmp(entrada, "$t4")){
		strcpy(saida, "01100");
	}else if(!strcmp(entrada, "$t5")){
		strcpy(saida, "01101");
	}else if(!strcmp(entrada, "$t6")){
		strcpy(saida, "01110");
	}else if(!strcmp(entrada, "$t7")){
		strcpy(saida, "01111");
	}else if(!strcmp(entrada, "$t8")){
		strcpy(saida, "11000");
	}else if(!strcmp(entrada, "$t9")){
		strcpy(saida, "11001");
	}else if(!strcmp(entrada, "$zero")){
		strcpy(saida, "00000");
	}else{
		return;
	}
}

void Assembler_RASSEMBLE(R_TYPE* instruction){
	char rs[6], rt[6], rd[6];
	if(strcmp(instruction->op, "sll") || strcmp(instruction->op, "slr")) {
		Assembler_RBIN(instruction);
		Assembler_REGBIN(instruction->rs, rs);
		Assembler_REGBIN(instruction->rt, rt);
		Assembler_REGBIN(instruction->rd, rd);
		strcpy(instruction->rs, rs);
		strcpy(instruction->rt, rt);
		strcpy(instruction->rd, rd);
	}else{
		Assembler_RBIN(instruction);
		Assembler_REGBIN(instruction->rs, rs);
		Assembler_REGBIN(instruction->rt, rt);
		strcpy(instruction->rs, rs);
		strcpy(instruction->rt, rt);
	}
}

void Assembler_IASSEMBLE(I_TYPE* instruction){
	char rs[6], rt[6], immediate[17];

	Inteiro_Binario(atoi(instruction->Immediate), immediate, 16);
	Assembler_IBIN(instruction);
	Assembler_REGBIN(instruction->rs, rs);
	Assembler_REGBIN(instruction->rt, rt);
	strcpy(instruction->rs, rs);
	strcpy(instruction->rt, rt);
	strcpy(instruction->Immediate, immediate);
}