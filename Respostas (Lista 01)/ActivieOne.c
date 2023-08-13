#include <stdio.h>

float dobro(float x)
{
	x *= 2;
	return x;
}

int main()
{
	float x;
	printf("Indique um number para calcular o seu dobro: ");
	scanf("%f", &x);

	printf("\nO dobro do number e: %.1f", dobro(x));
}
