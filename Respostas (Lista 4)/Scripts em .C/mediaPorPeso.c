/*A nota de um aluno em uma disciplina é a média ponderada das notas de suas duas avaliações parciais. 
A primeira avaliação parcial tem peso 2 e a segunda avaliação parcial tem peso 3. 
Se a média do aluno for maior ou igual a sete, o aluno está aprovado. 
Se a média do aluno for menor que três, o aluno está reprovado. Se a média do aluno for menor que sete e 
maior ou igual a três, o aluno irá para a recuperação. 
Faça um programa para calcular a média de um aluno em uma 
determinada disciplina e informar o seu estado final. 
O programa deverá exibir a seguinte frase: 
O aluno _____________ obteve média _________ e está ______________.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	//Declaração de variáveis
	char aluno[20];
	float nota_um, nota_dois, media;
	
	//Definindo valores a essas variáveis
	printf("Diga o nome do aluno: ");
	scanf("%s", &aluno);
	
	printf("Nota 1: ");
	scanf("%f", &nota_um);
	
	printf("Nota 2: ");
	scanf("%f", &nota_dois);
	
	//Fazendo cálculos e exibindo resultado na tela
	//Atribuindo pesos às notas
	media = (nota_um * 2 + nota_dois * 3) / 5;
	
	if(media >= 7)
	{
		//Resultado Final
		printf("\nO aluno %s obteve media %.2f e esta APROVADO.\n", aluno, media);
	}
	if(media < 3)
	{
		//Resultado Final
		printf("\nO aluno %s obteve media %.2f e esta REPROVADO.\n", aluno, media);
	}
	if(media < 7 || media == 3)
	{
		//Resultado Final
		printf("\nO aluno %s obteve media %.2f e esta EM RECUPERACAO.\n", aluno, media);
	}
	
	//Finalização do programa
	system("PAUSE");
	return 0;
}

