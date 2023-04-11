/*Dona Joaninha é muito esquecida e sempre paga suas contas depois da data do vencimento. Ela gostaria 
de ter um programa que lhe poupasse do trabalho de calcular o valor da multa e dos juros quando fosse pagar 
uma conta. Resolva o problema de dona Joaninha: faça um programa que recebe o valor da conta, o número
de dias em atraso e o valor da multa e dos juros por dia de atraso. O programa deverá calcular o valor a ser 
pago. O programa deverá exibir a seguinte saída: 
Valor da conta: ________ 
Dias em atraso:________ 
Total da multa: ________ 
Total de juros: ________ 
Total a pagar: _________ */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    float conta, dias, multa, juros, calc_juros, total_pagar;

    //Recebendo variáveis e atribuindo valores a elas
    printf("*****Diga abaixo cada um dos valores solicitados***** \n\nValor da conta: ");
    scanf("%f", &conta);

    printf("Dias em atraso: ");
    scanf("%f", &dias);

    printf("Multa: ");
    scanf("%f", &multa);

    printf("Juros por dia: ");
    scanf("%f", &juros);

    //Calculos
    calc_juros = (juros / 100) * dias * conta;
    total_pagar = calc_juros + multa + conta;

    //Apresentração intuitiva pra Dona Joanina saber o que deve pagar
    printf("\n*****Ficha Final*****\nValor da conta: R$%.2f \nDias em atraso: %.0f \nTotal da multa: R$%.2f \nTotal de juros: %.0f%% \nTotal a pagar: R$%.2f \n", conta, dias, multa, juros, total_pagar);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
