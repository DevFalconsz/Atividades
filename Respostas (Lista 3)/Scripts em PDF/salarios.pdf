/*Desenvolver um algoritmo que calcule o salário bruto e o salário líquido de um funcionário.
• Dados de Entrada: Nome do funcionário;
 Quantidade de horas-extras trabalhadas.
• Constantes: Salário Mínimo = R$ 350,00;
Valor da Hora-Extra = R$ 10.00.
Sabe-se:
• Salário hora-extra = horas-extras * Valor da Hora-Extra;
• Salário bruto = 3 * Salário Mínimo + Salário hora-extra;
• Desconto INSS = 12 % do salário bruto, se salário bruto for maior que R$ 1500,00;
• Desconto do Imposto de Renda = 20 % do Salário Bruto, se o mesmo for maior que R$ 2000,00;
• Salário liquido = salário bruto – deduções*/

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	//Decalração de variáveis
	float descontos, horas_extras, salario_bruto, salario_da_hora_extra, salario_liquido, salario_minimo = 350.00, hora_extra_valor = 10.00;
	char func[100];
	
	//Atribuindo valores as variáveis a serem usadas
	printf("Digite o teu nome: ");
	scanf("%s", &func);
	
	do{
		
		printf("\nDigite a quantitade de horas-extras trabalhadas: ");
		scanf("%f", &horas_extras);
		
		//Tratamento de erro com valores
		if(horas_extras < 0)
		{
			printf("\n\n******Por favor escreva um valor valido!*****\n\n");
		}
	} while(horas_extras < 0);
	
	//Calculos a serem verificados
	salario_da_hora_extra = horas_extras * hora_extra_valor;
	salario_bruto = 3 * salario_minimo + salario_da_hora_extra;
	
	//Verificações para ver o salário real
	if(salario_bruto > 1500.00)
	{
		descontos = salario_bruto * 0.12;
		salario_liquido = salario_bruto - descontos;
	}
	if(salario_bruto > 2000.00)
	{
		descontos = salario_bruto * 0.20;
		salario_liquido = salario_bruto - descontos;
	}
	
	//Mostrando resultados na tela
	printf("\n\nO salario bruto do %s eh de R$%.2f\nE o salario liquido eh de R$%.2f\n", func, salario_bruto, salario_liquido);
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;	
}

