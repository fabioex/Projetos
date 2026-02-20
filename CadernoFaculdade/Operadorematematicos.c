#include <stdio.h>

int main(){

    /*
    soma (+)
    subtração (-)
    multiplicacao (*)
    divisao (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o número 1: \n");
    scanf("%d", numero1);
    printf("Entre com o número 2: \n");
    scanf("%d", numero2)

    //operacao soma
    soma = numero1 + numero2;

    //operacao subtracao
    subtracao = numero1 - numero2;

    //operacao multiplicacao
    multiplicacao = numero1 * numero2;

    //operacao divisao
    divisao = numero1 / numero2;

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplição é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);


}