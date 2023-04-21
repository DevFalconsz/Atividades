/*A Companhia de Pulverização Faz Tudo Ltda utiliza aviões para pulverizar lavouras. Os custos de pulverização 
dependem do tipo de praga e da área contratada conforme o esquema: 
• Tipo 1: pulverização contra ervas daninhas'; R$ 5,00 
por acre; 
• Tipo 2: pulverização contra gafanhotos, R$ 10,00 por 
acre; 
• Tipo 3: pulverização contra broca, R$ 15,00 por 
acre; 
• Tipo 4: pulverização contra tudo acima, R$ 25,00 
por acre . 
A
B
X
2
1
- + ?
=
A
B
X
2
2
- - ?
=
Se a área a ser pulverizada é maior que 300 acres, o fazendeiro recebe um desconto de 5%. Em 
adição, qualquer fazendeiro cujo custo total, sem desconto, ultrapasse R$ 1.750,00 recebe um desconto de 
10% sobre o valor que ultrapassar os R$ 1.750,00. Se ambos os descontos se aplicam, aquele relacionado a 
área é calculado em primeiro lugar. 
Preparar um programa que leia as seguintes informações: 
• Nome do fazendeiro; 
• Tipo de pulverização (de 1 a 4); 
• Área a ser pulverizada. 
O programa deve ainda calcular o custo final da pulverização e escrever 
O fazendeiro, _(nome do fazendeiro)_ , pagará pelo serviço de pulverização de R$____________. */

#include <stdio.h>

int main()
{
    char nome[100];
    int tipoPulverizacao;
    float area, custo, custoSemDesconto, descontoArea, descontoValor;

    // Leitura das informações do fazendeiro
    printf("Digite o nome do fazendeiro: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite o tipo de pulverizacao (1 a 4): ");
    scanf("%d", &tipoPulverizacao);
    printf("Digite a area a ser pulverizada em acres: ");
    scanf("%f", &area);

    // Calcula o custo da pulverização sem descontos
    switch (tipoPulverizacao)
    {
    case 1:
        custoSemDesconto = 5.0 * area;
        break;
    case 2:
        custoSemDesconto = 10.0 * area;
        break;
    case 3:
        custoSemDesconto = 15.0 * area;
        break;
    case 4:
        custoSemDesconto = 25.0 * area;
        break;
    default:
        printf("Erro: Tipo de pulverizacao invalido.\n");
        return 0;
    }

    // Verifica se há desconto de 5% para áreas maiores que 300 acres
    if (area > 300)
    {
        descontoArea = 0.05 * custoSemDesconto;
        custoSemDesconto -= descontoArea;
    }

    // Verifica se há desconto de 10% para custo total acima de R$ 1.750,00
    if (custoSemDesconto > 1750)
    {
        descontoValor = 0.10 * (custoSemDesconto - 1750);
        custoSemDesconto -= descontoValor;
    }

    // Calcula o custo final da pulverização
    custo = custoSemDesconto;

    // Imprime o resultado
    printf("O fazendeiro, %s, pagara pelo servico de pulverizacao de R$ %.2f.\n", nome, custo);

	//Finalização do programa
	system("PAUSE");
    return 0;
}

