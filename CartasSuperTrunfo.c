#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// INICIANDO AS VARIAVEIS E INFORMANDO QUAL O TIPO DE DADOS
int main() {
    char estado[10];
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao, pontosTuristicos;
    float area, pib, densidade, pibpercapta;

    char estado2[10];
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibpercapta2;
    
//UTILIZANDO O COMANDO PRINTF PARA SOLICITAR A INSERÇÃO DOS DADOS QUE SERÃO
//GUARDADOS NAS VARIAVEIS CRIADAS PARA A CARTA 1. O COMANDO SCANF É PARA ARMAZENAR
//OS DADOS INSERIDOS PELO USUÁRIO.
    printf("Insira os dados da Carta 1:\n");
    printf("Insira o Estado (A-H): ");
    scanf("%s", &estado);
    printf("Codigo da Carta (ex: A01): ");
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
    

//UTILIZANDO O COMANDO PRINTF PARA SOLICITAR A INSERÇÃO DOS DADOS QUE SERÃO
//GUARDADOS NAS VARIAVEIS CRIADAS PARA A CARTA 2. O COMANDO SCANF É PARA ARMAZENAR
//OS DADOS INSERIDOS PELO USUÁRIO.
    printf("Insira os dados da Carta 2:\n");
    printf("Insira o Estado (A-H): ");
    scanf("%s", &estado2);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &codigoCarta2);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //APÓS O USUÁRIO ATRIBUIR VALORES AS VARIÁVEIS, ESSES VALORES
    //ESTÃO SENDO UTILIZADOS PARA REALIZAR O CALCULO DE DENSIDADE POPULACIONAL
    // E DE PIB PER CAPTA.
    densidade = populacao / area;
    densidade2 = populacao2 / area2;
    pibpercapta = pib / populacao;
    pibpercapta2 = pib2 / populacao2;

//UTILIZANDO O COMANDO PRINTF PARA APRESENTAR OS DADOS DA CARTA 1, INSERIDOS PELO USUÁRIO
//NESSA PARTE ESTOU COLOCANDO O TEXTO DE APRESENTAÇÃO SEGUIDOS DOS VALORES ARMAZENADOS
//NAS VARIAVEIS QUE SAO INDICADAS NO CÓDIGO.
    printf("Informações da Carta 01:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta 01: %s\n",codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Area (em km²): %.2f\n",area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos);
//UTILIZANDO O COMANDO PRINTF PARA MOSTRAR OS VALORES OBTIDOS APÓS OS
//CALCULOS DAS NOVAS VARIÁVEIS DE DENSIDADE DE PIB PER CAPTA.
    printf("Densidade Populacional (hab/km²): %.2f\n", densidade);
    printf("PIB per Capta (R$): %.2f\n", pibpercapta);


    
//APRESENTAÇÃO DAS INFORMAÇÕES DA CARTA 2
    printf("Informações da Carta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta 01: %s\n",codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Area (em km²): %.2f\n",area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos2);
//UTILIZANDO O COMANDO PRINTF PARA MOSTRAR OS VALORES OBTIDOS APÓS OS
//CALCULOS DAS NOVAS VARIÁVEIS DE DENSIDADE DE PIB PER CAPTA.
    printf("Densidade Populacional (hab/km²): %.2f\n", densidade2);
    printf("PIB per Capta (R$): %.2f\n", pibpercapta2);




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
