//Patrick Oliveira Vagetti

#include <stdio.h>

int vetor[8], verification;
bool finder = false;

int main()
{
    printf("Digite 8 valores para serem guardados no vetor\n");
    for (int i = 0; i < 8; i++){
        printf("\nValor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nValor a ser encontrado dentro do vetor digitado: ");
    scanf("%d", &verification);
    
    for (int i = 0; i < 8; i++){
        if(verification == vetor[i]){
            printf("Valor encontrado dentro do vetor na posição %d", i);
            finder = true;
        }
    }
    
    if(!finder){
        printf("Valor NÃO encontrado dentro do vetor");
    }

    return 0;
}
