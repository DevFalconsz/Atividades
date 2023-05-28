// exercicio 49

#include <stdio.h>

// Função para calcular o máximo divisor comum (MDC) entre dois números
int calcularMDC(int a, int b) {
    // Aplicando o método das divisões sucessivas
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    
    return a;
}

int main() {
    // Loop para ler as 25 linhas
    for (int i = 1; i <= 25; i++) {
        int num1, num2, num3;
        
        // Leitura dos três números inteiros positivos
        scanf("%d %d %d", &num1, &num2, &num3);
        
        // Chamada da função para calcular o MDC entre os três números
        int mdc = calcularMDC(calcularMDC(num1, num2), num3);
        
        // Exibição dos três números e o MDC entre eles
        printf("Números: %d, %d, %d | MDC: %d\n", num1, num2, num3, mdc);
    }
    
    return 0;
}
