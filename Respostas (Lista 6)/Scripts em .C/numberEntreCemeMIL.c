//Elabore um algoritmo para imprimir todos os números inteiros, maiores que 100 e menores que 1000, cuja soma de dígitos seja 
//maior que 10. Exemplo: Os primeiros números obtidos seriam: {119, 128, 129, 137, 138, 139, ...}

#include <stdio.h>

int main() {
    int numero;

    for (numero = 101; numero < 1000; numero++) {
        int soma = 0;
        int temp = numero;

        while (temp > 0) {
            soma += temp % 10;
            temp /= 10;
        }

        if (soma > 10) {
            printf("%d\n", numero);
        }
    }
}