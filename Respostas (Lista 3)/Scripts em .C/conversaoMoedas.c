/*Fazer um algoritmo que converta uma determinada quantia dada em Reais para uma das seguintes moedas de acordo com a opção
do usuário:
• E – Euro R$ 2,617;
• L – Libra Esterlina R$ 3,816;
• D – Dólar R$ 2,071;
• I – Iene R$ 1,018.*/

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	//Declaração de variáveis
	float money, conversao;
	int escolha;
	
	//Atribuição de valor a money
	printf("Digite a quantia desejada para converter: ");
	scanf("%f", &money);
	
	do{
		printf("Escolha uma das opcoes abaixo:\n\n1 - Euro\n2 - Libre Esterlina\n3 - Dolar\n4 - Iene\n\nEscolha: ");
		scanf("%d", &escolha);
		
		if(escolha < 1|| escolha > 4)
		{
			printf("\n*****Por favor digite uma escolha valida*****\n\n");
		}
	} while (escolha < 1|| escolha > 4);
	
	//Fazendo cálculos
	switch (escolha)
	{
		case 1:
			conversao = money * 2.617;
			printf("O valor da moeda eh de: R$%.2f\n", conversao);
		break;
		
		case 2:
			conversao = money * 3.186;
			printf("O valor da moeda eh de: R$%.2f\n", conversao);
		break;
		
		case 3:
			conversao = money * 2.071;
			printf("O valor da moeda eh de: R$%.2f\n", conversao);
		break;
		
		case 4:
			conversao = money * 1.018;
			printf("O valor da moeda eh de: R$%.2f\n", conversao);
		break;
	}
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;		
}

