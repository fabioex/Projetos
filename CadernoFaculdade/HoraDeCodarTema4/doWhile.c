#include <stdio.h>

int main() {

    int numero;

    do {
        printf("Digite um número par para sair do programa: ");
        scanf("%d", &numero);

        if(numero % 2 == 0) {
            printf("Número par detectado. Saindo...\n");
        } else {
            printf("Número ímpar detectado. Tente novamente.\n");
        }

    } while (numero % 2 != 0);

    printf("Programa encerrado.\n");

    return 0;
}