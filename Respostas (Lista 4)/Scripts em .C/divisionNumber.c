/*� Fa�a um programa para ler dois n�meros inteiros M e N e determinar se M � divis�vel por N*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//Declara��o de vari�veis
	int m, n;
	
	//Atribuindo valores a essas vari�veis
	printf("Digite um valor para M: ");
	scanf("%d", &m);
	
	printf("Digite um valor para N: ");
	scanf("%d", &n);
	
	//Fazendo os c�lculos para definir se um � divis�vel por outro
	if(m % n == 0)
	{
		printf("M eh divisivel por N!\n");
	}
	else
	{
		printf("M NAO eh divisivel por N!\n");
	}
	
	//Finaliza��o do programa
	system("PAUSE");
	return 0;	
}

