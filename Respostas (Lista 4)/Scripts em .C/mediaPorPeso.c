/*A nota de um aluno em uma disciplina � a m�dia ponderada das notas de suas duas avalia��es parciais. 
A primeira avalia��o parcial tem peso 2 e a segunda avalia��o parcial tem peso 3. 
Se a m�dia do aluno for maior ou igual a sete, o aluno est� aprovado. 
Se a m�dia do aluno for menor que tr�s, o aluno est� reprovado. Se a m�dia do aluno for menor que sete e 
maior ou igual a tr�s, o aluno ir� para a recupera��o. 
Fa�a um programa para calcular a m�dia de um aluno em uma 
determinada disciplina e informar o seu estado final. 
O programa dever� exibir a seguinte frase: 
O aluno _____________ obteve m�dia _________ e est� ______________.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	//Declara��o de vari�veis
	char aluno[20];
	float nota_um, nota_dois, media;
	
	//Definindo valores a essas vari�veis
	printf("Diga o nome do aluno: ");
	scanf("%s", &aluno);
	
	printf("Nota 1: ");
	scanf("%f", &nota_um);
	
	printf("Nota 2: ");
	scanf("%f", &nota_dois);
	
	//Fazendo c�lculos e exibindo resultado na tela
	//Atribuindo pesos �s notas
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
	
	//Finaliza��o do programa
	system("PAUSE");
	return 0;
}

