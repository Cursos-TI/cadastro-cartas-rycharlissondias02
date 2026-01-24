#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1;
    char codigo1[3];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int ponto1;
 
    
    char estado2;
    char codigo2[3];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int ponto2;
    // Área para entrada de dados

    printf("Cadastro da carta 01\n");

    printf("informe um estado (Uma letra de 'A'-'H'): \n");
    scanf(" %c", &estado1);

    printf("informe o código da carta (Um número de '01'-'04'): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (ex: 'Caucaia'): \n");
    scanf("%s", cidade1);

    printf("Informe o número de habitantes da cidade(ex: '123456'): \n");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade (ex: '123.456'): \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade(ex: '45.6'): \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da cidade(ex: '12'): \n");
    scanf("%d", &ponto1);

    printf("\nCadastro da carta 02\n");

    printf("informe um estado (Uma letra de 'A'-'H'): \n");
    scanf(" %c", &estado2);

    printf("informe o código da carta (Um número de '01'-'04'): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (nome simples. ex: 'Fortaleza'): \n");
    scanf("%s", cidade2);

    printf("Informe o número de habitantes da cidade(ex: '123456'): \n");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade (ex: '123.456'): \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade(ex: '45.6'): \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da cidade(ex: '12'): \n");
    scanf("%d", &ponto2);

    // Área para exibição dos dados da cidade

    printf("\nCARTA 01:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto1);

    printf("\nCARTA 02:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto2);

    return 0;
}
