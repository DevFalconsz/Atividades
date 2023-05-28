// exercicio 14

#include <stdio.h>

int main() {
    int numero;
    int n1, n2, n3;
    int produto;

    // Ler o número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Encontrar os três números naturais consecutivos cujo produto resulta no número dado
    for (n1 = 1; n1 <= numero; n1++) {
        for (n2 = n1 + 1; n2 <= numero; n2++) {
            for (n3 = n2 + 1; n3 <= numero; n3++) {
                produto = n1 * n2 * n3;
                if (produto == numero) {
                    printf("Número Triangular\n");
                    return 0; // Encerra o programa
                }
            }
        }
    }

    // Caso não encontre três números consecutivos cujo produto seja igual ao número dado
    printf("Número não Triangular\n");

    return 0;
}
