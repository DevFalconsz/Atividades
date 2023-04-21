/*Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo do tipo do
consumidor - residencial, comercial ou industrial. A regra para calcular a conta é:
• Residencial: R$ 5,00 de taxa mais R$ 0,05 por m3
 gastos;
• Comercial: R$ 500,00 para os primeiros 80 m3
 gastos mais R$ 0,25 por m3
 gastos acima dos 80 m3
;
• Industrial: R$ 800,00 para os primeiros 100 m3
 gastos mas R$ 0,04 por m3
 gastos acima dos 100 m3
;
O algoritmo deverá ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo de água em metros cubos.
Como resultado imprimir a conta do cliente e o valor em real a ser pago pelo mesmo.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() 
{
	//Declaração de variáveis
	float contaFinal;
	int escolha, corteInt, resto, consumo;
	
	//Atribuição de variáveis e tratamento de erros para a escolha do tipo de conta
	do{
		printf("Qual o seu tipo de conta?\n1 - Residencial\n2 - Comercial\n3 - Industrial\n\nEscolha: ");
		scanf("%d", &escolha);
		
		if(escolha > 3 || escolha < 1)
		{
			printf("\n\nPor favor escolha uma alternativa valida!\n\n");
		}
	} while (escolha > 3 || escolha < 1);
		
	//Atribuição de valor ao consumo em m3
	printf("\nDiga agora o seu consumo em m3: ");
	scanf("%d", &consumo);
	
	//Area de calculos
	if(escolha == 1)
	{
		contaFinal = 5.00 + (0.05 * consumo);
	}
	if(escolha == 2)
	{
		corteInt = consumo / 80;
		resto = consumo % 80;
		contaFinal = (corteInt * 500.00) + (0.25 * resto);
	}
	if(escolha == 3)
	{
		corteInt = consumo / 100;
		resto = consumo % 100;
		contaFinal = (corteInt * 800.00) + (resto * 0.04);
	}
	
	//Resultado final
	printf("O resultado da sua conta eh de R$%.2f \n", contaFinal);
		
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;	
}

