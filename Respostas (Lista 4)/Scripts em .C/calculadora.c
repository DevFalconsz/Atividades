/*Escreva um programa que receba dois números e que disponibilize as opções abaixo e imprima o resultado da operação.: 
 1 - retornar o quociente inteiro de uma divisão; 
 2 - retornar a multiplicação de dois números; 
 3 - retornar o soma de dois números; 
 4 – retornar a subtração de dois números. 
 5 – retornar mensagem de erro (opção inválida) */
 
 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 
 int main()
 {
	//Declaração de variáveis
	float number_um, number_two, result;
	int escolha;
	
	//Atribuindo valores a essas variáveis
	printf("Digite o primeiro number: ");
	scanf("%f", &number_um);
	
	printf("Number two: ");
	scanf("%f", &number_two);
	
	do{
		printf("\n1 - retornar o quociente inteiro de uma divisao; \n2 - retornar a multiplicacao de dois numeros; \n3 - retornar o soma de dois numeros; \n4 - retornar a subtracao de dois numeros. \nEscolha: ");
		scanf("%d", &escolha);
		
		//Verificando possíveis erros de digitação do usuário
		if(escolha < 1 || escolha > 4)
		{
			//Mensagem de erro
			printf("\n\n*****Opcao invalida*****\n\n");
		}
	} while(escolha < 1 || escolha > 4);
	
	//Verificações de escolha
	switch(escolha){
		case 1:
			//Cálculo a ser executado
			result = number_um / number_two;
			//Exibição da resposta final
			printf("\nO resultado eh: %.2f\n", result);
		break;
		
		case 2:
			//Cálculo a ser executado
			result = number_um * number_two;
			//Exibição da resposta final
			printf("\nO resultado eh: %.2f\n", result);
		break;
		
		case 3:
			//Cálculo a ser executado
			result = number_um + number_two;
			//Exibição da resposta final
			printf("\nO resultado eh: %.2f\n", result);
		break;
		
		case 4:
			//Cálculo a ser executado
			result = number_um - number_two;
			//Exibição da resposta final
			printf("\nO resultado eh: %.2f\n", result);
		break;
	}
 	
	//Finalização do programa
	system("PAUSE");
	return 0;
 }
