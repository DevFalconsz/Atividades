/*Fazer um algoritmo que calcule e escreva a quantidade de dinheiro a ser gasto em uma viagem. Sabe-se que o veículo a ser usado
faz 12 Km por litro de gasolina e que o litro de gasolina custa R$ 2,90. O usuário ira fornecer o tempo de viagem e a velocidade média
do veículo.
◦ Distância = tempo de viagem * velocidade média.
◦ Quantidade de litros = distância / 12*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    float tempoViagem, velocidadeMedia, distancia, qtdLitros, valorGasolina;

    //Atribuindo valores a essas variáveis
    printf("Informe o tempo de viagem em horas: ");
    scanf("%f", &tempoViagem);

    printf("Informe a velocidade média em km/h: ");
    scanf("%f", &velocidadeMedia);

    //Fzendo os cálculos necessários
    distancia = tempoViagem * velocidadeMedia;
    qtdLitros = distancia / 12;
    valorGasolina = qtdLitros * 2.9;

    //Mostrando an tela o resultado final
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Quantidade de litros de gasolina gastos: %.2f litros\n", qtdLitros);
    printf("Valor total gasto com gasolina: R$ %.2f\n", valorGasolina);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
