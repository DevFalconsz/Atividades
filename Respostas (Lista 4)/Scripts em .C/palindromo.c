/* Um pal�ndromo � um n�mero que � lido da mesma forma tanto da direita para a esquerda como da esquerda para a 
direita. Por exemplo, cada um dos inteiros seguintes, de quatro d�gitos, s�o pal�ndromo: 1331, 5555, 4554 e 1661. Escreva 
um algoritmo que leia um n�mero de quatro d�gitos e determine se ele e pal�ndromo ou n�o. Se o n�mero n�o for de quatro 
d�gitos imprima uma mensagem de erro. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	//Declara��o de vari�veis
	int number, original, resto, invertido = 0;;
	
	//Atribui��o de valores
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
    
    //Verifica��o de palindromologia
    if (original == invertido)
    {
        printf("O numero %d eh um palindromo.\n", original);
    }
    else
    {
        printf("O numero %d NAO eh um palindromo.\n", original);
    }
	
	//Finaliza��o do programa
	system("PAUSE");
	return 0;
}

