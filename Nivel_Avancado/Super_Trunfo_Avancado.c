#include <stdio.h>
#include <string.h>

int main() {
    // --- DADOS FICTÍCIOS DAS CARTAS (Requisito: Automatização) ---
    char nome1[] = "Sao Paulo", nome2[] = "Cairo";
    unsigned long int pop1 = 12330000, pop2 = 9540000;
    float area1 = 1521.11, area2 = 3085.00;
    float pib1 = 715.2, pib2 = 125.4;
    int pontos1 = 50, pontos2 = 35;
    float den1 = (float)pop1 / area1, den2 = (float)pop2 / area2;

    int escolha1, escolha2;
    float v1_c1, v1_c2, v2_c1, v2_c2;
    char nomeAt1[30], nomeAt2[30];

    // --- MENU 1 ---
    printf("--- ESCOLHA O ATRIBUTO 1 ---\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Densidade\n5. Pontos Turisticos\nOpcao: ");
    scanf("%d", &escolha1);

    // --- MENU 2 (DINÂMICO: Oculta a primeira escolha) ---
    printf("\n--- ESCOLHA O ATRIBUTO 2 ---\n");
    for (int i = 1; i <= 5; i++) {
        if (i == escolha1) continue; // Pula o atributo já escolhido
        switch (i) {
            case 1: printf("1. Populacao\n"); break;
            case 2: printf("2. Area\n"); break;
            case 3: printf("3. PIB\n"); break;
            case 4: printf("4. Densidade\n"); break;
            case 5: printf("5. Pontos Turisticos\n"); break;
        }
    }
    printf("Opcao: ");
    scanf("%d", &escolha2);

    // --- ATRIBUIÇÃO DE VALORES (Atributo 1) ---
    switch (escolha1) {
        case 1: v1_c1 = (float)pop1; v1_c2 = (float)pop2; strcpy(nomeAt1, "Populacao"); break;
        case 2: v1_c1 = area1; v1_c2 = area2; strcpy(nomeAt1, "Area"); break;
        case 3: v1_c1 = pib1; v1_c2 = pib2; strcpy(nomeAt1, "PIB"); break;
        case 4: v1_c1 = den1; v1_c2 = den2; strcpy(nomeAt1, "Densidade"); break;
        case 5: v1_c1 = (float)pontos1; v1_c2 = (float)pontos2; strcpy(nomeAt1, "Pontos Turisticos"); break;
        default: break;
    }

    // --- ATRIBUIÇÃO DE VALORES (Atributo 2) ---
    switch (escolha2) {
        case 1: v2_c1 = (float)pop1; v2_c2 = (float)pop2; strcpy(nomeAt2, "Populacao"); break;
        case 2: v2_c1 = area1; v2_c2 = area2; strcpy(nomeAt2, "Area"); break;
        case 3: v2_c1 = pib1; v2_c2 = pib2; strcpy(nomeAt2, "PIB"); break;
        case 4: v2_c1 = den1; v2_c2 = den2; strcpy(nomeAt2, "Densidade"); break;
        case 5: v2_c1 = (float)pontos1; v2_c2 = (float)pontos2; strcpy(nomeAt2, "Pontos Turisticos"); break;
        default: break;
    }

    // --- CÁLCULO DA SOMA COM REGRA DA DENSIDADE (Requisito Avançado) ---
    // Na Densidade (opção 4), o menor valor vence. Usamos o inverso (1/valor) na soma.
    float soma1 = (escolha1 == 4 ? (1.0f / v1_c1) : v1_c1) + (escolha2 == 4 ? (1.0f / v2_c1) : v2_c1);
    float soma2 = (escolha1 == 4 ? (1.0f / v1_c2) : v1_c2) + (escolha2 == 4 ? (1.0f / v2_c2) : v2_c2);

    // --- EXIBIÇÃO E RESULTADO ---
    printf("\n--- RESULTADO DA COMPARACAO ---\n");
    printf("%s: %s (%.2f) + %s (%.2f) | Soma Ponderada: %.2f\n", nome1, nomeAt1, v1_c1, nomeAt2, v2_c1, soma1);
    printf("%s: %s (%.2f) + %s (%.2f) | Soma Ponderada: %.2f\n", nome2, nomeAt1, v1_c2, nomeAt2, v2_c2, soma2);

    if (soma1 > soma2) printf("\nVENCEDOR: %s!\n", nome1);
    else if (soma2 > soma1) printf("\VENCEDOR: %s!\n", nome2);
    else printf("\nEmpate!\n");

    return 0;
}