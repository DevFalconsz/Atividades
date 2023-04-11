/*Uma locadora de charretes cobra R$8,50 de taxa para cada 3 horas de uso destas e R$3,50 para cada hora abaixo destas 3 horas.
Fazer um algoritmo que, dado a quantidade de horas que a charrete foi usada, calcule e escreva quanto o cliente tem de pagar.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaração das variáveis
    float totalPagar;
    int tresHorasInteiras, tresHorasRestantes, horas;

    //Atribuindo valores a essas variáveis
    printf("*****Locadora*****\nHoras usadas: ");
    scanf("%d", &horas);

    //Calculos a serem feitos
    tresHorasInteiras = horas / 3;
    tresHorasRestantes = horas % 3;
    totalPagar = (tresHorasInteiras * 8.50) + (tresHorasRestantes * 3.50);

    //Mostrando resultado final do programa na tela
    printf("*****Resultado Final*****\nO total a pagar eh: R$%.2f \n", totalPagar);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
