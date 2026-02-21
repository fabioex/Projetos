#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-incremento ++a
    Pós-incremento a++
    Decremento (--)
    Pré-decremento --a
    Pós-decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    //numero1++;
    numero1 += 1; //ou assim, tanto faz
    printf("Após incremento: %d\n", numero1);

    //numero1--;
    numero1 -= 1; // ou assim, tanto faz
    printf("Após decremento: %d\n", numero1);

    resultado = numero1++; //atribui primeiro, depois incrementa -> Pós-incremento
    printf(" Número 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1; //incrementa primeiro, depois atribui -> Pré-incremento
    printf(" Número 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = numero1--; //atribui primeiro, depois decrementa -> Pós-decremento
    printf(" Número 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1; //decrementa primeiro, depois atribui -> Pré-decremento
    printf(" Número 1: %d - Resultado: %d\n", numero1, resultado);

    return 0;
}