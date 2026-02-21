#include <stdio.h>

int main(){
    //Declarar variáveis Produto, u i estoque, double valor unitario, double valor total e 
    // u i quantidade mínima

    //definição dos nomes dos produtos:
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    //definição dos estoques dos produtos:
    unsigned int estoqueA = 1000; //não existe estoque negativo, então melhor usar unsigned;
    unsigned int estoqueB = 2000;

    //definião dos valores dos produtos:
    float valorA = 10.50;
    float valorB = 20.40;

    //estoque mínimo:
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA = estoqueA * valorA;
    double valorTotalB = estoqueB * valorB;

    int resultadoA, resultadoB;

    //exibir as informações dos produtos:
    printf("Produto %s tem estoque %d e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %d e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

    //comparações com o valor mínimo de estoque:
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("---Conferência do estoque mínimo---\n");
    printf("- 1 para verdadeiro e 0 para falso -\n");
    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA); //1: V ; 2: F
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

    //Comparações entre os valores dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", valorTotalA, valorTotalB, valorTotalA > valorTotalB);

    return 0;
}