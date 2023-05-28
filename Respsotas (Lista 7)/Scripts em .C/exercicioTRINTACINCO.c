// exercicio 35

#include <stdio.h>

int main() {
    int numero, soma_divisores;

    printf("Números perfeitos entre 1 e 1000:\n");

    for (numero = 1; numero <= 1000; numero++) {
        soma_divisores = 0;

        for (int i = 1; i < numero; i++) {
            if (numero % i == 0) {
                soma_divisores += i;
            }
        }

        if (soma_divisores == numero) {
            printf("%d\n", numero);
        }
    }

    return 0;
}
