#include <stdio.h>

int main()
{
    // Dados da Carta 1
    char estado1[3], codigo1[20], cidade1[50];
    unsigned long int populacao1;
    int pturisticos1;
    float area1, pib1;
    float densidadepop1, pibpercapta1;

    // Dados da Carta 2
    char estado2[3], codigo2[20], cidade2[50];
    unsigned long int populacao2;
    int pturisticos2;
    float area2, pib2;
    float densidadepop2, pibpercapta2;

    // Entrada de dados - Carta 1
    printf("Carta 1:\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pturisticos1);

    // Entrada de dados - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pturisticos2);

    // Cálculos
    densidadepop1 = populacao1 / area1;
    pibpercapta1 = (pib1 * 1000000000) / populacao1;
    densidadepop2 = populacao2 / area2;
    pibpercapta2 = (pib2 * 1000000000) / populacao2;

    // Comparação usando o atributo POPULAÇÃO
    printf("\nComparação de Cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
