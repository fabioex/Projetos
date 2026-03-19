/***********************************
 * Teste de idade mínima para votar*
 ***********************************/
// Autor: Fabio Nunes
// Data: 16/03/2026

#include <stdio.h>

int main() {

    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >=16) { //condição verdadeira; e a { marca a bloco de código a ser executado caso a condição seja verdadeira;
        printf("Você pode votar!\n");
    }//marca de fechamento do bloco de código a ser executado caso a condição seja verdadeira;
        else{ //condição falsa; e a { marca o bloco de código a ser executado caso a condição seja falsa;
            printf("Você não tem idade para votar!");
    }//marca de fechamento do bloco de código a ser executado caso a condição seja falsa;

    return 0;
}