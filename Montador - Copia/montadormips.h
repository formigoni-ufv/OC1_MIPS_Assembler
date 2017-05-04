#include <stdio.h>
#include <stdlib.h>

void Assembly_Leitura (FILE** Entrada_asm, char* instrucao, char* destino, char* parametro1, char* parametro2);
void Assembly_Montagem(FILE** Saida_asm, char* instrucao, char* destino, char* parametro1, char* parametro2);
void Registrador_Maquina(char* entrada, char* saida);

