#include <stdio.h>

int main() {

    float nota;
    printf("Digite sua nota: \n");
    scanf("%.2f");

    if (nota>=7.0) {
        printf("Você está aprovado!");
    }
        else {
            printf("Infelizmente, você foi reprovado!");
        }

    return 0;

}