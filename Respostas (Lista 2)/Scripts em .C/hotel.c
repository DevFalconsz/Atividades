/*Um hotel com 42 apartamentos resolveu fazer promoções para os fins de semana fora da alta temporada, isto é, nos meses de
abril, maio, junho, agosto, setembro, outubro e novembro. A taxa da promoção é de 22% da diária normal. A ocupação média do hotel
sem promoção é de 40%. A expectativa é aumentar a taxa de ocupação para 70%. Supondo que as expectativas se confirmem, escrever
um algoritmo que lê a diária normal, que calcule e escreva as seguintes informações:
(a) O valor da diária no período da promoção;
(b) O valor médio arrecadado sem a promoção, durante um mês;
(c) O valor médio arrecadado com a promoção, durante um mês;
(d) O lucro ou prejuízo mensal com a promoção*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    int qtd_apartamentos = 42;
    float taxa_promocao = 0.22;
    float taxa_ocupacao_sem_promocao = 0.4;
    float taxa_ocupacao_com_promocao = 0.7;
    float diaria_normal, diaria_promocao, valor_medio_sem_promocao, valor_medio_com_promocao, lucro_prejuizo;

    //Atribuindo valores a uma dessas variáveis
    printf("Digite o valor da diaria normal: ");
    scanf("%f", &diaria_normal);

    //Fazendo cálculos necessários para cada uma
    diaria_promocao = diaria_normal + (diaria_normal * taxa_promocao);
    valor_medio_sem_promocao = qtd_apartamentos * diaria_normal * 30 * taxa_ocupacao_sem_promocao;
    valor_medio_com_promocao = qtd_apartamentos * diaria_promocao * 30 * taxa_ocupacao_com_promocao;
    lucro_prejuizo = valor_medio_com_promocao - valor_medio_sem_promocao;

    //Exibindo os resultado final na tela
    printf("Valor da diaria no periodo da promocao: R$%.2f\n", diaria_promocao);
    printf("Valor medio arrecadado sem a promocao durante um mes: R$%.2f\n", valor_medio_sem_promocao);
    printf("Valor medio arrecadado com a promocao durante um mes: R$%.2f\n", valor_medio_com_promocao);
    printf("Lucro ou prejuizo mensal com a promocao: R$%.2f\n", lucro_prejuizo);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
