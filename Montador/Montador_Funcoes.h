#include <stdio.h>
#include <stdlib.h>

void Assembly_Leitura (FILE** Entrada_asm, char* instrucao, char* destino, char* parametro1, char* parametro2);
void Assembly_Monta(FILE** Saida_asm, char* instrucao, char* destino, char* parametro1, char* parametro2);
void Remove_Virgula(char* entrada);
void Registrador_Maquina(char* entrada, char* saida);
void Inteiro_Binario(int entrada, char* saida, int bin_tam);
