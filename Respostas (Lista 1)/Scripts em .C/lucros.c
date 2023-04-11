/*Desenvolver um programa para calcular a Composição de Lucros . Um problema comum na área financeira 
é a determinação da quantia que será acumulada em uma conta bancária depois de n anos, conhecendo-se a
quantia inicial depositada, e os rendimentos anuais dessa conta, r por cento ao ano. A resposta a essa questão 
pode ser determinada pela fórmula F = p.(1 + i)n
 onde i = r/100 
Obs.: usando a função potencial pow(base,expoente) da diretiva #include <math> 
F = p * pow ( (1+i) , n); 
Seguindo os passos: 
1. Declarar as variáveis 
2. Ler os valores de p(principal), r(taxa de lucro) e n(número de anos) 
3. Calcular a representação decimal da taxa de lucro(i) : i = r/100 
4. Determinar a quantia que será acumulada: F = p(1 + i)n 
5. Exibir o valor F calculado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaração de variáveis
    float p, r, n, F;

    //Recebimento e atribuição de variáveis
    printf("*****Composicao de Lucros*****\n\nAnos: ");
    scanf("%f", &n);

    printf("Lucro em porcentagem: ");
    scanf("%f", &r);

    printf("Quantia inicial: ");
    scanf("%f", &p);

    //Calculos a serem executados e serem msotrados ao final do programa
    F = p * pow ((1+ (r/100)), n);

    //Resultado final a ser exibido no programa
    printf("\n*****Resultado*****\nO valor acumulado total sera de: R$%.2f\n", F);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
