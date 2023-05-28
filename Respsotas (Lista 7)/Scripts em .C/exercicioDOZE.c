// exercicio 12

#include <stdio.h>
#include <math.h>

//Definindo um valor estático de variável pra PI
#define PI 3.14159

int main() {
	//Declaração de variáveis
    float raio, volume;

	//Formatação
    printf("Cálculo do volume da esfera\n");
    printf("----------------------------\n");

	//Laço de repetição para calcular todos os volumes
    for (raio = 0.0; raio <= 20.0; raio += 0.5) {
        volume = (4.0 / 3.0) * PI * pow(raio, 3);
        printf("Raio: %.2f cm\tVolume: %.2f cm^3\n", raio, volume);
    }

    return 0;
}
