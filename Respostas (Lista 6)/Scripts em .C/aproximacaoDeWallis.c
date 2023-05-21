//Elabore um algoritmo para dado um número N, inteiro e positivo, calcular o valor aproximado, com N termos, da série de Wallis:

#include<stdlib.h>
#include<stdio.h>

int main(){
	float result, n;
	
	printf("Me diga um valor para calcular a aproximacao: ");
	scanf("%f", &n);
	
	for(int i = 1; i <= n; i++){
		result = (2 * n / (2 * n - 1)) * (2 * n / (2 * n + 1));
	}
	
	printf("\n\nO valor da aproximacao eh de: %f\n\n", result);
}