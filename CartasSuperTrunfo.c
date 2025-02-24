#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado[10];
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao, pontosTuristicos;
    float area, pib;
    
    printf("Insira os dados da Carta 1:\n");
    printf("Insira o Estado (A-H):");
    scanf("%s", &estado);
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta (ex: A01):");
    scanf("%s", &codigoCarta);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade);
    printf("Populacao: ");
    scanf("%d", &populacao);
    printf("Area (em km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("Estado: %s\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\n", estado, codigoCarta, nomeCidade, populacao);
   
    /*printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);*/


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
