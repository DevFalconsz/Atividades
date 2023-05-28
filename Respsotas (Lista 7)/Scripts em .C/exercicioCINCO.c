// exercício 5

#include <stdio.h>
#include <math.h>

int main() {
    // Inicializar a variável de soma
    double soma = 0.0;

    // Definir o número de termos
    int num_termos = 51;

    // Loop para calcular a soma da série
    for (int i = 0; i < num_termos; i++) {
        // Calcular o termo atual da série
        double termo = 1.0 / pow((2 * i + 1), 3);

        // Alternar o sinal do termo de acordo com o índice
        if (i % 2 == 0) {
            soma += termo;
        } else {
            soma -= termo;
        }
    }

    // Calcular o valor aproximado de π
    double pi = cbrt(soma) * 32;

    // Imprimir o valor de π
    printf("O valor de pi é aproximadamente: %.15f\n", pi);

    return 0;
}
