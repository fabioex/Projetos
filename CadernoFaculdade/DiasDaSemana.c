#include <stdio.h>

int main(){
    int numero;
    printf("Digite um número (1 a 5 para dia útil, 6 ou 7 para fim de semana): \n");
    scanf("%d", &numero);

    switch(numero){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("É um dia útil.\n");
            break; // O break aqui interrompe para todos os casos acima
        
        case 6:
        case 7:
            printf("É fim de semana!\n");
            break;

        default:
            printf("Número inválido!\n");
    }

    return 0;
}