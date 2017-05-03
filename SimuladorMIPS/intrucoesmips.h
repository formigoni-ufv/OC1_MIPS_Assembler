#ifndef SIMULADORMIPS_INTRUCOESMIPS_H
#define SIMULADORMIPS_INTRUCOESMIPS_H

typedef struct{
	char* op;
	char* rs;
	char* rt;
	char* rd;
	char* shamt;
	char* funct;
}R_TYPE;

typedef struct{
	char* op;
	char* rs;
	char* rt;
	char* Immediate;
}I_TYPE;

typedef struct{
	char* op;
	char* addr;
}J_TYPE;

void MIPSR_INI(R_TYPE* instruction);
void MIPSI_INI(I_TYPE* instruction);
void MIPSJ_INI(J_TYPE* instruction);
int MIPS_TYPE(char* op);


#endif //SIMULADORMIPS_INTRUCOESMIPS_H
