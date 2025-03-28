#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    

    // Declarando as variáveis.

    char estado [1];
    char codigoDaCarta [50];
    char nomeDaCidade [50];
    int populacao, numeroDePontosTuristicos;
    float area, pib;


    // Dados da primeira cidade.

    printf ("Digite a letra do estado: \n");
    scanf ("%s", & estado);

    printf ("Digite o código da cidade: \n");
    scanf ("%s", & codigoDaCarta);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", & nomeDaCidade);

    printf ("Digite a população da cidade: \n");
    scanf ("%d", & populacao);

    printf ("Digite a área da cidade: \n");
    scanf ("%f", & area);

    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", & pib);

    printf ("Digite o número de pontos turísticos da cidade: \n");
    scanf ("%d", & numeroDePontosTuristicos);

    // Primeira carta

    printf ("Carta 1: \n");
    printf ("Estado: %s", estado);
    printf ("Código: %s%s \n", estado, codigoDaCarta);
    printf ("Nome da cidade: %s \n", nomeDaCidade);
    printf ("População: %d \n", populacao);
    printf ("Área: %f \n", area);
    printf ("PIB: %f \n", pib);
    printf ("Número de pontos turísticos: %d \n", numeroDePontosTuristicos);

};