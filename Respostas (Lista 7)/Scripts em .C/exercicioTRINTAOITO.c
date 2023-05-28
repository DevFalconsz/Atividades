// exercicio 38

#include <stdio.h>
#include <math.h>

// Função para calcular a distância entre dois pontos
double calcularDistancia(double x1, double y1, double x2, double y2) {
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distancia;
}

int main() {
    double x1, y1, x2, y2;

    do {
        // Solicita ao usuário que digite as coordenadas dos dois pontos
        printf("Digite as coordenadas dos dois pontos (x1, y1, x2, y2): ");
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

        // Calcula a distância entre os pontos utilizando a função calcularDistancia
        double distancia = calcularDistancia(x1, y1, x2, y2);

        // Exibe o resultado da distância
        printf("Distância entre os pontos: %.2lf\n", distancia);

    } while (x1 != 0 || x2 != 0 || y1 != 0 || y2 != 0);

    return 0;
}
