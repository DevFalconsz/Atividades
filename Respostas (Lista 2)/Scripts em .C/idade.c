/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    int anos, meses, dias, total_dias;

    //Atribuindo os valores as variáveis
    printf("*****Tranformador de data de nascimento em dias*****\nDigite a idade em anos: ");
    scanf("%d", &anos);

    printf("Digite a idade em meses: ");
    scanf("%d", &meses);

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    //Calculos a serem executados
    total_dias = (anos * 365) + (meses * 30) + dias;

    //Exibição da resposta final escrita em dias
    printf("*****Resultado Final*****\nSua idade em dias eh: %d \n", total_dias);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
