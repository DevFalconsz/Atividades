// exercicio 19

#include <stdio.h>

void converterParaBinario(int decimal) {
    if (decimal > 0) {
        converterParaBinario(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    int decimal;

    // Ler o número inteiro positivo na base 10
    printf("Digite um número inteiro positivo na base 10: ");
    scanf("%d", &decimal);

    // Verificar se o número é positivo
    if (decimal < 0) {
        printf("O número deve ser positivo.\n");
        return 1;
    }

    // Verificar se o número é zero
    if (decimal == 0) {
        printf("O número equivalente na base 2 é: 0\n");
        return 0;
    }

    // Converter para a base 2 (binária) e imprimir o resultado
    printf("O número equivalente na base 2 é: ");
    converterParaBinario(decimal);
    printf("\n");

    return 0;
}
