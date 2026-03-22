#include <stdio.h>
/* 
 Nome: Operador Ternário
 Linguagem de Programação: C
 Objetivo: Exercício
 Aluno: Fábio Oliveira Nunes Matrícula: 202601102478
 */

int main() {

    int idade = 16, resultado;

    //condição ? expressão_se_verdadeira : expressão_se_falsa; // estrutura do operador ternário
    /* É igual a um if-else, mas de forma mais compacta. Ele avalia a condição e retorna uma das duas expressões,
     dependendo se a condição é verdadeira ou falsa.
     Ex:
     if(condição){
     verdadeiro
     } else{
     falso
     }
     Ou seja, são iguais*/
    resultado = (idade >= 18) ? printf("Você é maior de idade.\n") : printf("Você é menor de idade.\n");
    
    return 0;
}