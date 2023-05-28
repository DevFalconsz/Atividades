// exercicio 36

#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    double resultado;

    printf("Tabela da função F(x, y, z):\n");
    printf("----------------------------\n");
    printf("  x    |   y   |   z   |  F(x, y, z)\n");
    printf("------------------------------------\n");

	//Laçod e repetição paracalcular cada parte da função
    for (x = 1; x <= 100; x = x + 3) {
        for (y = 6; y <= 30; y = y + 3) {
            for (z = 3; z <= 15; z = z + 2) {
                double x_quadrado = pow(x, 2);
                double y_quadrado = pow(y, 2);
                double z_quadrado = pow(z, 2);

                double denominador = pow(x_quadrado * y_quadrado * z_quadrado, 4);

                resultado = (x_quadrado + y_quadrado + z_quadrado) / denominador;

                printf("%4d   |  %3d  |  %3d  |   %.6f\n", x, y, z, resultado);
            }
        }
    }

    return 0;
}
