/*Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a média é ponderada e que
o peso das notas é: 2,3 e 5, respectivamente. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaração de variáveis
    float nota1, nota2, nota3, media;

    //Atribuindo valores a essas variáveis
    printf("Digite a primeira nota (peso 2): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (peso 3): ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota (peso 5): ");
    scanf("%f", &nota3);

    //Fazendo os cálculos
    media = (nota1*2 + nota2*3 + nota3*5) / 10;

    //Exibindo o resultado na tela
    printf("A média final do aluno eh %.2f\n", media);

    //Finalização do programa
    system("PAUSE");
    return 0; 
}
