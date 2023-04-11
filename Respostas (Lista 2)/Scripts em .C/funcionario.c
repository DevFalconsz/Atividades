/*Escrever um algoritmo que lê o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora, o
número de filhos com idade menor que 14 anos e o valor do salário família (pago por filho com menos de 14 anos), e que calcule o
salário total deste funcionário e escreva o seu número e o seu salário total.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Decalração de variáveis
    int numFuncionario, horasTrabalhadas, numFilhos;
    float valorHora, salarioFamilia, salarioTotal;

    //Atribuindo valores a cada uma das variáveis
    printf("Digite o número do funcionário: ");
    scanf("%d", &numFuncionario);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o valor que recebe por hora: ");
    scanf("%f", &valorHora);

    printf("Digite o número de filhos com idade menor que 14 anos: ");
    scanf("%d", &numFilhos);

    printf("Digite o valor do salário família: ");
    scanf("%f", &salarioFamilia);

    //Fazendo os cálculos subsequentes
    // calcula o salário bruto do funcionário
    float salarioBruto = horasTrabalhadas * valorHora;
    // calcula o valor do salário família a ser pago
    float valorSalarioFamilia = salarioFamilia * numFilhos;
    // calcula o salário total do funcionário
    salarioTotal = salarioBruto + valorSalarioFamilia;

    //Exibição final do programa com resultados na tela
    printf("O funcionário de número %d tem um salário total de R$ %.2f\n", numFuncionario, salarioTotal);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
