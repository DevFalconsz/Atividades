/*Escrever um algoritmo que leia 3 n�meros inteiros e que mostre o maior deles, supondo que todos sejam distintos.*/

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	//Declara��o de vari�veis
	int number_one, number_two, number_three, maior;
	
	//Atribuindo valores a essas vari�veis
	printf("Diga um valor para A: ");
	scanf("%d", &number_one);
	
	printf("Diga um valor para B: ");
	scanf("%d", &number_two);
	
	printf("Diga um valor para C: ");
	scanf("%d", &number_three);
	
	//Area de c�lculos
	if (number_one > number_two && number_one > number_three) 
	{
      maior = number_one;
	} 
	else if (number_two > number_one && number_two > number_three) 
	{
      maior = number_two;
	} 
	else 
	{
      maior = number_three;
	}

	printf("O maior numero eh: %d \n", maior);
	
	//Finalização do programa
	system("PAUSE");
	return 0;	
}

