//Supondo que a população de um pais A seja da ordem de 90.000.000 de habitantes com uma taxa anual de crescimento de 3% e 
//que a população de um pais B seja, aproximadamente, de 200.000.000 de habitantes com uma taxa anual de crescimento de 1,5%, 
//fazer um algoritmo que calcule e escreva o numero de anos necessários para que a população do pais A ultrapasse ou iguale a 
//população do pais B, mantidas essas taxas de crescimento

#include<stdlib.h>
#include<stdio.h>

int main(){
	int populacaoA = 90000000;
	    int populacaoB = 200000000;
	    float taxaCrescimentoA = 0.03;
	    float taxaCrescimentoB = 0.015;
	    int anos = 0;
	
	    while (populacaoA < populacaoB) {
	        populacaoA += populacaoA * taxaCrescimentoA;
	        populacaoB += populacaoB * taxaCrescimentoB;
	        anos++;
	    }
	
	    printf("Levará aproximadamente %d anos para a população do país A ultrapassar ou igualar a população do país B.\n", anos);
}