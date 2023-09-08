#include <stdio.h>

int matriz_a[2][3];
int matriz_b[2][3];

int main() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da matriz A na posição [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz_a[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da matriz B na posição [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz_b[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matriz_a[i][j] += matriz_b[i][j];
        }
    }
    
    printf("\n********Matriz formada da soma********\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", matriz_a[i][j]);
            printf(" ");
        }
        printf("\n"); 
    }
    
    return 0;
}
