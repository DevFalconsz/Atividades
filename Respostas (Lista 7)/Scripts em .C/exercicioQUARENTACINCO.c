// exercicio 45

#include <stdio.h>

int main() {
    int numAmostras = 112;

    printf("Classificacao das Amostras de Aco:\n");
    printf("---------------------------------\n");
    printf("Numero da Amostra   |   Grau Obtido\n");
    printf("---------------------------------\n");

    for (int i = 1; i <= numAmostras; i++) {
        int numAmostra, durezaRockwell;
        float conteudoCarbono, resistenciaTracao;

        // Leitura dos dados da amostra
        printf("Amostra %d\n", i);
        printf("Numero da Amostra: ");
        scanf("%d", &numAmostra);

        printf("Conteudo de Carbono (em %%): ");
        scanf("%f", &conteudoCarbono);

        printf("Dureza de Rockwell: ");
        scanf("%d", &durezaRockwell);

        printf("Resistencia a Tracao (em psi): ");
        scanf("%f", &resistenciaTracao);

        int grau;

        // Verificação dos testes
        if (conteudoCarbono < 7 && durezaRockwell > 50 && resistenciaTracao > 80000) {
            grau = 10;
        } else if (conteudoCarbono < 7 && durezaRockwell > 50) {
            grau = 9;
        } else if (conteudoCarbono < 7) {
            grau = 8;
        } else {
            grau = 7;
        }

        // Impressão da classificação da amostra
        printf("%18d   |   %d\n", numAmostra, grau);
        printf("---------------------------------\n");
    }

    return 0;
}
