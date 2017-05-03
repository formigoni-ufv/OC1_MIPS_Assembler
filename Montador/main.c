#include "Montador_Funcoes.c"

int main (){
	FILE* Entrada_asm;
	FILE* Saida_asm;
	char instrucao[30], destino[30], parametro1[30], parametro2[30];

	Entrada_asm = fopen("mips.asm", "rt");
	Saida_asm = fopen("saida.txt", "wt");

	do{
		Assembly_Leitura(&Entrada_asm, instrucao, destino, parametro1, parametro2);
		Assembly_Montagem(&Saida_asm, instrucao, destino, parametro1, parametro2);
	}while(!feof(Entrada_asm));

	fclose(Entrada_asm);
	fclose(Saida_asm);
	return 0;
}


// printf("%s ", instrucao);
// printf("%s ", destino);
// printf("%s ", parametro1);
// printf("%s ", parametro2);
// putchar('\n');
