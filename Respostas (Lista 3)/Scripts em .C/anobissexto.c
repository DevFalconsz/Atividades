/*Escreva um algoritmo que descubra se um ano lido � bissexto. Um ano � bissexto se ele for m�ltiplo de 4, exceto quando ele for
m�ltiplo de 100. Os anos m�ltiplos de 100 somente s�o bissextos quando s�o m�ltiplos de 400, usado a partir de 1752 (por exemplo
1800 n�o � bissexto, mas 2000 �)*/

#include <stdio.h>

int main() {
	//Declara��o de vari�veis
    int ano;
	
	//Atribuindo valores a essas vari�veis
    printf("Digite um ano: ");
    scanf("%d", &ano);

	//Fazendo c�lculos
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("%d eh um ano bissexto\n", ano);
    } else {
        printf("%d nao eh um ano bissexto\n", ano);
    }
	
	//Finalização do programa
	system("PAUSE");
	return 0;    
}
