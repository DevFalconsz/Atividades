// exercicio 31

#include <stdio.h>

int main() {
    int votosA = 0, votosB = 0, votosC = 0; // Variáveis para armazenar o número de votos de cada candidato
    int idade, votosHomensA = 0, votosHomensB = 0, votosHomensC = 0; // Variáveis para armazenar o número de votos de homens para cada candidato
    char sexo, candidato; // Variáveis para armazenar o sexo e o candidato escolhido
    int totalEleitores = 0; // Variável para armazenar o total de eleitores
    int maiorVotos = 0; // Variável para armazenar o número de votos do candidato mais votado
    float mediaIdade = 0.0; // Variável para armazenar a média de idade dos eleitores do candidato mais votado
    int continuar = 1; // Variável para controlar a continuação do loop while

    printf("Informe os dados dos eleitores (candidato: A, B ou C; idade; sexo: M ou F):\n");

    while (continuar) {
        printf("Candidato (A, B ou C): ");
        scanf(" %c", &candidato);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Sexo (M ou F): ");
        scanf(" %c", &sexo);

        if (candidato == 'A') {
            votosA++;
            if (sexo == 'M') {
                votosHomensA++;
            }
        } else if (candidato == 'B') {
            votosB++;
            if (sexo == 'M') {
                votosHomensB++;
            }
        } else if (candidato == 'C') {
            votosC++;
            if (sexo == 'M') {
                votosHomensC++;
            }
        }

        totalEleitores++;

        printf("Deseja continuar? (1 - Sim, 0 - Não): ");
        scanf("%d", &continuar);
    }

    // Verifica qual candidato recebeu mais votos e calcula a média de idade dos eleitores desse candidato
    if (votosA >= votosB && votosA >= votosC) {
        maiorVotos = votosA;
        mediaIdade = (float)idade / votosA;
    } else if (votosB >= votosA && votosB >= votosC) {
        maiorVotos = votosB;
        mediaIdade = (float)idade / votosB;
    } else {
        maiorVotos = votosC;
        mediaIdade = (float)idade / votosC;
    }

    printf("\n--- Resultado ---\n");
    printf("Candidato mais votado: %c\n", (maiorVotos == votosA) ? 'A' : (maiorVotos == votosB) ? 'B' : 'C');
    printf("Média de idade dos eleitores do candidato mais votado: %.2f\n", mediaIdade);
    printf("Candidato preferido dos homens: %c\n", (votosHomensA >= votosHomensB && votosHomensA >= votosHomensC) ? 'A' : (votosHomensB >= votosHomensA && votosHomensB >= votosHomensC) ? 'B' : 'C');

    return 0;
}
