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

    return 0;

 }