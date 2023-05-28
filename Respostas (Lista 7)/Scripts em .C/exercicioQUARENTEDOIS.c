// exercicio 42

#include <stdio.h>

int main() {
    int B, A;
    int sum = 0;

    // Solicita ao usuário que digite os valores de B e A
    printf("Digite os valores de B e A (B > A): ");
    scanf("%d %d", &B, &A);

    // Loop para percorrer os números de A a B
    for (int i = A; i <= B; i++) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            // Calcula o cubo do número par e adiciona à soma
            sum += i * i * i;
        }
    }

    // Escreve a soma dos cubos dos números pares
    printf("A soma dos cubos dos numeros pares entre %d e %d eh: %d\n", B, A, sum);

    return 0;
}
