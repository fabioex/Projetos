#include <stdio.h>

int main() {
    // Inicializa uma matriz 3x3 com valores de 1 a 9
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Verifica se o elemento atual é maior que 5
            if (matriz[i][j] > 5) {
                matriz[i][j] = -matriz[i][j]; // Se o elemento for maior que 5, torna-o negativo
            }
            // Imprime o elemento da matriz (modificado ou não)
            printf("%d ", matriz[i][j]);
        }
        // Pula para a próxima linha após imprimir cada linha da matriz
        printf("\n");
    }

    return 0;
}