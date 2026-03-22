/* 
 Nome: Jogo Maior, Menor ou Igual 
 Linguagem de Programação: C
 Objetivo: Exercício
 Aluno: Fábio Oliveira Nunes Matrícula: 202601102478
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

        printf("*************************************\n");
        printf("*    Jogo Maior, Menor ou Igual     *\n");
        printf("*************************************\n");

        
    int numeroJogador, numeroPC, resultado;
    char tipoComparacao;

// Gerar um número aleatório para o computador
    srand (time(0));
    numeroPC = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100

//Início Jogo
    printf("Digite um número entre 1 e 100: ");
    scanf("%d", &numeroJogador);

// Teste de validação para garantir que o número do jogador esteja dentro do intervalo permitido    
    if (numeroJogador < 1 || numeroJogador > 100) {
        printf("Número inválido! Por favor, digite um número entre 1 e 100.\n");
        return 1; // Encerra o programa com código de erro (qualquer número diferente de 0 no return indica que houve um erro)
    }

    printf("Escolha o tipo de comparação:\n");
    printf("'M' para maior\n");
    printf("'N' para menor\n");
    printf("'I' para igual\n");
    printf("Digite sua escolha: ");
    scanf(" %c", &tipoComparacao); // O espaço antes de %c é para consumir qualquer caractere de nova linha. Uma boa prática para evitar problemas de leitura de caracteres após scanf.

    switch (tipoComparacao) {
        case 'M':
        case 'm': // Adicionando a opção minúscula para maior
            printf("Você escolheu a opção Maior!\n");
            resultado = (numeroJogador > numeroPC) ? 1 : 0;
            break;
        case 'N':
        case 'n': // Adicionando a opção minúscula para menor
            printf("Você escolheu a opção Menor!\n");
            resultado = (numeroJogador < numeroPC) ? 1 : 0;
            break;
        case 'I':
        case 'i': // Adicionando a opção minúscula para igual
            printf("Você escolheu a opção Igual!\n");
            resultado = (numeroJogador == numeroPC) ? 1 : 0;
            break;
        default:
            printf("Opção inválida! Por favor, escolha 'M', 'N' ou 'I'.\n");
            return 1; // Encerra o programa com código de erro
    }

    printf("Número do Jogador: %d\n", numeroJogador);
    printf("Número do Computador: %d\n", numeroPC);
    printf("Você escolheu o tipo de Comparação: %c\n", tipoComparacao);

    if (resultado) {
        printf("Parabéns! Você venceu!\n");
    } else {
        printf("Infelizmente! Você perdeu!\n");
    }

    return 0;
}
