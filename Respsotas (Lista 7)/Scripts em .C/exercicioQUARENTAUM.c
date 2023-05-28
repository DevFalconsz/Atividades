// exercicio 41

#include <stdio.h>
#include <stdbool.h>

int main() {
    double x, y;
    bool flag = false;

    // Loop para ler as coordenadas do ponto até que a flag seja encontrada
    while (!flag) {
        // Solicita ao usuário que digite as coordenadas do ponto
        printf("Digite as coordenadas do ponto (x, y): ");
        scanf("%lf %lf", &x, &y);

        // Verifica se as coordenadas são iguais a zero para definir a flag
        if (x == 0 && y == 0) {
            flag = true;
        }

        // Verifica se o ponto está dentro ou fora da região
        if (!flag) {
            if (x >= 0 && y >= 0 && y <= 2 - x) {
                printf("INTERIOR\n");
            } else {
                printf("EXTERIOR\n");
            }
        }
    }

    return 0;
}
