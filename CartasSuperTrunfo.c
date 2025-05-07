#include <stdio.h>
#include <string.h>

struct Carta {
    char codigo[4];
    long long populacao;
    double area;
    long long pib;
    int pontos_turisticos;
    double densidade;
    double pib_per_capita;
    double super_poder;
};

void cadastrar_carta(struct Carta *c) {
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", c->codigo);
    
    printf("Digite a populacao: ");
    scanf("%lld", &c->populacao);
    
    printf("Digite a area (km²): ");
    scanf("%lf", &c->area);
    
    printf("Digite o PIB: ");
    scanf("%lld", &c->pib);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &c->pontos_turisticos);
    
    // Calcular propriedades adicionais
    c->densidade = c->populacao / c->area;
    c->pib_per_capita = (double)c->pib / c->populacao;
    c->super_poder = c->populacao + c->area + c->pib + c->pontos_turisticos;
}

void exibir_carta(struct Carta c) {
    printf("\nDados da Carta %s:\n", c.codigo);
    printf("Populacao: %lld habitantes\n", c.populacao);
    printf("Area: %.2f km²\n", c.area);
    printf("PIB: %lld\n", c.pib);
    printf("Pontos Turisticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade);
    printf("PIB per Capita: %.2f\n", c.pib_per_capita);
    printf("Super Poder: %.2f\n", c.super_poder);
}

void comparar_cartas(struct Carta c1, struct Carta c2) {
    printf("\n=== Comparacao entre %s e %s ===\n", c1.codigo, c2.codigo);
    
    // População
    if (c1.populacao > c2.populacao) {
        printf("Populacao: %s vence com %lld habitantes\n", c1.codigo, c1.populacao);
    } else if (c2.populacao > c1.populacao) {
        printf("Populacao: %s vence com %lld habitantes\n", c2.codigo, c2.populacao);
    } else {
        printf("Populacao: Empate com %lld habitantes\n", c1.populacao);
    }
    
    // Área
    if (c1.area > c2.area) {
        printf("Area: %s vence com %.2f km²\n", c1.codigo, c1.area);
    } else if (c2.area > c1.area) {
        printf("Area: %s vence com %.2f km²\n", c2.codigo, c2.area);
    } else {
        printf("Area: Empate com %.2f km²\n", c1.area);
    }
    
    // PIB
    if (c1.pib > c2.pib) {
        printf("PIB: %s vence com %lld\n", c1.codigo, c1.pib);
    } else if (c2.pib > c1.pib) {
        printf("PIB: %s vence com %lld\n", c2.codigo, c2.pib);
    } else {
        printf("PIB: Empate com %lld\n", c1.pib);
    }
    
    // Pontos Turísticos
    if (c1.pontos_turisticos > c2.pontos_turisticos) {
        printf("Pontos Turisticos: %s vence com %d\n", c1.codigo, c1.pontos_turisticos);
    } else if (c2.pontos_turisticos > c1.pontos_turisticos) {
        printf("Pontos Turisticos: %s vence com %d\n", c2.codigo, c2.pontos_turisticos);
    } else {
        printf("Pontos Turisticos: Empate com %d\n", c1.pontos_turisticos);
    }
    
    // Densidade 
    if (c1.densidade < c2.densidade) {
        printf("Densidade: %s vence com %.2f hab/km² (menor densidade)\n", c1.codigo, c1.densidade);
    } else if (c2.densidade < c1.densidade) {
        printf("Densidade: %s vence com %.2f hab/km² (menor densidade)\n", c2.codigo, c2.densidade);
    } else {
        printf("Densidade: Empate com %.2f hab/km²\n", c1.densidade);
    }
    
    // PIB per capita
    if (c1.pib_per_capita > c2.pib_per_capita) {
        printf("PIB per Capita: %s vence com %.2f\n", c1.codigo, c1.pib_per_capita);
    } else if (c2.pib_per_capita > c1.pib_per_capita) {
        printf("PIB per Capita: %s vence com %.2f\n", c2.codigo, c2.pib_per_capita);
    } else {
        printf("PIB per Capita: Empate com %.2f\n", c1.pib_per_capita);
    }
    
    // Super Poder
    if (c1.super_poder > c2.super_poder) {
        printf("Super Poder: %s vence com %.2f\n", c1.codigo, c1.super_poder);
    } else if (c2.super_poder > c1.super_poder) {
        printf("Super Poder: %s vence com %.2f\n", c2.codigo, c2.super_poder);
    } else {
        printf("Super Poder: Empate com %.2f\n", c1.super_poder);
    }
}

int main() {
    struct Carta carta1, carta2;
    
    printf("=== Cadastro de Cartas - Super Trunfo Países ===\n");
    
    printf("\nCadastro da primeira carta:\n");
    cadastrar_carta(&carta1);
    
    printf("\nCadastro da segunda carta:\n");
    cadastrar_carta(&carta2);
    
    printf("\n=== Resumo das Cartas ===\n");
    exibir_carta(carta1);
    exibir_carta(carta2);
    
    comparar_cartas(carta1, carta2);
    
    return 0;
}