/*Escreva um programa que receba dois n�meros e que disponibilize as op��es abaixo e imprima o resultado da opera��o.: 
 1 - retornar o quociente inteiro de uma divis�o; 
 2 - retornar a multiplica��o de dois n�meros; 
 3 - retornar o soma de dois n�meros; 
 4 � retornar a subtra��o de dois n�meros. 
 5 � retornar mensagem de erro (op��o inv�lida) */
 
 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 
 int main()
 {
	//Declara��o de vari�veis
	float number_um, number_two, result;
	int escolha;
	
	//Atribuindo valores a essas vari�veis
	printf("Digite o primeiro number: ");
	scanf("%f", &number_um);
	
	printf("Number two: ");
	scanf("%f", &number_two);
	
	do{
		printf("\n1 - retornar o quociente inteiro de uma divisao; \n2 - retornar a multiplicacao de dois numeros; \n3 - retornar o soma de dois numeros; \n4 - retornar a subtracao de dois numeros. \nEscolha: ");
		scanf("%d", &escolha);
		
		//Verificando poss�veis erros de digita��o do usu�rio
		if(escolha < 1 || escolha > 4)
		{
			//Mensagem de erro
			printf("\n\n*****Opcao invalida*****\n\n");
		}
	} while(escolha < 1 || escolha > 4);
	
	//Verifica��es de escolha
	switch(escolha){
		case 1:
			//C�lculo a ser executado
			result = number_um / number_two;
			//Exibi��o da resposta final
			printf("\nO resultado eh: %.2f\n", result);
		break;
		
		case 2:
			//C�lculo a ser executado
			result = number_um * number_two;
			//Exibi��o da resposta final
			printf("\nO resultado eh: %.2f\n", result);
		break;
		
		case 3:
			//C�lculo a ser executado
			result = number_um + number_two;
			//Exibi��o da resposta final
			printf("\nO resultado eh: %.2f\n", result);
		break;
		
		case 4:
			//C�lculo a ser executado
			result = number_um - number_two;
			//Exibi��o da resposta final
			printf("\nO resultado eh: %.2f\n", result);
		break;
	}
 	
	//Finaliza��o do programa
	system("PAUSE");
	return 0;
 }
