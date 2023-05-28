// exercicio 25

#include <stdio.h>

int main() {
    float preco_ingresso, lucro_esperado, lucro_maximo;
    int num_ingressos, num_ingressos_maximo;
    float despesas = 300.0;
    int i;

    // Inicializar o lucro máximo com um valor baixo
    lucro_maximo = -1.0;

    // Calcular o lucro esperado para cada preço de ingresso
    for (preco_ingresso = 6.0; preco_ingresso >= 1.0; preco_ingresso -= 0.6) {
        num_ingressos = 130 + (preco_ingresso - 6.0) / 0.6 * 30;
        lucro_esperado = (preco_ingresso * num_ingressos) - despesas;

        // Verificar se o lucro esperado é maior que o lucro máximo encontrado até agora
        if (lucro_esperado > lucro_maximo) {
            lucro_maximo = lucro_esperado;
            num_ingressos_maximo = num_ingressos;
        }

        // Imprimir o preço do ingresso e o lucro esperado
        printf("Preço do ingresso: R$ %.2f | Lucro esperado: R$ %.2f\n", preco_ingresso, lucro_esperado);
    }

    // Imprimir o lucro máximo, o preço do ingresso e o número de ingressos correspondentes
    printf("\nLucro máximo esperado: R$ %.2f\n", lucro_maximo);
    printf("Preço do ingresso correspondente: R$ %.2f\n", preco_ingresso + 0.6);
    printf("Número de ingressos correspondente: %d\n", num_ingressos_maximo);

    return 0;
}
