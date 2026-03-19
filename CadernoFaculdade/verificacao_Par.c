#include <stdio.h>

int main(){

    int numero = 888, resultado;

    resultado = numero % 2;

    if (resultado ==0){
        printf("O número é par");
    } else{
        printf("O número é impar");
    }

    return 0;
}