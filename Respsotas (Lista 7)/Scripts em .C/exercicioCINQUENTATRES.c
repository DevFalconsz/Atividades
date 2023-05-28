// exercicio 53

#include <stdio.h>
#include <math.h>

int main() {
    int numBase3;
    
    printf("Digite um numero na base 3 (0 para sair): ");
    scanf("%d", &numBase3);
    
    while (numBase3 != 0) {
        int numBase10 = 0;
        int power = 0;
        
        // Convertendo o número da base 3 para a base 10
        while (numBase3 > 0) {
            int digit = numBase3 % 10;
            numBase10 += digit * pow(3, power);
            numBase3 /= 10;
            power++;
        }
        
        // Exibindo o número nas bases 3 e 10
        printf("Numero na base 3: %d\n", numBase3);
        printf("Numero na base 10: %d\n", numBase10);
        
        printf("\nDigite um numero na base 3 (0 para sair): ");
        scanf("%d", &numBase3);
    }
    
    return 0;
}
