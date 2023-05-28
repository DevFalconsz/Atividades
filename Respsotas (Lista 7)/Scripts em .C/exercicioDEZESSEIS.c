// exercicio 16

#include <stdio.h>

int main() {
    int numero;
    int i;
    int ehPrimo = 1; // Assumimos que o número é primo inicialmente

    // Ler o número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verificar se o número é primo
    if (numero <= 1) {
        ehPrimo = 0; // Números menores ou iguais a 1 não são primos
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                ehPrimo = 0; // Número é divisível por outro além de 1 e ele mesmo, logo não é primo
                break;
            }
        }
    }

    // Imprimir o resultado
    if (ehPrimo) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}
