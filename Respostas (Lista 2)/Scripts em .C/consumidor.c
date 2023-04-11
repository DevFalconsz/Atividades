/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos
(aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 12% do preço de fábrica e os impostos de 30% do
preço de fábrica, fazer um algoritmo para ler o custo de fábrica de um carro e imprimir o custo ao consumidor*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    float valor, percentagem;

    //Atribuindo valores as variáveis declaradas
    printf("Indique o valor do carro para ser calculado suas percentagens a mais: ");
    scanf("%f", &valor);

    //Calculo dos impostos
    percentagem = (valor * 0.12) + (valor * 0.30);
    valor += percentagem;

    //Exibindo o valor final ao consumidor
    printf("\n*****Resultado final*****\nValor final: R$%.2f\n", valor);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
