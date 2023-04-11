/*Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em
horas, minutos e segundos*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    int duracao, segundos, minutos, horas;

    //Atribuindo valores a essas variáveis declaradas
    printf("*****Converter segundos*****\nSegundos: ");
    scanf("%d", &duracao);

    //Calculos a serem executados
    horas = duracao / 3600;
    duracao %= 3600;
    minutos = duracao / 60;
    segundos = duracao % 60;

    //Exibindo os valores finais na tela
    printf("*****Resultado Final*****\nHoras: %d\nMinutos: %d\nSegundos: %d\n", horas, minutos, segundos);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
