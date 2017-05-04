#include <string.h>
#include "montadormips.h"
#include "misc_functions.h"

void Assembly_Leitura(FILE** Entrada_asm, char* instrucao, char* destino, char* parametro1, char* parametro2){
	fscanf(*Entrada_asm, "%s %s %s %s\n", instrucao, destino, parametro1, parametro2);
	Remove_Virgula(instrucao);
	Remove_Virgula(destino);
	Remove_Virgula(parametro1);
	Remove_Virgula(parametro2);
}

void Assembly_Montagem(FILE** Saida_asm, char* instrucao, char* destino, char* parametro1, char* parametro2){
	char maquina_destino[6], maquina_parametro1[6], maquina_parametro2[6];
	Registrador_Maquina(destino, maquina_destino);
	Registrador_Maquina(parametro1, maquina_parametro1);
	Registrador_Maquina(parametro2, maquina_parametro2);

	if(!strcmp(instrucao, "add")){
		fprintf(*Saida_asm, "000000 ");
		fprintf(*Saida_asm, "%s ", maquina_destino);
		fprintf(*Saida_asm, "%s ", maquina_parametro1);
		fprintf(*Saida_asm, "%s ", maquina_parametro2);
		fprintf(*Saida_asm, "00000 ");
		fprintf(*Saida_asm, "‭100000\n‬");
	}else if(!strcmp(instrucao, "sub")){
		fprintf(*Saida_asm, "000000 ");
		fprintf(*Saida_asm, "%s ", maquina_destino);
		fprintf(*Saida_asm, "%s ", maquina_parametro1);
		fprintf(*Saida_asm, "%s ", maquina_parametro2);
		fprintf(*Saida_asm, "00000 ");
		fprintf(*Saida_asm, "‭100010‬‬\n");
	}else if(!strcmp(instrucao, "and")){
		fprintf(*Saida_asm, "000000 ");
		fprintf(*Saida_asm, "%s ", maquina_destino);
		fprintf(*Saida_asm, "%s ", maquina_parametro1);
		fprintf(*Saida_asm, "%s ", maquina_parametro2);
		fprintf(*Saida_asm, "00000 ");
		fprintf(*Saida_asm, "‭100100‬‬‬\n");
	}else if(!strcmp(instrucao, "or")){
		fprintf(*Saida_asm, "000000 ");
		fprintf(*Saida_asm, "%s ", maquina_destino);
		fprintf(*Saida_asm, "%s ", maquina_parametro1);
		fprintf(*Saida_asm, "%s ", maquina_parametro2);
		fprintf(*Saida_asm, "00000 ");
		fprintf(*Saida_asm, "‭100101\n");
	}else if(!strcmp(instrucao, "nor")){
		fprintf(*Saida_asm, "000000 ");
		fprintf(*Saida_asm, "%s ", maquina_destino);
		fprintf(*Saida_asm, "%s ", maquina_parametro1);
		fprintf(*Saida_asm, "%s ", maquina_parametro2);
		fprintf(*Saida_asm, "00000 ");
		fprintf(*Saida_asm, "‭‭100111‬\n");
	}else	if(!strcmp(instrucao, "addi")){
		char saida_inteiro[17];

		fprintf(*Saida_asm, "001000 ");
		fprintf(*Saida_asm, "%s ", maquina_destino);
		fprintf(*Saida_asm, "%s ", maquina_parametro1);
		Inteiro_Binario(atoi(parametro2), saida_inteiro, 16);
		fprintf(*Saida_asm, "%s\n", saida_inteiro);
	}else if(!strcmp(instrucao, "andi")){
		char saida_inteiro[17];

		fprintf(*Saida_asm, "001100 ");
		fprintf(*Saida_asm, "%s ", maquina_destino);
		fprintf(*Saida_asm, "%s ", maquina_parametro1);
		Inteiro_Binario(atoi(parametro2), saida_inteiro, 16);
		fprintf(*Saida_asm, "%s\n", saida_inteiro);
	}else if(!strcmp(instrucao, "ori")){
		char saida_inteiro[17];

		fprintf(*Saida_asm, "001101 ");
		fprintf(*Saida_asm, "%s ", maquina_destino);
		fprintf(*Saida_asm, "%s ", maquina_parametro1);
		Inteiro_Binario(atoi(parametro2), saida_inteiro, 16);
		fprintf(*Saida_asm, "%s\n", saida_inteiro);
	}else if(!strcmp(instrucao, "sll")){
		char saida_inteiro[17];

		fprintf(*Saida_asm, "000000 ");
		fprintf(*Saida_asm, "00000 ");
		fprintf(*Saida_asm, "%s ", maquina_destino);
		fprintf(*Saida_asm, "%s ", maquina_parametro1);
		Inteiro_Binario(atoi(parametro2), saida_inteiro, 5);
		fprintf(*Saida_asm, "%s ", saida_inteiro);
		fprintf(*Saida_asm, "000000‬\n");
	}else if(!strcmp(instrucao, "slr")){
		char saida_inteiro[17];

		fprintf(*Saida_asm, "000000 ");
		fprintf(*Saida_asm, "00000 ");
		fprintf(*Saida_asm, "%s ", maquina_destino);
		fprintf(*Saida_asm, "%s ", maquina_parametro1);
		Inteiro_Binario(atoi(parametro2), saida_inteiro, 5);
		fprintf(*Saida_asm, "%s ", saida_inteiro);
		fprintf(*Saida_asm, "000010‬\n");
	}
}

void Registrador_Maquina(char* entrada, char* saida){
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


