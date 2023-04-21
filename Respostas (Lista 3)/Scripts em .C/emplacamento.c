/*– A polícia rodoviária resolveu fazer cumprir a lei e cobrar dos motoristas o DUT. Sabe-se que o mês em que o emplacamento do
carro deve ser renovado é determinado pelo último número da placa do veiculo. Criar um algoritmo que, a partir da leitura da placa do
carro, informe o mês em que o emplacamento deve ser renovado.*/

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	//Declaração de variáveis
	int ultimoDigito;
	
	//Atribuindo valor ao último dígito
    printf("Digite o ultimo digito da placa do carro: ");
    scanf("%d", &ultimoDigito);

    switch (ultimoDigito) {
        case 1:
            printf("\nO emplacamento deve ser renovado em Janeiro.\n");
        break;
        
        case 2:
            printf("\nO emplacamento deve ser renovado em Fevereiro.\n");
        break;
        
        case 3:
            printf("\nO emplacamento deve ser renovado em Março.\n");
        break;
            
        case 4:
            printf("\nO emplacamento deve ser renovado em Abril.\n");
        break;
            
        case 5:
            printf("\nO emplacamento deve ser renovado em Maio.\n");
        break;
            
        case 6:
            printf("\nO emplacamento deve ser renovado em Junho.\n");
        break;
            
        case 7:
            printf("\nO emplacamento deve ser renovado em Julho.\n");
        break;
            
        case 8:
            printf("\nO emplacamento deve ser renovado em Agosto.\n");
        break;
            
        case 9:
            printf("\nO emplacamento deve ser renovado em Setembro.\n");
        break;
            
        case 0:
            printf("\nO emplacamento deve ser renovado em Outubro.\n");
        break;
            
        default:
            printf("\nO ultimo digito da placa do carro deve ser um valor entre 0 e 9.\n");
        break;
    }
	
	//FinalizaÃ§Ã£o do programa
	system("PAUSE");
	return 0;	
}

