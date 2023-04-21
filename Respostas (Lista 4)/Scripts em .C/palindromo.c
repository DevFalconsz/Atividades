/* Um palíndromo é um número que é lido da mesma forma tanto da direita para a esquerda como da esquerda para a 
direita. Por exemplo, cada um dos inteiros seguintes, de quatro dígitos, são palíndromo: 1331, 5555, 4554 e 1661. Escreva 
um algoritmo que leia um número de quatro dígitos e determine se ele e palíndromo ou não. Se o número não for de quatro 
dígitos imprima uma mensagem de erro. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	//Declaração de variáveis
	int number, original, resto, invertido = 0;;
	
	//Atribuição de valores
	do{
		printf("Digite o number: ");
		scanf("%d", &number);
		original = number;
		
		if (number < 1000 || number > 9999)
    	{
        	printf("\nErro: Numero nao possui quatro digitos.\n\n");
    	}
	} while (number < 1000 || number > 9999);
	
	//Invertendo o number
	while (number > 0)
    {
        resto = number % 10;
        invertido = invertido * 10 + resto;
        number /= 10;
    }
    
    //Verificação de palindromologia
    if (original == invertido)
    {
        printf("O numero %d eh um palindromo.\n", original);
    }
    else
    {
        printf("O numero %d NAO eh um palindromo.\n", original);
    }
	
	//Finalização do programa
	system("PAUSE");
	return 0;
}

