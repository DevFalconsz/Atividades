/*Recomendam-se estudantes para bolsas de estudo em função de seu desempenho anterior. 
A natureza das recomendações é baseada na seguinte tabela: 
Média Recomendação 
Média = 9,0 Altamente recomendado 
8,0 = Média < 9,0 Fortemente recomendado 
7,0 = Média < 8,0 Recomendado 
Média < 7,0 Não recomendado
Faça um programa para ler o nome e a média de um aluno e determinar sua recomendação. 
O programa deverá exibir a 
seguinte mensagem: 
O aluno ____________ é __________________. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	//Declaração de variáveis
	float media;
	char nome[90];
	
	//Atribuindo valores a essas variáveis
	printf("Me diga o seu nome: ");
	scanf("%s", &nome);
	
	printf("Me indique o valor da sua ultima media: ");
	scanf("%f", &media);
	
	//Fazendo verificações de bolsas
	if(media >= 9.0)
	{
		//Resutlado FInal para esse caso
		printf("O aluno %s eh Altamente recomendado.\n", nome);
	}
	else if(media >= 8.0 || media < 9.0)
	{
		//Resutlado FInal para esse caso
		printf("O aluno %s eh Fortemente recomendado.\n", nome);
	}
	else if(media >= 7.0 || media < 8.0)
	{
		//Resutlado FInal para esse caso
		printf("O aluno %s eh Recomendado.\n", nome);
	}
	else if(media < 7.0)
	{
		//Resutlado FInal para esse caso
		printf("O aluno %s eh NAO recomendado.\n", nome);
	}
	
	//Finalização do programa
	system("PAUSE");
	return 0;
}
