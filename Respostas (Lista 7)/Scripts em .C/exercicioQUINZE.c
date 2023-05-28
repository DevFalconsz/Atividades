// exercicio 15

#include <stdio.h>

int main() {
    int N1, N2;
    int multiplicacao = 0;

    // Ler os dois números do teclado
    printf("Digite o primeiro número: ");
    scanf("%d", &N1);
    printf("Digite o segundo número: ");
    scanf("%d", &N2);

    // Calcular a multiplicação usando apenas adição e subtração
    int absN1 = (N1 < 0) ? -N1 : N1;
    int absN2 = (N2 < 0) ? -N2 : N2;

    for (int i = 0; i < absN2; i++) {
        multiplicacao += absN1;
    }

    // Verificar o sinal do resultado
    if ((N1 < 0 && N2 > 0) || (N1 > 0 && N2 < 0)) {
        multiplicacao = -multiplicacao;
    }

    // Imprimir o resultado da multiplicação
    printf("O resultado da multiplicação é: %d\n", multiplicacao);

    return 0;
}
