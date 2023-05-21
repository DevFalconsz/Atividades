//Deseja-se fazer um levantamento a respeito da ausência de alunos a primeira prova de programação de computadores para cada 
//uma das 14 turmas existentes. Para cada urma é fornecido um conjunto de valores, sendo que os dois primeiros valores do conjunto 
//corresponde a identificação da turma (A, B, C ...) e ao número de alunos matriculados, e os demais valores deste conjunto contem o 
//número de matricula do aluno e a letra A ou P para o caso de o aluno estar ausente ou presente, respectivamente. Fazer um 
//algoritmo que: 
//(a) para cada turma, calcule a porcentagem de ausência e escreva a identificado da turma e a porcentagem calculada. 
//(b) determine e escreva quantas turmas tiveram porcentagem de ausência superior a 5%. 

#include<stdlib.h>
#include<stdio.h>

int main(){
	//Declaração de variáveis
	char identificacaoTurma;
    int numeroAlunos, numeroMatricula, ausentes;
    float porcentagemAusencia;
    int turmasComAusenciaSuperior5 = 0;

	//Laço de repetição para todas as turmas
    for (int i = 1; i <= 14; i++) {
        printf("Turma %d:\n", i);

        printf("Digite a identificação da turma: ");
        scanf(" %c", &identificacaoTurma);

        printf("Digite o número de alunos matriculados: ");
        scanf("%d", &numeroAlunos);

        ausentes = 0;

        for (int j = 1; j <= numeroAlunos; j++) {
            printf("Digite o número de matrícula do aluno %d (A - Ausente, P - Presente): ", j);
            scanf("%d", &numeroMatricula);

            char presenca;
            scanf(" %c", &presenca);

            if (presenca == 'A') {
                ausentes++;
            }
        }

        porcentagemAusencia = (float) ausentes / numeroAlunos * 100;

        printf("Porcentagem de ausência na turma %c: %.2f%%\n", identificacaoTurma, porcentagemAusencia);

        if (porcentagemAusencia > 5) {
            turmasComAusenciaSuperior5++;
        }

        printf("\n");
    }
	
	//Resultado final
    printf("Quantidade de turmas com porcentagem de ausência superior a 5%%: %d\n", turmasComAusenciaSuperior5);
}