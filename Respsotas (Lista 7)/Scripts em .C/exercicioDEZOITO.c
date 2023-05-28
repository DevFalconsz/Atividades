// exercicio 18

#include <stdio.h>

int calcularMDC(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int calcularMMC(int a, int b) {
    int mdc = calcularMDC(a, b);
    return (a * b) / mdc;
}

int main() {
    int N1, N2;
    int mmc;

    // Ler os dois números inteiros positivos
    printf("Digite o primeiro número inteiro positivo (N1): ");
    scanf("%d", &N1);
    printf("Digite o segundo número inteiro positivo (N2): ");
    scanf("%d", &N2);

    // Calcular o MMC
    mmc = calcularMMC(N1, N2);

    // Imprimir o MMC
    printf("O mínimo múltiplo comum (MMC) de %d e %d é: %d\n", N1, N2, mmc);

    return 0;
}