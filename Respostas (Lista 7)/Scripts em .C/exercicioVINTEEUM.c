// exercicio 21

#include <stdio.h>

//função pra converter valores
int converterParaDecimal(int octal) {
    int decimal = 0;
    int potencia = 1;

    while (octal != 0) {
        int digito = octal % 10;
        decimal += digito * potencia;
        potencia *= 8;
        octal /= 10;
    }

    return decimal;
}

int main() {
    int octal;

    // Ler o número inteiro positivo na base 8
    printf("Digite um número inteiro positivo na base 8: ");
    scanf("%d", &octal);

    // Verificar se o número é positivo
    if (octal < 0) {
        printf("O número deve ser positivo.\n");
        return 1;
    }

    // Calcular o equivalente na base 10 e imprimir o resultado
    int decimal = converterParaDecimal(octal);
    printf("O número equivalente na base 10 é: %d\n", decimal);

    return 0;
}
