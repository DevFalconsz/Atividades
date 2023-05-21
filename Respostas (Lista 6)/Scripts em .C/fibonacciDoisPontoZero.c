//Elabore um algoritmo para dado um número N, inteiro e positivo, obter os N primeiros termos da seguinte sequência (sequência 
//de Fibonacci) : 1, 1, 2, 3, 5, 8, 13...

#include <stdlib.h>
#include <stdio.h>

int main(){
	//Declaração de variáveis
	int n;
    int primeiro = 0, segundo = 1, proximo;

	//Atribuindo valores pra calcular  fibonacci
    printf("Digite quantos termos da sequence de fibonacci deve aparecer: ");
    scanf("%d", &n);
	
	/?Exibindo o primeiro termo separado
    printf("%d\n", primeiro); 

	//Laço de repetição para msotrar todos da sequência
    for (int i = 1; i < n; i++) {
        printf("%d\n", segundo);

        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }
	
	return 0;
}