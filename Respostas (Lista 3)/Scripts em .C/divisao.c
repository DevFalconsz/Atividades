/*Desenvolver um algoritmo que leia um número inteiro e verifique se este é divisível por 5 e por 3 ao mesmo tempo.*/

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	//Declaração de variáveis
	int divisao, number;
	
	//Atribuindo valor a essa variável
	printf("Me diga um numero: ");
	scanf("%d", &number);
	
	//Area de verificações
	if(number % 3 == 0 && number % 5 == 0)
	{
		printf("Esse numero e divisivel por 3 e 5! \n");
	}
	else
	{
		printf("Ele nao e divisivel! \n");
	}
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;
}

