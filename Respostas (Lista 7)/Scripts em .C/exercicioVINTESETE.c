// exercicio 27

#include <stdio.h>

int main() {
    int max_operarios_padrao = 24;
    int max_operarios_luxo = 32;
    int total_operarios = 40;
    int lucro_padrao, lucro_luxo;
    int num_operarios_padrao, num_operarios_luxo;
    int num_radios_padrao, num_radios_luxo;
    int lucro_total;

    printf("Informe o valor do lucro para o rádio padrão: ");
    scanf("%d", &lucro_padrao);

    printf("Informe o valor do lucro para o rádio luxo: ");
    scanf("%d", &lucro_luxo);

    // Verifica todos os possíveis esquemas de produção para encontrar o que maximiza o lucro
    int max_lucro = 0;
    for (int i = 0; i <= max_operarios_padrao; i++) {
        int j = total_operarios - i;  // número de operários restantes para a linha luxo
        if (j > max_operarios_luxo) continue;  // se exceder o número máximo de operários na linha luxo, passa para o próximo

        int num_radios_padrao_temp = i;
        int num_radios_luxo_temp = j / 2;  // divide o número de operários restantes por 2 para a linha luxo

        int lucro_temp = num_radios_padrao_temp * lucro_padrao + num_radios_luxo_temp * lucro_luxo;

        if (lucro_temp > max_lucro) {
            max_lucro = lucro_temp;
            num_operarios_padrao = i;
            num_operarios_luxo = j;
            num_radios_padrao = num_radios_padrao_temp;
            num_radios_luxo = num_radios_luxo_temp;
        }
    }

    lucro_total = max_lucro;

    printf("Esquema de produção para lucro máximo:\n");
    printf("Operários na linha padrão: %d\n", num_operarios_padrao);
    printf("Operários na linha luxo: %d\n", num_operarios_luxo);
    printf("Rádios padrão produzidos: %d\n", num_radios_padrao);
    printf("Rádios luxo produzidos: %d\n", num_radios_luxo);
    printf("Lucro total: %d\n", lucro_total);

    return 0;
}
