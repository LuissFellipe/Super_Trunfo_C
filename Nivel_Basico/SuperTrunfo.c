#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    // Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados
    printf("\n      DADOS DAS CARTAS\n");
    printf("===========================\n");

    printf("Carta 1:\n");
    printf("Estado: %c - Código: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d | Área: %.2f km²\n", populacao1, area1);
    printf("PIB: %.2f bilhões | Pontos Turísticos: %d\n", pib1, pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c - Código: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d | Área: %.2f km²\n", populacao2, area2);
    printf("PIB: %.2f bilhões | Pontos Turísticos: %d\n", pib2, pontosTuristicos2);

    return 0;
}