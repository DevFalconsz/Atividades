// exercicio 37

#include <stdio.h>

// Função para calcular o máximo divisor comum (MDC) de três números
int calcularMDC(int a, int b, int c) {
    // Encontrando o menor valor entre os três números
    int menor = a < b ? (a < c ? a : c) : (b < c ? b : c);
    int mdc = 1;

    // Loop para verificar os divisores comuns entre os três números
    for (int i = 2; i <= menor; i++) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            mdc = i;
        }
    }

    return mdc;
}

int main() {
    int a, b, c;
    char continuar;

    do {
        // Solicita ao usuário que digite três números inteiros positivos
        printf("Digite três números inteiros positivos: ");
        scanf("%d %d %d", &a, &b, &c);

        // Calcula o máximo divisor comum utilizando a função calcularMDC
        int mdc = calcularMDC(a, b, c);

        // Exibe o resultado do máximo divisor comum
        printf("Máximo Divisor Comum: %d\n", mdc);

        // Pergunta ao usuário se deseja continuar ou encerrar o programa
        printf("Deseja continuar (s/n)? ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
