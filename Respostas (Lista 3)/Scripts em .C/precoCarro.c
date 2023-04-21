/*Desenvolver um algoritmo para calcular e imprimir o pre�o final de um carro. O valor do pre�o inicial de f�brica � fornecido por
um meio de entrada. O carro pode ter as seguintes op��es:
(a) (S,N)Ar condicionado: R$ 1750,00
(b) (S,N)Pintura Met�lica: R$ 800,00
(c) (S,N)Vidro El�trico: R$ 1200,00
(d) (S,N)Dire��o Hidr�ulica: R$ 2000,00.*/

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	float precoInicial, precoFinal = 0;
    char arCondicionado, pinturaMetalica, vidroEletrico, direcaoHidraulica;

    // Leitura do pre�o inicial de f�brica
    printf("Digite o preco inicial de fabrica do carro: ");
    scanf("%f", &precoInicial);

    // Leitura das op��es do carro
    printf("O carro tem ar condicionado? (S/N) ");
    scanf(" %c", &arCondicionado);

    printf("O carro tem pintura metalica? (S/N) ");
    scanf(" %c", &pinturaMetalica);

    printf("O carro tem vidro eletrico? (S/N) ");
    scanf(" %c", &vidroEletrico);

    printf("O carro tem direcao hidraulica? (S/N) ");
    scanf(" %c", &direcaoHidraulica);

    // C�lculo do pre�o final
    precoFinal = precoInicial;

    if (arCondicionado == 'S' || arCondicionado == 's') 
	{
        precoFinal += 1750.0;
    }
    if (pinturaMetalica == 'S' || pinturaMetalica == 's') 
	{
        precoFinal += 800.0;
    }
    if (vidroEletrico == 'S' || vidroEletrico == 's') 
	{
        precoFinal += 1200.0;
    }
    if (direcaoHidraulica == 'S' || direcaoHidraulica == 's') 
	{
        precoFinal += 2000.0;
    }

    // Impress�o do pre�o final
    printf("O preco final do carro eh: R$ %.2f\n", precoFinal);
	
	//Finalização do programa
	system("PAUSE");
	return 0;	
}

