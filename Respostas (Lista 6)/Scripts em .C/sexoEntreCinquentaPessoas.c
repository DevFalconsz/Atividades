//Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 50 pessoas. Fazer um algoritmo que calcule e escreva: 
//a maior e a menor altura do grupo; 
//a média de altura das mulheres; 
//o número de homens;

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
	//Declaração de variáveis
	char sexo[2];
	int contadorMasculino = 0, contadorFeminino = 0;
	float contadorAlturaFeminina = 0, alturaFeminina, mediaMulheres = 0;
	float contadorAlturaMasculina = 0, alturaMasculina;
	float maiorAltura = 0, menorAltura = 0;

	//Laço de repetição para 50 pessoas
	for(int i = 1; i <= 50; i++){
    printf("\n\nPessoa de numero %d\n\n", i);
    printf("Digite o sexo da pessoa (m/f): ");
    scanf("%s", sexo);
    
    //Verficação de sexo da pessoa pra calcular tamanho, quantidade e também a média
    if(strcmp(sexo, "f") == 0){
        printf("Indique entao a altura dessa mulher: ");
        scanf("%f", &alturaFeminina);
        contadorAlturaFeminina += alturaFeminina;
        contadorFeminino++;
        
        if(contadorFeminino == 1){
            maiorAltura = alturaFeminina;
            menorAltura = alturaFeminina;
        }
        else{
            if(alturaFeminina > maiorAltura){
                maiorAltura = alturaFeminina;
            }
            if(alturaFeminina < menorAltura){
                menorAltura = alturaFeminina;
            }
        }
    }
	    else if(strcmp(sexo, "m") == 0){
	        printf("Indique entao a altura desse homem: ");
	        scanf("%f", &alturaMasculina);
	        contadorAlturaMasculina += alturaMasculina;
	        contadorMasculino++;
	    }
	}
	
	//Fazendo a média
	if(contadorFeminino > 0){
	    mediaMulheres = contadorAlturaFeminina / contadorFeminino;
	}
	
	//Exibindo valores finais na tela
	printf("\n\nA maior altura do grupo eh: %.2f\nA menor altura do grupo eh: %.2f", maiorAltura, menorAltura);
	printf("\n\nA media de altura entre as mulheres eh: %.2f", mediaMulheres);
	printf("\n\nO numero de homens eh: %d\n\n", contadorMasculino);
}