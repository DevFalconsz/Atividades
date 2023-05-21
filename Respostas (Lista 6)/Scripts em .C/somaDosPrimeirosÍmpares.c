//Elabore um algoritmo em que dado um número N, inteiro e positivo, obter a soma dos N primeiros ímpares. 

#include<stdlib.h>
#include<stdio.h>

int main(){
	//Declaração de variáveis
	int n, soma, number = 0;
	
	//Atribuição de valor de controle
	printf("Digite a quantidade de numbers pares que deseja calcular sua soma: ");
	scanf("%d", &n);
	
	//Laço de repetição pra somar os valores ímpares
	for(int i = 0; i < n; i++){
		number++;
		if (number % 2 > 0){
			soma += number;
		}
	}
	
	//Demonstração do resultado final na tela
	printf("\n\nA soma final deu: %d\n\n", soma);
}