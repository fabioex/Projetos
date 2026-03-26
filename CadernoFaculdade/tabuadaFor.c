#include <stdio.h>

int main() {
    // i agora representa o multiplicador (1, 2, 3... até 10)
    // Cada i será uma LINHA na tela
    for (int i = 1; i <= 10; i++) {
        
        // j representa de qual número é a tabuada (Tabuada do 1, do 2...)
        // Cada j será uma COLUNA na tela
        for (int j = 1; j <= 10; j++) {
            // Imprime a conta e um tab (\t) para separar as colunas
            printf("%d*%d=%d\t", j, i, j * i);
        }
        
        // Só pula de linha depois de mostrar o "i" de todas as tabuadas
        printf("\n");
    }
    
    return 0;
}