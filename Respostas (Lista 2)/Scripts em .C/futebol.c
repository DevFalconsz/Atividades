/*Escrever um algoritmo que lê o público total de futebol e forneça a renda do jogo, sabendo-se que havia 4 tipos de ingressos
assim distribuídos: popular - 10% a R$1,00, geral - 50% a R$5,00, arquibancada - 30% a R$10,00 e cadeiras - 10% a R$20,00.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de varia´veis
    int publico;
    float renda, popular, geral, arquibancada, cadeiras;

    //Atribuindo valores a uma variável
    printf("Digite o número total de público: ");
    scanf("%d", &publico);

    //Fazendo os calculos necessários
    popular = publico * 0.1 * 1.0;
    geral = publico * 0.5 * 5.0;
    arquibancada = publico * 0.3 * 10.0;
    cadeiras = publico * 0.1 * 20.0;

    renda = popular + geral + arquibancada + cadeiras;

    //Exibindo os valores na tela
    printf("A renda total do jogo é de R$%.2f\n", renda);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
