//Dado um número N inteiro e positivo, elabore um algoritmo para imprimir os N primeiros termos da seguinte sequência oscilante: 1, -2, 3, -4, 5, -6 .... 

#include<stdlib.h>
#include<stdio.h>

int main(){
	int n, number = 0;
	
	printf("Digite quantos termos vc quer ver: ");
	scanf("%d", &n);
	
	for(int i = 1; i < n + 1; i++){
		number++;
		if(number % 2 != 0){
			printf("Termo %d sendo ele: %d\n\n", i, number);
		}
		else{
			printf("Termo %d sendo ele: -%d\n\n", i, number);
		}
	}
}