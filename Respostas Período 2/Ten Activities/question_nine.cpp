//Patrick Oliveira Vagetti

#include <stdio.h>

int matriz[6][3], maior[1][1], menor[1][1];

int main()
{
    printf("Digite os números para compor a matriz 6x3.\n");
    for (int i = 0; i < 6; i ++){
        for (int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            maior[1][1] = matriz[i][j];
            menor[1][1] = matriz[i][j];
        }
    }
    
    for (int i = 0; i < 6; i ++){
        for (int j = 0; j < 3; j++){
            if (maior[1][1] > matriz[i][j]){
                maior[1][1] = matriz[i][j];
            }
            if (menor[1][1] < matriz[i][j]){
                menor[1][1] = matriz[i][j];
            }
        }
    }
    printf("O menor valor dentro da matriz é: %d\nO maior valor dentro da matriz é: %d", maior[1][1], menor[1][1]);

    return 0;
}
