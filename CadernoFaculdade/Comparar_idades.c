#include <stdio.h>

int main() {

    int idade1, idade2;

    printf("Digite a primeira idade: \n");
    scanf("%d", &idade1);

    printf("Digite a segunda idade: \n");
    scanf("%d", &idade2);

    if (idade1 > idade2){
        printf("A Primeira idade é maior");
    }
        else if (idade1==idade2){
            printf("As idades são iguais");
            
        }
            else {
                printf("A Segunda idade é maior");
            }


    return 0;
}