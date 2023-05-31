//exercicio 13

#include <stdio.h>
#include <math.h>

int main() {

	//Declaração de variáveis para números enormes e evitando estourar o limite
    int total_quadros = 64;
    double soma_graos = 0;
    double graos_quadro = 1;

	//Laço de repetição para calcular os grãos (fórmula simplificada)
    for (int n = 0; n < total_quadros; n++) {
        soma_graos += graos_quadro;
        graos_quadro *= 2;
    }

	//Exibindo resultado final
    printf("O número de grãos de milho que podem ser colocados no tabuleiro de xadrez é: %.0f\n", soma_graos);

    return 0;
}
