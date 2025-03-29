#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    

    // Declarando as variáveis.

    char estado1 [2], estado2 [2];
    char codigoDaCarta1 [50], codigoDaCarta2 [50];
    char nomeDaCidade1 [50], nomeDaCidade2 [50];
    int populacao1, populacao2;
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;
    float area1, area2;
    float pib1, pib2;


    // Dados da primeira carta.

    printf ("Digite a letra do estado da primeira carta: \n");
    scanf ("%s", & estado1);

    printf ("Digite o código da cidade da primeira carta: \n");
    scanf ("%s", & codigoDaCarta1);

    printf ("Digite o nome da cidade da primeira carta: \n");
    getchar();
    fgets(nomeDaCidade1, 50, stdin);

    printf ("Digite a população da cidade da primeira carta: \n");
    scanf ("%d", & populacao1);

    printf ("Digite a área da cidade da primeira carta: \n");
    scanf ("%f", & area1);

    printf ("Digite o PIB da cidade da primeira carta: \n");
    scanf ("%f", & pib1);

    printf ("Digite o número de pontos turísticos da cidade da primeira carta: \n");
    scanf ("%d", & numeroDePontosTuristicos1);

    // Dados da segunda carta.

    printf ("Digite a letra do estado da segunda carta: \n");
    scanf ("%s", & estado2);

    printf ("Digite o código da cidade da segunda carta: \n");
    scanf ("%s", & codigoDaCarta2);

    printf ("Digite o nome da cidade da segunda carta: \n");
    getchar();
    fgets(nomeDaCidade2, 50, stdin);

    printf ("Digite a população da cidade da segunda carta: \n");
    scanf ("%d", & populacao2);

    printf ("Digite a área da cidade da segunda carta: \n");
    scanf ("%f", & area2);

    printf ("Digite o PIB da cidade da segunda carta: \n");
    scanf ("%f", & pib2);

    printf ("Digite o número de pontos turísticos da cidade da segunda carta: \n");
    scanf ("%d", & numeroDePontosTuristicos2);

    // Primeira carta

    printf ("Carta 1: \n");
    printf ("Estado: %s\n", estado1);
    printf ("Código: %s%s \n", estado1, codigoDaCarta1);
    printf ("Nome da cidade: %s", nomeDaCidade1);
    printf ("População: %d \n", populacao1);
    printf ("Área: %f km² \n", area1);
    printf ("PIB: %f bilhões de reias \n", pib1);
    printf ("Número de pontos turísticos: %d \n", numeroDePontosTuristicos1);

    // Segunda carta

    printf ("Carta 2: \n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s%s \n", estado2, codigoDaCarta2);
    printf ("Nome da cidade: %s", nomeDaCidade2);
    printf ("População: %d \n", populacao2);
    printf ("Área: %f km² \n", area2);
    printf ("PIB: %f bilhões de reias \n", pib2);
    printf ("Número de pontos turísticos: %d \n", numeroDePontosTuristicos2);

    return 0;

};