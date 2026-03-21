#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero de 1 a 3: \n");
    scanf("%d", &numero);

    switch(numero){
        case 1:
            printf("Segunda-feira\n");
            break;
        case 2:
            printf("Terça-feira\n");
            break;
        case 3:
            printf("Quarta-feira\n");
            break;
        
        default:
            printf("Número inválido!\n");
    }

    return 0;
}