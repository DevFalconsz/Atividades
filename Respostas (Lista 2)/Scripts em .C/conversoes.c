/*Muitos países estão passando a utilizar o sistema métrico. Fazer um algoritmo para executar as seguintes conversões:
• Ler uma temperatura dada em graus Fahrenheit e imprimir o equivalente em Celsius 
F a h re n h eit=
9
5
∗C3 2 .
• Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada = 25,4 mm)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    float temp, pol, conveTemp, convePol;

    //Atribuindo valores a essas variáveis
    printf("*****Conversos de temperatura e polegadas*****\nTemperatura em Fahrenheit: ");
    scanf("%f", &temp);

    printf("Polegadas: ");
    scanf("%f", &pol);

    //Calculos
    conveTemp = (temp - 32) * 5.0 / 9.0;
    convePol = pol * 25.4;

    //Mostrando os valores finais na tela com suas conversões
    printf("*****Resultados*****\nO valor informado em Fahrenheit em Celsius fica sendo: %.2fC\nO valor de polegadas informada fica sendo reconehcido em milimetros como: %.2fmm\n", conveTemp, convePol);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
