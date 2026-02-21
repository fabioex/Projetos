#include <stdio.h>
 
int main() {
    int regularNumber = 2147483647; // Valor máximo de int
    double bigNumber = 2147483647;
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (double): %.0lf\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande (double) após atribuição de valor maior que int: %.0lf\n", bigNumber);
 
    return 0;
}