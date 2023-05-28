// exercicio 44

#include <stdio.h>
#include <math.h>

int main() {
    int numLados = 5;
    int incremento = 5;
    int numPoligonos = (100 - numLados) / incremento + 1;

    printf("Tabela do Semiperimetro para Poligonos Regulares Inscritos em uma Circunferencia de Raio Unitario:\n");
    printf("-------------------------------------------------\n");
    printf("Numero de Lados   |   Semiperimetro\n");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < numPoligonos; i++) {
        int n = numLados + (i * incremento);
        double semiperimetro = n * sin(M_PI / n);

        printf("%16d   |   %.6lf\n", n, semiperimetro);
    }

    return 0;
}
