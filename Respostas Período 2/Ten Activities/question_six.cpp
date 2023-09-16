//Patrick Oliveira Vagetti

#include <stdio.h>

int matriz[5][5];
int contador;

int main()
{
    printf("Digite os elementos da matriz: \n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            
            if (matriz[i][j] % 2 == 0){
                contador++;
            }
        }
    }
    
    printf("Existem %d números pares nessa matriz.", contador);
    
    return 0;
}
