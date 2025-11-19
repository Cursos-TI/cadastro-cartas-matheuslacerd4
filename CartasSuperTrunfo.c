
#include <stdio.h>

int main() {
    // Carta 1
    char estado1[3], codigoDaCarta1[4], nomeDaCidade1[50];
    int  pontosTuristicos1;
    unsigned long int populacao1;
    float area1, PIB1, densidadePopulacional1, PIBperCapita1, superPoder1;

    // Carta 2
    char estado2[3], codigoDaCarta2[4], nomeDaCidade2[50];
    int  pontosTuristicos2;
    unsigned long int populacao2;
    float area2, PIB2, densidadePopulacional2, PIBperCapita2, superPoder2;



    // ---------- CARTA 1 ----------
    printf("Digite o estado da Carta 1: ");
    scanf("%2s", estado1);

    printf("Digite o código da carta 1: ");
    scanf("%3s", codigoDaCarta1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %49[^\n]", nomeDaCidade1);

    printf("Digite a população: ");
    scanf("%f", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = (populacao1 / area1);
    PIBperCapita1 = (PIB1 / populacao1);
    superPoder1 = (populacao1 + area1 + PIB1 + pontosTuristicos1 + PIBperCapita1 + (1.0 / densidadePopulacional1));

    // ---------- CARTA 2 ----------
    printf("\nDigite o estado da Carta 2: ");
    scanf("%2s", estado2);

    printf("Digite o código da carta 2: ");
    scanf("%3s", codigoDaCarta2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %49[^\n]", nomeDaCidade2);

    printf("Digite a população: ");
    scanf("%f", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (populacao2 / area2);
    PIBperCapita2 = (PIB2 / populacao2);
    superPoder2 = (populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBperCapita2 + (1.0 / densidadePopulacional2));


    // ---------- EXIBIÇÃO ----------
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f bilhões de reais\n", PIBperCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f bilhões de reais\n", PIBperCapita2);


    // Comparação dos atributos das cartas
    printf("\nComparação dos Atributos das Cartas:\n");
    printf("populaÇão: %s\n", (populacao1 > populacao2) ? "Carta 1 é maior" : (populacao1 < populacao2) ? "Carta 2 é maior" : "Empate");
    printf("área: %s\n", (area1 > area2) ? "Carta 1 é maior" : (area1 < area2) ? "Carta 2 é maior" : "Empate");
    printf("PIB: %s\n", (PIB1 > PIB2) ? "Carta 1 é maior" : (PIB1 < PIB2) ? "Carta 2 é maior" : "Empate");
    printf("número de pontos turísticos: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1 é maior" : (pontosTuristicos1 < pontosTuristicos2) ? "Carta 2 é maior" : "Empate");
    printf("densidade populacional: %s\n", (densidadePopulacional1 > densidadePopulacional2) ? "Carta 1 é maior" : (densidadePopulacional1 < densidadePopulacional2) ? "Carta 2 é maior" : "Emp ate");
    printf("PIB per capita: %s\n", (PIBperCapita1 > PIBperCapita2) ? "Carta 1 é maior" : (PIBperCapita1 < PIBperCapita2) ? "Carta 2 é maior" : "Empate");
    printf("super poder: %s\n", (superPoder1 > superPoder2) ? "Carta 1 é maior" : (superPoder1 < superPoder2) ? "Carta 2 é maior" : "Empate");



    return 0;
}
