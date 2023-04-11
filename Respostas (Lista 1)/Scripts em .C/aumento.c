/* Faça um programa que receba como entrada o nome e o salário de um funcionário de uma empresa e que
calcule o novo valor do salário do funcionário levando em conta que esse teve um aumento de 25%. O 
programa deve exibir na saída a seguinte frase: 
O funcionário ________ teve um aumento de R$ _______ e passará a receber um salário de R$ ________ . */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    char nome_funcionario[40];
    float aumento, salario;

    //Recebendo valores como "nome" e "salario"
    printf("Digite o nome do funcionario que recebera um aumento: ");
    scanf("%s", &nome_funcionario);

    printf("Digite o salario que recebera o aumento: ");
    scanf("%f", &salario);

    //Calculos
    aumento = salario * 0.25;
    salario += aumento;

    //Resultado Final
    printf("O funcionario %s teve um aumento de R$%.2f e passara a receber um salario de R$%.2f \n", nome_funcionario, aumento, salario);

    //Pausa no sistema
    system("PAUSE");
}
