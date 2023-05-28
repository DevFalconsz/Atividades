// exercicio 33

#include <stdio.h>
#include <string.h>

int main() {
    char cidade[4];
    int contagem_rio = 0, contagem_bh = 0, contagem_sp = 0;

    while (strcmp(cidade, "fim") != 0) {
        printf("Digite a sigla da cidade de origem (ou 'fim' para encerrar): ");
        scanf("%s", cidade);

        if (strcmp(cidade, "RJ") == 0) {
            contagem_rio++;
        } else if (strcmp(cidade, "BH") == 0) {
            contagem_bh++;
        } else if (strcmp(cidade, "SP") == 0) {
            contagem_sp++;
        }
    }

    printf("Total de cidades do Rio de Janeiro: %d\n", contagem_rio);
    printf("Total de cidades de Belo Horizonte: %d\n", contagem_bh);
    printf("Total de cidades de São Paulo: %d\n", contagem_sp);

    return 0;
}
