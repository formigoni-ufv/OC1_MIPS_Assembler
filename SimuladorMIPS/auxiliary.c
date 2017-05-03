#include <string.h>
#include "auxiliary.h"

int REG_ADDR(char* instruction){
	if(strcmp(instruction, "10000") == 0){
		return 16;
	}
	if(strcmp(instruction, "10001") == 0){
		return 17;
	}
    if(strcmp(instruction, "10010") == 0){
		return 18;
	}
	if(strcmp(instruction, "10011") == 0){
		return 19;
	}
	if(strcmp(instruction, "10100") == 0){
		return 20;
	}
	if(strcmp(instruction, "10101") == 0){
		return 21;
	}
	if(strcmp(instruction, "10110") == 0){
		return 22;
	}
	if(strcmp(instruction, "10111") == 0){
		return 23;
	}
	if(strcmp(instruction, "01000") == 0){
		return 8;
	}
	if(strcmp(instruction, "01001") == 0){
		return 9;
	}
	if(strcmp(instruction, "01010") == 0){
		return 10;
	}
	if(strcmp(instruction, "01011") == 0){
		return 11;
	}
	if(strcmp(instruction, "01100") == 0){
		return 12;
	}
	if(strcmp(instruction, "01101") == 0){
		return 13;
	}
	if(strcmp(instruction, "01110") == 0){
		return 14;
	}
	if(strcmp(instruction, "01111") == 0){
		return 15;
	}
	if(strcmp(instruction, "11000") == 0){
		return 24;
	}
	if(strcmp(instruction, "11001") == 0){
		return 25;
	}
}
