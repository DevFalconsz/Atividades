/*Numa certa loja de eletrodomésticos, o comerciário encarregado da seção de televisores recebe, mensalmente, um salário fixo
mais comissão. Essa comissão é calculada em relação ao número de televisores vendidos por mês de cada um dos tipos de TV,
obedecendo-se à tabela abaixo:
TV LCD R$ 50,00 de comissão por unidade vendida
TV LED R$ 60,00 de comissão por unidade vendida
TV Plasma R$ 55,00 de comissão por unidade vendida
Sabe-se que o salário total e o fixo mais as comissões. Escrever um algoritmo que calcule e escreva o salário do empregado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    int lcd_vendidas, led_vendidas, plasma_vendidas;
    float salario_fixo, salario_comissao, total_vendas;

    //Atribuindo valores as variáveis
    printf("Digite a quantidade de TVs LCD vendidas: ");
    scanf("%d", &lcd_vendidas);
    printf("Digite a quantidade de TVs LED vendidas: ");
    scanf("%d", &led_vendidas);
    printf("Digite a quantidade de TVs Plasma vendidas: ");
    scanf("%d", &plasma_vendidas);

    printf("Digite o salário fixo: ");
    scanf("%f", &salario_fixo);

    //Cálculos a serem realizados
    total_vendas = lcd_vendidas * 50.0 + led_vendidas * 60.0 + plasma_vendidas * 55.0;
    salario_comissao = salario_fixo + total_vendas;

    //Exibindo os resultados na tela
    printf("O salário do empregado é: R$ %.2f\n", salario_comissao);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
