#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {


  // Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Fortaleza";
    int populacao1 = 2428678;
    float area1 = 312.35;
    float pib1 = 73.4;
    int pontosTuristicos1 = 15;

    // Carta 2
    char estado2 = 'B';
    char codigo2[] = "B01";
    char cidade2[] = "Acre";
    int populacao2 = 906876;
    float area2 = 164123.04;
    float pib2 = 21.4;
    int pontosTuristicos2 = 8;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Super Poder
    superPoder1 = populacao1 + area1 + pib1 +
                  pontosTuristicos1 + pibPerCapita1 +
                  (1 / densidade1);

    superPoder2 = populacao2 + area2 + pib2 +
                  pontosTuristicos2 + pibPerCapita2 +
                  (1 / densidade2);

    // Exibição Carta 1
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição Carta 2
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n=== COMPARACAO DE CARTAS ===\n");

    printf("Populacao: %s venceu!\n",
           (populacao1 > populacao2) ? cidade1 : cidade2);

    printf("Area: %s venceu!\n",
           (area1 > area2) ? cidade1 : cidade2);

    printf("PIB: %s venceu!\n",
           (pib1 > pib2) ? cidade1 : cidade2);

    printf("Pontos Turisticos: %s venceu!\n",
           (pontosTuristicos1 > pontosTuristicos2) ? cidade1 : cidade2);

    // Menor densidade vence
    printf("Densidade Populacional: %s venceu!\n",
           (densidade1 < densidade2) ? cidade1 : cidade2);

    printf("PIB per Capita: %s venceu!\n",
           (pibPerCapita1 > pibPerCapita2) ? cidade1 : cidade2);

printf("Super Poder: %s venceu!\n",
(superPoder1 > superPoder2) ? cidade1 : cidade2);
  

return 0;
} 
