// exercicio 50

#include <stdio.h>

// Função para contar o número de divisores de um número
int contarDivisores(int num) {
    int count = 0;
    
    // Loop para verificar cada possível divisor
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++; // Incrementa o contador se o número for divisor
        }
    }
    
    return count; // Retorna o número de divisores encontrados
}

int main() {
    // Loop para percorrer os números de 300 a 400
    for (int num = 300; num <= 400; num++) {
        int numDivisores = contarDivisores(num); // Chama a função contarDivisores
        
        // Exibe o número e o número de divisores correspondentes
        printf("Número: %d | Número de Divisores: %d\n", num, numDivisores);
    }
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
