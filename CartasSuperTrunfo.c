#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


// INICIANDO AS VARIAVEIS E INFORMANDO QUAL O TIPO DE DADOS
int main() {
    char estado[10], estado2[10];
    char codigoCarta[4], codigoCarta2[4];
    char nomeCidade[50], nomeCidade2[50];
    unsigned long int populacao, populacao2;
    int pontosTuristicos, pontosTuristicos2;
    float area, pib, area2, pib2;
    float densidade, pibpercapta, densidade2, pibpercapta2;
    float superpoder, superpoder2;

//UTILIZANDO O COMANDO PRINTF PARA SOLICITAR A INSERÇÃO DOS DADOS QUE SERÃO
//GUARDADOS NAS VARIAVEIS CRIADAS PARA A CARTA 1. O COMANDO SCANF É PARA ARMAZENAR
//OS DADOS INSERIDOS PELO USUÁRIO.
    printf("====================***====================\n");
    printf("Insira os dados da Carta 1:\n");
    printf("Insira o Estado (A-H): ");
    scanf("%s", &estado);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &codigoCarta);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade);
    printf("Populacao: ");
    scanf("%ld", &populacao);
    printf("Area (em km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);
    
//UTILIZANDO O COMANDO PRINTF PARA SOLICITAR A INSERÇÃO DOS DADOS QUE SERÃO
//GUARDADOS NAS VARIAVEIS CRIADAS PARA A CARTA 2. O COMANDO SCANF É PARA ARMAZENAR
//OS DADOS INSERIDOS PELO USUÁRIO.
    printf("====================***====================\n");
    printf("Insira os dados da Carta 2:\n");
    printf("Insira o Estado (A-H): ");
    scanf("%s", &estado2);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &codigoCarta2);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade2);
    printf("Populacao: ");
    scanf("%ld", &populacao2);
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

    //CALCULO E ALTERAÇÃO NO TIPO DE DADOS PARA CHEGAR AO VALOR DO SUPER PODER
    superpoder = (float)(area + pib + populacao + pibpercapta + pontosTuristicos - densidade); // Calculo do superpoder da carta 1 
    superpoder2 = (float)(area2 + pib2 + populacao2 + pibpercapta2 + pontosTuristicos2 - densidade2); // Calculo do superpoder da carta 2 

//UTILIZANDO O COMANDO PRINTF PARA APRESENTAR OS DADOS DA CARTA 1, INSERIDOS PELO USUÁRIO
//NESSA PARTE ESTOU COLOCANDO O TEXTO DE APRESENTAÇÃO SEGUIDOS DOS VALORES ARMAZENADOS
//NAS VARIAVEIS QUE SAO INDICADAS NO CÓDIGO.
    printf("\n");
    printf("====================***====================\n");
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
    printf("Super Poder: %.2f\n", superpoder);


//APRESENTAÇÃO DAS INFORMAÇÕES DA CARTA 2
    printf("\n");
    printf("====================***====================\n");
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
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n");
    printf("====================***====================\n");
    printf("\n");
    printf("AGORA IREMOS COMPARAR AS DUAS CARTAS\n");


//COMPARAÇÃO ENTRE AS CARTAS

    printf("População: %d\n", populacao > populacao2); // Comparação da população da carta 1 com a população da carta 2
    printf("Área: %d\n", area > area2); // Comparação da área da carta 1 com a área da carta 2
    printf("PIB: %d\n", pib > pib2); // Comparação do PIB da carta 1 com o PIB da carta 2
    printf("Pontos Turísticos: %d\n", pontosTuristicos > pontosTuristicos2); // Comparação da quantidade de pontos turísticos da carta 1 com a quantidade de pontos turísticos da carta 2
    printf("Densidade Populacional: %d\n", densidade > densidade2); // Comparação da densidade populacional da carta 1 com a densidade populacional da carta 2
    printf("PIB per Capita: %d\n", pibpercapta > pibpercapta2); // Comparação do PIB per capita da carta 1 com o PIB per capita da carta 2
    printf("Super Poder: %d\n", superpoder > superpoder2); // Comparação do superpoder da carta 1 com o superpoder da carta 2
    printf("\n");
    printf("=============== FIM =============\n");
    
    return 0;
}
