//Patrick Oliveira Vagetti

#include <stdio.h>

int matriz[3][3], matrizlineONE[1][1], matrizLINEtwo[1][1], MATRIZlinethree[1][1];

int main()
{
    printf("Digite os elementos da matriz: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if (j == 0){
                matrizlineONE[1][1] += matriz[i][j];
            }
            if (j == 1){
               matrizLINEtwo[1][1] += matriz[i][j];
            }
            if (j == 2){
                MATRIZlinethree[1][1] += matriz[i][j];
            }
        }
    }
    
    printf("\nLinha 1: %d\nLinha 2: %d\nLinha 3: %d", matrizlineONE[1][1], matrizLINEtwo[1][1], MATRIZlinethree[1][1]);
    
    return 0;
}
