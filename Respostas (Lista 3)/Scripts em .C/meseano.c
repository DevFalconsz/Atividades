/*Desenvolver um algoritmo que leia o mês e o ano de uma data e que exiba o número de dias da mesma*/

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	//Declaração de variáveis
	int mes, ano, dias;
	
	//Atribuindo valores a essas variáveis
	do {
		printf("Me diga um mes: ");
		scanf("%d", &mes);
	
		//Tratamento de erro
		if(mes > 12 || mes < 0)
		{
			printf("Tipo invalido para mes. Tente novamente. \n");
		}
	} while (mes > 12 || mes < 0);
	
	//Atribuindo ano e fazendo tratamento de erro como explicado acima
	do {
		printf("Me diga um ano: ");
		scanf("%d", &ano);
		
		//Verificador
		if(ano < 0)
		{
			printf("Por favor digite um ano valido! \n");
		}
	} while (ano < 0);
	
	// Calculos e verifcação / verifica se o mês é fevereiro
	if (mes == 2) {
      
		// verifica se o ano é bissexto
		if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        	dias = 29;
    	} 
		else 
		{
        	dias = 28;
    	}
	}
	 
	// verifica se o mês tem 30 dias
	else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
	{
    	dias = 30;	
	} 

	// se não, assume que o mês tem 31 dias
	else 
	{
		dias = 31;
	}
	
	//Mostrando resultado final na tela
	printf("O mes %d/%d tem %d dias.\n", mes, ano, dias);
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;	
}

