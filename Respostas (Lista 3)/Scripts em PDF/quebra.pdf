/*O número 3025 possui a seguinte característica:
30 + 25 = 55
552 = 3025
Fazer um algoritmo que dado um número de 4 dígitos calcule e escreva se ele possui ou não esta característica.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() 
{
	//Declaração de variáveis
	int number, num, ber, calculo;
	
	//Digitando o número a ser verificado
	printf("Digite um numero de 4 digitos: ");
	scanf("%d", &number);
	
	//Calculos a serem feitos
	num = number / 100;
	ber = number % 100;
	
	calculo = pow((num + ber), 2);
	
	//Verificações a cerca do resultado
	if(calculo == number)
	{
		printf("Ele possui a caracteristica procurada.\n");
	}
	else
	{
		printf("Ele nao possui a caracteristica.\n");
	}

	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;	
}

