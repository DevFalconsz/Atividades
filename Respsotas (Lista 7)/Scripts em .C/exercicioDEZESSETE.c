// exeercicio 17

#include <stdio.h>

int main() {
    int N1, N2;
    int quociente = 0;
    int resto;

    // Ler os dois números inteiros positivos
    printf("Digite o primeiro número inteiro positivo (N1): ");
    scanf("%d", &N1);
    printf("Digite o segundo número inteiro positivo (N2): ");
    scanf("%d", &N2);

    // Calcular o quociente e o resto da divisão
    resto = N1;
    while (resto >= N2) {
        resto -= N2;
        quociente++;
    }

    // Imprimir o quociente e o resto da divisão
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}

