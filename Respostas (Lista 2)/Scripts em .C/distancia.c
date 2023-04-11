/*Dados os pontos A e B, cujas coordenadas A(x1,y1) e B (x2,y2) serão informadas via teclado, desenvolver um algoritmo que
calcule a distância entre A e B.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaração de variáveis
    float x1, y1, x2, y2, distance;

    //Atribuindo valores às variáveis apresentadas
    printf("*****Calculadora de distancia entre dois pontos*****\nPonto x do A: ");
    scanf("%f", &x1);

    printf("Ponto y do A: ");
    scanf("%f", &y1);

    printf("Ponto x do B: ");
    scanf("%f", &x2);

    printf("Ponto y do B: ");
    scanf("%f", &y2);

    //Área de cálculos a serem feitos para determinar o valor final
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    //Exibição final do resultado do programa
    printf("\n*****Resultado Final*****\nA distancia entre esses dois pontos eh de: %.2f metros\n", distance);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
