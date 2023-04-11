/*Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se utilizar
18W de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule a sua
área (em m2) e a potência de iluminação que deverá ser utilizada. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    float area, altura, largura, potencia;

    //Recebendo e atribuindo valores as variáveis
    printf("Diga a altura: ");
    scanf("%f", &altura);

    printf("Diga a largura: ");
    scanf("%f", &largura);

    //Cálculos a serem feitos para calcular a potência necessária
    area = largura * altura;
    potencia = area * 18;

    //Resultado final e exibição do mesmo
    printf("A potencia que devera ser utilizada sera de: %.2fW \n", potencia);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
