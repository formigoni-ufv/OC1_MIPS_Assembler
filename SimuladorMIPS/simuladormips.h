#ifndef SIMULADORMIPS_SIMULADORMIPS_H
#define SIMULADORMIPS_SIMULADORMIPS_H
#include <stdio.h>
#include "intrucoesmips.h"		//TODO mudar o nome do arquivo

typedef struct{
	int *reg;
}REGISTER_SET;

/*****************Initialize Registers*****************/
void MIPSSIM_Initialize (REGISTER_SET* set);

/******************RECEIVE INSTRUCTION****************/
void MIPSSIM_READ_R(FILE** input, R_TYPE* instruction);
void MIPSSIM_READ_I(FILE** input, I_TYPE* instruction);
void MIPSSIM_READ_J(FILE** input, J_TYPE* instruction);


/*****************PROCESS INSTRUCTION*****************/
void ADD(char* rs, char* rt, char* rd);

#endif //SIMULADORMIPS_SIMULADORMIPS_H
