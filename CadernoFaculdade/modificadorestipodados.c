#include <stdio.h>

int main(){

    int signednumber = 3000000000; // Este valor excede o limite de um int normal
    /*
    int (com sinal): vai de -2.147.483.648 até 2.147.483.647.
    unsigned int (sem sinal): dobra o alcance positivo, indo de 0 até 4.294.967.295.
    Porque int ocupa, em geral, 4 bytes (32bits), 32 bits tem 2³² combinações possíveis
    */
    unsigned int unsignednumber = 3000000000;

    printf("Número com sinal: %d\n", signednumber);
    printf("Número sem sinal: %u\n", unsignednumber);

    printf("tamanho de int: %u bytes\n", sizeof(int));
    printf("tamanho de unsigned int: %u bytes\n", sizeof(unsigned int));
    printf("tamanho de long int: %u bytes\n", sizeof(long int));
    printf("tamanho de long long int: %u bytes\n", sizeof(long long int));
    printf("tamanho de double: %u bytes\n", sizeof(double));
    printf("tamanho de char: %u bytes\n", sizeof(char));
    printf("tamanho do short int: %u bytes\n", sizeof(short int)); // o limite de short int é de -32.768 a 32.767, ocupando 2 bytes (16 bits)


    return 0;
}