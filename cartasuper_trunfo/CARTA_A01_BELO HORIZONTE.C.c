#include <stdio.h>

int main (){

    char estado = 'A';
    char codigo[5] = "A01"; 
    char cidade[30] = "Belo Horizonte";
    int populacao = 2316;
    float km = 331.4;
    float PIB = 105.82; 
    int quantidade_de_pontos_turisticos = 15;

    printf("CARTA 01\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area: %f km² \n", km);
    printf("PIB: %f bilhões \n", PIB);
    printf("Quantidade de pontos turisticos: %d\n", quantidade_de_pontos_turisticos);


}