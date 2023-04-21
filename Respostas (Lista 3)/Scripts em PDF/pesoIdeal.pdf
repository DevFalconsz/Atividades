/*Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as
seguintes expressões: 
• Para homens: 72.7 * h -58 ; 
• Para mulheres: 62.1* h -44.7*/

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	//Declaração de variáveis
	char sexo;
	float altura, peso;
	
	//Atribuindo valores a essas variaveis
	printf("Digite o sexo (M/F): ");
	scanf("%c", &sexo);
	
	printf("Digite a altura: ");
    scanf("%f", &altura);
	
	//Verificações e cálculos
	if(sexo == 'M' || sexo == 'm')
	{
		peso = 72.1 * altura - 58.00;
		printf("O seu peso ideal eh de: %.2fKg\n\n", peso);
	}
	if(sexo == 'F' || sexo == 'f')
	{
		peso = 62.1 * altura - 44.7;
		printf("O seu peso ideal eh de: %.2fKg\n\n", peso);
	}
	else 
	{
        printf("Sexo invalido!");
    }
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;	
}

