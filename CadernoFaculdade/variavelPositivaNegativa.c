#include <std.io.h>

int main(){

    int a = 10;

    if(!(a > 0)){ //(!(a>0)) é o mesmo que (a <= 0)
        printf("A variavel a é zero ou negativa\n");
    } else {
        printf("A variavel a é positiva\n");
    }
        


    return 0;
}