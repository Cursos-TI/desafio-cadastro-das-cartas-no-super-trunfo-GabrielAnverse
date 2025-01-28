#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gabriel

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char codigo[4];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    float densidade_populacional, densidade_populacional2;
    float pib_per_capita, pib_per_capita2;
    float super_poder, super_poder2;

    printf("Bem-vindo ao cadastro de cartas do Jogo Super Trunfo - Países!\n");
    printf("Você irá cadastrar 32 cidades, divididas em 8 estados (A a H).\n\n");

    printf("Digite a população da primeira cidade escolhida:\n ");
    scanf("%d", &populacao);
    printf("Digite o numero de pontos turisticos:\n ");
    scanf("%d", &pontos_turisticos);
    printf("Digite a área da cidade:\n ");
    scanf("%f", &area);
    printf("Digite o Pib:\n ");
    scanf("%f", &pib);

    printf("Digite a população da segunda cidade escolhida:\n ");
    scanf("%d", &populacao2);
    printf("Digite o numero de pontos turisticos:\n ");
    scanf("%d", &pontos_turisticos2);
    printf("Digite a área da cidade:\n ");
    scanf("%f", &area2);
    printf("Digite o Pib:\n ");
    scanf("%f", &pib2);

    // Calcula propriedades derivadas
    densidade_populacional = populacao / area;
    densidade_populacional2 = populacao2 / area2;

    pib_per_capita = pib / populacao;
    pib_per_capita2 = pib2 / populacao2;

    super_poder = populacao + area + pib + pontos_turisticos + densidade_populacional + pib_per_capita
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2

    printf("----- Dados da primeira cidade -----\n");
    printf("População: %d\n", populacao);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    printf("Área: %.2f\n", area);
    printf("Pib: %.2f\n", pib);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("Pib per capita: %.2f\n", pib_per_capita);
    printf("--------------------------------\n");

    printf("----- Dados da segunda cidade -----\n");
    printf("População: %d\n", populacao2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("Pib per capita: %.2f\n", pib_per_capita2);
    printf("--------------------------------\n");



    return 0;
}
