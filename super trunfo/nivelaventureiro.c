#include <stdio.h>

 int main(){
    printf("desafio super trunfo - paises \n");
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float PIB1, PIB2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    printf("bem vindo ao desafio de cartas super trunfo - paises, antes de comecar voce precisa cadastrar suas cartas, vamos la?");

    //dados da primerira carta printf("\n-----carta1-----\n\n");

    printf("represente o nome do estado1 com uma letra de A ate H: \n");
    scanf("%s", estado1);

    printf("digite o codigo da carta 1 (ex A01): \n");
    scanf("%s", codigo1);

    printf("digite o nome da cidade 1: \n");
    scanf("%s", nomecidade1);

    printf("digite o numero da populacao 1: \n");
    scanf("%d", &populacao1);

    printf("digite o numero de pontos turisticos da cidade 1: \n");
    scanf("%d", &pontosturisticos1);

    printf("digite a area da cidade 1 (em km): \n");
    scanf("%f", &area1);

    printf("digite o PIB da cidade 1: \n");
    scanf("%f", &PIB1);

    // Calculando densidade e PIB per capita da primeira carta.

    densidade1 = populacao1 / area1;
    pibpercapita1 = PIB1 / populacao1;

    printf("densidade populacional: %.2f hab/km² \n", densidade1);
    printf("pib per capita: %.2f reais\n", pibpercapita1);

    // dados da segunda carta printf("\n-----carta2-----\n\n");

    printf("represente o nome do estado2 com uma letra de A ate H: \n");
    scanf("%s", estado2);

    printf("digite o codigo da carta 2 (ex A01): \n");
    scanf("%s", codigo2);

    printf("digite o nome da cidade 2: \n");
    scanf("%s", nomecidade2);

    printf("digite o numero da populacao 2: \n");
    scanf("%d", &populacao2);

    printf("digite o numero de pontos turisticos da cidade 2: \n");
    scanf("%d", &pontosturisticos2);

    printf("digite a area da cidade 2 (em km): \n");
    scanf("%f", &area2);

    printf("digite o PIB da cidade 2: \n");
    scanf("%f", &PIB2);

    // Calculando densidade e PIB per capita da segunda carta.

    densidade2 = populacao2 / area2;
    pibpercapita2 = PIB2 / populacao2;

    printf("densidade populacional: %.2f hab/km² \n", densidade2);
    printf("pib per capita: %.2f reais\n", pibpercapita2);

    // Dados do super Poder

    superpoder1 = populacao1 + area1 + pontosturisticos1 + PIB1 + (PIB1 / populacao1) + (populacao1 / area1) + (1/ densidade1);
    superpoder2 = populacao2 + area2 + pontosturisticos2 + PIB2 + (PIB2 / populacao2) + (populacao2 / area2) + (1/ densidade2);

    printf("exibindo os valores das cartas------ \n\n");
    printf("carta1: \n");
    printf("estado: %s \n", estado1);
    printf("codigo: %s \n", codigo1);
    printf("nome da cidade: %s \n", nomecidade1);
    printf("população: %d \n", populacao1);
    printf("Area: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("numero de pontos turisticos: %d \n", pontosturisticos1);
    printf("densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per capita: %.2f reais \n", pibpercapita1);

    printf("carta2: \n");
    printf("estado: %s \n", estado2);
    printf("codigo: %s \n", codigo2);
    printf("nome da cidade: %s \n", nomecidade2);
    printf("população: %d \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("numero de pontos turisticos: %d \n", pontosturisticos2);
    printf("densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per capita: %.2f reais \n", pibpercapita2);
    printf("resultado: %.2f", superpoder1);

    // comparação das cartas

    printf("veremos a comparacao das cartas, resultado 1 para carta 1 e 0 para carta 2 \n\n");

    printf("populacao: carta %d vence\n", populacao1 > populacao2);
    printf("area: carta %d vence \n", area1 > area2);
    printf("PIB: carta %d vence \n", PIB1 > PIB2);
    printf("pontos turisticos: carta %d vence \n", pontosturisticos1 > pontosturisticos2);
    printf("densidade populacional: carta %d vence \n", (populacao1 / area1) > (populacao2 > area2));
    printf("PIB per capita: carta %d vence \n\n",(PIB1 / populacao1) > (PIB2 / populacao2));
    printf("resultado: %2f", superpoder2);


    return 0;

 }