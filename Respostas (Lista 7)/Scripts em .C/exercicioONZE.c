// exercicio 11

#include <stdio.h>

int main() {
    int n;
    int soma = 0;

    // Solicitar o valor de n ao usuário
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    // Calcular a soma dos números de 1 a n
    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    // Imprimir o valor da soma
    printf("O valor da soma dos números de 1 a %d é: %d\n", n, soma);

    return 0;
}
