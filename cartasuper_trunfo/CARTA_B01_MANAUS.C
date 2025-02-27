#include <stdio.h>

int main(){
 
    char estado = 'B';
    char codigo[5] = "B01"; 
    char cidade[30] = "Manaus";
    int populacao = 2064;
    float km = 114.01;
    float PIB =   1032.81 ; 
    int quantidade_de_pontos_turisticos = 9;

    printf("CARTA 02\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area: %f Km²\n", km);
    printf("PIB: %f bilhões\n", PIB);
    printf("Quantidade de pontos turisticos: %d\n", quantidade_de_pontos_turisticos);
  

}