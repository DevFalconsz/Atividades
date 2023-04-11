/*– No colégio, “Minha Escolinha”, a nota bimestral de um aluno em uma disciplina é a média ponderada das 
notas parciais. A primeira nota parcial tem peso 2 e a segunda nota parcial tem peso 3. Faça um programa 
para obter o nome e as notas de um aluno em uma determinada disciplina e calcular sua média. O programa 
deverá exibir a seguinte frase: 
O aluno _________ obteve média _________. 

Obs.:A média ponderada, conhecida também como média aritmética ponderada, é uma das medidas centrais da estatística. 
Ela é aplicada quando há peso nos dados do conjunto.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    char aluno[40];
    float media, nota_um, nota_dois;

    //Recebendo variáveis e atribuindo valores
    printf("Digite o nome do aluno: ");
    scanf("%s", &aluno);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota_um);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota_dois);

    //Calculos da média ponderada das notas
    media = ((nota_um * 2) + (nota_dois * 3)) / 5;

    //Expondo os resultados da média
    printf("O aluno %s obteve media %.2f. \n", aluno, media);

    //Finalização do programa com saída 0 e pausa no sistema
    system("PAUSE");
    return 0;
}
