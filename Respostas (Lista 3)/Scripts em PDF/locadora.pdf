/*Uma locadora de filmes tem as seguintes regras para aluguel de fitas.
• Às segundas, terças e quintas (2,3 e 5) : desconto de 40% em relação ao preço normal; 
• Às quartas , sextas, sábados e domingos (4,6 ,7 e 1): preço normal;
• Aluguel de fitas comuns: preço normal;
• Aluguel de lançamentos: acréscimo de 15% em relação ao preço normal.

Desenvolver um algoritmo para ler o preço normal da fita alugada(em R$) e sua 
categoria(comum ou lançamento). Calcular e imprimir o preço final que será pago pela locação da fita.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() 
{
	//Declaração de variáveis
	float precoFita, desconto, valorFinal, acrescimo;
	int categoria;
	time_t now;
	struct tm *data;
	char dia_semana[20];
	char semana_portuguese[20];	

	// obtém a hora e data local
	time(&now);
	data = localtime(&now);

	// formata o dia da semana em uma string
	strftime(dia_semana, 20, "%A", data);
	
	//Escolhendo categoria e fazendo tratativa de erro
	do{
		printf("Digite a categoria da fita\n1 - Comum\n2 - Lancamento\n\nEscolha: ");
		scanf("%d", &categoria);
		
		if(categoria < 1 || categoria > 2)
		{
			printf("\n\nPor favor faca uma escolha valida.\n\n");
		}
	} while (categoria < 1 || categoria > 2);
	
	//Atribuindo valor a variável precoFita
	printf("Digite o valor da fita: ");
	scanf("%f", &precoFita);
	
	//Verificação de promoções
	if (strcmp(dia_semana, "Monday") == 0) 
	{ 
		if(categoria == 1){
			printf("Hoje eh segunda-feira.\n");
			desconto = precoFita * 0.40;
			valorFinal = precoFita - desconto;
		}
		if(categoria == 2)
		{
			desconto = precoFita * 0.40;
			acrescimo = precoFita * 0.15;
			valorFinal = precoFita + acrescimo - desconto;
		}
	} 
	else if (strcmp(dia_semana, "Tuesday") == 0) 
	{
		if(categoria == 1){
			printf("Hoje eh terça-feira.\n");
			desconto = precoFita * 0.40;
			valorFinal = precoFita - desconto;
		}
		if(categoria == 2)
		{
			desconto = precoFita * 0.40;
			acrescimo = precoFita * 0.15;
			valorFinal = precoFita + acrescimo - desconto;
		}	
	} 
	else if (strcmp(dia_semana, "Wednesday") == 0) 
	{
		if(categoria == 1){
			printf("Hoje eh quarta-feira.\n");
			valorFinal = precoFita;
		}
		if(categoria == 2)
		{
			acrescimo = precoFita * 0.15;
			valorFinal = precoFita + acrescimo;
		}
	} 
	else if (strcmp(dia_semana, "Thursday") == 0) 
	{
		if(categoria == 1){
			printf("Hoje eh quinta-feira.\n");
			desconto = precoFita * 0.40;
			valorFinal = precoFita - desconto;
		}
		if(categoria == 2)
		{
			desconto = precoFita * 0.40;
			acrescimo = precoFita * 0.15;
			valorFinal = precoFita + acrescimo - desconto;
		}
	} 
	else if (strcmp(dia_semana, "Friday") == 0) 
	{
		if(categoria == 1){
			printf("Hoje eh sexta-feira.\n");
			valorFinal = precoFita;
		}
		if(categoria == 2)
		{
			acrescimo = precoFita * 0.15;
			valorFinal = precoFita + acrescimo;
		}
	} 
	else if (strcmp(dia_semana, "Saturday") == 0) 
	{
		if(categoria == 1){
			printf("Hoje eh sábado.\n");
			valorFinal = precoFita;
		}
		if(categoria == 2)
		{
			acrescimo = precoFita * 0.15;
			valorFinal = precoFita + acrescimo;
		}
	} 
	else if (strcmp(dia_semana, "Sunday") == 0) 
	{
		if(categoria == 1){
			printf("Hoje eh domingo.\n");
			valorFinal = precoFita;
		}
		if(categoria == 2)
		{
			acrescimo = precoFita * 0.15;
			valorFinal = precoFita + acrescimo;
		}
	}	
	
	//Mostrar resultado final na tela
	printf("\n*****Preco Final*****\nO preco que vc ira pagar hoje (%s) sera de: R$%.2f\n", dia_semana, valorFinal);
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;	
}

