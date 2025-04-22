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

    // Dados da Carta 2
    char estado2;
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    int pturisticos2;
    float area2;
    float pib2;

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

    // Exibição dos dados
    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d Habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pturisticos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d Habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturisticos2);

    return 0;
}