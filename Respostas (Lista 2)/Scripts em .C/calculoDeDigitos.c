/*Criar um algoritmo que, dado o número da conta corrente com três dígitos, retorne o dígito verificador, o qual é calculado da
seguinte maneira:
Exemplo: número da conta: 235;
• Somar o número da conta com seu inverso: 235 + 532 = 767; 
• Multiplicar cada dígito pela sua ordem posicional e somar estes resultados: 767
7 6 7
* * *
1 2 3
7 12 21 = 40
• O último digito desse resultado é o dígito verificador da conta (40 → 0);
• O número da conta passa a ser 235 – 0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{  
    //Declaração de variáveis
    int conta, inverso, soma = 0, digito_verificador;

    //Atribuindo valores a algumas variáveis
    printf("Digite o numero da conta corrente (3 digitos): ");
    scanf("%d", &conta);

    //Fazendo os cálculos
    // Cálculo do inverso da conta
    inverso = (conta % 10) * 100 + ((conta / 10) % 10) * 10 + (conta / 100);

    // Cálculo da soma
    soma = conta + inverso;

    // Cálculo do dígito verificador
    digito_verificador = ((soma / 100) % 10) * 1 + ((soma / 10) % 10) * 2 + (soma % 10) * 3;
    digito_verificador = digito_verificador % 10;

    //Exibição do resultado final da conta
    printf("O digito verificador da conta %03d eh %d\n", conta, digito_verificador);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
