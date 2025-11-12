#include <stdio.h>
#include <string.h>

int main() {
    char estado[3];
    char codigoDaCarta[4];
    char nomeDaCidade[50];
    int populacao, numerosDePontosTuristicos;
    float areaEmKm2, PIB;

    printf("Digite o estado: \n");
    scanf("%2s", estado);

    printf("Digite o código da carta: \n");
    scanf("%3s", codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", nomeDaCidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerosDePontosTuristicos);

    printf("Digite a área em km²: \n");
    scanf("%f", &areaEmKm2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigoDaCarta);
    printf("Nome da cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Número de pontos turísticos: %d\n", numerosDePontosTuristicos);
    printf("Área em km²: %.2f\n", areaEmKm2);
    printf("PIB: %.2f\n", PIB);

    return 0;
}
