#include "string.h"
#include "montadormips.h"
#include "misc_functions.h"
#include "instrucoesmips.h"

int main (){
	FILE* INPUT;
	FILE* OUTPUT;
	R_TYPE R_SET;
	I_TYPE I_SET;
	char op_temp[5];

	MIPS_RINI(&R_SET);
	MIPS_IINI(&I_SET);

	INPUT = fopen("mips.asm", "rt");
	OUTPUT = fopen("saida.txt", "wt");

	do {
		fscanf(INPUT, "%s", op_temp);
		Remove_Virgula(op_temp);

		if (MIPS_TYPE(op_temp) == 0) {
			strcpy(R_SET.op, op_temp);
			Assembler_RREAD(&INPUT, &R_SET);
			Assembler_RASSEMBLE(&R_SET);
			fprintf(OUTPUT, "%s %s %s %s %s %s\n", R_SET.op, R_SET.rs, R_SET.rt, R_SET.rd, R_SET.shamt, R_SET.funct);
		} else {
			strcpy(I_SET.op, op_temp);
			Assembler_IREAD(&INPUT, &I_SET);
			Assembler_IASSEMBLE(&I_SET);
			fprintf(OUTPUT, "%s %s %s %s\n", I_SET.op, I_SET.rs, I_SET.rt, I_SET.Immediate);
		}
	}while(!feof(INPUT));

	fclose(INPUT);
	fclose(OUTPUT);
	return 0;
}