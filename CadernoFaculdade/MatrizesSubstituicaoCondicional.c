// Vetores e Matrizes
// Substituição Condicional de Elementos

#include <stdio.h>

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Substituição condicional de elementos
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            // Verifica se o número é múltiplo de 3
            if (matriz[i][j] % 3 == 0) {
                matriz[i][j] = -1; // Substitui múltiplos de 3 por -1
            }
            
            // Imprime o elemento (atualizado ou não)
            printf("%d ", matriz[i][j]);
        }
        // Quebra de linha após cada linha da matriz
        printf("\n");
    }

    return 0;
}