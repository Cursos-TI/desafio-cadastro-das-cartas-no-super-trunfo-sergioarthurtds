#include <stdio.h>

int main() {
    // Dados da Carta 1
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pturisticos1;
    float densidadepop1;

    // Dados da Carta 2
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pturisticos2;
    float densidadepop2;

    int opcao; // variável para armazenar a opção escolhida no menu

    // Entrada de dados - Carta 1
    printf("Carta 1:\n");
    printf("Nome do país: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pturisticos1);

    // Entrada de dados - Carta 2
    printf("\nCarta 2:\n");
    printf("Nome do país: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pturisticos2);

    // Cálculo da Densidade Demográfica
    densidadepop1 = populacao1 / area1;
    densidadepop2 = populacao2 / area2;

    // Menu interativo
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s:\n", nome1, nome2);

    // Switch para escolher o atributo
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nome1, populacao1);
            printf("%s: %lu habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Número de pontos turísticos\n");
            printf("%s: %d pontos turísticos\n", nome1, pturisticos1);
            printf("%s: %d pontos turísticos\n", nome2, pturisticos2);

            if (pturisticos1 > pturisticos2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pturisticos2 > pturisticos1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nome1, densidadepop1);
            printf("%s: %.2f hab/km²\n", nome2, densidadepop2);

            // IMPORTANTE: para densidade demográfica, o MENOR vence
            if (densidadepop1 < densidadepop2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (densidadepop2 < densidadepop1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção de 1 a 5.\n");
            break;
    }

    return 0;
}
