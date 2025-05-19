#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, cod1[2], cidade1[50], estado2, cod2[2], cidade2[50];
    int turisticos1, turisticos2, result_carta1 = 0, result_carta2 = 0, populacao1, populacao2;
    float area1, PIB1, area2, PIB2, densidade_pop1, densidade_pop2;

    
    // Aqui você já tem as variáveis populadas com dados de entrada
    
    // Exemplo de como poderiam ser preenchidos com valores, 
    // ou podem ser lidos do terminal, como no seu código original
   
    
    // Cidades fictícias para exemplificação:
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
    
    // Calculo da Densidade Populacional e PIB Per Capita
    densidade_pop1 = populacao1 / area1;
    densidade_pop2 = populacao2 / area2;

    int opcao;
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: // Comparação por População
            printf("Comparando População:\n");
            printf("Cidade 1 (%s): %d\n", cidade1, populacao1);
            printf("Cidade 2 (%s): %d\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Cidade 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Cidade 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 2: // Comparação por Área
            printf("Comparando Área:\n");
            printf("Cidade 1 (%s): %.2f km²\n", cidade1, area1);
            printf("Cidade 2 (%s): %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Cidade 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Cidade 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // Comparação por PIB
            printf("Comparando PIB:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, PIB1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, PIB2);
            if (PIB1 > PIB2) {
                printf("Resultado: Cidade 1 (%s) venceu!\n", cidade1);
            } else if (PIB2 > PIB1) {
                printf("Resultado: Cidade 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Comparação por Número de Pontos Turísticos
            printf("Comparando Pontos Turísticos:\n");
            printf("Cidade 1 (%s): %d pontos\n", cidade1, turisticos1);
            printf("Cidade 2 (%s): %d pontos\n", cidade2, turisticos2);
            if (turisticos1 > turisticos2) {
                printf("Resultado: Cidade 1 (%s) venceu!\n", cidade1);
            } else if (turisticos2 > turisticos1) {
                printf("Resultado: Cidade 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Comparação por Densidade Demográfica
            printf("Comparando Densidade Demográfica:\n");
            printf("Cidade 1 (%s): %.2f pessoas por km²\n", cidade1, densidade_pop1);
            printf("Cidade 2 (%s): %.2f pessoas por km²\n", cidade2, densidade_pop2);
            if (densidade_pop1 < densidade_pop2) {
                printf("Resultado: Cidade 1 (%s) venceu!\n", cidade1); // Menor densidade vence
            } else if (densidade_pop2 < densidade_pop1) {
                printf("Resultado: Cidade 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 5.\n");
            break;
    }

    return 0;
}