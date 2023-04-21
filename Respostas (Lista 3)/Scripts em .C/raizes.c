/*Desenvolver um algoritmo que leia os coeficientes (A,B e C) de uma equação do segundo grau ( Ax 2
 + Bx + C =0) e que calcule
suas raízes. O algoritmo deve mostrar, quando possível, o valor das raízes calculadas e a classificação das mesmas: “RAÍZES
IMAGINÁRIAS”, “RAIZ ÚNICA” ou “RAÍZES DISTINTAS”.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() 
{
	//Declaração de variáveis
	float coeficienteA, coeficienteB, coeficienteC, delta;
	
	//Atribuindo valores a essas variáveis
	printf("Digite o valor do coeficiente A: ");
	scanf("%f", &coeficienteA);
	
	printf("Digite o valor do coeficiente B: ");
	scanf("%f", &coeficienteB);
	
	printf("Digite o valor do coeficiente C: ");
	scanf("%f", &coeficienteC);
	
	//Area de calculos
	delta = pow(coeficienteB, 2) - 4 * coeficienteA * coeficienteC;
	
	//Verificação de resultados 
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
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;		
}

