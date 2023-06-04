//Faça um programa em C que leia os núemros A e B digitados pelo usuário e msotre na tela os pares entre eles e inclusive eles se os mesmos forem pares.

#include <stdio.h>
int main() {
    int A, B, maior, menor;
    
    printf("Digite os termos A e B: ");
    scanf("%d %d", &A, &B);
    
    if(A > B){maior = A; menor = B;}else{maior = B; menor = A;}
    
    if(menor % 2 == 0){for(int i = menor; i <= maior; i += 2){printf("%d\n", i);}}
    else{for(int i = menor + 1; i <= maior; i += 2){printf("%d\n", i);}}
}
