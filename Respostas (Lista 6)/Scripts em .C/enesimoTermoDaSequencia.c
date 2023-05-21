//Elabore um algoritmo para dado um número N, inteiro e positivo, imprimir o N-ésimo elemento da seguinte sequência: 1, 3, 6, 10, 15,...

#include<stdlib.h>
#include<stdio.h>

int main(){
	//Declaração de variáveis
	int n, result, i = 2;
	
	//Atribuição de valores
	printf("Escreva um valor para N: ");
	scanf("%d", &n);
	
	//Laço de repetição para determinar o termo pedido da sequência
	for(i; i <= n; i++){
		result = i * (i + 1) / 2;
	}
	
	//Resultado final
	printf("\n\nElemento %d da sequence: %d\n\n", i - 1, result);
}