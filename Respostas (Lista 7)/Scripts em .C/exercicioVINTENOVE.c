// exercicio 29

#include <stdio.h>
#include <string.h>

int main() {
    int criancasNascidas;
    int criancasMortas = 0;
    int criancasMortasMasculino = 0;
    int criancasViveram24MesesOuMenos = 0;
    char sexo[10];
    int meses;
    int continuar = 1;

    // Leitura do número de crianças nascidas
    printf("Número de crianças nascidas: ");
    scanf("%d", &criancasNascidas);

    // Leitura das informações sobre as crianças mortas
    printf("Informe o sexo e os meses de vida de cada criança (digite 'vazio' para encerrar):\n");

    while (continuar) {
        printf("Sexo: ");
        scanf("%s", sexo);

        if (strcmp(sexo, "vazio") == 0) {
            continuar = 0;
        } else {
            printf("Meses de vida: ");
            scanf("%d", &meses);

            criancasMortas++;

            if (strcmp(sexo, "masculino") == 0) {
                criancasMortasMasculino++;
            }

            if (meses <= 24) {
                criancasViveram24MesesOuMenos++;
            }
        }
    }

    // Cálculo das porcentagens
    float porcentagemCriancasMortas = (criancasMortas / (float)criancasNascidas) * 100;
    float porcentagemCriancasMortasMasculino = (criancasMortasMasculino / (float)criancasNascidas) * 100;
    float porcentagemCriancasViveram24MesesOuMenos = (criancasViveram24MesesOuMenos / (float)criancasMortas) * 100;

    // Impressão dos resultados
    printf("\n--- Resultados ---\n");
    printf("Porcentagem de crianças mortas: %.2f%%\n", porcentagemCriancasMortas);
    printf("Porcentagem de crianças do sexo masculino mortas: %.2f%%\n", porcentagemCriancasMortasMasculino);
    printf("Porcentagem de crianças que viveram 24 meses ou menos: %.2f%%\n", porcentagemCriancasViveram24MesesOuMenos);

    return 0;
}
