#include <stdio.h>

float media(float x, float z, float y)
{
	x += z + y;
	x /= 3;
	return x;
}

int main()
{
	float x, z, y;
	printf("\nPrimeiro fator: ");
	scanf("%f", &x);
	
	printf("\nSegundo  fator: ");
	scanf("%f", &z);
	
	printf("\nTerceiro fator: ");
	scanf("%f", &y);

	printf("\nMedia: %.1f", media(x, z, y));
}
