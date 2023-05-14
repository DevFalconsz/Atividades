//Desenvolver um algoritmo e um programa em C que leia a altura e o sexo (M ou F) de 15 pessoas. Este 
//programa deverá calcular e mostrar : 
//a. A menor altura do grupo; 
//b. A média de altura das mulheres; 
//c. O número de homens; 
//d. O sexo da pessoa mais alta

#include<stdlib.h>
#include<stdio.h>

int main(){
	int i, num_homens = 0, num_mulheres = 0;
    float altura, menor_altura = 0, soma_altura_mulheres = 0, media_altura_mulheres = 0;
    float altura_mais_alta = 0;
    char sexo, sexo_pessoa_mais_alta;
	
	//Loop para verificar as 15 pessoas e determinar quem é o mais alto e qual os sexo dele
    for (i = 1; i <= 15; i++) {
    	//Contador de pessoas
        printf("Pessoa %d:\n", i);

        printf("Digite o sexo (M ou F): ");
        scanf(" %c", &sexo);

        printf("Digite a altura em metros: ");
        scanf("%f", &altura);

		//Verificação e trocação de variáveis
        if (i == 1) {
            menor_altura = altura;
        } else if (altura < menor_altura) {
            menor_altura = altura;
        }

        if (altura > altura_mais_alta) {
            altura_mais_alta = altura;
            sexo_pessoa_mais_alta = sexo;
        }

        if (sexo == 'M' || sexo == 'm') {
            num_homens++;
        } else if (sexo == 'F' || sexo == 'f') {
            num_mulheres++;
            soma_altura_mulheres += altura;
        }

        printf("\n");
    }

	//Fazendo média após a finalizaçãod e 15 pessoas
    if (num_mulheres > 0) {
        media_altura_mulheres = soma_altura_mulheres / num_mulheres;
    }

	/?Resultados finais mostrados na tela
    printf("Menor altura do grupo: %.2f metros\n", menor_altura);
    printf("Média de altura das mulheres: %.2f metros\n", media_altura_mulheres);
    printf("Número de homens: %d\n", num_homens);
    printf("Sexo da pessoa mais alta: %c\n", sexo_pessoa_mais_alta);
	
	//Finalização do programa
	return 0;
}