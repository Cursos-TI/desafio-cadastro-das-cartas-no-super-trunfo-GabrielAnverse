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

    char codigo[4], nome[20];
    int populacao, pontosturisticos;
    float area;
    float pib;

    printf("Bem-vindo ao cadastro de cartas do Jogo Super Trunfo - Países!\n");
    printf("Você irá cadastrar 32 cidades, divididas em 8 estados (A a H).\n\n");

    printf("Digite o nome da cidade:\n ");
    scanf("%s", &nome); 
    printf("Digite o código:\n ");
    scanf("%s", &codigo);
    printf("Digite a população da cidade escolhida:\n ");
    scanf("%d", &populacao);
    printf("Digite o numero de pontos turisticos:\n ");
    scanf("%d", &pontosturisticos);
    printf("Digite a área :\n ");
    scanf("%f", &area);
    printf("Digite o Pib:\n ");
    scanf("%f", &pib);

    printf("--------------------------------\n");
    printf("Nome da cidade: %s\n", nome);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Pontos turisticos: %d\n", pontosturisticos);
    printf("Área: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("--------------------------------\n");



    return 0;
}
