// exercício 4

#include <stdio.h>
#include <math.h>

int main() {
    // Inicializar o ângulo A
    float A = 0.0;

    // Definir o passo de variação dos ângulos
    float passo = 0.1;

    // Definir o limite superior dos ângulos
    float limite_superior = 6.3;

    // Imprimir o cabeçalho da tabela
    printf("Ângulo (rad) | Seno(A)\n");

    // Loop para gerar e escrever a tabela
    while (A <= limite_superior) {
        // Calcular o valor do seno usando a série de Mac-Laurin truncada
        float seno = A - (powf(A, 3) / 6) + (powf(A, 5) / 120) - (powf(A, 7) / 5040);

        // Imprimir o ângulo e o valor do seno formatados
        printf("%.1f          | %.4f\n", A, seno);

        // Atualizar o ângulo
        A += passo;
    }

    return 0;
}