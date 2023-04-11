/*Em uma padaria o padeiro quer saber qual o custo de fabricação do pão francês para saber por quanto terá que vender o pão,
tendo um lucro de 30%. Sabendo-se que a receita do pão leva farinha, água e fermento, escreva um algoritmo que: leia a quantidade de
quilos de farinha, o valor do quilo de farinha, a quantidade de litros de água, o valor do litro de água, a quantidade de quilowatts hora de
energia, o valor do quilowatt hora e o percentual do imposto que o padeiro paga pelo pão, calcule o preço de custo e o valor de venda, e
escreva estes valores.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    float farinha, valor_farinha, agua, valor_agua, energia, valor_energia, imposto;
    float custo, preco_venda, lucro;

    //Atribuindo um valor a essas variáveis
    printf("Digite a quantidade de quilos de farinha: ");
    scanf("%f", &farinha);
    printf("Digite o valor do quilo de farinha: ");
    scanf("%f", &valor_farinha);
    printf("Digite a quantidade de litros de agua: ");
    scanf("%f", &agua);
    printf("Digite o valor do litro de agua: ");
    scanf("%f", &valor_agua);
    printf("Digite a quantidade de quilowatts hora de energia: ");
    scanf("%f", &energia);
    printf("Digite o valor do quilowatt hora: ");
    scanf("%f", &valor_energia);
    printf("Digite o percentual do imposto: ");
    scanf("%f", &imposto);

    //Fazendo os cálculos abaixo
    custo = farinha * valor_farinha + agua * valor_agua + energia * valor_energia;
    preco_venda = custo * (1 + 0.3) * (1 + imposto/100);

    //Exibindo o resultado final na tela
    printf("Preco de custo: R$ %.2f\n", custo);
    printf("Preco de venda: R$ %.2f\n", preco_venda);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
