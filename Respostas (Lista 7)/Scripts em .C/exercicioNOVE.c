// exercicio 9

#include <stdio.h>
#include <math.h>

// Função para calcular o fatorial de um número
int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    // Variáveis
    float x;
    int num_termos = 20;
    float cos_x = 0.0;
    float diff = 0.0;

    // Entrada do valor de x
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    // Cálculo do cosseno de x e diferença em relação à função COS(X)
    for (int i = 0; i < num_termos; i++) {
        // Cálculo do termo atual da série
        float termo = pow(-1, i) * pow(x, 2*i) / fatorial(2*i);

        // Adição do termo ao cosseno de x
        cos_x += termo;

        // Cálculo da diferença entre o valor calculado e o valor fornecido pela função COS(X)
        diff = cos(x) - cos_x;
    }

    // Impressão dos resultados
    printf("a) O valor do cosseno de x através de 20 termos da série é: %.6f\n", cos_x);
    printf("b) A diferença entre o valor calculado e o valor fornecido pela função COS(X) é: %.6f\n", diff);

    return 0;
}
