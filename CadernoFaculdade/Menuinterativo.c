#include <stdio.h> //biblioteca para entrada e saída de dados
#include <stdlib.h>
#include <time.h>

int main (){
    int opcao, numeroSecreto, palpite;

    printf("Menu Interativo\n");
    printf("1 - Execução do Jogo\n");
    printf("2 - Regras do jogo\n");
    printf("3 - Sair do jogo\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Iniciando o jogo...\n");
            // Aqui você pode adicionar o código para iniciar o jogo, por exemplo, um jogo de adivinhação de números
            srand(time(0)); // Inicializa o gerador de números aleatórios com base no tempo atual; "seed random" (semear o aleatório)
            numeroSecreto = rand() % 5 +1; // Gera um número aleatório entre 1 e 5
            printf("Tente adivinhar o número secreto entre 1 e 5: ");
            scanf("%d", &palpite);
            if (palpite == numeroSecreto){
                printf("Parabéns! Você acertou o número secreto!\n");
            } else {
                printf("Que pena! O número secreto era %d. Tente novamente!\n", numeroSecreto);
            }         
            break;
        case 2:
            printf("Regras do jogo:\n");
            printf("- Regra 1: Escolha um número entre 1 e 5\n");
            printf("- Regra 2: Tente adivinhar o número secreto\n");
            printf("- Regra 3: Você tem uma tentativa para acertar\n");
            break;
        case 3:
            printf("Saindo do jogo. Até mais!\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
    }
    return 0;
}