//exercício 1

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaração de variáveis
	float numerador = 1.0, denominador = 1.0, soma, number;
	int i;
	
	//Laço de repetição até 50 denominadores
	for (i = 1; i <= 50; i++){
		number = numerador / denominador;
		soma += number;
		numerador += 2.0;
		denominador++;
	}
	
	//Exibição do resultado final
	printf("Resultado final: %.2f", soma);
}
