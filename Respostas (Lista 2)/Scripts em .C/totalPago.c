/*Escrever um algoritmo que lê: 
• a percentagem do IPI a ser acrescido no valor das peças; 
• o código da peça 1, valor unitário da peça 1, quantidade de peças 1; 
• o código da peça 2, valor unitário da peça 2, quantidade de peças 2;
O algoritmo deve calcular o valor total a ser pago e apresentar o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    float ipi, valor_total = 0;
    int cod_peca1, quant_peca1, cod_peca2, quant_peca2;
    float valor_unit1, valor_unit2;

    //Atribuindo valores as variáveis declaradas
    printf("Informe a percentagem do IPI: ");
    scanf("%f", &ipi);

    printf("\nInforme os dados da peca 1:\n");
    printf("Codigo da peca: ");
    scanf("%d", &cod_peca1);
    printf("Valor unitario da peca: ");
    scanf("%f", &valor_unit1);
    printf("Quantidade de pecas: ");
    scanf("%d", &quant_peca1);

    printf("\nInforme os dados da peca 2:\n");
    printf("Codigo da peca: ");
    scanf("%d", &cod_peca2);
    printf("Valor unitario da peca: ");
    scanf("%f", &valor_unit2);
    printf("Quantidade de pecas: ");
    scanf("%d", &quant_peca2);

    //Calculos a serem realizados
    valor_total = (valor_unit1 * quant_peca1) + (valor_unit2 * quant_peca2);
    valor_total *= (1 + (ipi / 100));

    //Exibindo valor final calculado
    printf("\nValor total a ser pago: R$ %.2f\n", valor_total);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
