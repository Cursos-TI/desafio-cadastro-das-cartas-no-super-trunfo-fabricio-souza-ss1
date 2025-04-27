#include <stdio.h>

int main() {
    // Definindo as variáveis para Carta 1
    char codigo1[4];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Definindo as variáveis para Carta 2
    char codigo2[4];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o codigo da cidade (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = (float)((double)populacao1 / (double)area1);
    pibPerCapita1 = pib1 * 1000000 / (float)populacao1;

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o codigo da cidade (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (float)((double)populacao2 / (double)area2);
    pibPerCapita2 = pib2 * 1000000 / (float)populacao2;

    // Exibição dos dados
    printf("\nExibindo as Cartas Cadastradas:\n");

    printf("\n--- Dados da Cidade %s ---\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n--- Dados da Cidade %s ---\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    // Comparações
    int resultadoPopulacao = (populacao1 > populacao2);
    int resultadoArea = (area1 > area2);
    int resultadoPib = (pib1 > pib2);
    int resultadoPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2);
    int resultadoDensidade = (densidadePopulacional1 < densidadePopulacional2);
    int resultadoPibPerCapita = (pibPerCapita1 > pibPerCapita2);

    printf("\nResultado das Comparacoes:\n");
    printf("Populacao: %d\n", resultadoPopulacao);
    printf("Area: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPib);
    printf("Pontos Turisticos: %d\n", resultadoPontosTuristicos);
    printf("Densidade Populacional (MENOR vence): %d\n", resultadoDensidade);
    printf("PIB per Capita: %d\n", resultadoPibPerCapita);

    // Cálculo do Super Poder
    float inversoDensidade1 = 1.0f / densidadePopulacional1;
    float inversoDensidade2 = 1.0f / densidadePopulacional2;

    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + inversoDensidade1;
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

    printf("\nSuper Poder Carta 1: %.2f\n", superPoder1);
    printf("Super Poder Carta 2: %.2f\n", superPoder2);

    int vencedorSuperPoder = (superPoder1 > superPoder2);
    printf("\nResultado do Super Poder: %d\n", vencedorSuperPoder);

    return 0;
}
