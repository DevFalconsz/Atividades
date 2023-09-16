//Patrick Oliveira Vagetti

#include <stdio.h>

int matriz[5][2], soma[1][1];

int main()
{
    printf("Digite os valores para serem colocados na matriz e serem calculados a sua média.\n");
    for (int i  = 0; i < 5; i ++){
        for (int j = 0; j < 2; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            soma[1][1] += matriz[i][j];
        }
    }
    
    soma[1][1] /= 10;
    printf("A média dessa matriz é: %d", soma[1][1]);
    
    return 0;
}
