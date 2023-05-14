//Uma determinada empresa deseja dar um aumento de salário a seus funcionários. O ajuste salarial deve 
//obedecer à seguinte tabela: 
//Salário Atual Ação 
//até R$ 900,00 aumento de 20% 
//Acima de R$ 900,00 até R$ 1.300,00 aumento de 15% 
//Acima de R$ 1.300,00 até R$ 1.800,00 aumento de 10%
//acima de 1.800,00 aumento de 5% 
//Faça um programa ler o nome e o salário atual dos funcionários e calcular seu aumento e seu novo salário. 
//O programa deverá exibir, para cada funcionário, a seguinte frase: 
//O funcionário ___________ terá aumento de R$ __________ e passará a receber R$____________. 
//O programa deverá parar quando não houverem mais salários a serem calculados. 

#include<stdlib.h>
#include<stdio.h>

int main(){
	char nome[50];
    float salario_atual, aumento, novo_salario;
	
	//Loop dos salários até ser determinado o fim do programa
    while (1) {
        printf("Digite o nome do funcionario (ou 'fim' para encerrar): ");
        scanf("%s", nome);

        if (strcmp(nome, "fim") == 0) {
            break;
        }

        printf("Digite o salario atual do funcionario: ");
        scanf("%f", &salario_atual);

		//Verificações e cálculos
        if (salario_atual <= 900) {
            aumento = salario_atual * 0.2;
        } else if (salario_atual <= 1300) {
            aumento = salario_atual * 0.15;
        } else if (salario_atual <= 1800) {
            aumento = salario_atual * 0.1;
        } else {
            aumento = salario_atual * 0.05;
        }
		
		//Resultado final do salario junto com o aumento
        novo_salario = salario_atual + aumento;

		//Exibição final do resultado
        printf("O funcionario %s tera aumento de R$ %.2f e passara a receber R$ %.2f.\n\n", nome, aumento, novo_salario);
    }
	
	//Finalização do programa
	return 0;
}