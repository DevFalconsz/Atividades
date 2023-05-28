// exercicio 6

#include <stdio.h>
#include <math.h>

int main() {
    // Inicializar a variável de soma
    double soma = 0.0;

    // Definir o limite superior do somatório
    int limite_superior = 16384;

    // Loop para calcular o somatório
    for (int i = 0; i <= limite_superior; i++) {
        // Calcular o numerador e o denominador do termo atual
        double numerador = pow(-2, i);
        double denominador = pow((16 - i), 2);

        // Calcular o termo atual
        double termo = numerador / denominador;

        // Adicionar o termo à soma total
        soma += termo;
    }

    // Imprimir o valor de S
    printf("O valor de S é: %.15f\n", soma);

    return 0;
}