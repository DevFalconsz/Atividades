//Patrick Oliveira Vagetti

#include <stdio.h>

int matriz[3][3], matrizcolumnONE[1][1], matrizCOLUMNtwo[1][1], MATRIZcolumnthree[1][1];

int main()
{
    printf("Digite os elementos da matriz: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if (i == 0){
                matrizcolumnONE[1][1] += matriz[i][j];
            }
            if (i == 1){
               matrizCOLUMNtwo[1][1] += matriz[i][j];
            }
            if (i == 2){
                MATRIZcolumnthree[1][1] += matriz[i][j];
            }
        }
    }
    
    printf("\nColuna 1: %d\nColuna 2: %d\nColuna 3: %d", matrizcolumnONE[1][1], matrizCOLUMNtwo[1][1], MATRIZcolumnthree[1][1]);
    
    return 0;
}
