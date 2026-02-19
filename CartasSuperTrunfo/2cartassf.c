/*************************************
 *********   SUPER TRUNFO  ***********
 *************************************/

/* 
 Nome: Super Trunfo
 Linguagem de Programação: C
 Objetivo: Exercício
 Autor: Fábio O. Nunes
 */

#include <stdio.h>

int main(){

    //Variáveis da Carta 1
    char estado1[50], codigo1[4], cidade1[50]; //Para código = a letra inicial do estado seguida de um número de 01 a 04, ex: "A01"
    int populacao1, turisticos1;
    float area1, pib1; //Área em Km² e PIB em BILHÕES de reais brasileiros aproximados (R$);

    //Variáveis da Carta 2
    char estado2[50], codigo2[4], cidade2[50];
    int populacao2, turisticos2;
    float area2, pib2;
    
    //Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Pontos Turísticos: ");
    scanf("%d", &turisticos1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);
    printf("\n");

    printf("Carta 1 cadastrada com sucesso!\n");
    printf("\n");
    printf("-------------------------------------------\n\n");
    printf("--- Dados da Carta 1 ---\n"); // Área para exibição dos dados da cidade
    printf(" Estado: %s\n Código: %s\n Cidade: %s\n População: %d habitantes\n Pontos Turísticos: %d\n Área: %.2f Km²\n PIB: %.2f bilhões de reais\n\n", estado1, codigo1, cidade1, populacao1, turisticos1, area1, pib1);
    printf("-------------------------------------------\n\n");
        

    //Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Pontos Turísticos: ");
    scanf("%d", &turisticos2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);
    printf("\n");

    printf("Carta 2 cadastrada com sucesso!\n");
    printf("\n");
    printf("-------------------------------------------\n\n");
    printf("--- Dados da Carta 2 ---\n"); // Área para exibição dos dados da cidade
    printf("Estado: %s\n Código: %s\n Cidade: %s\n População: %d habitantes\n Pontos Turísticos: %d\n Área: %.2f Km²\n PIB: %.2f bilhões de reais\n\n", estado2, codigo2, cidade2, populacao2, turisticos2, area2, pib2);
    printf("-------------------------------------------\n\n");
   
    return 0;

}