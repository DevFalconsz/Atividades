// exercicio 22

#include <stdio.h>

int validarCPF(int cpf) {
    int cpfTemp = cpf / 10; // Ignorar os dois últimos dígitos (dígitos de verificação)
    int peso = 2;
    int soma = 0;

    // Calcular a soma ponderada dos dígitos do CPF
    while (cpfTemp > 0) {
        int digito = cpfTemp % 10;
        soma += digito * peso;
        peso++;

        cpfTemp /= 10;
    }

    // Calcular o dígito verificador
    int resto = soma % 11;
    int digitoVerificador = 11 - resto;
    if (digitoVerificador == 10 || digitoVerificador == 11) {
        digitoVerificador = 0;
    }

    // Verificar se o dígito verificador é igual ao último dígito do CPF
    int ultimoDigito = cpf % 10;
    if (digitoVerificador == ultimoDigito) {
        return 1; // CPF válido
    } else {
        return 0; // CPF inválido
    }
}

int main() {
    int cpf;

    // Ler o CPF digitado pelo usuário
    printf("Digite o CPF (sem pontos ou traços): ");
    scanf("%d", &cpf);

    // Verificar a validade do CPF e exibir o resultado
    if (validarCPF(cpf)) {
        printf("CPF válido.\n");
    } else {
        printf("CPF inválido.\n");
    }

    return 0;
}
