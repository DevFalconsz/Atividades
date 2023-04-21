/*– Faça um programa para ler dois números inteiros M e N e determinar se M é divisível por N*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//Declaração de variáveis
	int m, n;
	
	//Atribuindo valores a essas variáveis
	printf("Digite um valor para M: ");
	scanf("%d", &m);
	
	printf("Digite um valor para N: ");
	scanf("%d", &n);
	
	//Fazendo os cálculos para definir se um é divisível por outro
	if(m % n == 0)
	{
		printf("M eh divisivel por N!\n");
	}
	else
	{
		printf("M NAO eh divisivel por N!\n");
	}
	
	//Finalização do programa
	system("PAUSE");
	return 0;	
}

