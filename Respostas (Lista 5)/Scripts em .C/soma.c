//Faça um programa para calcular e exibir a soma dos cem primeiros números inteiros (1+2+3+4+5+...+99+100). 

#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int number = 0;
	
	while(number != 100){
		number++;
		printf("Numero: %d\n\n", number);
	}

	return 0;
}