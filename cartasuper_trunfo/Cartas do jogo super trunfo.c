#include <stdio.h>

int main() {  
    
    char estado1 = 'A';
    char codigoDaCarta1[5] = "A01"; 
    char cidade1[30] = "Belo Horizonte";
    unsigned int populacao1 = 2316000; 
    float area1 = 331.4;
    float PIB1 = 105829675053; 
    int numerosDePontosTuristicos1 = 35;
    float densidadePopulacional1 = (float) populacao1 / area1;
    float PIBPerCapita1 = (float) PIB1 / populacao1;

    char estado2 = 'B';
    char codigoDaCarta2[5] = "A01"; 
    char cidade2[30] = "Contagem";
    unsigned int populacao2 = 649975; 
    float area2 = 194.7;
    float PIB2 = 3647976496; 
    int numerosDePontosTuristicos2 = 25;
    float densidadePopulacional2 = (float) populacao2/ area2;
    float PIBPerCapita2 = (float) PIB2 / populacao2;

    printf("Dados da Primeira Carta\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoDaCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", numerosDePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f milhões de reais\n", PIBPerCapita1);
   
    int superpoder1 = populacao1 + (int)area1 + (int)PIB1 + numerosDePontosTuristicos1 + (int)densidadePopulacional1 + (int)PIBPerCapita1;
    
    printf("Super poder: %d\n", superpoder1);

    printf("Dados da Segunda Carta\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", numerosDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f milhões de reais\n", PIBPerCapita2);

    int superpoder2 = populacao2 + (int)area2 + (int)PIB2 + numerosDePontosTuristicos2 + (int)densidadePopulacional2 + (int)PIBPerCapita2;
    
    printf("Super poder: %d\n", superpoder2);

    printf("Comparação das Cartas\n");
    printf("População1 > Populção2? %lu\n", populacao1 > populacao2);
    printf("Area1 > Area2? %.0f\n", area1 > area2);
    printf("PIB1 > PIB2? %.0f\n", PIB1 > PIB2);
    printf("Pontos turisticos1 > Pontos turisticos2? %d\n", numerosDePontosTuristicos1 > numerosDePontosTuristicos2);
    printf("Densidade Populacional1 < Densidade Populacional2? %d\n", densidadePopulacional1 > densidadePopulacional2);
    printf("PIB per capita1 > PIB per capita2? %.0f\n", PIBPerCapita1 > PIBPerCapita2);
    printf("super poder1 > super poder2? %.0f\n", superpoder1 > superpoder2 );

    printf("Carta 1 venceu %lu\n",populacao1 > populacao2);
    printf("Carta 1 venceu %.0f\n",area1 > area2);
    printf("Carta 1 venceu %.0f\n", PIB1 >PIB2);
    printf("Carta 1 venceu %d\n", numerosDePontosTuristicos1 > numerosDePontosTuristicos2);
    printf("Carta 1 venceu %d\n", densidadePopulacional1 > densidadePopulacional2);
    printf("Carta 1 venceu %.0f\n", PIBPerCapita1 > PIBPerCapita2);
    printf("Carta 1 venceu %.0f\n", superpoder1 >superpoder2);

    
    return 0;
}