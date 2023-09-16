//Patrick Oliveira Vagetti

#include <stdio.h>

int vetor[20];
int count_pares, count_impar, count_bigger, count_smaller;

int main()
{
    printf("Digite 20 valores para serem guardados no vetor A\n");
    for (int i = 0; i < 20; i++){
        printf("\nValor %d: ", i+1);
        scanf("%d", &vetor[i]);
        
        if (vetor[i] % 2 == 0){
            count_pares++;
        }
        if (vetor[i] % 2 != 0){
            count_impar++;
        }
        if (vetor[i] > 50){
            count_bigger++;
        }
        if (vetor[i] < 7){
            count_smaller++;
        }
    }
    
    printf("\nExistem %d números pares no vetor;\n", count_pares);
    printf("Existem %d números ímpares no vetor;\n", count_impar);
    printf("Existem %d números maiores que 50;\n", count_bigger);
    printf("Existem %d números menores que 7.\n", count_smaller);

    return 0;
}
