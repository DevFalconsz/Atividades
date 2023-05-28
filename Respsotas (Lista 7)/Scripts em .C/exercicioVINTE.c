// exercicio 20

#include <stdio.h>

void converterParaHexadecimal(int decimal) {
    if (decimal > 0) {
        converterParaHexadecimal(decimal / 16);
        int resto = decimal % 16;
        if (resto < 10) {
            printf("%d", resto);
        } else {
            printf("%c", 'A' + (resto - 10));
        }
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
        printf("O número equivalente na base 16 é: 0\n");
        return 0;
    }

    // Converter para a base 16 (hexadecimal) e imprimir o resultado
    printf("O número equivalente na base 16 é: ");
    converterParaHexadecimal(decimal);
    printf("\n");

    return 0;
}
