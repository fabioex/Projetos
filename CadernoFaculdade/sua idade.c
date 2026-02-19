#include <stdio.h>
#include <string.h> // Necessária para tratar strings

int main() {
    int idade;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    while (getchar() != '\n'); // PASSO 1: Limpar o buffer do teclado

    printf("Digite seu nome completo: ");
        
    fgets(nome, 50, stdin); // PASSO 2: Usar fgets para ler o nome com espaços
     
    
    nome[strcspn(nome, "\n")] = 0; // PASSO 3: Remover o \n que o fgets adiciona no final

    printf("A sua idade é: %d\n", idade);
    printf("Nome digitado: %s\n", nome);

    return 0;
}