/*Criar um algoritmo que leia a idade de uma pessoa e que mostre a sua classe eleitoral:
• Não-eleitor (abaixo de 16 anos);
• Eleitor Obrigatório (entre 18 e 65 anos);
• Eleitor facultativo (entre 16 e 18 anos e maior de 65 anos*/

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	//Declaração de variáveis
	int idade;
	
	//Atribuindo valor a essa variável
	do
	{
		printf("Digite a sua idade: ");
		scanf("%d", &idade);
		
		if(idade < 0 || idade > 110)
		{
			printf("\n\n*****Por favor digite uma idade valida!!*****\n\n");
		}
	} while (idade < 0 || idade > 110);
	
	//Fazendo verificações a cerca de sua idade e msotrando resultados
	switch(idade)
	{
		case 0 ... 15:
			printf("Nao-eleitor!\n\n");
		break;
		
		case 16 ... 17:
    	case 66 ... 150:
			printf("Eleitor facultativo\n\n");
    	break;

		case 18 ... 65:
    		printf("Eleitor Obrigatorio\n\n");
    	break;

		/* Verificador inválido já que possuímos uma verificação "do while" nos inputs
		default:
    		printf("Idade invalida\n");*/
	}
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;	
}

