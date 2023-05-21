// Elabore um algoritmo para imprimir os N primeiro termos de uma Progressão Aritmética (P.A.) definida por a1 = 2 e a razão = 3. 

#include<stdlib.h>
#include<stdio.h>

int main(){
	//Declaração de variáveis
	int terms, result;
	
	//Atribuição de valores
	printf("Digite quantos termos necessita para a1 = 2 e a razao = 3: ");
	scanf("%d", &terms);

	//Laço de repetição apra calcular todos os termos até o termo indicado na variável terms
	for(int i = 0; i < terms; i++){
		result = 2 + (i - 1) * 3;
		printf("Termo: %d\n\n", result);
	}
}