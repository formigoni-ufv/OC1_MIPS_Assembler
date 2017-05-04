#include <stdio.h>
#include <stdlib.h>
#include "instrucoesmips.h"

void Assembler_RREAD(FILE** input, R_TYPE* instruction);
void Assembler_IREAD(FILE** input, I_TYPE* instruction);
void Assembler_RBIN(R_TYPE* instruction);
void Assembler_IBIN(I_TYPE* instruction);
void Assembler_REGBIN(char* entrada, char* saida);
void Assembler_RASSEMBLE(R_TYPE* instruction);
void Assembler_IASSEMBLE(I_TYPE* instruction);

