/*O Futebol Clube do Recife deseja aumentar o salário de seus jogadores. O ajuste salarial deve obedecer à seguinte tabela: 
Salário Atual Ação 
até R$ 900,00 aumento de 20% 
Acima de R$ 900,00 até R$ 1.300,00 aumento de 15% 
Acima de R$ 1.300,00 até R$ 1.800,00 aumento de 10%
acima de 1.800,00 aumento de 5% 
Faça um programa ler o nome de um jogador e seu salário atual e calcular o seu aumento e seu novo salário. O programa 
deverá exibir a seguinte frase: 
O jogador ___________ terá aumento de R$ __________ e passará a receber R$____________.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	//Declaração de variáveis
	float salario, aumento, salario_final;
	char nome[50];
	
	//Atribuindo valores a essas variavies
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite o seu salario atual: R$");
	scanf("%f", &salario);
	
	//Verificação de aumento de cada salário
	if(salario <= 900)
	{
		//Resultado Final para essa situação
		aumento = salario * 0.20;
		salario_final = salario + aumento;
		printf("\nO jogador %s tera aumento de R$%.2f e passara a receber R$%.2f.\n", nome, aumento, salario_final);
	}
	else if(salario > 900 && salario <= 1300)
	{
		//Resultado Final para essa situação
		aumento = salario * 0.15;
		salario_final = salario + aumento;
		printf("\nO jogador %s tera aumento de R$%.2f e passara a receber R$%.2f.\n", nome, aumento, salario_final);
	}
	else if(salario > 1300 && salario <= 1800)
	{
		//Resultado Final para essa situação
		aumento = salario * 0.10;
		salario_final = salario + aumento;
		printf("\nO jogador %s tera aumento de R$%.2f e passara a receber R$%.2f.\n", nome, aumento, salario_final);
	}
	else if(salario > 1800)
	{
		//Resultado Final para essa situação
		aumento = salario * 0.05;
		salario_final = salario + aumento;
		printf("\nO jogador %s tera aumento de R$%.2f e passara a receber R$%.2f.\n", nome, aumento, salario_final);
	}
	
	//Finalização do rpograma
	system("PAUSE");
	return 0;
}
