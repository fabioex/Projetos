#include <stdio.h>

int main (){

    int dia;
    printf("Digite um número de 1 a 7 para saber o dia da semana: \n");
    scanf("%d", &dia);
    
    switch (dia){
        case 1:
            printf("É Domingo!\n");
            break;
        case 2:
            printf("É Segunda-feira\n");
            break;
        case 3:
            printf("É Terça-feira\n");
            break;
        case 4:
            printf("É Quarta-feira\n");
            break;
        case 5:
            printf("É Quinta-feira\n");
            break;
        case 6:
            printf("É Sexta-feira\n");
            break;
        case 7:
            printf("É Sábado!\n");
            break;
        default:
            printf("Número inválido!\n");
    }

    return 0;
}