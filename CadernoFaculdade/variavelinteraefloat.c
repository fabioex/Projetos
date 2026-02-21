#include <stdio.h>

int main() {

int a = 10;
float b = 3;
float quociente = (float) a / b; //'a' é explicitamente convertido para float (chamado de casting?")

printf("Quociente: %.2f\n", quociente);

return 0;

}