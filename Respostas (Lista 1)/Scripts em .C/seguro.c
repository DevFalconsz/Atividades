/*O custo do seguro contra granizo numa comunidade típica de fazendeiros é 3,5% do valor de cobertura
solicitado (para cada acre), multiplicado pelo número de acres plantados. Supondo que as possibilidades de 
colheita sejam limitadas a milho, feijão e café, faça um programa para ler a cobertura desejada e o número de 
acres plantados para cada uma das três plantações e calcular o custo total do seguro para o cliente. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    float milho, feijao, cafe, porcentagem, coberturaMilho, coberturaFeijao, coberturaCafe;

    //Atribuindo valores as variáveis
    printf("Me diga a cobertura desejada pro milho: ");
    scanf("%f", &coberturaMilho);

    printf("Me diga quantos acres de milho existem: ");
    scanf("%f", &milho);

    printf("Me diga a cobertura desejada pro feijao: ");
    scanf("%f", &coberturaFeijao);

    printf("Me diga quantos acres de feijao existem: ");
    scanf("%f", &feijao);

    printf("Me diga a cobertura desejada pro cafe: ");
    scanf("%f", &coberturaCafe);

    printf("Me diga quantos acres de cafe existem: ");
    scanf("%f", &cafe);

    //Calculos a serem executados
    porcentagem = ((coberturaMilho * 0.035) * milho) + ((coberturaFeijao * 0.035) * feijao) + ((coberturaFeijao * 0.035) * cafe);

    //Mostrando resutlado final do programa
    printf("A cobertura total fica no valor de: R$%.2f \n", porcentagem);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
