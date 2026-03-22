#include <stdio.h>
#include <windows.h> //biblioteca para usar a função Sleep() para possibilitar o usuário ler a mensagem antes de o programa ser encerrado na linha 234

/*Desafio Super Trunfo - Países
Tema 3 - Desenvolvendo a lógica do jogo
Objetivo: No nível Novato, você começará implementando a lógica básica de comparação entre cartas utilizando estruturas de decisão if e if-else.
Aluno: Fábio Oliveira Nunes Matrícula: 202601102478*/ 

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

    float superPoder1 = (float)populacao1 + turisticos1 + area1 + pib1 + ( 1.0 / densidade1) + pibpc1; //ao final do cálculo, convertido em float para atender o comando da tarefa;

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

    float superPoder2 = (float)populacao2 + turisticos2 + area2 + pib2 + ( 1.0 / densidade2) + pibpc2;

    printf("Carta 2 cadastrada com sucesso!\n");
    printf("\n");
    printf("-------------------------------------------\n\n");
    printf("--- Dados da Carta 2 ---\n"); // Área para exibição dos dados da cidade
    printf(" Estado: %s\n Código: %s\n Cidade: %s\n População: %lu habitantes\n Pontos Turísticos: %d\n Área: %.2f Km²\n PIB: %.1f bilhões de reais\n Densidade Populacional: %.0f habitantes por Km²\n PIB per capita: R$ %.2lf\n Super Poder: %.0f\n\n", estado2, codigo2, cidade2, populacao2, turisticos2, area2, pib2, densidade2, pibpc2, superPoder2);
    printf("-------------------------------------------\n\n");
   
    /**************************************
     *  comparação entre as cartas 1 e 2  *
     **************************************/

    /********************************************* 
    *Escolha do primeiro atributo para comparação:*
    **********************************************/
    int opcao;

    printf("--- Comparação entre as Cartas 1 (%s) e 2 (%s) ---\n\n", cidade1, cidade2);
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Pontos Turísticos\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Comparando o primeiro atributo: População\n");
            printf("Carta 1 - %s (%s): %.lu habitantes\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %.lu habitantes\n", cidade2, estado2, populacao2);
            if(populacao1>populacao2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao1 == populacao2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 2:
            printf("Comparando o primeiro atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade1, estado1, turisticos1);
            printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade2, estado2, turisticos2);
            if(turisticos1>turisticos2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (turisticos1 == turisticos2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 3:
            printf("Comparando o primeiro atributo: Área\n");
            printf("Carta 1 - %s (%s): %.2f Km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f Km²\n", cidade2, estado2, area2);
            if(area1>area2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (area1 == area2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 4:
            printf("Comparando o primeiro atributo: PIB\n");
            printf("Carta 1 - %s (%s): %.1f bilhões de reais\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.1f bilhões de reais\n", cidade2, estado2, pib2);
            if(pib1>pib2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib1 == pib2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 5:
            printf("Comparando o primeiro atributo: Densidade Populacional\n");
            printf("Carta 1 - %s (%s): %.0f habitantes por Km²\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.0f habitantes por Km²\n", cidade2, estado2, densidade2);
            if(densidade1<densidade2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade1 == densidade2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 6:
            printf("Comparando o primeiro atributo: PIB per Capita\n");
            printf("Carta 1 - %s (%s): %.1f reais por habitante\n", cidade1, estado1, pibpc1);
            printf("Carta 2 - %s (%s): %.1f reais por habitante\n", cidade2, estado2, pibpc2);
            if(pibpc1>pibpc2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (pibpc1 == pibpc2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 7:
            printf("Comparando o primeiro atributo: Super Poder\n");
            printf("Carta 1 - %s (%s): %.2f pontos de super poder\n", cidade1, estado1, superPoder1);
            printf("Carta 2 - %s (%s): %.2f pontos de super poder\n", cidade2, estado2, superPoder2);
            if(superPoder1>superPoder2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (superPoder1 == superPoder2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");

    }
    
    /********************************************* 
    *Escolha do segundo atributo para comparação:*
    **********************************************/

    int opcao2;

    printf("\n\n--- Comparação entre as Cartas 1 (%s) e 2 (%s) ---\n\n", cidade1, cidade2);
    printf("\nEscolha o segundo atributo para comparação:\n");
    printf("Não escolher o mesmo atributo!\n");
    
    // Menu que exclui automaticamente o primeiro atributo escolhido:

    if (opcao != 1){
        printf("1 - População\n");
    }
    if (opcao != 2){
        printf("2 - Pontos Turísticos\n");
    }
    if (opcao != 3){
        printf("3 - Área\n");
    }
    if (opcao != 4){
        printf("4 - PIB\n");
    }
    if (opcao != 5){
        printf("5 - Densidade Populacional\n");
    }
    if (opcao != 6){
        printf("6 - PIB per Capita\n");
    }
    if (opcao != 7){
        printf("7 - Super Poder\n");
    }

    scanf("%d", &opcao2);

    // Proibição de escolher o mesmo atributo para comparação:

    if (opcao2 == opcao){
        printf("Você já escolheu esse atributo para comparação! O programa será encerrado.\nAguarde...\nEncerrando programa...\n");
        Sleep(4000); // Pausa o programa por 4 segundos para permitir que o usuário leia a mensagem antes de o programa ser encerrado
        return 1; // Encerra o programa com código de erro
    }

    switch (opcao2){
        case 1:
            printf("Comparando o segundo atributo: População\n");
            printf("Carta 1 - %s (%s): %.lu habitantes\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %.lu habitantes\n", cidade2, estado2, populacao2);
            if(populacao1>populacao2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao1 == populacao2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 2:
            printf("Comparando o segundo atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade1, estado1, turisticos1);
            printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade2, estado2, turisticos2);
            if(turisticos1>turisticos2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (turisticos1 == turisticos2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 3:
            printf("Comparando o segundo atributo: Área\n");
            printf("Carta 1 - %s (%s): %.2f Km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f Km²\n", cidade2, estado2, area2);
            if(area1>area2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (area1 == area2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 4:
            printf("Comparando o segundo atributo: PIB\n");
            printf("Carta 1 - %s (%s): %.1f bilhões de reais\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.1f bilhões de reais\n", cidade2, estado2, pib2);
            if(pib1>pib2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib1 == pib2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 5:
            printf("Comparando o segundo atributo: Densidade Populacional\n");
            printf("Carta 1 - %s (%s): %.0f habitantes por Km²\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.0f habitantes por Km²\n", cidade2, estado2, densidade2);
            if(densidade1<densidade2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade1 == densidade2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 6:
            printf("Comparando o segundo atributo: PIB per Capita\n");
            printf("Carta 1 - %s (%s): %.1f reais por habitante\n", cidade1, estado1, pibpc1);
            printf("Carta 2 - %s (%s): %.1f reais por habitante\n", cidade2, estado2, pibpc2);
            if(pibpc1>pibpc2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (pibpc1 == pibpc2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        case 7:
            printf("Comparando o segundo atributo: Super Poder\n");
            printf("Carta 1 - %s (%s): %.2f pontos de super poder\n", cidade1, estado1, superPoder1);
            printf("Carta 2 - %s (%s): %.2f pontos de super poder\n", cidade2, estado2, superPoder2);
            if(superPoder1>superPoder2){
                printf("Carta 1 (%s) venceu!\n", cidade1);
            } else if (superPoder1 == superPoder2){
                printf("Empate!\n");
            } else{
                printf("Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");

    }

    /********************************************** 
    *       Comparação da soma dos atributos      *
    **********************************************/
    
    // isso já foi atendido com a variável "superPoder", que é a soma de todos os atributos, então basta comparar o super poder das cartas.
    
    printf("Fim do jogo! Obrigado por jogar o Desafio Super Trunfo!\n");    
    
    return 0;

}