// exercicio 43

#include <stdio.h>
#include <math.h>

int main() {
    int numPoligonos;
    int n, r;

    // Solicita ao usuário o número de polígonos
    printf("Digite o numero de poligonos: ");
    scanf("%d", &numPoligonos);

    // Loop para ler os valores de N e R para cada polígono
    for (int i = 0; i < numPoligonos; i++) {
        // Solicita ao usuário os valores de N e R
        printf("Digite os valores de N e R: ");
        scanf("%d %d", &n, &r);

        // Calcula a área do polígono regular
        double area = (n * pow(r, 2) * sin(2 * M_PI / n)) / 2;

        // Escreve a área do polígono
        printf("A area do poligono regular de %d lados inscrito em uma circunferencia de raio %d eh: %.2lf\n", n, r, area);
    }

    return 0;
}
