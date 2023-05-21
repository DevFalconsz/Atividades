//Uma universidade deseja fazer um levantamento a respeito de seu concurso vestibular. Para cada curso é fornecido o seguinte 
//conjunto de valores. 
// código do curso. 
// número de vagas. 
// número de candidatos do sexo masculino. 
// número de candidatos do sexo feminino. 
//O último conjunto, para indicar fim de dados, contem o código do curso igual a zero. 
//Fazer um algoritmo que: 
// calcule e escreva, para cada curso, o número de candidatos por vaga a porcentagem de candidatos do sexo feminino (escreva 
//também o código correspondente do curso). 
// determine o maior numero de candidatos por vaga e escreva esse numero. 
// juntamente com o código do curso correspondente (supor que não haja empate) calcule e escreva o total de candidatos.

#include<stdlib.h>
#include<stdio.h>

int main(){
	//Declaração de variáveis
	int codigoCurso, vagas, candidatosMasculino, candidatosFeminino;
    int maiorCandidatosPorVaga = 0, codigoCursoMaiorCandidatosPorVaga = 0;
    int totalCandidatos = 0;
    int encerrar = 0;

	//Laço de repetição com uma flag
    while (!encerrar) {
        printf("Digite o código do curso (0 para encerrar): ");
        scanf("%d", &codigoCurso);

        if (codigoCurso != 0) {
            printf("Digite o número de vagas: ");
            scanf("%d", &vagas);

            printf("Digite o número de candidatos do sexo masculino: ");
            scanf("%d", &candidatosMasculino);

            printf("Digite o número de candidatos do sexo feminino: ");
            scanf("%d", &candidatosFeminino);

            int candidatosPorVaga = candidatosMasculino + candidatosFeminino;
            float porcentagemCandidatosFeminino = (float) candidatosFeminino / candidatosPorVaga * 100;

            printf("Código do curso: %d\n", codigoCurso);
            printf("Número de candidatos por vaga: %d\n", candidatosPorVaga);
            printf("Porcentagem de candidatos do sexo feminino: %.2f%%\n\n", porcentagemCandidatosFeminino);

            if (candidatosPorVaga > maiorCandidatosPorVaga) {
                maiorCandidatosPorVaga = candidatosPorVaga;
                codigoCursoMaiorCandidatosPorVaga = codigoCurso;
            }

            totalCandidatos += candidatosPorVaga;
        } else {
            encerrar = 1;
        }
    }

	//Resultado final na tela
    printf("Maior número de candidatos por vaga: %d (Código do curso: %d)\n", maiorCandidatosPorVaga, codigoCursoMaiorCandidatosPorVaga);
    printf("Total de candidatos: %d\n", totalCandidatos);
}