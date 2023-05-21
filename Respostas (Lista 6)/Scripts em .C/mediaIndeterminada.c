//Fazer um algoritmo que: 
//Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo. 
//A última linha que não entrará nos cálculos, contém o valor da idade igual a zero. 
//Calcule e escreva a idade média deste grupo de indivíduos. 

#include<stdlib.h>
#include<stdio.h>

int main(){
	//Declaração de variáveis
	int idade = 1, idv = 0, somaIdades = 0;

	//Loop para sair adicionando idades
	while(idade != 0){
		idv++;
		printf("Digite uma idade para o %d individuo: ", idv);
		scanf("%d", &idade);
		somaIdades += idade;
	}
	
	//Verificação de erro e cálculo da média
	int media = 0;
	if (idv > 0) {
		media = somaIdades / (idv - 1);
	}
	
	//Resultado e resposta final do programa
	printf("\n\nA media de idade desse grupo, que possui %d individuos eh de: %d\n\n", idv - 1, media);
	return 0;
}