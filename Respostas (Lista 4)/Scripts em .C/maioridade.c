/*Faça um programa para ler o nome e a idade de uma pessoa e determinar se esta pessoa é ou não maior de idade (idade 
maior ou igual a 18 anos). O programa deve imprimir a seguinte frase: 
_____________ tem ________ anos e é / não é maior de idade. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
	//Declaração de variáveis
	char nome[99];
	int idade;
	
	//Atribuindo valores a essas variáveis
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	//Fazendo verificações de idade
	if(idade >= 18)
	{
		//Resultado Final
		printf("\n%s tem %d anos e eh maior de idade.\n", nome, idade);
	}
	else
	{
		//Resultado Final
		printf("\n%s tem %d anos NAO eh maior de idade.\n", nome, idade);
	}
	
	//Finalização do programa
	system("PAUSE");
	return 0;
}
