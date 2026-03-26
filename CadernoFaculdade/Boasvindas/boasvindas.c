#include <stdio.h>

int main() {
    char nome[50]; // Cria um espaço para guardar até 50 letras

    printf("Digite o seu nome: ");
    scanf("%s", nome); // Lê o nome que você digitar

    printf("Olá, %s! Seja bem-vindo à programação!\n", nome);
}