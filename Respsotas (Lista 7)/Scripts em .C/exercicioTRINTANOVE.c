// exercicio 39

#include <stdio.h>

int main() {
    double a, b, c, d, u, v;

    int continuar = 1;

    while (continuar) {
        // Solicita ao usuário que digite os parâmetros do sistema
        printf("Digite os parâmetros do sistema (a, b, c, d, u, v): ");
        scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &u, &v);

        // Verifica se os parâmetros a, b, c, d são todos iguais a zero (condição de parada)
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            continuar = 0;  // Define continuar como 0 para sair do loop
        } else {
            // Calcula os valores de x e y
            double x = (d * u - b * v) / (a * d - b * c);
            double y = (-c * u + a * v) / (a * d - b * c);

            // Exibe os parâmetros e os valores calculados
            printf("Parâmetros: a=%.2lf, b=%.2lf, c=%.2lf, d=%.2lf, u=%.2lf, v=%.2lf\n", a, b, c, d, u, v);
            printf("Valores calculados: x=%.2lf, y=%.2lf\n\n", x, y);
        }
    }

    return 0;
}
