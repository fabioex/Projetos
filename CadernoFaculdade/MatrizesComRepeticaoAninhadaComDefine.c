#include <stdio.h>

#define LINHAS 25 // Definindo o número de linhas da matriz (definição de constante para facilitar a manutenção do código)
#define COLUNAS 25 // Definindo o número de colunas da matriz (definição de constante para facilitar a manutenção do código)


int main() {

    int matriz[LINHAS][COLUNAS]; // Declaração de uma matriz 5x5 de inteiros
    int soma = 0; // Variável para armazenar a soma dos elementos da matriz

    printf("\n");

    for(int i = 0; i < LINHAS; i++) { 
        printf("|");
        for(int j = 0; j < COLUNAS; j++) { // Loop interno para percorrer as colunas da matriz
            
            soma++; // Incrementando a variável soma para cada elemento da matriz
            matriz[i][j] = soma; // Atribuindo o valor da soma à posição atual da matriz
            printf("%3d ", matriz[i][j]);
        }
        printf("|\n");
    }
    printf("\n");

    return 0;
}