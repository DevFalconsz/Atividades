//Patrick Oliveira Vagetti

#include <stdio.h>

int vetor_A[10], vetor_B[10];

int main()
{
    printf("Digite 10 valores para serem guardados no vetor A\n");
    for (int i = 0; i < 10; i++){
        printf("\nValor %d: ", i+1);
        scanf("%d", &vetor_A[i]);
    }
    
    printf("\nDigite 10 valores para serem guardados no vetor B\n");
    for (int i = 0; i < 10; i++){
        printf("\nValor %d: ", i+1);
        scanf("%d", &vetor_B[i]);
    }
    
    //Cálculo
    for (int i = 0; i < 10; i++){
        vetor_A[i] += vetor_B[i];
    }
    
    printf("\nResultado final da soma deu no seguinte vetor: \n");
    
    //Mostrando resultado na tela
    for (int i = 0; i < 10; i++){
        printf("Posição %d valor: %d\n", i,vetor_A[i]);
    }

    return 0;
}
