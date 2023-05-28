// exercicio 28

#include <stdio.h>

#define NUM_CLIENTES 150

int main() {
    char nome[100];
    char endereco[100];
    float valorCompras;
    float bonus;
    float totalBonus = 0.0;

    // Loop para iterar sobre cada cliente
    for (int i = 0; i < NUM_CLIENTES; i++) {
        printf("Cliente %d\n", i + 1);

        // Leitura dos dados do cliente
        printf("Nome: ");
        scanf("%s", nome);

        printf("Endereco: ");
        scanf("%s", endereco);

        printf("Valor das compras: ");
        scanf("%f", &valorCompras);

        // Cálculo do bônus de acordo com o valor das compras
        if (valorCompras < 500.0) {
            bonus = valorCompras * 0.1;
        } else {
            bonus = valorCompras * 0.15;
        }

        // Acumulação do bônus total
        totalBonus += bonus;

        // Impressão dos dados do cliente e do bônus
        printf("Cliente: %s\n", nome);
        printf("Endereco: %s\n", endereco);
        printf("Valor das compras: %.2f\n", valorCompras);
        printf("Bonus: %.2f\n\n", bonus);
    }

    // Impressão do total de bônus acumulado
    printf("Total de bonus: %.2f\n", totalBonus);

    return 0;
}
