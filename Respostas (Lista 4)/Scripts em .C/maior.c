/*Fa�a um programa para ler tr�s n�meros A, B e C, e determinar qual o maior e qual o menor*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	//Declara��ode vari�veis
	int a, b, c;
	
	//Atribuindo valores a essas vari�veis
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	
	printf("Digite o terceiro valor: ");
	scanf("%d", &c);
	
	//Verifica��es de grandeza
	if(a > b && a > c)
	{
		//Resultado final
		printf("\nO %d eh o maior.\n", a);
	}
	if(b > a && b >c)
	{
		//Resultado final
		printf("\nO %d eh o maior.\n", b);
	}
	if(c > a && c > b)
	{
		//Resultado final
		printf("\nO %d eh o maior.\n", c);
	}
	
	//Finaliza��o do programa
	system("PAUSE");
	return 0;
}
