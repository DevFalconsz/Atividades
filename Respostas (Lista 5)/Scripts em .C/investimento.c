//Uma agência bancária possui vários tipos de investimentos com rendimentos mensais, conforme a tabela abaixo: 
//Valor Mínimo Descrição Rentabilidade Mensal 
//R$ 100,00 Poupança 0,5% 
//R$ 1000,00 Fundos de Renda Fixa 1% 
//R$ 2500,00 CDBs 1,5% 
//Faça um programa que leia o valor que o cliente deseja investir e calcule e exiba os tipos de aplicação 
//que ele pode fazer e qual será sua rentabilidade (lucro) em cada uma delas (se for mais de uma). O programa 
//termina quando for digitado um valor de investimento negativo. 

#include<stdlib.h>
#include<stdio.h>

int main(){
	float investimento;
	
	while(1){
		//Primeiros valores a serem recebidos
		printf("Digite o valor do investimento (negativo pra sair): ");
		scanf("%f", &investimento);
		
		//Verificação pra sair do loop
		if(investimento < 0){
			break;
		}
			
		//Verifcações e cálculos
		printf("\n*****Tipos de aplicacao disponiveis:*****\n");

        if (investimento >= 100 && investimento < 1000) {
            printf("- Poupanca (Rentabilidade: 0.5%%)\n");
            printf("  Rentabilidade mensal: R$ %.2f\n\n", investimento * 0.005);
        }

        if (investimento >= 1000) {
            printf("- Fundos de Renda Fixa (Rentabilidade: 1%%)\n");
            printf("  Rentabilidade mensal: R$ %.2f\n\n", investimento * 0.01);
        }

        if (investimento >= 2500) {
            printf("- CDBs (Rentabilidade: 1.5%%)\n");
            printf("  Rentabilidade mensal: R$ %.2f\n\n", investimento * 0.015);
        }
	}
	
	//Finalização do programa
	return 0;
}