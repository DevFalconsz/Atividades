/*Escrever um algoritmo que l� o n�mero de identifica��o, as 3 notas obtidas por um aluno nas 3 verifica��es e a m�dia dos
exerc�cios que fazem parte da avalia��o. Calcular a m�dia de aproveitamento do aluno, usando a f�rmula:*/

#include <stdio.h>

int main() {
	
	//Decalra��o de vari�veis
    int id;
    float nota1, nota2, nota3, media_exercicios, media_final;
    char conceito;
    
    // L� os dados do aluno e atribui as vari�veis
    printf("Digite o numero de identificacao do aluno: ");
    scanf("%d", &id);
    printf("Digite a nota da primeira verificacao: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda verificacao: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira verificacao: ");
    scanf("%f", &nota3);
    printf("Digite a media dos exercicios: ");
    scanf("%f", &media_exercicios);
    
    // Calcula a m�dia final
    media_final = (nota1 + nota2*2 + nota3*3 + media_exercicios) / 7.0;
    
    // Determina o conceito
    if (media_final >= 9.1) 
	{
        conceito = 'A';
    } 
	else if (media_final >= 7.6) 
	{
        conceito = 'B';
    } 
	else if (media_final >= 6.1) 
	{
        conceito = 'C';
    } 
	else if (media_final >= 4.1) 
	{
        conceito = 'D';
    } 
	else {
        conceito = 'E';
    }
    
    // Exibe as informa��es do aluno
    printf("\nNumero de identificacao: %d", id);
    printf("\nNota 1: %.1f", nota1);
    printf("\nNota 2: %.1f", nota2);
    printf("\nNota 3: %.1f", nota3);
    printf("\nMedia dos exercicios: %.1f", media_exercicios);
    printf("\nMedia de aproveitamento: %.1f", media_final);
    printf("\nConceito: %c", conceito);
    
    if (conceito == 'A' || conceito == 'B' || conceito == 'C') 
	{
        printf("\nAPROVADO\n");
    } 
	else 
	{
        printf("\nREPROVADO\n");
    }
    
    //Finalização do programa
	system("PAUSE");
	return 0;
}

