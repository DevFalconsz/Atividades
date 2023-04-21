/*O Futebol Clube do Recife deseja aumentar o sal�rio de seus jogadores. O ajuste salarial deve obedecer � seguinte tabela: 
Sal�rio Atual A��o 
at� R$ 900,00 aumento de 20% 
Acima de R$ 900,00 at� R$ 1.300,00 aumento de 15% 
Acima de R$ 1.300,00 at� R$ 1.800,00 aumento de 10%
acima de 1.800,00 aumento de 5% 
Fa�a um programa ler o nome de um jogador e seu sal�rio atual e calcular o seu aumento e seu novo sal�rio. O programa 
dever� exibir a seguinte frase: 
O jogador ___________ ter� aumento de R$ __________ e passar� a receber R$____________.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	//Declara��o de vari�veis
	float salario, aumento, salario_final;
	char nome[50];
	
	//Atribuindo valores a essas variavies
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite o seu salario atual: R$");
	scanf("%f", &salario);
	
	//Verifica��o de aumento de cada sal�rio
	if(salario <= 900)
	{
		//Resultado Final para essa situa��o
		aumento = salario * 0.20;
		salario_final = salario + aumento;
		printf("\nO jogador %s tera aumento de R$%.2f e passara a receber R$%.2f.\n", nome, aumento, salario_final);
	}
	else if(salario > 900 && salario <= 1300)
	{
		//Resultado Final para essa situa��o
		aumento = salario * 0.15;
		salario_final = salario + aumento;
		printf("\nO jogador %s tera aumento de R$%.2f e passara a receber R$%.2f.\n", nome, aumento, salario_final);
	}
	else if(salario > 1300 && salario <= 1800)
	{
		//Resultado Final para essa situa��o
		aumento = salario * 0.10;
		salario_final = salario + aumento;
		printf("\nO jogador %s tera aumento de R$%.2f e passara a receber R$%.2f.\n", nome, aumento, salario_final);
	}
	else if(salario > 1800)
	{
		//Resultado Final para essa situa��o
		aumento = salario * 0.05;
		salario_final = salario + aumento;
		printf("\nO jogador %s tera aumento de R$%.2f e passara a receber R$%.2f.\n", nome, aumento, salario_final);
	}
	
	//Finaliza��o do rpograma
	system("PAUSE");
	return 0;
}
