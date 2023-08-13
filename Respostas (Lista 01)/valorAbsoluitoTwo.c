#include<stdio.h>
#include<stdlib.h>

int main(){
	int x, i, soma = 0;
	scanf("%i", &x);
	for (i = 50; i > 0; i = i - x){
		soma = soma + i;
	}
	printf("%i", soma);
	system("PAUSE");
}
