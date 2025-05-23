#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //define valores para cartas
    char estadoCarta01[2] = "";
    char codigoCarta01[4] = "";
    char nomeCarta01[32] = "";
    int populacaoCarta01 = 0;
    float areaCarta01 = 0.0f;
    float pibCarta01 = 0.0f;
    int pontosCarta01 = 0;
    float densidadeCarta01 = 0.0f;
    float pibpercapitaCarta01 = 0.0f;
    float superpoderCarta01 = 0.0f;

    char estadoCarta02[2] = "";
    char codigoCarta02[4] = "";
    char nomeCarta02[32] = "";
    int populacaoCarta02 = 0;
    float areaCarta02 = 0.0f;
    float pibCarta02 = 0.0f;
    int pontosCarta02 = 0;
    float densidadeCarta02 = 0.0f;
    float pibpercapitaCarta02 = 0.0f;
    float superpoderCarta02 = 0.0f;

    //comeca entrada de valores carta 1
    printf("--- DADOS CARTA 1 ---\n");
    printf("Estado (1 letra): ");
    scanf("%1s", &estadoCarta01);

    printf("Codigo da carta (3 letras): ");
    scanf("%3s", &codigoCarta01);

    printf("Nome da cidade: ");
    scanf("%31s", &nomeCarta01);

    printf("Populacao da cidade: ");
    scanf("%d", &populacaoCarta01);

    printf("Area da cidade: ");
    scanf("%f", &areaCarta01);

    printf("PIB da cidade: ");
    scanf("%f", &pibCarta01);

    printf("Pontos turisticos da cidade: ");
    scanf("%d", &pontosCarta01);

    // calcula dados recebidos
    densidadeCarta01 = populacaoCarta01 / areaCarta01;
    pibpercapitaCarta01 = pibCarta01 / populacaoCarta01;
    superpoderCarta01 = (float) populacaoCarta01 + areaCarta01 + pibCarta01 + (float) pontosCarta01 + pibpercapitaCarta01 + (1 / densidadeCarta01);

    //comeca entrada de valores carta 2
    printf("--- DADOS CARTA 2 ---\n");
    printf("Estado (1 letra): ");
    scanf("%1s", &estadoCarta02);

    printf("Codigo da carta (3 letras): ");
    scanf("%3s", &codigoCarta02);

    printf("Nome da cidade: ");
    scanf("%31s", &nomeCarta02);

    printf("Populacao da cidade: ");
    scanf("%d", &populacaoCarta02);

    printf("Area da cidade: ");
    scanf("%f", &areaCarta02);

    printf("PIB da cidade: ");
    scanf("%f", &pibCarta02);

    printf("Pontos turisticos da cidade: ");
    scanf("%d", &pontosCarta02);

    // calcula dados recebidos
    densidadeCarta02 = populacaoCarta02 / areaCarta02;
    pibpercapitaCarta02 = pibCarta02 / populacaoCarta02; 
    superpoderCarta02 = (float) populacaoCarta02 + areaCarta02 + pibCarta02 + (float) pontosCarta02 + pibpercapitaCarta02 + (1 / densidadeCarta02);

    printf("\n");

    // Mostra informacoes carta 1
    printf("Carta 1:\nEstado: %s\nCodigo: %s\nNome: %s\nPopulacao: %d\nArea: %.2f km^2\nPIB: %.2f bilhoes de R$\nPontos turisticos: %d \nDensidade populacional: %.2f hab/km\nPIB per Capita: %.2f R$\n\n",
            estadoCarta01, codigoCarta01, nomeCarta01, populacaoCarta01, areaCarta01, pibCarta01, pontosCarta01, densidadeCarta01, pibpercapitaCarta01
        );

    // Mostra informacoes carta 2
    printf("Carta 2:\nEstado: %s\nCodigo: %s\nNome: %s\nPopulacao: %d\nArea: %.2f km^2\nPIB: %.2f bilhoes de R$\nPontos turisticos: %d \nDensidade populacional: %.2f hab/km\nPIB per Capita: %.2f R$\n\n",
            estadoCarta02, codigoCarta02, nomeCarta02, populacaoCarta02, areaCarta02, pibCarta02, pontosCarta02, densidadeCarta02, pibpercapitaCarta02
        );

    // Compara cartas
    printf("Comparacao de Cartas:\nPopulacao: %s\nArea: %s km^2\nPIB: %s bilhoes de R$\nPontos turisticos: %s \nDensidade populacional: %s hab/km\nPIB per Capita: %s R$\nSuper Poder: %s\n",
            (populacaoCarta01 > populacaoCarta02) ? "Carta 1 vence" : "Carta 2 vence",
            (areaCarta01 > areaCarta02) ? "Carta 1 vence" : "Carta 2 vence",
            (pibCarta01 > pibCarta01) ? "Carta 1 vence" : "Carta 2 vence",
            (pontosCarta01 > pontosCarta02) ? "Carta 1 vence" : "Carta 2 vence",
            (densidadeCarta01 > densidadeCarta02) ? "Carta 1 vence" : "Carta 2 vence",
            (pibpercapitaCarta01 > pibpercapitaCarta02) ? "Carta 1 vence" : "Carta 2 vence",
            (superpoderCarta01 > superpoderCarta02) ? "Carta 1 vence" : "Carta 2 vence"
        );

    return 0;
}
