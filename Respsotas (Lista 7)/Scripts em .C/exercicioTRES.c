// exercício 3

#include <stdio.h>

int main() {
    // Inicializar a variável de soma
    float soma = 0;

    // Variável para controlar o sinal dos termos
    int sinal = 1;

    // Inicializar o denominador
    int denominador = 1;

    // Loop para os 50 primeiros termos
    for (int i = 0; i <= 50; i++) {
        // Calcular o termo atual da série
        float termo = sinal * (1000 - (i * 3)) / (float)denominador;

        // Adicionar o termo à soma total
        soma += termo;

        // Atualizar o sinal e o denominador
        sinal *= -1;
        denominador++;
    }

    // Imprimir o resultado da soma
    printf("A soma é: %.2f\n", soma);

    return 0;
}