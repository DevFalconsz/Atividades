//exerc�cio 1

#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declara��o de vari�veis
	float numerador = 1.0, denominador = 1.0, soma, number;
	int i;
	
	//La�o de repeti��o at� 50 denominadores
	for (i = 1; i <= 50; i++){
		number = numerador / denominador;
		soma += number;
		numerador += 2.0;
		denominador++;
	}
	
	//Exibi��o do resultado final
	printf("Resultado final: %.2f", soma);
}
