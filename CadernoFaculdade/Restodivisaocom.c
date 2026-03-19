#include <stdio.h>

int main(){

    int numero, resultado;

    printf("Digite o número: \n");
    scanf("%d", &numero);

    resultado = numero % 2;
    printf("O resto da divisão por 2 é: %d\n", resultado);

    if (resultado == 0){
        printf("O número é par\n");
    }
        else{
            printf("O número é ímpar\n");
        }


    return 0;
}