//Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, em gramas, fazer um 
//algoritmo que determine o tempo necessário para que essa massa se torne menor do que 0,5 grama. Escreva a massa inicial, a massa 
//final e o tempo calculado em horas, minutos e segundos. 


#include<stdlib.h>
#include<stdio.h>

int main(){
	//Declaraçãod e variáveis
	float massaInicial, massaAtual;
    int horas = 0, minutos = 0, segundos = 0;

	//Massa inicial do objeto radioativo
    printf("Digite a massa inicial do material em gramas: ");
    scanf("%f", &massaInicial);

    massaAtual = massaInicial;

	//Laço de repetição pra determinar até quando ele irá diminuir
    while (massaAtual > 0.5) {
        massaAtual /= 2;
        segundos += 50;

        if (segundos >= 60) {
            minutos += segundos / 60;
            segundos %= 60;

            if (minutos >= 60) {
                horas += minutos / 60;
                minutos %= 60;
            }
        }
    }

	//Mostrando resultados finais na tela
    printf("Massa inicial: %.2f gramas\n", massaInicial);
    printf("Massa final: %.2f gramas\n", massaAtual);
    printf("Tempo necessário: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);
}