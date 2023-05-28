// exercicio 51

#include <stdio.h>
#include <math.h>

// Função para verificar se um número é capicua
int ehCapicua(int num) {
    int reverse = 0;
    int original = num;
    
    // Inverte o número
    while (num > 0) {
        int digito = num % 10;
        reverse = reverse * 10 + digito;
        num /= 10;
    }
    
    // Verifica se o número invertido é igual ao original
    if (original == reverse) {
        return 1; // É capicua
    } else {
        return 0; // Não é capicua
    }
}

int main() {
    // Loop para percorrer os números de 1 a 10.000
    for (int num = 1; num < 10000; num++) {
        int raiz = sqrt(num); // Calcula a raiz quadrada do número
        
        // Verifica se o número é um quadrado perfeito e capicua ao mesmo tempo
        if (raiz * raiz == num && ehCapicua(num)) {
            printf("%d\n", num); // Exibe o número se atender às condições
        }
    }
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
