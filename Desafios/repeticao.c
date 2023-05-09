//Faça um programa em C que leia os núemros A e B digitados pelo usuário e msotre na tela os pares entre eles e inclusive eles se os mesmos forem pares.

#include <stdlib.h>
#include <stdio.h>

int main(){

	int number_a;
	int number_b;
	int verificacao;
	int maior, menor;

	printf("Digite o primeiro fator: ");
	scanf("%d", &number_a);
	
	printf("Digite o segundo fator: ");
	scanf("%d", &number_b);
	
	if(number_a > number_b){
		maior = number_a;
		menor = number_b;
	}
	else{
		maior = number_b;
		menor = number_a;
	}
	
	if(number_a == menor){
		if(number_a % 2 != 0){
			if(number_b % 2 != 0){
				number_a += 1;
				printf("Numero: %d\n\n", number_a);
				verificacao = number_b - 1;
				do{
					number_a += 2;
					printf("Numero: %d\n\n", number_a);
				}while(number_a < verificacao);
			}
			else{
				number_a += 1;
				printf("Numero: %d\n\n", number_a);
				verificacao = number_b - 1;
				do{
					number_a += 2;
					printf("Numero: %d\n\n", number_a);
				}while(number_a < verificacao);
			}
		}
		else{
			if(number_b % 2 != 0){
				printf("Numero: %d\n\n", number_a);
				do{
					number_a += 2;
					printf("Numero: %d\n\n", number_a);
				}while(number_a < number_b - 2);
			}
			else{
				printf("Numero: %d\n\n", number_a);
				do{
					number_a += 2;
					printf("Numero: %d\n\n", number_a);
				}while(number_a < number_b);
			}
		}
	}
	
	else{
		if(number_b % 2 != 0){
			if(number_a % 2 != 0){
				number_b += 1;
				printf("Numero: %d\n\n", number_b);
				verificacao = number_a - 1;
				do{
					number_b += 2;
					printf("Numero: %d\n\n", number_b);
				}while(number_b < verificacao);
			}
			else{
				number_b += 1;
				printf("Numero: %d\n\n", number_b);
				verificacao = number_a - 1;
				do{
					number_b += 2;
					printf("Numero: %d\n\n", number_b);
				}while(number_b < verificacao);
			}
		}
		else{
			if(number_a % 2 != 0){
				printf("Numero: %d\n\n", number_b);
				do{
					number_b += 2;
					printf("Numero: %d\n\n", number_b);
				}while(number_b < number_a - 2);
			}
			else{
				printf("Numero: %d\n\n", number_b);
				do{
					number_b += 2;
					printf("Numero: %d\n\n", number_b);
				}while(number_b < number_a);
			}
		}
	}

	return 0;
}
