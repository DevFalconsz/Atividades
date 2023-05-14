//A sequência abaixo é conhecida como série de Fibonacci. Faça um programa para escrever esta série até o seu trigésimo termo. 
//Série de Fibonacci : 1,1,2,3,5,8,13,21,34,55,…

#include <stdlib.h>
#include <stdio.h>

int main(){
	int n = 30;  // Número de termos da sequência a serem exibidos
    int primeiro = 0, segundo = 1, proximo;

    printf("Sequencia de Fibonacci:\n");

    printf("%d\n", primeiro); // Exibe o primeiro termo

    for (int i = 1; i < n; i++) {
        printf("%d\n", segundo); // Exibe o termo atual

        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }
	
	return 0;
}