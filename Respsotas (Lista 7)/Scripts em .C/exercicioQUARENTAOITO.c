// exercicio 48

#include <stdio.h>

// Função para calcular o valor da função f(x, y)
int calcularFuncao(int x, int y) {
    return x * x + 3 * x + y * y * x - 5 * y - 3 * x + 15;
}

int main() {
    // Loop para percorrer os valores de x
    for (int x = 1; x <= 100; x += 3) {
        // Loop para percorrer os valores de y
        for (int y = 0; y <= 5; y++) {
            // Chamada da função para calcular o valor de f(x, y)
            int resultado = calcularFuncao(x, y);
            
            // Exibição do resultado
            printf("f(%d, %d) = %d\n", x, y, resultado);
        }
    }
    
    return 0;
}
