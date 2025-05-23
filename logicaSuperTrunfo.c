#include <stdio.h>

int main() {

    char cidade1[50];
    char cidade2[50];
    char estado1[50];
    char estado2[50];
    char codigo1[50];
    char codigo2[50];
    int populacao1;
    int populacao2;
    int pturistico1;
    int pturistico2;
    float area1;
    float area2;
    float pib1; 
    float pib2;

    printf("Digite o nome do primeiro Estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: A01, A03): \n");
    scanf("%s", codigo1);

    printf("Digite o nome de uma Cidade, do primeiro Estado: \n");
    scanf("%s", cidade1);

    printf("Digite a população da primeira Cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da primeira Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos a primeira cidade tem: \n");
    scanf("%d", &pturistico1);


    printf("Digite o nome da segunda Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: A01, A03): \n");
    scanf("%s", codigo2);

    printf("Digite o nome de uma Cidade, do segunda Estado: \n");
    scanf("%s", cidade2);

    printf("Digite a população da segunda Cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da segunda Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos a segunda cidade tem: \n");
    scanf("%d", &pturistico2);

    //fiquei 20 minutos fazendo essa parte, esqueci que tinha que ficar na parte de baixo da captação dos dados...
    float dpopulacional1 = populacao1 / area1;
    float dpopulacional2 = populacao2 / area2;
    float pibpc1 = pib1 / populacao1;
    float pibpc2 = pib2 / populacao2;
    float superpoder1 = (float)populacao1 + area1 + pib1 + (float)pturistico1 + pibpc1 + (1.0f / dpopulacional1);
    float superpoder2 = (float)populacao2 + area2 + pib2 + (float)pturistico2 + pibpc2 + (1.0f / dpopulacional2);


    printf("Carta 1: \n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %.2fkm²\n PIB: R$%.2f\n Pontos Turísticos: %d\n Densisade Populacional: %.2fhab/km²\n Pib per Capita: %.2f reais\n Super Poder Carta 1: %.2f\n\n", 
    estado1, codigo1, cidade1, populacao1, area1, pib1, pturistico1, dpopulacional1, pibpc1, superpoder1);

    printf("Carta 2: \n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %.2fkm²\n PIB: R$%.2f\n Pontos Turísticos: %d\n Densisade Populacional: %.2fhab/km²\n Pib per Capita: %.2f reais\n Super Poder Carta 2: %.2f\n\n", 
    estado2, codigo2, cidade2, populacao2, area2, pib2, pturistico2, dpopulacional2, pibpc2, superpoder2);

    float populacaov = populacao1 >= populacao2;
    float areav = area1 >= area2;
    float pibv = pib1 >= pib2;
    float pturisticov = pturistico1 >= pturistico2;
    float dpopulacionalv = dpopulacional1 <= dpopulacional2;
    float pibpcv = pibpc1 >= pibpc2;
    
 printf("Resultados das Comparações:\n\n");

printf("Comparação: População\n");
printf("País 1: %s - População: %d\n", cidade1, populacao1);
printf("País 2: %s - População: %d\n", cidade2, populacao2);
if (populacao1 > populacao2) {
    printf("Carta 1 venceu!\n\n");
} else if (populacao2 > populacao1) {
    printf("Carta 2 venceu!\n\n");
} else {
    printf("Empate!\n\n");
}

printf("Comparação: Área\n");
printf("País 1: %s - Área: %.2f km²\n", cidade1, area1);
printf("País 2: %s - Área: %.2f km²\n", cidade2, area2);
if (area1 > area2) {
    printf("Carta 1 venceu!\n\n");
} else if (area2 > area1) {
    printf("Carta 2 venceu!\n\n");
} else {
    printf("Empate!\n\n");
}

printf("Comparação: PIB\n");
printf("País 1: %s - PIB: R$%.2f\n", cidade1, pib1);
printf("País 2: %s - PIB: R$%.2f\n", cidade2, pib2);
if (pib1 > pib2) {
    printf("Carta 1 venceu!\n\n");
} else if (pib2 > pib1) {
    printf("Carta 2 venceu!\n\n");
} else {
    printf("Empate!\n\n");
}

printf("Comparação: Pontos Turísticos\n");
printf("País 1: %s - Pontos: %d\n", cidade1, pturistico1);
printf("País 2: %s - Pontos: %d\n", cidade2, pturistico2);
if (pturistico1 > pturistico2) {
    printf("Carta 1 venceu!\n\n");
} else if (pturistico2 > pturistico1) {
    printf("Carta 2 venceu!\n\n");
} else {
    printf("Empate!\n\n");
}

printf("Comparação: Densidade Populacional (menor vence)\n");
printf("País 1: %s - Densidade: %.2f hab/km²\n", cidade1, dpopulacional1);
printf("País 2: %s - Densidade: %.2f hab/km²\n", cidade2, dpopulacional2);
if (dpopulacional1 < dpopulacional2) {
    printf("Carta 1 venceu!\n\n");
} else if (dpopulacional2 < dpopulacional1) {
    printf("Carta 2 venceu!\n\n");
} else {
    printf("Empate!\n\n");
}

printf("Comparação: PIB per Capita\n");
printf("País 1: %s - PIB per capita: R$%.2f\n", cidade1, pibpc1);
printf("País 2: %s - PIB per capita: R$%.2f\n", cidade2, pibpc2);
if (pibpc1 > pibpc2) {
    printf("Carta 1 venceu!\n\n");
} else if (pibpc2 > pibpc1) {
    printf("Carta 2 venceu!\n\n");
} else {
    printf("Empate!\n\n");
}

printf("Comparação: Super Poder\n");
printf("País 1: %s - Super Poder: %.2f\n", cidade1, superpoder1);
printf("País 2: %s - Super Poder: %.2f\n", cidade2, superpoder2);
if (superpoder1 > superpoder2) {
    printf("Carta 1 venceu!\n");
} else if (superpoder2 > superpoder1) {
    printf("Carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}

    return 0;
}
