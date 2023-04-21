/*Fazer um algoritmo que dado os lados de um tri�ngulo A, B e C. Dizer se os lados dados formam um tri�ngulo: ret�ngulo
(A2=B2+C2
), obtus�ngulo (A2>B2+C2
) ou acut�ngulo (A2<B2+C2
).*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() 
{
	//Declara��o de vari�veis
	float a, b, c;
	
	//Atribuindo valores a essas vari�veis
	printf("Me diga o o valor do lado A (hipotenusa): ");
	scanf("%f", &a);
	
	printf("Me diga o o valor do lado B (cateto): ");
	scanf("%f", &b);
	
	printf("Me diga o o valor do lado C (cateto): ");
	scanf("%f", &c);
	
	//Area de calculos e verifica��es
	if(pow(a, 2) == pow(b, 2) + pow(c, 2))
	{
		printf("Ele eh um triangulo retangulo! \n");
	}
	if(pow(a, 2) > pow(b, 2) + pow(c, 2))
	{
		printf("Ele eh um triangulo obtusangulo! \n");
	}
	if(pow(a, 2) < pow(b, 2) + pow(c, 2))
	{
		printf("Ele eh um triangulo acutangulo! \n");
	}
	
	//Finalização do programa
	system("PAUSE");
	return 0;
}

