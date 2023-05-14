//Faça um programa para exibir os quadrados dos números inteiros de 15 a 200

#include <stdlib.h>
#include <stdio.h>

int main(){
	int number = 15;
	int quad;
	
	quad = number * number;
	printf("Numero: %d\n\n", quad);
	
	while(number != 200){
		number++;
		quad = number * number;
		printf("Numero: %d\n\n", quad);
	}

	return 0;
}