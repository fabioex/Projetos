#include <stdio.h> <stdlib.h> <time.h>

int main (){
    int escolhaJogador, escolhaComputador;

    printf("*****************************
            *   Bem-vindo ao Jokenpô!   *
            *****************************\n");
    printf("Escolha uma opção:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolhaJogador);
    srand(time(0)); // Inicializa o gerador de números aleatórios com base no tempo atual; "seed random" (semear o aleatório)
    escolhaComputador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3 para a escolha do computador
    printf("O computador escolheu: %d\n", escolhaComputador);
    if (escolhaJogador == escolhaComputador){
        printf("Empate!\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) || 
               (escolhaJogador == 2 && escolhaComputador == 1) || 
               (escolhaJogador == 3 && escolhaComputador == 2)){
        printf("Parabéns! Você venceu!\n");
    } else {
        printf("Que pena! O computador venceu!\n");
    }
    return 0;
}