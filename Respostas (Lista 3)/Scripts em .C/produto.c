/* Elabore um algoritmo que calcule o valor a ser pago por um produto considerando o pre�o normal de etiqueta e a escolha da
condi��o de pagamento. Utilize os c�digos da tabela a seguir para saber qual a condi��o de pagamento escolhida e efetuar o c�lculo
adequado.
C�digo Condi��o Pagamento
1 � vista, dinheiro ou cheque, 10% de desconto
2 � vista, cart�o de credito, 5% de desconto
3 Em 2 vezes, pre�o normal da etiqueta sem juros
4 Em 3 vezes, pre�o normal da etiqueta + 10% de juros*/

#include <stdio.h>

int main() {
    float preco, valor_final;
    int opcao;

    printf("Digite o pre�o do produto: ");
    scanf("%f", &preco);

    printf("Escolha a condi��o de pagamento:\n");
    printf("1 - � vista, dinheiro ou cheque, 10%% de desconto\n");
    printf("2 - � vista, cart�o de cr�dito, 5%% de desconto\n");
    printf("3 - Em 2 vezes, pre�o normal da etiqueta sem juros\n");
    printf("4 - Em 3 vezes, pre�o normal da etiqueta + 10%% de juros\n");
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
            printf("Op��o inv�lida!\n");
    }

    //Finalização do programa
	system("PAUSE");
	return 0;
}

