//Elabore um algoritmo para imprimir os N primeiros números pares positivos. O usuário deverá inserir um número (N) e o 
//algoritmo deverá imprimir essa quantidade N de números pares positivos. Exemplo: N 8, ou seja imprimir os oito primeiros 
//números pares positivos, sendo eles: 0 2 4 6 8 10 12 14. 

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declaração de variáveis
	int qtd, number = 0;
	
	//Atribuição de valores
	printf("Me diga a quantidade de numebrs pares que quer imprimir: ");
	scanf("%d", &qtd);
	
	//Imprimindo o primeiro par de acordo com o enunciado
	printf("\n\nPar: %d\n\n", number);
	
	//Fazendo o laço de repetição pra repetir até que o contador (index - i) permaneça menor que a quantidade digitada e sempre adicionando de 2 em dois
	for(int i = 0; i < qtd - 1; i++){
		printf("Par: %d\n\n", number += 2);
	}
}
