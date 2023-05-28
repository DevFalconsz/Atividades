// exercício 2

#include <stdio.h>

int main() {
    // Inicializar a variável de soma
    float soma = 0;

    // Loop reverso de 37 a 1
    for (int i = 37; i >= 1; i--) {
        // Calcular o termo atual da série
        float termo = i * (i + 1) / (38 - i);

        // Adicionar o termo à soma total
        soma += termo;
    }

    // Imprimir o resultado da soma
    printf("A soma é: %.2f\n", soma);

    return 0;
}