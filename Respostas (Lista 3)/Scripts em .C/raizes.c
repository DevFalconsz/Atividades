/*Desenvolver um algoritmo que leia os coeficientes (A,B e C) de uma equa��o do segundo grau ( Ax 2
 + Bx + C =0) e que calcule
suas ra�zes. O algoritmo deve mostrar, quando poss�vel, o valor das ra�zes calculadas e a classifica��o das mesmas: �RA�ZES
IMAGIN�RIAS�, �RAIZ �NICA� ou �RA�ZES DISTINTAS�.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() 
{
	//Declara��o de vari�veis
	float coeficienteA, coeficienteB, coeficienteC, delta;
	
	//Atribuindo valores a essas vari�veis
	printf("Digite o valor do coeficiente A: ");
	scanf("%f", &coeficienteA);
	
	printf("Digite o valor do coeficiente B: ");
	scanf("%f", &coeficienteB);
	
	printf("Digite o valor do coeficiente C: ");
	scanf("%f", &coeficienteC);
	
	//Area de calculos
	delta = pow(coeficienteB, 2) - 4 * coeficienteA * coeficienteC;
	
	//Verifica��o de resultados 
	if(delta > 0)
	{
		printf("RAIZES DISTINTAS \n");
	}
	if(delta == 0)
	{
		printf("RAIZ UNICA \n");
	}
	if(delta < 0)
	{
		printf("RAIZES IMAGINARIAS \n");
	}
	
	//Finalização do programa
	system("PAUSE");
	return 0;		
}

