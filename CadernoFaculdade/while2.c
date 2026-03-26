#include <stdio.h>
/* 
 Nome: Fundamentos do While
 Linguagem de Programação: C
 Objetivo: Exercício
 Aluno: Fábio Oliveira Nunes Matrícula: 202601102478
 */

 int main()
 {
    int i = 1;

    while (i<=10)
    {//o que está entre chaves será repetido enquanto a condição for verdadeira, ou seja, enquanto i for menor ou igual a 10
        printf ("%d\n", i);
        i++; //necessário para não causar loop infinito
    }
   
    return 0;
 }