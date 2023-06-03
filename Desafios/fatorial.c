// Faça um programa para calcular qualquer fatorial (limite até 170)

#include<stdlib.h>
#include<stdio.h>

int main(){
	double number = 1, i; 
	
	while(1){
		printf("Diga um number para calcular o fatorial: ");
		scanf("%Lf", &number);
		
		for(i = number; i > 1; i--){
			number *= i - 1;
		}
		
		printf("\nResultado do fatorial: %.0f\n\n", number);
	}
}

