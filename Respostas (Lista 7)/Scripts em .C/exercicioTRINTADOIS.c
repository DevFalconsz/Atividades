// exercicio 32

#include <stdio.h>

int main() {
    float tempoPadrao1, tempoPadrao2, tempoPadrao3;
    float tempoEquipe1, tempoEquipe2, tempoEquipe3;
    int numeroInscricao;
    float pontosEtapa1, pontosEtapa2, pontosEtapa3;
    float totalPontos;
    int equipePrimeiroLugar, equipeSegundoLugar, equipeTerceiroLugar;
    float pontosPrimeiroLugar = 0, pontosSegundoLugar = 0, pontosTerceiroLugar = 0;

    // Passo 1: Leitura dos tempos-padrão
    scanf("%f %f %f", &tempoPadrao1, &tempoPadrao2, &tempoPadrao3);

    // Passo 2: Leitura dos tempos das equipes e cálculo dos pontos
    while (1) {
        scanf("%d", &numeroInscricao);
        if (numeroInscricao == 9999) {
            break; // Encerra a leitura dos tempos das equipes
        }

        scanf("%f %f %f", &tempoEquipe1, &tempoEquipe2, &tempoEquipe3);

        // Cálculo dos pontos para cada etapa
        float diferenca1 = tempoPadrao1 - tempoEquipe1;
        float diferenca2 = tempoPadrao2 - tempoEquipe2;
        float diferenca3 = tempoPadrao3 - tempoEquipe3;

        if (diferenca1 < 3) {
            pontosEtapa1 = 100;
        } else if (diferenca1 >= 3 && diferenca1 <= 5) {
            pontosEtapa1 = 80;
        } else {
            pontosEtapa1 = 80 - diferenca1;
        }

        if (diferenca2 < 3) {
            pontosEtapa2 = 100;
        } else if (diferenca2 >= 3 && diferenca2 <= 5) {
            pontosEtapa2 = 80;
        } else {
            pontosEtapa2 = 80 - diferenca2;
        }

        if (diferenca3 < 3) {
            pontosEtapa3 = 100;
        } else if (diferenca3 >= 3 && diferenca3 <= 5) {
            pontosEtapa3 = 80;
        } else {
            pontosEtapa3 = 80 - diferenca3;
        }

        // Cálculo do total de pontos da equipe
        totalPontos = pontosEtapa1 + pontosEtapa2 + pontosEtapa3;

        // Verificação das equipes de primeiro, segundo e terceiro lugar
        if (totalPontos > pontosPrimeiroLugar) {
            pontosTerceiroLugar = pontosSegundoLugar;
            equipeTerceiroLugar = equipeSegundoLugar;
            pontosSegundoLugar = pontosPrimeiroLugar;
            equipeSegundoLugar = equipePrimeiroLugar;
            pontosPrimeiroLugar = totalPontos;
            equipePrimeiroLugar = numeroInscricao;
        } else if (totalPontos > pontosSegundoLugar) {
            pontosTerceiroLugar = pontosSegundoLugar;
            equipeTerceiroLugar = equipeSegundoLugar;
            pontosSegundoLugar         = totalPontos;
        equipeSegundoLugar = numeroInscricao;
        } else if (totalPontos > pontosTerceiroLugar) {
            pontosTerceiroLugar = totalPontos;
            equipeTerceiroLugar = numeroInscricao;
        }

        // Saída dos resultados para a equipe atual
        printf("Equipe: %d\n", numeroInscricao);
        printf("Pontos Etapa 1: %.2f\n", pontosEtapa1);
        printf("Pontos Etapa 2: %.2f\n", pontosEtapa2);
        printf("Pontos Etapa 3: %.2f\n", pontosEtapa3);
        printf("Total de Pontos: %.2f\n\n", totalPontos);
    }

    // Saída dos resultados finais
    printf("Equipe Primeiro Lugar: %d\n", equipePrimeiroLugar);
    printf("Equipe Segundo Lugar: %d\n", equipeSegundoLugar);
    printf("Equipe Terceiro Lugar: %d\n", equipeTerceiroLugar);

    return 0;
}

