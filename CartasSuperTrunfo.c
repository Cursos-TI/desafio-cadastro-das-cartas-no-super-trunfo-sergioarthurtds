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

    int opcao1, opcao2; // atributos escolhidos
    int valido; // para validar a segunda escolha

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

    // Exibir Menu - Primeiro Atributo
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao1);

    // Exibir Menu - Segundo Atributo (dinâmico)
    do {
        printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
        if (opcao1 != 1) printf("1 - População\n");
        if (opcao1 != 2) printf("2 - Área\n");
        if (opcao1 != 3) printf("3 - PIB\n");
        if (opcao1 != 4) printf("4 - Número de pontos turísticos\n");
        if (opcao1 != 5) printf("5 - Densidade demográfica\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao2);

        // Verifica se o usuário escolheu o mesmo atributo
        valido = (opcao1 != opcao2) && (opcao2 >= 1 && opcao2 <= 5);
        if (!valido) {
            printf("Opção inválida! Escolha um atributo diferente do primeiro.\n");
        }
    } while (!valido);

    // Variáveis para armazenar os valores dos atributos escolhidos
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    // Função para pegar o valor de acordo com o atributo escolhido
    switch (opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pturisticos1; valor1_carta2 = pturisticos2; break;
        case 5: valor1_carta1 = densidadepop1; valor1_carta2 = densidadepop2; break;
        default: printf("Erro na escolha do primeiro atributo.\n"); return 1;
    }

    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pturisticos1; valor2_carta2 = pturisticos2; break;
        case 5: valor2_carta1 = densidadepop1; valor2_carta2 = densidadepop2; break;
        default: printf("Erro na escolha do segundo atributo.\n"); return 1;
    }

    // Impressão dos valores para o usuário
    printf("\nComparação entre %s e %s:\n", nome1, nome2);

    printf("Primeiro atributo: ");
    switch (opcao1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Número de pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", nome1, valor1_carta1, nome2, valor1_carta2);

    printf("Segundo atributo: ");
    switch (opcao2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Número de pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", nome1, valor2_carta1, nome2, valor2_carta2);

    // Comparação individual com regra de inversão para Densidade
    float resultado1 = (opcao1 == 5) ? (valor1_carta1 < valor1_carta2 ? 1 : (valor1_carta1 > valor1_carta2 ? -1 : 0))
                                     : (valor1_carta1 > valor1_carta2 ? 1 : (valor1_carta1 < valor1_carta2 ? -1 : 0));

    float resultado2 = (opcao2 == 5) ? (valor2_carta1 < valor2_carta2 ? 1 : (valor2_carta1 > valor2_carta2 ? -1 : 0))
                                     : (valor2_carta1 > valor2_carta2 ? 1 : (valor2_carta1 < valor2_carta2 ? -1 : 0));

    // Soma dos valores para determinar o vencedor final
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    // Resultado final usando operador ternário
    printf("\nResultado Final:\n");
    if (soma1 > soma2) {
        printf("%s venceu!\n", nome1);
    } else if (soma2 > soma1) {
        printf("%s venceu!\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
