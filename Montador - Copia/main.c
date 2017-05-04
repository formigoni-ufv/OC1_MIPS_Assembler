#include "montadormips.h"

int main (){
	FILE* Entrada_asm;
	FILE* Saida_asm;
	char instrucao[30], destino[30], parametro1[30], parametro2[30];

	Entrada_asm = fopen("mips.asm", "rt");
	Saida_asm = fopen("saida.txt", "wt");


	Assembly_Leitura(&Entrada_asm, instrucao, destino, parametro1, parametro2);
	Assembly_Montagem(&Saida_asm, instrucao, destino, parametro1, parametro2);


	fclose(Entrada_asm);
	fclose(Saida_asm);
	return 0;
}