//Faça um programa para solicitar ao usuário vários números inteiros e determinar qual o maior e o menor
//deles. O programa deve parar de solicitar números ao ser digitado um valor igual a zero. 

#include<stdlib.h>
#include<stdio.h>

#define MAX_SIZE 1000

int main(){
	int numero, maior, menor;

    printf("Digite um numero inteiro (0 para sair): ");
    scanf("%d", &numero);

    // Inicializa maior e menor com o primeiro número digitado
    maior = numero;
    menor = numero;
	
	//Entrando em loop pra determinar qual foi o maior número digitado
    while (numero != 0) {
        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }

        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &numero);
    }

	//Resultado final
    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);

	//Finalização do programa
	return 0;
}