#include <stdio.h>

int main(){

    int estoque = 5;

    if (estoque < 5){

        printf("O estoque está baixo, é necessário fazer um pedido de reposição.\n");
    }
        else{
            printf("O estoque está em um nível adequado.\n");
        }
    return 0;
}