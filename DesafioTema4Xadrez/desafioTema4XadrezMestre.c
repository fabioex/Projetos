#include <stdio.h>

/*Desafio Peças de Xadrez 
Nível Mestre: Implantando recursividade no movimento da Torre e Rainha. Bispo: loops aninhados. Muda a movimentação do cavalo.
Tema 4 - Movimentação de Peças de Xadrez
Objetivo: Implementando a lógica básica de movimentação das peças usando while, do-while, for e recursividade.
Aluno: Fábio Oliveira Nunes Matrícula: 202601102478*/ 

// 1. RECURSIVIDADE para a Torre (5 casas Direita)
void moverTorre(int Tdireita) {
    if (Tdireita < 5) {
        printf("Direita\n");
        moverTorre(Tdireita + 1);
    }
}

// 2. RECURSIVIDADE para a Rainha (8 casas Esquerda)
void moverRainha(int Resquerda) {
    if (Resquerda < 8) {
        printf("Esquerda\n");
        moverRainha(Resquerda + 1);
    }
}
int main() {

    // Mover a TORRE 5 casas para a direita usando recursividade

    printf("Movimentação da Torre:\n");

    moverTorre(0);

    printf("\n"); // Adiciona uma linha em branco para separar as movimentações

    // Mover o BISPO 5 casas para a diagonal superior direita usando loops aninhados
    // Atendendo ao requisito: Externo (Vertical) e Interno (Horizontal)
    
    printf("Movimentação do Bispo:\n");

    for (int i = 0; i < 5; i++) {     // Loop Externo: Vertical (Cima)
        for (int j = 0; j < 1; j++) { // Loop Interno: Horizontal (Direita)
            printf("Cima ");
        }
        printf("Direita\n");
    }

    printf("\n"); // Adiciona uma linha em branco para separar as movimentações

    // Mover a Rainha 8 casas para esquerda (usando recursividade)

    printf("Movimentação da Rainha:\n");

    moverRainha(0);

    printf("\n");

    // Mover Cavalo 2 casas para cima e para direita usando for e while
    
    printf("Movimentação do Cavalo:\n");

        for(int Cdireita = 0; Cdireita < 2; Cdireita++){
        printf("Cima\n");
        while (Cdireita == 1) {
        printf("Direita\n");
        Cdireita++;
        }
    }

    printf("\n");

    return 0;
}