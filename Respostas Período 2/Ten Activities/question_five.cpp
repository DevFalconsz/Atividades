//Patrick Oliveira Vagetti

#include <stdio.h>

int matriz[4][3], finder[1][1];
bool verification = false;

int main()
{
    printf("Digite os elementos da matriz: \n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Valor a ser procurado dentro da matriz: ");
    scanf("%d", &finder[1][1]);
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if(matriz[i][j] == finder[1][1]){
                printf("Valor se encontra na matriz!");
                verification = true;
            }
        }
    }
    
    if(!verification){
        printf("Valor NÃO se encontra na matriz!");
    }
    
    return 0;
}
