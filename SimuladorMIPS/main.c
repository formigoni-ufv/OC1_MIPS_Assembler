#include <stdio.h>
#include <stdlib.h>
#include "simuladormips.h"
#include "intrucoesmips.h"

int main(){
	char op_field[7];
	FILE* input;
	REGISTER_SET register_set;
	R_TYPE R_ins;
	I_TYPE I_ins;
	J_TYPE J_ins;

	MIPSSIM_Initialize(&register_set);
	MIPSR_INI(&R_ins);
	MIPSI_INI(&I_ins);
	MIPSJ_INI(&J_ins);

	input = fopen("source.txt", "rt");

	fscanf(input, "%s", op_field);	//Read OP
	fseek(input, -6, SEEK_CUR);		//Goes back to the beginning of the line


	if(MIPS_TYPE(op_field) == 0){	//Select inst type
		MIPSSIM_READ_R(&input, &R_ins);
	}else if(MIPS_TYPE(op_field) == 1){
		MIPSSIM_READ_I(&input, &I_ins);
	}else{
		MIPSSIM_READ_J(&input, &J_ins);
	}

	printf("%s %s %s %s %s %s\n", R_ins.op, R_ins.rs, R_ins.rt, R_ins.rd, R_ins.shamt, R_ins.funct);

	fclose(input);
	return 0;
}