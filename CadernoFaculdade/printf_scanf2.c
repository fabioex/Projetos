#include <stdio.h>
 
int main() {
    int idade = 41;
    float altura = 1.93;
    double saldoBancario = 12345.67;
    char inicial = 'F';
    char nome[20] = "Fabio";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    /*
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

    printf("Digite a sua idade: %d");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);
}