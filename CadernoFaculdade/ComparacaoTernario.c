#include <stdio.h>
/* 
 Nome: Comparação com Operador Ternário
 Linguagem de Programação: C
 Objetivo: Exercício
 Aluno: Fábio Oliveira Nunes Matrícula: 202601102478
 */

 int main() {
    int num1 = 40, num2 = 60, maior;

    //condição ? expressão_se_verdadeira : expressão_se_falsa; // estrutura do operador ternário
    num1 > num2 ? (maior = num1) : (maior = num2);
    printf("O maior número é: %d\n", maior);

    /*com if-else
    if (num1 > num2) {
        maior = num1;
    } else {
        maior = num2;
    }
    printf("O maior número é: %d\n", maior);*/

    return 0;
 }