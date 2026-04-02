// Vetores e Matrizes
// Busca Condicional em uma Matriz

#include <stdio.h>

#define linha 3
#define coluna 3

int main() {
    int matriz[linha][coluna];
    int target = 9;// Elemento a ser buscado
    int found = 0;
    int some = 1;

    // Preenchimento da matriz
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            matriz[i][j] = some;
            some++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Busca condicional do elemento alvo
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);
                found = 1;
                break; // Sai do loop interno (colunas)
            }
        }
        if (found) break; // Sai do loop externo (linhas) se encontrou
    }

    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }

    return 0;
}