//O máximo divisor comum de dois inteiros é o maior número que divide ambos sem deixar resto. 
//Escreva um programa que lê dois inteiros e calcula o seu máximo divisor comum.

#include <stdlib.h>
#include <stdio.h>

int main(){
	int number_one, number_two, i, mdc;
	
	printf("Digite o primeiro number pro M.D.C.: ");
	scanf("%d", &number_one);
	
	printf("Digite o segundo number pro M.D.C.: ");
	scanf("%d", &number_two);
	
	for (i = 1; i <= number_one && i <= number_two; i++) {
        if (number_one % i == 0 && number_two % i == 0) {
            mdc = i;
        }
    }
    
    printf("O M.D.C de %d e %d eh: %d\n", number_one, number_two, mdc);
    
	return 0;
}