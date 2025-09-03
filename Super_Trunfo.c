#include <stdio.h>

int main() {
  // Declaração das variáveis para a primeira carta
    char estado1 = ;  
    char codigo1[] = ;
    char nomeCidade1[] = ;
    int populacao1 = ;
    float area1 =;
    float pib1 = ;  // Em bilhões de reais
    int pontosTuristicos1 = ;

    // Declaração das variáveis para a segunda carta
    char estado2 = ;  
    char codigo2[] = ;
    char nomeCidade2[] = ;
    int populacao2 = ;
    float area2 = ;
    float pib2 = ;  // Em bilhões de reais
    int pontosTuristicos2 = ;

    // Entrada de dados para a primeira carta
    printf("Insira os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", &nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    

    // Entrada de dados para a segunda carta
    printf("Insira os dados da Carta 2:");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", &nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d\n", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita para a primeira carta
    float densidadePopulacional1 = (area1 != 0) ? (populacao1 / area1) : 0;
    float pibPerCapita1 = (populacao1 != 0) ? ((pib1 * 1000) / populacao1) : 0;

    // Cálculo da Densidade Populacional e PIB per Capita para a segunda carta
    float densidadePopulacional2 = (area2 != 0) ? (populacao2 / area2) : 0;
    float pibPerCapita2 = (populacao2 != 0) ? ((pib2 * 1000) / populacao2) : 0;

    // Exibição dos dados da primeira carta
    printf("***Carta 1***:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
  
  }