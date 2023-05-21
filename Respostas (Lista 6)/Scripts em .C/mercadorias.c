//Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto, mandou digitar numa 
//linha para cada mercadoria com o nome, preço de compra e preço de venda das mesmas. Fazer um algoritmo que: 
//determine e escreva quantas mercadorias proporcionam: 
//o lucro menor que 10%. 
//o lucro entre 10% e 20%. 
//o lucro maior que 20%. 
//Determine e escreva o valor total de compra e de venda de todas as mercadorias, assim como o lucro total. 
//Obs: o aluno deve adotar um flag (para encerrar o laço-loop) 

#include<stdlib.h>
#include<stdio.h>

int main(){
	//Declaração de variáveis
	char nome[50];
    float precoCompra, precoVenda;
    int contadorMenor10 = 0, contadorEntre10e20 = 0, contadorMaior20 = 0;
    float valorTotalCompra = 0, valorTotalVenda = 0, lucroTotal = 0;

	//REcebendo valores de mercadoria
    printf("Digite o nome da mercadoria (ou 'fim' para encerrar): ");
    scanf("%s", nome);

	//Laço de repetição para calcular as porcentagens
    while (strcmp(nome, "fim") != 0) {
        printf("Digite o preço de compra da mercadoria: ");
        scanf("%f", &precoCompra);
        printf("Digite o preço de venda da mercadoria: ");
        scanf("%f", &precoVenda);

        valorTotalCompra += precoCompra;
        valorTotalVenda += precoVenda;

        float lucro = precoVenda - precoCompra;
        lucroTotal += lucro;

        if (lucro < precoCompra * 0.1) {
            contadorMenor10++;
        } else if (lucro >= precoCompra * 0.1 && lucro <= precoCompra * 0.2) {
            contadorEntre10e20++;
        } else {
            contadorMaior20++;
        }

		//Saída ou continuação do loop
        printf("\nDigite o nome da mercadoria (ou 'fim' para encerrar): ");
        scanf("%s", nome);
    }

	//Mostrando resultados finais
    printf("\nQuantidade de mercadorias com lucro menor que 10%%: %d\n", contadorMenor10);
    printf("Quantidade de mercadorias com lucro entre 10%% e 20%%: %d\n", contadorEntre10e20);
    printf("Quantidade de mercadorias com lucro maior que 20%%: %d\n", contadorMaior20);

    printf("\nValor total de compra das mercadorias: %.2f\n", valorTotalCompra);
    printf("Valor total de venda das mercadorias: %.2f\n", valorTotalVenda);
    printf("Lucro total: %.2f\n", lucroTotal);
}