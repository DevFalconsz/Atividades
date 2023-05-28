// exercicio 52

#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Número divisível por algum outro número além de 1 e ele mesmo, não é primo
        }
    }
    
    return 1; // O número é primo
}

int main() {
    int limiteInferior = 5000;
    int limiteSuperior = 7000;
    
    printf("Numeros primos entre %d e %d:\n", limiteInferior, limiteSuperior);
    
    // Loop para percorrer os números entre o limite inferior e o limite superior
    for (int num = limiteInferior; num <= limiteSuperior; num++) {
        if (ehPrimo(num)) {
            printf("%d\n", num); // Exibe o número se for primo
        }
    }
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
