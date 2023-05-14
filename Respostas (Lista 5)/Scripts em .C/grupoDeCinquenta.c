//Faça um programa para ler o sexo (1-masculino, 2-feminino) e a altura de um grupo de 50 pessoas. O 
//programa deve calcular : 
// a altura média das mulheres e a altura média dos homens; 
// a maior e a menor altura do grupo, dizendo se a altura é de um homem ou de uma mulher. 

#include<stdlib.h>
#include<stdio.h>

int main(){
	int sexo, contador_homens = 0, contador_mulheres = 0;
    float altura, soma_altura_homens = 0, soma_altura_mulheres = 0;
    float media_homens, media_mulheres;
    float maior_altura = 0, menor_altura = 0;
    int maior_altura_sexo, menor_altura_sexo;
	
	//Loop pra verificar as 50 pessoas
    for (int i = 1; i <= 50; i++) {
        printf("Pessoa %d:\n", i);

        printf("Digite o sexo (1 - masculino, 2 - feminino): ");
        scanf("%d", &sexo);

        printf("Digite a altura em metros: ");
        scanf("%f", &altura);

        if (sexo == 1) {
            soma_altura_homens += altura;
            contador_homens++;

            if (contador_homens == 1 || altura > maior_altura) {
                maior_altura = altura;
                maior_altura_sexo = sexo;
            }

            if (contador_homens == 1 || altura < menor_altura) {
                menor_altura = altura;
                menor_altura_sexo = sexo;
            }
        } else if (sexo == 2) {
            soma_altura_mulheres += altura;
            contador_mulheres++;

            if (contador_mulheres == 1 || altura > maior_altura) {
                maior_altura = altura;
                maior_altura_sexo = sexo;
            }

            if (contador_mulheres == 1 || altura < menor_altura) {
                menor_altura = altura;
                menor_altura_sexo = sexo;
            }
        } else {
            printf("Sexo inválido. Tente novamente.\n");
            i--; // Repetir a iteração para a mesma pessoa
        }

        printf("\n");
    }

    // Cálculo das médias
    if (contador_homens > 0) {
        media_homens = soma_altura_homens / contador_homens;
    } else {
        media_homens = 0;
    }

    if (contador_mulheres > 0) {
        media_mulheres = soma_altura_mulheres / contador_mulheres;
    } else {
        media_mulheres = 0;
    }

    // Exibição dos resultados
    printf("Altura media dos homens: %.2f metros\n", media_homens);
    printf("Altura media das mulheres: %.2f metros\n", media_mulheres);
    printf("Maior altura: %.2f metros (%s)\n", maior_altura, (maior_altura_sexo == 1) ? "homem" : "mulher");
    printf("Menor altura: %.2f metros (%s)\n", menor_altura, (menor_altura_sexo == 1) ? "homem" : "mulher");

	//Finalização do programa
	return 0;
}