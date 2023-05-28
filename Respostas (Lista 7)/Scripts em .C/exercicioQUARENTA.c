// exercicio 40

#include <stdio.h>
#include <math.h>

double calcularAreaTriangulo(double a, double b) {
    if (a == 0 || b == 0) {
        return 0.0;  // Não há triângulo, retorna área igual a 0
    } else {
        return fabs(-b / a) * fabs(b);  // Calcula a área do triângulo
    }
}

int main() {
    double a, b;

    int encerrar = 0;

    // Loop enquanto não for necessário encerrar
    while (!encerrar) {
        // Solicita ao usuário que digite os parâmetros da reta
        printf("Digite os parâmetros A e B da reta (ou 0 0 para encerrar): ");
        scanf("%lf %lf", &a, &b);

        // Verifica se os parâmetros são iguais a zero (condição de parada)
        if (a == 0 && b == 0) {
            encerrar = 1;  // Define a flag para encerrar o loop
        }

        // Calcula a área do triângulo apenas se não for necessário encerrar
        if (!encerrar) {
            double area = calcularAreaTriangulo(a, b);

            // Exibe os parâmetros e a área do triângulo
            printf("Parâmetros A=%.2lf, B=%.2lf\n", a, b);
            printf("Área do triângulo: %.2lf\n\n", area);
        }
    }

    return 0;
}
