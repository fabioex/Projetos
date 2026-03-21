#include <stdio.h>

int main() {

    int opcao;
    float saldo = 1000;

    printf("Escolha uma opção: \n");
    printf("1 - Verificar Saldo\n");
    printf("2 - Realizar Depósito\n");
    printf("3 - Realizar Saque\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("O seu saldo é: R$ %.2f\n", saldo);
            break;
        case 2:
            printf("Digite o banco:\n");
            printf("Digite a agência:\n");
            printf("Digite a conta:\n");
            break;
        case 3:
            printf("Digite o valor para sacar: \n");
            break;
        default:
            printf("Opção inválida!\n");
    }
    
    
    
    
    
    switch (opcao) {
        case 1:
            printf("Saldo: R$ 1000,00\n");
            break;
        case 2:
            printf("Depósito realizado com sucesso!\n");
            break;
        case 3:
            printf("Saque realizado com sucesso!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }


    return 0;
}