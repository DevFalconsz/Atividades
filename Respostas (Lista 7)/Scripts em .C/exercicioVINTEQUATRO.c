// exercicio 24

#include <stdio.h>

int main() {
    int num_boi, num_boi_gordo, num_boi_magro;
    float peso_boi, peso_boi_gordo, peso_boi_magro;
    int i;

    // Ler os dados do primeiro boi
    printf("Informe o número de identificação do boi 1: ");
    scanf("%d", &num_boi);
    printf("Informe o peso do boi 1 (em kg): ");
    scanf("%f", &peso_boi);

    // Definir o primeiro boi como o mais gordo e o mais magro
    num_boi_gordo = num_boi;
    num_boi_magro = num_boi;
    peso_boi_gordo = peso_boi;
    peso_boi_magro = peso_boi;

    // Verificar os dados dos demais bois
    for (i = 2; i <= 90; i++) {
        printf("Informe o número de identificação do boi %d: ", i);
        scanf("%d", &num_boi);
        printf("Informe o peso do boi %d (em kg): ", i);
        scanf("%f", &peso_boi);

        // Verificar se o boi é o mais gordo
        if (peso_boi > peso_boi_gordo) {
            num_boi_gordo = num_boi;
            peso_boi_gordo = peso_boi;
        }

        // Verificar se o boi é o mais magro
        if (peso_boi < peso_boi_magro) {
            num_boi_magro = num_boi;
            peso_boi_magro = peso_boi;
        }
    }

    // Imprimir os resultados
    printf("O boi mais gordo é o de número %d, com peso %.2f kg.\n", num_boi_gordo, peso_boi_gordo);
    printf("O boi mais magro é o de número %d, com peso %.2f kg.\n", num_boi_magro, peso_boi_magro);

    return 0;
}
