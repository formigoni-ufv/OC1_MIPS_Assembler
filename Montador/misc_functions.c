#include "misc_functions.h"

void Remove_Virgula(char* entrada){
	int i=0;

	while(entrada[i] != ',' && entrada[i] != '\0'){
		i++;
	}

	entrada[i] = '\0';
}

void Inteiro_Binario(int entrada, char* saida, int bin_tam){
	int r, i, j = 0;

	for(i=bin_tam-1; i>=0; i--){

		r = entrada >> i;

		if(r & 1){
			saida[j] = '1';
			j++;
		}else{
			saida[j] = '0';
			j++;
		}
	}
	saida[j] = '\0';

}