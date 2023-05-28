//exercicio 46

#include <stdio.h>

// Função para calcular a raiz quadrada de um número positivo
double calcularRaizQuadrada(double Y) {
    double X = Y;
    
    // Loop para realizar as sucessivas aproximações
    for (int i = 1; i <= 20; i++) {
        X = (X + Y / X) / 2;
    }
    
    return X;
}

int main() {
    double Y;
    
    // Leitura do número positivo
    printf("Digite um numero positivo: ");
    scanf("%lf", &Y);
    
    // Verificação se o número é negativo
    if (Y < 0) {
        printf("Erro: Numero negativo. A raiz quadrada nao pode ser calculada.\n");
    } else {
        // Chamada da função para calcular a raiz quadrada
        double raizQuadrada = calcularRaizQuadrada(Y);
        // Exibição do resultado
        printf("Raiz quadrada de %.2lf: %.6lf\n", Y, raizQuadrada);
    }
    
    return 0;
}
