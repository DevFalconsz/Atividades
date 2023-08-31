//Enunciado: Crie um algoritmo que leia um vetor de 10 números inteiros. Em seguida, calcule e escreva o somatório dos valores deste vetor.

#include <stdio.h>

int main()
{
	float array[10], soma;
	
	for(int i = 0; i < 10; i++){
		printf("Digite o numero %d: ", i+1);
		scanf("%f", &array[i]);
	}
	
	for(int i = 0; i < 10; i++){
		soma += array[i];
	}
	
	printf("\nO resultado da soma eh: %.2f", soma);

    return 0;
}