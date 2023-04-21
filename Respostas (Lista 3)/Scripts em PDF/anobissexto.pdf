/*Escreva um algoritmo que descubra se um ano lido é bissexto. Um ano é bissexto se ele for múltiplo de 4, exceto quando ele for
múltiplo de 100. Os anos múltiplos de 100 somente são bissextos quando são múltiplos de 400, usado a partir de 1752 (por exemplo
1800 não é bissexto, mas 2000 é)*/

#include <stdio.h>

int main() {
	//Declaração de variáveis
    int ano;
	
	//Atribuindo valores a essas variáveis
    printf("Digite um ano: ");
    scanf("%d", &ano);

	//Fazendo cálculos
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("%d eh um ano bissexto\n", ano);
    } else {
        printf("%d nao eh um ano bissexto\n", ano);
    }
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;    
}
