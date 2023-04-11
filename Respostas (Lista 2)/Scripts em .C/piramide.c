/*Dada a base e a altura de uma pirâmide, fazer um algoritmo que calcule e escreva o seu volume*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaração de variáveis do programa
    float altura, base, volume;

    //Atribuir valores as fvariáveis
    printf("*****Calculadora de Piramide*****\nAltura: ");
    scanf("%f", &altura);

    printf("Base: ");
    scanf("%f", &base);

    //Area de calculos dentro do codigo
    volume = 1.0/3.0 * base * altura;

    //Exibindo resultado final na tela
    printf("*****Resultado Final*****\nO volume dessa piramide e de: %.2f metros.\n", volume);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
