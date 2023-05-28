// exercicio 10

#include <stdio.h>

int main() {
    int n;

    // Solicitar o valor de n ao usuário
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    // Imprimir os números pares de 1 a n
    printf("Números pares de 1 a %d:\n", n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
