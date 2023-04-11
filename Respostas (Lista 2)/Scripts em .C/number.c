/*Fazer um algoritmo que leia um inteiro positivo, calcule e escreva as seguintes itens:
Numero:
Quadrado:
Raiz Quadrada:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaração de variáveis
    int num;
    float quadrado, raiz;

    //Atribuindo valores ao número inteiro
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    //Fazendo os cálculos da questão
    quadrado = pow(num, 2);
    raiz = sqrt(num);

    //Exibindo os resultados na tela
    printf("Numero: %d\n", num);
    printf("Quadrado: %.2f\n", quadrado);
    printf("Raiz Quadrada: %.2f\n", raiz);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
