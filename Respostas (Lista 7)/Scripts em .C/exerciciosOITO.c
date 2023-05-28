// exercicio 8

#include <stdio.h>

int main() {
    // Inicializar a variável de soma
    float soma = 0.0;

    // Inicializar o numerador inicial
    int numerador = 1;

    // Inicializar o denominador inicial
    int denominador = 1;

    // Loop para calcular a soma dos termos
    for (int i = 1; i <= 50; i++) {
        // Calcular o fatorial do numerador
        int fatorial = 1;
        for (int j = numerador; j > 0; j--) {
            fatorial *= j;
        }

        // Calcular o termo atual
        float termo = (float)fatorial / denominador;

        // Adicionar ou subtrair o termo à soma total
        if (i % 2 == 0) {
            soma -= termo;
        } else {
            soma += termo;
        }

        // Atualizar o numerador e o denominador para o próximo termo
        numerador++;
        denominador = (denominador * 2) + 1;
    }

    // Imprimir o valor da soma
    printf("A soma dos 50 primeiros termos da série é: %.4f\n", soma);

    return 0;
}
