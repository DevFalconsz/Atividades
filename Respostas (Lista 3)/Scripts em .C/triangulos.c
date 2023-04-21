/*Fazer um algoritmo que dado os lados de um triângulo A, B e C. Dizer se os lados dados formam um triângulo: retângulo
(A2=B2+C2
), obtusângulo (A2>B2+C2
) ou acutângulo (A2<B2+C2
).*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() 
{
	//Declaração de variáveis
	float a, b, c;
	
	//Atribuindo valores a essas variáveis
	printf("Me diga o o valor do lado A (hipotenusa): ");
	scanf("%f", &a);
	
	printf("Me diga o o valor do lado B (cateto): ");
	scanf("%f", &b);
	
	printf("Me diga o o valor do lado C (cateto): ");
	scanf("%f", &c);
	
	//Area de calculos e verificações
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
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;
}

