/* Faça um programa para calcular as raízes reais de uma equação do 2º grau (AX2
+BX+C=0).*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	//Declaração de variáveis
	float a, b, c;
	float delta, raiz1, raiz2;
	
	//Atribuindo valores a essas variáveis
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	
	//Fazendo cálculos do delta
	delta = pow(b, 2) - 4 * a * c;
	
	//Dando as raízes conforme sua classificação de delta
	if(delta < 0)
	{
		//Resutlado Final para esse caso
		printf("Essa equacao nao possui raiz real!\n");
	}
	if(delta == 0)
	{
		//Resutlado final para esse caso
		raiz2 = -b / a;
		raiz1 = raiz2;
		printf("Ambas as raizes sao: %.2f\n", raiz1);
	}
	if(delta > 0)
	{
		//Resultado Final para esse caso
		raiz1 = (-b + sqrt(delta)) / 2 * a;
		raiz2 = (-b - sqrt(delta)) / 2 * a;
		printf("A raiz 1 vale: %.2f\nA raiz 2 vale: %.2f\n", raiz1, raiz2);
	}
	
	//Finalização do programa
	system("PAUSE");
	return 0;
}

