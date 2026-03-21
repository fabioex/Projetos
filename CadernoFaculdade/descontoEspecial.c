#include <stdio.h>

int main() {

    int idade, renda, dependentes;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua renda: \n");
    scanf("%d", &renda);

    printf("Digite a quantidade de dependentes: \n");
    scanf("%d", &dependentes);

    if(idade <= 18 || idade>=60){
        
        if(renda < 2000){
            if (dependentes > 2){
                printf("Você tem direito ao desconto\n");
            }
        } else{
            printf("Você não direito devido à renda!\n");
        }
        
    } else {
        printf("Você não tem direito ao desconto devido à idade\n");
    }

    return 0;
}