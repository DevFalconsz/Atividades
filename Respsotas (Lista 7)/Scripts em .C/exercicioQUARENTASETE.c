// exercicio 47

#include <stdio.h>
#include <math.h>

// Função para calcular a trigésima aproximação da raiz
double calcularTrigesimaAproximacao() {
    double X = 1.5;
    
    // Loop para realizar as sucessivas aproximações
    for (int i = 1; i <= 30; i++) {
        double numerador = pow(X, 3) - 3 * pow(X, 2) + 1;
        double denominador = 3 * pow(X, 2) - 6 * X;
        X = X - (numerador / denominador);
    }
    
    return X;
}

int main() {
    // Chamada da função para calcular a trigésima aproximação da raiz
    double trigesimaAproximacao = calcularTrigesimaAproximacao();
    
    // Exibição do resultado
    printf("Trigesima aproximacao da raiz: %.6lf\n", trigesimaAproximacao);
    
    return 0;
}
