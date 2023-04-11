/*Fazer um algoritmo que dado 4 notas de provas, a b, c, e d calcule e escreva o valor das seguintes médias:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaração de variáveis
    float a, b, c, d;
    float media_aritmetica, media_harmonica, media_geometrica, media_quadratica;

    //Atribuindo valores a essas variáveis
    printf("Digite as quatro notas (separadas por espaco): ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    //Fazendo cálculos
    media_aritmetica = (a + b + c + d) / 4.0;
    media_harmonica = 4.0 / (1.0/a + 1.0/b + 1.0/c + 1.0/d);
    media_geometrica = pow(a*b*c*d, 1.0/4.0);
    media_quadratica = sqrt((a*a + b*b + c*c + d*d) / 4.0);

    //Exibindo os resultados na tela
    printf("Media aritmetica: %.2f\n", media_aritmetica);
    printf("Media harmonica: %.2f\n", media_harmonica);
    printf("Media geometrica: %.2f\n", media_geometrica);
    printf("Media quadratica: %.2f\n", media_quadratica);

    //Finalização do programa
    system("PAUSE");
    return 0; 
}
