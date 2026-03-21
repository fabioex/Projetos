#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
 Nome: Jokenpô com Switch
 Linguagem de Programação: C
 Objetivo: Exercício
 Aluno: Fábio Oliveira Nunes Matrícula: 202601102478
 */

int main () {

        printf("*******************************\n");
        printf("*    Bem vindo ao Jokenpô     *\n");
        printf("*******************************\n");

        srand (time(0));

    int opcao, escolhaJogador, escolhaPC;

        
        printf("         Menu: \n");
        printf("Digite a opção desejada: \n");
        printf(" 1 - Iniciar o Jogo \n");
        printf(" 2 - Regras do Jogo \n");
        printf(" 3 - Sair do Jogo\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                
                printf("Escolha: 1-pedra, 2-papel e 3-tesoura\n");
                printf("Digite o número correspondente: \n");
                scanf("%d", &escolhaJogador);
                
                escolhaPC = rand() % 3 + 1;

                switch (escolhaJogador){
                    case 1:
                        printf("Jogador: Pedra\n");
                    break;

                    case 2:
                        printf("Jogador: Papel\n");
                    break;
                    
                    case 3:
                        printf("Jogador: Tesoura\n");
                    break;

                    default:
                        printf("Opção inválida: \n");
                }
                switch (escolhaPC){
                    case 1:
                       printf("Computador: Pedra\n");
                    break;

                    case 2:
                        printf("Computador: Papel\n");
                    break;
                    
                    case 3:
                        printf("Computador: Tesoura\n");
                    break;
                }
                if (escolhaJogador == escolhaPC){
                    printf("#### Empate! ###\n");
                } else if(((escolhaJogador == 1) && (escolhaPC == 3)) ||
                            ((escolhaJogador == 2) && (escolhaPC == 1)) ||
                            ((escolhaJogador == 3) && (escolhaPC == 2))){
                                printf("### Parabéns, você venceu! ####\n");
                            } else{
                                printf("### Infelizmente, você perdeu ###\n");
                            }
            break;

            case 2:
                printf("O jogador deve escolher entre 1-pedra, 2-papel e 3-tesoura \n");
            break;

            case 3:
                printf("Saindo do jogo!");
            break;

            default:
                printf("Opção Inválida");

        }
        
      return 0;
}