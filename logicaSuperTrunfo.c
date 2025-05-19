#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, cod1[2], cidade1[50], estado2, cod2[2], cidade2[50];
    int turisticos1, turisticos2, result_carta1 = 0, result_carta2 = 0, populacao1, populacao2;
    float area1, PIB1, area2, PIB2, densidade_pop1, PIB_percap1, densidade_pop2, PIB_percap2;

    // Cadastro das Cartas (substituído com valores fictícios para exemplificação)
    strcpy(cidade1, "Fortaleza (CE)");
    strcpy(cidade2, "Natal (RN)");
    populacao1 = 500000;
    populacao2 = 300000;
    area1 = 200.0;
    area2 = 150.0;
    PIB1 = 5000000000.0;
    PIB2 = 3500000000.0;
    turisticos1 = 50;
    turisticos2 = 40;

    // Cálculo da Densidade Populacional
    densidade_pop1 = populacao1 / area1;
    densidade_pop2 = populacao2 / area2;

    // Variáveis para armazenar os atributos escolhidos
    int opcao1, opcao2;

    // Menu interativo para escolher os atributos
    printf("Escolha o primeiro atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Menu para escolher o segundo atributo (sem a opção escolhida no primeiro menu)
    printf("\nEscolha o segundo atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao2);

    // Certificando-se de que os dois atributos selecionados são diferentes
    while (opcao1 == opcao2) {
        printf("Você não pode escolher o mesmo atributo duas vezes! Escolha novamente o segundo atributo:\n");
        printf("Opção: ");
        scanf("%d", &opcao2);
    }

    // Definição das variáveis para armazenar as comparações
    float valor1, valor2, valor3, valor4;
    char atributo1[50], atributo2[50];

    // Comparação dos atributos escolhidos
    switch (opcao1) {
        case 1:
            strcpy(atributo1, "População");
            valor1 = populacao1;
            valor2 = populacao2;
            break;
        case 2:
            strcpy(atributo1, "Área");
            valor1 = area1;
            valor2 = area2;
            break;
        case 3:
            strcpy(atributo1, "PIB");
            valor1 = PIB1;
            valor2 = PIB2;
            break;
        case 4:
            strcpy(atributo1, "Pontos Turísticos");
            valor1 = turisticos1;
            valor2 = turisticos2;
            break;
        case 5:
           strcpy(atributo1, "Densidade Demográfica");
            valor1 = densidade_pop1;
            valor2 = densidade_pop2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    switch (opcao2) {
        case 1:
            strcpy(atributo2, "População");
            valor3 = populacao1;
            valor4 = populacao2;
            break;
        case 2:
            strcpy(atributo2, "Área");
            valor3 = area1;
            valor4 = area2;
            break;
        case 3:
            strcpy(atributo2, "PIB");
            valor3 = PIB1;
            valor4 = PIB2;
            break;
        case 4:
            strcpy(atributo2, "Pontos Turísticos");
            valor3 = turisticos1;
            valor4 = turisticos2;
            break;
        case 5:
            strcpy(atributo2, "Densidade Demográfica");
            valor3 = densidade_pop1;
            valor4 = densidade_pop2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Comparação dos atributos
    printf("\nComparando Atributos:\n");
    printf("Atributo 1: %s\n", atributo1);
    printf("Cidade 1 (%s): %.2f\n", cidade1, valor1);
    printf("Cidade 2 (%s): %.2f\n", cidade2, valor2);

    // Usando o operador ternário para comparar e somar os atributos
    if (valor1 > valor2) {
        printf("Resultado: Cidade 1 (%s) venceu!\n", cidade1);
        valor3 += valor1;
    } else if (valor2 > valor1) {
        printf("Resultado: Cidade 2 (%s) venceu!\n", cidade2);
        valor4 += valor2;
    } else {
        printf("Empate no %s!\n", atributo1);
    }

    // Exibir resultado do segundo atributo
    printf("\nAtributo 2: %s\n", atributo2);
    printf("Cidade 1 (%s): %.2f\n", cidade1, valor1);
    printf("Cidade 2 (%s): %.2f\n", cidade2, valor2);

    // Comparação do segundo atributo
    if (valor1 > valor2) {
        printf("Resultado: Cidade 1 (%s) venceu!\n", cidade1);
        valor3 += valor1;
    } else if (valor2 > valor1) {
        printf("Resultado: Cidade 2 (%s) venceu!\n", cidade2);
        valor4 += valor2;
    } else {
        printf("Empate no %s!\n", atributo2);
    }

    // Exibir o vencedor
    printf("\nResultado Final:\n");
    printf("Soma dos Atributos para Cidade 1: %.2f\n", valor3);
    printf("Soma dos Atributos para Cidade 2: %.2f\n", valor4);
    if (valor3 > valor4) {
        printf("Resultado Final: Cidade 1 (%s) venceu!\n", cidade1);
    } else if (valor3 > valor4) {
        printf("Resultado Final: Cidade 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate Final!\n");
    }

    return 0;
}