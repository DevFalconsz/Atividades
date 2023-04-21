/*Fazer um algoritmo que calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média do aluno, uma
mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem "reprovado", caso contrário. */

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	//Declaração de variáveis
	float nota_um, nota_dois, nota_tres, calculo;

	//Recebimento de valores de variáveis
	printf("Digite a primeira nota: ");
	scanf("%f", &nota_um);

	printf("Digite a segunda nota: ");
	scanf("%f", &nota_dois);

	printf("Digite a terceira nota: ");
	scanf("%f", &nota_tres);

	//C�lculos a serem executados
	calculo = (nota_um + nota_dois + nota_tres) / 3;
	
	//Verifica��o se de m�dia1
	if(calculo >= 6 || calculo == 6)
	{
		printf("O aluno esta aprovado com media %.2f \n", calculo);
	}
	else
	{
		printf("O aluno esta reprovado com media %.2f \n", calculo);
	}
	
	//Finalização do programa
	system("PAUSE");
	return 0;
}

