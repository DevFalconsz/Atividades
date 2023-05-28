// exercicio 23

#include <stdio.h>

int main() {
    int termo1, termo2, n;

    // Ler os dois primeiros termos da série de Fetuccine
    printf("Digite o primeiro termo: ");
    scanf("%d", &termo1);
    printf("Digite o segundo termo: ");
    scanf("%d", &termo2);

    // Verificar se o número de termos é válido
    do {
        printf("Digite o número de termos (>= 2): ");
        scanf("%d", &n);
    } while (n < 2);

    // Imprimir os dois primeiros termos
    printf("%d %d ", termo1, termo2);

    // Gerar os termos da série de Fetuccine
    int i;
    for (i = 3; i <= n; i++) {
        int termo;

        if (i % 2 == 1) {
            termo = termo1 + termo2;
        } else {
            termo = termo1 - termo2;
        }

        printf("%d ", termo);

        termo1 = termo2;
        termo2 = termo;
    }

    printf("\n");

    return 0;
}
