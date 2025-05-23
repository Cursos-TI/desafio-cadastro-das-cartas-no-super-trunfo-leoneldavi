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
    char estadoCarta01[2] = "";
    char codigoCarta01[4] = "";
    char nomeCarta01[32] = "";
    int populacaoCarta01 = 0;
    float areaCarta01 = 0.0f;
    float pibCarta01 = 0.0f;
    int pontosCarta01 = 0;

    char estadoCarta02[2] = "";
    char codigoCarta02[4] = "";
    char nomeCarta02[32] = "";
    int populacaoCarta02 = 0;
    float areaCarta02 = 0.0f;
    float pibCarta02 = 0.0f;
    int pontosCarta02 = 0;

    printf("--- DADOS CARTA 1 ---\n");
    printf("Estado (1 letra): ");
    scanf("%s", &estadoCarta01);

    printf("Codigo da carta (3 letras): ");
    scanf("%s", &codigoCarta01);

    printf("Nome da cidade: ");
    scanf("%s", &nomeCarta01);

    printf("Populacao da cidade: ");
    scanf("%d", &populacaoCarta01);

    printf("Area da cidade: ");
    scanf("%f", &areaCarta01);

    printf("PIB da cidade: ");
    scanf("%f", &pibCarta01);

    printf("Pontos turisticos da cidade: ");
    scanf("%d", &pontosCarta01);

    printf("--- DADOS CARTA 2 ---\n");
    printf("Estado (1 letra): ");
    scanf("%s", &estadoCarta02);

    printf("Codigo da carta (3 letras): ");
    scanf("%s", &codigoCarta02);

    printf("Nome da cidade: ");
    scanf("%s", &nomeCarta02);

    printf("Populacao da cidade: ");
    scanf("%d", &populacaoCarta02);

    printf("Area da cidade: ");
    scanf("%f", &areaCarta02);

    printf("PIB da cidade: ");
    scanf("%f", &pibCarta02);

    printf("Pontos turisticos da cidade: ");
    scanf("%d", &pontosCarta02);

    printf("\n");
    printf("Carta 1: \nEstado: %s \nCodigo: %s \nNome: %s \nPopulacao: %d \nArea: %.2f \nPIB: %.2f \nPontos turisticos: %d \n\n",
            estadoCarta01, codigoCarta01, nomeCarta01, populacaoCarta01, areaCarta01, pibCarta01, pontosCarta01);
    printf("Carta 2: \nEstado: %s \nCodigo: %s \nNome: %s \nPopulacao: %d \nArea: %.2f \nPIB: %.2f \nPontos turisticos: %d \n",
            estadoCarta02, codigoCarta02, nomeCarta02, populacaoCarta02, areaCarta02, pibCarta02, pontosCarta02);

    return 0;
}
