#include <stdio.h>

int main() {
 
    char pais1[30], pais2[30];
    char cidade1[30], cidade2[30];
    char estado1[30], estado2[30]; 
    int populacao1, populacao2;
    int pturistico1, pturistico2;
    float area1, area2;
    float pib1, pib2;

    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", pais1);
    printf("Nome do estado: ");
    scanf(" %[^\n]", estado1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área km²: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pturistico1);

    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", pais2);
    printf("Nome do estado: ");
    scanf(" %[^\n]", estado2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área km²: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pturistico2);


    float dpop1 = populacao1 / area1;
    float dpop2 = populacao2 / area2;
    float pibpc1 = pib1 / populacao1;
    float pibpc2 = pib2 / populacao2;

    int opcao1, opcao2;

    printf("\n=== ESCOLHA DE ATRIBUTOS ===\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n6. PIB per Capita\n");
    
    printf("Escolha o primeiro atributo (1 a 6): ");
    scanf("%d", &opcao1);

    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nOs atributos devem ser diferentes.\n");
        return 1;
    }

    float valor1_c1 = 0, valor2_c1 = 0;
    float valor1_c2 = 0, valor2_c2 = 0;
    int invertido1 = 0, invertido2 = 0;

    switch(opcao1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pturistico1; valor1_c2 = pturistico2; break;
        case 5: valor1_c1 = dpop1; valor1_c2 = dpop2; invertido1 = 1; break;
        case 6: valor1_c1 = pibpc1; valor1_c2 = pibpc2; break;
        default: printf("Atributo inválido.\n"); return 1;
    }

    switch(opcao2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pturistico1; valor2_c2 = pturistico2; break;
        case 5: valor2_c1 = dpop1; valor2_c2 = dpop2; invertido2 = 1; break;
        case 6: valor2_c1 = pibpc1; valor2_c2 = pibpc2; break;
        default: printf("Atributo inválido.\n"); return 1;
    }

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    printf("Carta 1: %s - %s - %s\n", pais1, estado1, cidade1);
    printf("Carta 2: %s - %s - %s\n\n", pais2, estado2, cidade2);

    printf("Atributo 1: ");
    if (invertido1)
        printf("Densidade Demográfica\n");
    else {
        switch(opcao1) {
            case 1: printf("População\n"); break;
            case 2: printf("Área\n"); break;
            case 3: printf("PIB\n"); break;
            case 4: printf("Pontos Turísticos\n"); break;
            case 6: printf("PIB per Capita\n"); break;
        }
    }
    printf("Carta 1: %.2f\n", valor1_c1);
    printf("Carta 2: %.2f\n", valor1_c2);

    if ((valor1_c1 > valor1_c2 && !invertido1) || (valor1_c1 < valor1_c2 && invertido1))
        printf("-> Carta 1 venceu no atributo 1\n");
    else if ((valor1_c2 > valor1_c1 && !invertido1) || (valor1_c2 < valor1_c1 && invertido1))
        printf("-> Carta 2 venceu no atributo 1\n");
    else
        printf("-> Empate no atributo 1\n");

    printf("\nAtributo 2: ");
    if (invertido2)
        printf("Densidade Demográfica\n");
    else {
        switch(opcao2) {
            case 1: printf("População\n"); break;
            case 2: printf("Área\n"); break;
            case 3: printf("PIB\n"); break;
            case 4: printf("Pontos Turísticos\n"); break;
            case 6: printf("PIB per Capita\n"); break;
        }
    }
    printf("Carta 1: %.2f\n", valor2_c1);
    printf("Carta 2: %.2f\n", valor2_c2);

    if ((valor2_c1 > valor2_c2 && !invertido2) || (valor2_c1 < valor2_c2 && invertido2))
        printf("-> Carta 1 venceu no atributo 2\n");
    else if ((valor2_c2 > valor2_c1 && !invertido2) || (valor2_c2 < valor2_c1 && invertido2))
        printf("-> Carta 2 venceu no atributo 2\n");
    else
        printf("-> Empate no atributo 2\n");

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos dois atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    if (soma1 > soma2)
        printf("Resultado Final: Carta 1 venceu!\n");
    else if (soma2 > soma1)
        printf("Resultado Final: Carta 2 venceu!\n");
    else
        printf("Resultado Final: Empate!\n");

    return 0;
}
