#include <stdio.h>

int main() {
    //Variáveis da Carta 1
    char estado1[50], codigo1[4], cidade1[50]; //Para código = a letra inicial do estado seguida de um número de 01 a 04, ex: "A01"
    int turisticos1;
    unsigned long int populacao1;
    float area1, pib1, densidade1;  //Área em Km², PIB em BILHÕES de reais brasileiros aproximados (R$), Densidade em habitantes/Km²
    double pibpc1; //pibpc = PIB per capita

    //Variáveis da Carta 2
    char estado2[50], codigo2[4], cidade2[50];
    int turisticos2;
    unsigned long int populacao2;
    float area2, pib2, densidade2;
    double pibpc2;

    //Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Pontos Turísticos: ");
    scanf("%d", &turisticos1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);
    printf("\n");

    densidade1 = populacao1 / area1; //resultado em habitantes/Km²
    pibpc1 = (pib1 * 1e9) / populacao1; // para "e" lido pelo compilador como: "vezes 10 elevado a"; Resultado em reais por habitantes;

    float superPoder1 = (float)(populacao1 + turisticos1 + area1 + pib1 + ( 1.0 / densidade1) + pibpc1); //ao final do cálculo, convertido em float para atender o comando da tarefa;

    printf("Carta 1 cadastrada com sucesso!\n");
    printf("\n");
    printf("-------------------------------------------\n\n");
    printf("--- Dados da Carta 1 ---\n"); // Área para exibição dos dados da cidade
    printf(" Estado: %s\n Código: %s\n Cidade: %s\n População: %lu habitantes\n Pontos Turísticos: %d\n Área: %.2f Km²\n PIB: %.1f bilhões de reais\n Densidade Populacional: %.0f habitantes por Km²\n PIB per capita: R$ %.2lf\n Super Poder: %.0f\n\n", estado1, codigo1, cidade1, populacao1, turisticos1, area1, pib1, densidade1, pibpc1, superPoder1);
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
    scanf("%lu", &populacao2);

    printf("Pontos Turísticos: ");
    scanf("%d", &turisticos2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);
    printf("\n");

    densidade2 = populacao2 / area2;
    pibpc2 = (pib2 * 1e9) / populacao2;

    float superPoder2 = (float)(populacao2 + turisticos2 + area2 + pib2 + ( 1.0 / densidade2) + pibpc2);

    printf("Carta 2 cadastrada com sucesso!\n");
    printf("\n");
    printf("-------------------------------------------\n\n");
    printf("--- Dados da Carta 2 ---\n"); // Área para exibição dos dados da cidade
    printf(" Estado: %s\n Código: %s\n Cidade: %s\n População: %lu habitantes\n Pontos Turísticos: %d\n Área: %.2f Km²\n PIB: %.1f bilhões de reais\n Densidade Populacional: %.0f habitantes por Km²\n PIB per capita: R$ %.2lf\n Super Poder: %.0f\n\n", estado2, codigo2, cidade2, populacao2, turisticos2, area2, pib2, densidade2, pibpc2, superPoder2);
    printf("-------------------------------------------\n\n");
   
    //comparação entre as cartas 1 e 2;
    printf("--- Comparação entre as Cartas ---\n");
    printf("Atenção!: Para todos os quesitos, 1 para verdadeiro -> Carta 1 vence; 0 para falso -> Carta 2 vence.\n");
    printf("Carta 1 tem População maior que a Carta 2? %d\n", populacao1 > populacao2);
    printf("Carta 1 tem Pontos Turísticos maior que a Carta 2? %d\n", turisticos1 > turisticos2);
    printf("Carta 1 tem Área maior que a Carta 2? %d\n", area1 > area2);
    printf("Carta 1 tem PIB maior que a Carta 2? %d\n", pib1 > pib2);
    printf("Carta 1 tem Densidade Populacional menor que a Carta 2? %d\n", densidade1 < densidade2);
    printf("Carta 1 tem PIB per capita maior que a Carta 2? %d\n", pibpc1 > pibpc2);
    printf("Carta 1 tem Super Poder maior que a Carta 2? %d\n\n", superPoder1 > superPoder2);
    printf("-------------------------------------------\n");

    
    return 0;

}