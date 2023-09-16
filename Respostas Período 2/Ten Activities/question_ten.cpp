//Patrick Oliveira Vagetti

#include <stdio.h>

int matriz_A[2][5], matriz_B[2][5], matriz_C[2][5];

int main()
{
    printf("Digite os números para compor a matriz A.\n");
    for (int i = 0; i < 2; i ++){
        for (int j = 0; j < 5; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz_A[i][j]);
        }
    }
    
    printf("\nDigite os números para compor a matriz B.\n");
    for (int i = 0; i < 2; i ++){
        for (int j = 0; j < 5; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz_B[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i ++){
        for (int j = 0; j < 5; j++){
            matriz_C[i][j] = matriz_A[i][j] + matriz_B[i][j];
        }
    }

    printf("\nMostrando valores da matriz C.\n");
    for (int i = 0; i < 2; i ++){
        for (int j = 0; j < 5; j++){
            printf("Elemento [%d][%d]: %d\n", i+1, j+1, matriz_C[i][j]);
        }
    }

    return 0;
}
