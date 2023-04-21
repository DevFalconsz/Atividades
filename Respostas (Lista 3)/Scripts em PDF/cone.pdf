/*Desenvolver um algoritmo com as opções de calcular e imprimir o volume e a área da superfície de um cone reto, de um cilindro
ou de uma esfera. O algoritmo deverá ler a opção da figura desejada (cone/cilindro /esfera) e de acordo com a opção escolhida calcular e
escrever o volume e a área da superfície da figura pedida. */

#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float raio, altura, volume, area;

    printf("Escolha a figura geometrica:\n");
    printf("1 - Cone\n");
    printf("2 - Cilindro\n");
    printf("3 - Esfera\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: // Cone
            printf("Digite o raio da base do cone:\n");
            scanf("%f", &raio);
            printf("Digite a altura do cone:\n");
            scanf("%f", &altura);

            volume = (M_PI * pow(raio, 2) * altura) / 3;
            area = M_PI * raio * (raio + sqrt(pow(altura, 2) + pow(raio, 2)));
            break;

        case 2: // Cilindro
            printf("Digite o raio da base do cilindro:\n");
            scanf("%f", &raio);
            printf("Digite a altura do cilindro:\n");
            scanf("%f", &altura);

            volume = M_PI * pow(raio, 2) * altura;
            area = 2 * M_PI * raio * (raio + altura);
            break;

        case 3: // Esfera
            printf("Digite o raio da esfera:\n");
            scanf("%f", &raio);

            volume = (4 * M_PI * pow(raio, 3)) / 3;
            area = 4 * M_PI * pow(raio, 2);
            break;

        default:
            printf("Opcao invalida.\n");
            return 0;
    }

    printf("Volume: %.2f\n", volume);
    printf("Area da superficie: %.2f\n", area);

    //FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;
}

