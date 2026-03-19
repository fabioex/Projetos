#include <stdio.h>

int main() {
    // Definindo a variável como 0 (que o C entende como Falso)
    int a = 0;

    // O operador '!' inverte o valor. 
    // Se 'a' é 0 (Falso), '!a' se torna Verdadeiro.
    if (!a) { 
        printf("A variavel a e zero.\n");
        // printf("a nao e um numero positivo\n");
    } else {
        printf("A variavel e diferente de zero.\n");
    }

    return 0;
}