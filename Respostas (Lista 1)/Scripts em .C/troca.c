/*Faça um programa para ler dois valores inteiros, uma para a variável A e outro para a variável B, e para 
efetuar a troca dos valores de forma que a variável A passe a possuir o valor da variável B e variável B passe 
a possuir o valor da variável A. OBS: Não utilize uma variável auxiliar.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    int a, b;

    //Recebendo valores
    printf("Diga o valor de ""a"": ");
    scanf("%d", &a);

    printf("Diga o valor de ""b"": ");
    scanf("%d", &b);

    //Calculos a serem efetuados no programa
    a = a + b;
    b = a - b;
    a = a - b;

    //Resultado final a ser exibido na tela
    printf("Agora ""a"" possui o valor de ""b"" ficando assim: \n a = %d \n b = %d \n", a, b);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
