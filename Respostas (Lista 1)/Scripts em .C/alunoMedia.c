/*No curso de Programação, a nota final de um estudante é calculada a partir de seu desempenho em três
avaliações: um exame intermediário que vale 30% da nota final, um trabalho prático que corresponde a 20% 
da nota final e um exame final que completa os 50% restantes. Faça um programa para ler o nome de um 
aluno e suas notas nas três avaliações. O programa deve calcular sua nota final e exibir a seguinte frase: 
O aluno _________ teve nota final _________.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    char aluno[40];
    float nota_um, nota_dois, nota_tres, media;

    //Recebendo e atribuindo variáveis 
    printf("*****Calculadora de Media*****\nNome: ");
    scanf("%s", &aluno);

    printf("Exame intermediario: ");
    scanf("%f", &nota_um);

    printf("Trabalho pratico: ");
    scanf("%f", &nota_dois);

    printf("Exame final: ");
    scanf("%f", &nota_tres);

    //Calculos a serem feitos para calcular a nota do aluno
    media = (nota_um * 0.3) + (nota_dois * 0.2) + (nota_tres * 0.5);

    //Mostrando resultados na tela do aluno
    printf("O aluno %s teve nota final %.2f \n", aluno, media);

    //Finalização do programa
    system("PAUSE");
    return 0;
}
