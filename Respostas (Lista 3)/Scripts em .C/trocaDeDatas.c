/*Fazer um algoritmo que leia uma data, dia/mês/anos, no formato inteiro e escreva a mesma data no formato dia de (mês por
extenso) de ano.*/

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	//Declaração de variáveis
	int dia, mes, ano;
	
	//Atribuindo valores a essas variaveis
	do{
		printf("Digite o dia: ");
		scanf("%d", &dia);
	
		printf("Digite o mes: ");
		scanf("%d", &mes);
	
		printf("Digite o ano: ");
		scanf("%d", &ano);
		
		if(dia < 1 || dia > 31 || mes <1 || mes > 12)
		{
			printf("\n*****Por favor digite uma data valida!*****\n\n");
		}
	} while (dia < 1 || dia > 31 || mes <1 || mes > 12);
	
	//Fazendo calculos pra descobrir o mes em extenso
	switch(mes)
	{
		case 1:
			printf("Dia de %d mes de janeiro de %d\n", dia, ano);
		break;
		
		case 2:
			printf("Dia de %d mes de fevereiro de %d\n", dia, ano);
		break;
		
		case 3:
			printf("Dia de %d mes de marco de %d\n", dia, ano);
		break;
		
		case 4:
			printf("Dia de %d mes de abril de %d\n", dia, ano);
		break;
		
		case 5:
			printf("Dia de %d mes de maio de %d\n", dia, ano);
		break;
		
		case 6:
			printf("Dia de %d mes de junho de %d\n", dia, ano);
		break;
		
		case 7:
			printf("Dia de %d mes de julho de %d\n", dia, ano);
		break;
		
		case 8:
			printf("Dia de %d mes de agosto de %d\n", dia, ano);
		break;
		
		case 9:
			printf("Dia de %d mes de setembro de %d\n", dia, ano);
		break;
		
		case 10:
			printf("Dia de %d mes de outubro de %d\n", dia, ano);
		break;
		
		case 11:
			printf("Dia de %d mes de novembro de %d\n", dia, ano);
		break;
		
		case 12:
			printf("Dia de %d mes de dezembro de %d\n", dia, ano);
		break;
	}
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;	
}

