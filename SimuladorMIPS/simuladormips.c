#include <stdlib.h>
#include "simuladormips.h"
#include "intrucoesmips.h"
#include "auxiliary.h"

void MIPSSIM_Initialize (REGISTER_SET* set){
	set->reg = (int*) malloc(18 * sizeof(int));
}
void MIPSSIM_READ_R(FILE** input, R_TYPE* instruction){
	fscanf(*input, "%s %s %s %s %s %s", instruction->op, instruction->rs, instruction->rt, instruction->rd, instruction->shamt, instruction->funct);
}

void MIPSSIM_READ_I(FILE** input, I_TYPE* instruction){
	fscanf(*input, "%s %s %s %s", instruction->op, instruction->rs, instruction->rt, instruction->Immediate);
}

void MIPSSIM_READ_J(FILE** input, J_TYPE* instruction){
	fscanf(*input, "%s %s", instruction->op, instruction->addr);
}

void ADD(char* rs, char* rt, char* rd){

}