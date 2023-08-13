#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	printf("Insira um valor: ");
	scanf("%i", &x);
	
	if(x < 0){
		x *= -1;
		printf("\nO valor absoluto de x é %i\n", x);
	}
	else{
		printf("\nO valor absoluto de x é %i\n", x);
	}
	system("PAUSE");
}
