//Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado no 
//mercado. Para isso, forneceu o sexo do entrevistado e sua resposta (sim ou não). Sabendo-se que foram entrevistados 2.000 
//pessoas, fazer um algoritmo que calcule e escreva: 
//(a) o número de pessoas que responderam sim. 
//(b) o número de pessoas que responderam não. 
//(c) a porcentagem de pessoas do sexo feminino que responderam sim. 
//(d) a porcentagem de pessoas do sexo masculino que responderam não.

#include<stdlib.h>
#include<stdio.h>

int main(){

	//declaração de variáveis
	int totalEntrevistados = 2000;
	int pessoasSim = 0, pessoasNao = 0;
	int pessoasFemininoSim = 0, pessoasMasculinoNao = 0;
		
	//laço de repetição para o programa rodar com DOIS MIL funcionários
	for (int i = 1; i <= totalEntrevistados; i++) {
	    char sexo, resposta;
	    printf("Entrevistado %d:\n", i);
	    printf("Digite o sexo do entrevistado (F - Feminino, M - Masculino): ");
	    scanf(" %c", &sexo);
	    printf("Digite a resposta do entrevistado (S - Sim, N - Não): ");
	    scanf(" %c", &resposta);
	
	    if (resposta == 'S') {
	        pessoasSim++;
	        if (sexo == 'F') {
	            pessoasFemininoSim++;
	        }
	    } else if (resposta == 'N') {
	        pessoasNao++;
	        if (sexo == 'M') {
	            pessoasMasculinoNao++;
	        }
	    }
	
	    printf("\n");
	}
		
	//Cálculos finais
	float porcentagemFemininoSim = (float) pessoasFemininoSim / totalEntrevistados * 100;
	float porcentagemMasculinoNao = (float) pessoasMasculinoNao / totalEntrevistados * 100;
	
	//Resultados finais na tela
	printf("Número de pessoas que responderam sim: %d\n", pessoasSim);
	printf("Número de pessoas que responderam não: %d\n", pessoasNao);
	printf("Porcentagem de pessoas do sexo feminino que responderam sim: %.2f%%\n", porcentagemFemininoSim);
	printf("Porcentagem de pessoas do sexo masculino que responderam não: %.2f%%\n", porcentagemMasculinoNao);
}
