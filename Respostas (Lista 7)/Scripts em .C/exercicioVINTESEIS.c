// exercicio 26

#include <stdio.h>

int main() {
    int motos_tokio = 55000;
    int motos_aparecida = 1500;
    float taxa_tokio = 0.005;    // 0,5% a.m.
    float taxa_aparecida = 0.0089;    // 0,89% a.m.
    int anos = 0;

    while (motos_aparecida <= motos_tokio) {
        motos_tokio += motos_tokio * taxa_tokio;    // Adiciona a taxa de aquisição de motos de Tóquio
        motos_aparecida += motos_aparecida * taxa_aparecida;    // Adiciona a taxa de aquisição de motos de Aparecida de Goiânia
        anos++;
    }

    printf("Em %d anos, Aparecida de Goiânia superará Tóquio em número de motocicletas.\n", anos);

    return 0;
}
