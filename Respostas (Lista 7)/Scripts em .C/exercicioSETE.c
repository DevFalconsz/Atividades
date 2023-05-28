// exercicio 7

#include <stdio.h>

int main() {
    // Inicializar a variável de soma
    float soma = 0.0;

    // Loop para calcular a soma dos termos
    for (int i = 0; i < 20; i++) {
        // Calcular o numerador do termo atual
        int numerador = 100 - i;

        // Calcular o denominador do termo atual
        int denominador = i;

        // Calcular o fatorial do denominador
        int fatorial = 1;
        for (int j = 1; j <= denominador; j++) {
            fatorial *= j;
        }

        // Calcular o termo atual
        float termo = (float)numerador / fatorial;

        // Adicionar o termo à soma total
        soma += termo;
    }

    // Imprimir o valor da soma
    printf("A soma dos 20 primeiros termos da série é: %.4f\n", soma);

    return 0;
}
