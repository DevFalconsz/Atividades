/* Elabore um algoritmo que calcule o valor a ser pago por um produto considerando o preço normal de etiqueta e a escolha da
condição de pagamento. Utilize os códigos da tabela a seguir para saber qual a condição de pagamento escolhida e efetuar o cálculo
adequado.
Código Condição Pagamento
1 À vista, dinheiro ou cheque, 10% de desconto
2 À vista, cartão de credito, 5% de desconto
3 Em 2 vezes, preço normal da etiqueta sem juros
4 Em 3 vezes, preço normal da etiqueta + 10% de juros*/

#include <stdio.h>

int main() {
    float preco, valor_final;
    int opcao;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Escolha a condição de pagamento:\n");
    printf("1 - À vista, dinheiro ou cheque, 10%% de desconto\n");
    printf("2 - À vista, cartão de crédito, 5%% de desconto\n");
    printf("3 - Em 2 vezes, preço normal da etiqueta sem juros\n");
    printf("4 - Em 3 vezes, preço normal da etiqueta + 10%% de juros\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valor_final = preco * 0.9;
            printf("Valor final a ser pago: R$%.2f\n", valor_final);
            break;
        case 2:
            valor_final = preco * 0.95;
            printf("Valor final a ser pago: R$%.2f\n", valor_final);
            break;
        case 3:
            valor_final = preco / 2;
            printf("Valor das parcelas a serem pagas: R$%.2f\n", valor_final);
            break;
        case 4:
            valor_final = preco * 1.1;
            printf("Valor final a ser pago: R$%.2f\n", valor_final);
            break;
        default:
            printf("Opção inválida!\n");
    }

    //FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;
}

