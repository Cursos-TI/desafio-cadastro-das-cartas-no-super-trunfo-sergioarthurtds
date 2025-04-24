#include <stdio.h>

int main()
{
    // Dados da Carta 1
    char estado1;
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    int pturisticos1;
    float area1;
    float pib1;
    float densidadepop1; // Variavel para Densidade Populacional (população / área)
    float pibpercapta1;  // Variavel para PIB per Capta (pib / população)

    // Dados da Carta 2
    char estado2;
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    int pturisticos2;
    float area2;
    float pib2;
    float densidadepop2; // Variavel para Densidade Populacional (população / área)
    float pibpercapta2;  // Variavel para  PIB per Capta (pib / população)

    // Entrada de dados da primeira carta
    printf("Carta 1:\n");

    printf("Estado (sigla - 1 letra): ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pturisticos1);

    // Entrada de dados da segunda carta
    printf("\nCarta 2:\n");

    printf("Estado (sigla - 1 letra): ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pturisticos2);

    // Exibição dos dados Carta 1
    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pturisticos1);

    // Calcula a Densidade Populacional Carta 1
    densidadepop1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);

    // Calcula o PIB per Capta Carta 1
    pibpercapta1 = (pib1 * 1000000000) / populacao1;
    printf("PIB per Capta: %.2f reais\n", pibpercapta1);

    // Exibição dos dados Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturisticos2);

    // Calcula a Densidade Populacional Carta 2
    densidadepop2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);

    // Calcula o PIB per Capta Carta 1
    pibpercapta2 = (pib2 * 1000000000) / populacao2;
    printf("PIB per Capta: %.2f reais\n", pibpercapta2);

    return 0;
}