//Enunciado: Criar um algoritmo que leia 10 números pelo  teclado e exiba os números na ordem inversa da que os números foram digitados.

#include <stdio.h>

int main()
{
	float array[10];
	
	printf("\n******************Ordem normal******************\n");
	for(int i = 0; i < 10; i++){
		printf("Digite o numero %d: ", i+1);
		scanf("%f", &array[i]);
	}
	
	printf("\n******************Ordem invertida******************\n");
	for(int i = 9; i > -1; i--){
		printf("Elemento %d do array: %.2f\n", i, array[i]);
	}

    return 0;
}