#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    //Carta 1
    char estado[20]= "São Paulo"; //nome do estado
    char codigo[20]= "A01"; //codigo da carta
    int populacao = 12325000; //população do estado
    float area =  1521.11; //area total
    float pib = 699.28; //pib do estado
    int Pt = 50; //pontos turisticos


    //carta 2
    char estado1[20]= "Rio de Janeiro"; //nome do estado
    char codigo1[20]= "B02"; //codigo da carta
    int populacao1 = 6748000; //população do estado
    float area1= 1200.25; //area total
    float pib1= 300.50; //pib do estado
    int Pt1= 30; //pontos turisticos

  // Área para entrada de dados
    
  //Carta 1
    printf("Estado: %s\n", estado); //imprimindo o estado da primeira carta
    printf("Codigo: %s\n", codigo); //imprimindo o codigo da primeira carta
    printf("População: %d\n", populacao); //imprimindo a população da primeira carta
    printf("Area: %.2f\n", area); //imprimindo a area da primeira carta
    printf("Pib: %.2f\n", pib); //imprimindo o PIB da primeira carta
    printf("Pontos turisticos: %d\n\n", Pt); //imprimindo os pontos turisticos da primeira carta

    //carta 2
    printf("Estado: %s\n", estado1); //imprimindo o estado da segunda carta
    printf("Codigo: %s\n", codigo1); //imprimindo o codigo da segunda carta
    printf("População: %d\n", populacao1); //imprimindo a população da segunda carta
    printf("Area: %.2f\n", area1); //imprimindo a area da segunda carta
    printf("Pib: %.2f\n", pib1); //imprimindo o PIB da segunda carta
    printf("Pontos turisticos: %d\n", Pt1); //imprimindo os pontos turisticos da primeira carta


  // Área para exibição dos dados da cidade

return 0;
} 
