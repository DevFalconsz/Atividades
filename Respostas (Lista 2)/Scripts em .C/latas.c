/*Um fabricante de latas deseja desenvolver um algoritmo para calcular o custo de uma lata cilíndrica de alumínio.
O custo do alumínio é R$ 100,00 por m2.
Dados de Entrada: raio e altura da lata (em metros). Área da lata = área da base(π * raio2 * 2) + área dolado(2 * π * raio * altura). 
Considere o preço do alumínio por m2 como sendo uma constante.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PRECO_ALUMINIO 100.0
#define M_PI 3.14159265358979323846

int main()
{
    //Declaração de variáveis
    double raio, altura, area_base, area_lateral, area_total, custo;

    //Atribuindo valores às variáveis
    printf("*****Calculo de latas*****\nDigite o raio da lata em metros: ");
    scanf("%lf", &raio);

    printf("Digite a altura da lata em metros: ");
    scanf("%lf", &altura);

    //Calculos a serem executados apra calculas o Real por metro quadrado
    area_base = M_PI * pow(raio, 2);
    area_lateral = 2 * M_PI * raio * altura;
    area_total = area_base * 2 + area_lateral;

    custo = area_total * PRECO_ALUMINIO;

    //Exibição do resultado final
    printf("*****Resultado final*****\nO gasto fica sendo de: R$%.2f\n", custo);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
