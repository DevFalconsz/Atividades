// exercicio 34

#include <stdio.h>
#include <string.h>

#define SALARIO_BASE 1500.00
#define COMISSAO_ATE_10_CARROS 100.00
#define COMISSAO_ACIMA_10_CARROS 200.00
#define COMISSAO_ACIMA_50K 0.01

int main() {
    char nome[50];
    int carros_vendidos;
    float valor_carro;
    float salario_total;

    int continuar = 1;  // Variável para controlar a continuidade do loop

    while (continuar) {
        printf("Digite o nome do vendedor (ou 'vazio' para encerrar): ");
        scanf("%s", nome);

        if (strcmp(nome, "vazio") == 0) {
            continuar = 0;  // Define que o loop deve encerrar
        } else {
            printf("Digite o número de carros vendidos por %s: ", nome);
            scanf("%d", &carros_vendidos);

            printf("Digite o valor de cada carro vendido por %s: ", nome);
            scanf("%f", &valor_carro);

            float comissao_carros = carros_vendidos <= 10 ? COMISSAO_ATE_10_CARROS : COMISSAO_ACIMA_10_CARROS;
            float comissao_valor = valor_carro > 50000.00 ? COMISSAO_ACIMA_50K * valor_carro : 0.00;

            salario_total = SALARIO_BASE + (comissao_carros * carros_vendidos) + comissao_valor;

            printf("O salário de %s é de R$%.2f\n", nome, salario_total);
            printf("\n");
        }
    }

    return 0;
}
