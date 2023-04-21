/*Recomendam-se estudantes para bolsas de estudo em fun��o de seu desempenho anterior. 
A natureza das recomenda��es � baseada na seguinte tabela: 
M�dia Recomenda��o 
M�dia = 9,0 Altamente recomendado 
8,0 = M�dia < 9,0 Fortemente recomendado 
7,0 = M�dia < 8,0 Recomendado 
M�dia < 7,0 N�o recomendado
Fa�a um programa para ler o nome e a m�dia de um aluno e determinar sua recomenda��o. 
O programa dever� exibir a 
seguinte mensagem: 
O aluno ____________ � __________________. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	//Declara��o de vari�veis
	float media;
	char nome[90];
	
	//Atribuindo valores a essas vari�veis
	printf("Me diga o seu nome: ");
	scanf("%s", &nome);
	
	printf("Me indique o valor da sua ultima media: ");
	scanf("%f", &media);
	
	//Fazendo verifica��es de bolsas
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
	
	//Finaliza��o do programa
	system("PAUSE");
	return 0;
}
