/*–Um sistema de equações lineares da forma 
ax + by = c 
dx + ey = f 
pode ser resolvido utilizando-se as seguintes fórmulas: 

x = ce - bf / ae - bd

y = af - cd / ae - bd
 
Faça um programa para ler os coeficientes (a,b,c,d,e,f) das equações e calcular e exibir os valores de x e y. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaraçãod e variáveis
    float a, b, c, d, e, f, x, y;

    //Recebimento de variáveis
    printf("Digite coeficiente a: ");
    scanf("%f", &a);
    printf("Digite coeficiente b: ");
    scanf("%f", &b);
    printf("Digite coeficiente c: ");
    scanf("%f", &c);
    printf("Digite coeficiente d: ");
    scanf("%f", &d);
    printf("Digite coeficiente e: ");
    scanf("%f", &e);
    printf("Digite coeficiente f: ");
    scanf("%f", &f);

    //Calculos a serem executados com a fórmula descrita no enunciado
    x = ((c * e) - (b * f)) / ((a * e) - (b * d));
    y = ((a * f) - (c * d)) / ((a * e) - (b * d));

    //Mostrando os resultados finais
    printf("O resultados ficam sendo como: \n x = %.2f \n y = %.2f \n", x, y);

    //Finalização do programa
    system("PAUSE");
    return 0;
}