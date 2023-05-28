// exercicio 30

#include <stdio.h>

int main() {
    int anoNascimento;
    char sexo;
    int registro;
    int motoristasMenos25Anos = 0; // contador de motoristas com menos de 25 anos
    int mulheres = 0; // contador de motoristas do sexo feminino
    int registroForaSP = 0; // contador de motoristas com registro fora de São Paulo
    int totalMotoristas = 0; // contador do total de motoristas
    int encerrar = 0; // variável para controlar o encerramento do loop

    printf("Informe os dados dos motoristas envolvidos em acidentes (ano de nascimento, sexo e registro):\n");

    while (!encerrar) { // loop principal, executa até a variável 'encerrar' ser igual a 1
        printf("Ano de Nascimento (0 para encerrar): ");
        scanf("%d", &anoNascimento);

        if (anoNascimento == 0) { // se o ano de nascimento for igual a 0, define a variável 'encerrar' como 1 para encerrar o loop
            encerrar = 1;
        } else {
            printf("Sexo (M/F): ");
            scanf(" %c", &sexo);

            printf("Registro (1 para SP, 0 para outros): ");
            scanf("%d", &registro);

            totalMotoristas++; // incrementa o contador de total de motoristas

            if (anoNascimento > 0 && anoNascimento >= 25) { // verifica se o motorista tem menos de 25 anos
                motoristasMenos25Anos++; // incrementa o contador de motoristas com menos de 25 anos
            }

            if (sexo == 'F') { // verifica se o motorista é do sexo feminino
                mulheres++; // incrementa o contador de motoristas do sexo feminino
            }

            if (registro == 0) { // verifica se o motorista tem registro fora de São Paulo
                registroForaSP++; // incrementa o contador de motoristas com registro fora de São Paulo
            }

            printf("\n");
        }
    }

    // Cálculo das porcentagens
    float porcentagemMenos25Anos = (motoristasMenos25Anos / (float)totalMotoristas) * 100;
    float porcentagemMulheres = (mulheres / (float)totalMotoristas) * 100;
    float porcentagemRegistroForaSP = (registroForaSP / (float)totalMotoristas) * 100;

    // Exibição das estatísticas
    printf("\n--- Estatísticas ---\n");
    printf("Percentagem de motoristas com menos de 25 anos: %.2f%%\n", porcentagemMenos25Anos);
    printf("Percentagem de mulheres: %.2f%%\n", porcentagemMulheres);
    printf("Percentagem de motoristas com registro fora de SP: %.2f%%\n", porcentagemRegistroForaSP);

    return 0;
}
