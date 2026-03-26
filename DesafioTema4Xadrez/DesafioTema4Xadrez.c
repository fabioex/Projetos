#include <stdio.h>

/*Desafio Peças de Xadrez 
Nível Aventureiro: Torre, bispo, rainha e cavalo.
Tema 4 - Movimentação de Peças de Xadrez
Objetivo: Implementando a lógica básica de movimentação das peças usando while, do-while e for.
Aluno: Fábio Oliveira Nunes Matrícula: 202601102478*/ 



int main() {

   // Mover a Torre 5 casas para a direita

   printf("Movimentação da Torre:\n");

   for (int direita = 0; direita < 5; direita++) {
        printf("Direita\n");
    }

    printf("\n"); // Adiciona uma linha em branco para separar as movimentações

    // Mover o Bispo 5 casas para a diagonal superior direita

    printf("Movimentação do Bispo:\n");

    int cimaDireita = 0; //cimaDireita = diagonal superior direita
    while (cimaDireita < 5) {
        printf("Cima Direita\n");
        cimaDireita++;
    }

    printf("\n"); // Adiciona uma linha em branco para separar as movimentações

    // Mover a Rainha 8 casas para baixo

    printf("Movimentação da Rainha:\n");

    int esquerda = 0;
    do {
        printf("Esquerda\n");
        esquerda++;
    } while (esquerda < 8);

    printf("\n");

    // Mover Cavalo 2 casas para baixo e 1 para esquerda usando for e while
    
    printf("Movimentação do Cavalo:\n");

    int baixo;

    for(baixo = 0; baixo < 2; baixo++){
        printf("Baixo\n");
        while (baixo == 1) {
        printf("Esquerda\n");
        baixo++;
        }
    }

    printf("\n");

    return 0;
}