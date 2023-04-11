/*Escrever um algoritmo que leia a taxa de potência de um refrigerador, o tempo que permaneceu ligado e o valor do quilowatt
hora, e que, calcule e escreva a energia total gasta pelo refrigerador, bem como, o valor a ser pago à companhia de Energia Elétrica*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    //Declaração de variáveis
    float potencia, tempo, valorKWh, energiaTotal, valorTotal;

    //Atribuindo valores a algumas dessas variáveis
    printf("Digite a taxa de potencia do refrigerador (em Watts): ");
    scanf("%f", &potencia);

    printf("Digite o tempo que o refrigerador ficou ligado (em horas): ");
    scanf("%f", &tempo);

    printf("Digite o valor do quilowatt hora (em reais): ");
    scanf("%f", &valorKWh);

    //Fazendo os cálculos necessários
    energiaTotal = (potencia * tempo) / 1000;
    valorTotal = energiaTotal * valorKWh;

    //Exibindo o resultado final do programa
    printf("\n*****Resultado*****\nA energia total gasta pelo refrigerador foi de %.2f kWh.\n", energiaTotal);
    printf("O valor total a ser pago a companhia de energia eletrica sera de R$ %.2f.\n", valorTotal);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
