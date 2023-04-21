/*A Companhia de Pulverização Faz Tudo Ltda utiliza aviões para pulverizar lavouras. Os custos de pulverização dependem do tipo
de praga e da área contratada conforme o esquema:
? Tipo 1: pulverização contra ervas daninhas, R$ 5,00 por acre;
? Tipo 2: pulverização contra gafanhotos, R$ 10,00 por acre;
? Tipo 3: pulverização contra broca, R$ 15,00 por acre;
? Tipo 4: pulverização contra tudo acima, R$ 25,00 por acre.
Se a área a ser pulverizada é maior que 300 acres, o fazendeiro recebe um desconto de 5%. Em adição, qualquer fazendeiro cujo
custo total, sem desconto, ultrapasse R$ 1.750,00 recebe um desconto de 10% sobre o valor que ultrapassar os R$ 1.750,00. Se ambos os
descontos se aplicam, aquele relacionado a área é calculado em primeiro lugar. 
Preparar um algoritmo que leia as seguintes informações:
? Nome do fazendeiro;
? Tipo de pulverização (de 1 a 4);
? Área a ser pulverizada.
O algoritmo deve ainda calcular o custo final da pulverização e escrever o nome do fazendeiro e o valor a ser pago.*/

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	char nome[30];
    int tipo, acres;
    float custo, desconto1, desconto2;

    // Leitura dos dados
    printf("Nome do fazendeiro: ");
    scanf("%s", nome);
    printf("\n\n Tipo 1: pulverização contra ervas daninhas, R$ 5,00 por acre;\n Tipo 2: pulverização contra gafanhotos, R$ 10,00 por acre;\n Tipo 3: pulverização contra broca, R$ 15,00 por acre;\n Tipo 4: pulverização contra tudo acima, R$ 25,00 por acre.\n\n");
    printf("Tipo de pulverizacao (1 a 4): ");
    scanf("%d", &tipo);
    printf("Area a ser pulverizada: ");
    scanf("%d", &acres);

    // Cálculo do custo sem desconto
    switch (tipo) {
        case 1:
            custo = 5.0 * acres;
            break;
        case 2:
            custo = 10.0 * acres;
            break;
        case 3:
            custo = 15.0 * acres;
            break;
        case 4:
            custo = 25.0 * acres;
            break;
        default:
            printf("Tipo de pulverizacao invalido\n");
            return 1;
    }

    // Aplicação do desconto de 5% para áreas maiores que 300 acres
    if (acres > 300) {
        desconto1 = 0.05 * custo;
        custo -= desconto1;
    }

    // Aplicação do desconto de 10% para custo total maior que R$ 1.750,00
    if (custo > 1750.0) {
        desconto2 = 0.1 * (custo - 1750.0);
        custo -= desconto2;
    }

    // Impressão do resultado
    printf("\n\nNome do fazendeiro: %s\n", nome);
    printf("Custo final: R$ %.2f\n", custo);
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;		
}

