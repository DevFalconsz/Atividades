//Enunciado: Escreva um algoritmo que leia um vetor com 15 posições de  números inteiros. Em seguida, escreva somente os números  positivos que se encontram no vetor.

#include <stdio.h>

int main()
{
	int array[15];
	
	for(int i = 0; i < 15; i++){
		printf("Digite o numero %d: ", i+1);
		scanf("%d", &array[i]);
	}
	
	printf("\nOs positivos são:\n");	
	for(int i = 0; i < 15; i++){
		int number = array[i];
		if(number > 0){
			printf("%d\n", array[i]);
		}
	}
	
    return 0;
}