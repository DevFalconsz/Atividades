/* N�meros quadrados perfeitos s�o aqueles cuja raiz quadrada � um n�mero inteiro. Exemplo 144. Fazer um algoritmo que dado
um n�mero inteiro positivo, calcule e escreva se este � ou n�o quadrado perfeito.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() 
{
	//Declara��o de vari�veis
	int number, raiz, i;
	
	//Atribuindo valor a vari�vel acima
	printf("Digite um numero: ");
	scanf("%d", &number);
	
	//Encontrando a raiz quadrada do numero na marra
	for (i = 1; i <= number; i++) 
	{
		printf("Testando %d \n", i);
		
		if (i * i == number) 
		{
			raiz = i;
			break;
		} 
		
		else if (i * i > number) 
		{
			//Mostrando o resutlado na tela se ele n tiver raiz quadrada
			printf("%d nao eh um quadrado perfeito.\n", number);
			return 0;
		}
	}
	
	//Mostrando o resultado se ele tvier realmente uma raiz quadrada
	printf("%d eh um quadrado perfeito e sua raiz eh %d.\n", number, raiz);
	
	//Finalização do programa
	system("PAUSE");
	return 0;		
}

