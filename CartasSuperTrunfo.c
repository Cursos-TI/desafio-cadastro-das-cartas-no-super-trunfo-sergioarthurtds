#include <stdio.h>

int main()
{
    // Carta 1
    char estado1, codigo1[20], cidade1[50];
    unsigned long int populacao1;
    int pturisticos1;
    float area1, pib1;
    float densidadepop1, pibpercapta1, superpoder1;

    // Carta 2
    char estado2, codigo2[20], cidade2[50];
    unsigned long int populacao2;
    int pturisticos2;
    float area2, pib2;
    float densidadepop2, pibpercapta2, superpoder2;

    // Entrada de dados - Carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pturisticos1);

    // Entrada de dados - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pturisticos2);

    // Cálculos carta 1
    densidadepop1 = populacao1 / area1;
    pibpercapta1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = populacao1 + area1 + (pib1 * 1000000000) + pturisticos1 + pibpercapta1 + (1 / densidadepop1);

    // Cálculos carta 2
    densidadepop2 = populacao2 / area2;
    pibpercapta2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = populacao2 + area2 + (pib2 * 1000000000) + pturisticos2 + pibpercapta2 + (1 / densidadepop2);

    // Resultados da comparação
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pturisticos1 > pturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepop1 < densidadepop2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapta1 > pibpercapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
