#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1, cod1[2], cidade1[50], estado2, cod2[2], cidade2[50];
    int turisticos1, turisticos2, result_carta1 = 0, result_carta2 = 0;
    unsigned long int populacao1, populacao2;
    float area1, PIB1, area2, PIB2, densidade_pop1, PIB_percap1, densidade_pop2, PIB_percap2;
    float super1, super2;


    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Digite uma letra de A à H para carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite um número de 01 à 04 para carta 1: \n");
    scanf(" %s", cod1);

    getchar();
    printf("Digite o nome da cidade para carta 1: \n");
    fgets(cidade1, 50, stdin);

    printf("Digite a população da cidade para carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área em km² da cidade para carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade para carta 1: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos da cidade para carta 1: \n");
    scanf("%d", &turisticos1);

    printf("Digite uma letra de A à H para carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite um número de 01 à 04 para carta 2: \n");
    scanf(" %s", cod2);

    getchar();
    printf("Digite o nome da cidade para carta 2: \n");
    fgets(cidade2, 50, stdin);

    printf("Digite a população da cidade para carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área em km² da cidade para carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade para carta 2: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos da cidade para carta 2: \n");
    scanf("%d", &turisticos2);

     // Calculo da Densidade Populacional e PIB Per Capita

    densidade_pop1 = populacao1 / area1;
    PIB_percap1 = PIB1 / populacao1;

    densidade_pop2 = populacao2 / area2;
    PIB_percap2 = PIB2 / populacao2;

    // Calcular super poder

    super1 = ((float)populacao1 + (float)turisticos1 + area1 + PIB1 + PIB_percap1) - densidade_pop1;
    super2 = ((float)populacao2 + (float)turisticos2 + area2 + PIB2 + PIB_percap2) - densidade_pop2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populacao1>populacao2) {
        printf("A Cidade 1 tem maior população. \n");
        result_carta1 =+ 1; // Incremento pontuação do vencedor
    } else {
        printf("A Cidade 2 tem maior população. \n");
        result_carta2 =+ 1; // Incremento pontuação do vencedor
    }

    if (area1>area2) {
        printf("A Cidade 1 tem maior área. \n");
       result_carta1 =+ 1; // Incremento pontuação do vencedor
    } else {
        printf("A Cidade 2 tem maior . \n");
       result_carta2 =+ 1; // Incremento pontuação do vencedor
    }

    if (PIB1>PIB2) {
        printf("A Cidade 1 tem maior PIB. \n");
        result_carta1 =+ 1; // Incremento pontuação do vencedor
    } else {
        printf("A Cidade 2 tem maior PIB. \n");
        result_carta2 =+ 1; // Incremento pontuação do vencedor
    }

    if (PIB_percap1>PIB_percap2) {
        printf("A Cidade 1 tem maior PIB Per Capita. \n");
        result_carta1 =+ 1; // Incremento pontuação do vencedor
    } else {
        printf("A Cidade 2 tem maior PIB Per Capita. \n");
        result_carta2 =+ 1; // Incremento pontuação do vencedor
    }

    if (densidade_pop1<densidade_pop2) {
        printf("A Cidade 1 tem menor Densidade Populacional. \n");
        result_carta1 =+ 1; // Incremento pontuação do vencedor
    } else {
        printf("A Cidade 2 tem menor Densidade Populacional. \n");
        result_carta2 =+ 1; // Incremento pontuação do vencedor
    }

    if (turisticos1>turisticos2) {
        printf("A Cidade 1 tem maior número de pontos turísticos. \n");
        result_carta1 =+ 1; // Incremento pontuação do vencedor
    } else {
        printf("A Cidade 2 tem maior número de pontos turísticos. \n");
        result_carta2 =+ 1; // Incremento pontuação do vencedor
    }

    if (super1>super2) {
        printf("A Cidade 1 tem maior Super Poder. \n");
        result_carta1 =+ 1; // Incremento pontuação do vencedor
    } else {
        printf("A Cidade 2 tem maior Super Poder. \n");
        result_carta2 =+ 1; // Incremento pontuação do vencedor
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    if (result_carta1>result_carta2){
        printf("\nA cidade vencedora é: %s\n\n", cidade1);
        printf("Venceu nos atibutos abaixo: \n");
        if  (populacao1>populacao2){
            printf("População: %d\n", populacao1);
        }
        if  (area1>area2){
            printf("Área: %.2f\n", area1);
        }
        if  (PIB1>PIB2){
            printf("PIB: %.2f\n", PIB1);
        }
        if  (PIB_percap1>PIB_percap2){
            printf("PIB Per Capita: %.2f\n", PIB_percap1);
        }
        if  (densidade_pop1<densidade_pop2){
            printf("Densidade População: %.2f\n", densidade_pop1);
        }
        if  (turisticos1>turisticos2){
            printf("Pontos Turístico: %d\n", turisticos1);
        }
        if  (super1>super2){
            printf("Super Poder: %.2f\n", super1);
        }
    } else {
        printf("\nA cidade vencedora é: %s\n", cidade2);
        printf("Venceu nos atibutos abaixo: \n");
        if  (populacao2>populacao1){
            printf("População: %d\n", populacao2);
        }
        if  (area2>area1){
            printf("Área: %.2f\n", area2);
        }
        if  (PIB2>PIB1){
            printf("PIB: %.2f\n", PIB2);
        }
        if  (PIB_percap2>PIB_percap1){
            printf("PIB Per Capita: %.2f\n", PIB_percap2);
        }
        if  (densidade_pop2<densidade_pop1){
            printf("Densidade População: %.2f\n", densidade_pop2);
        }
        if  (turisticos2>turisticos2){
            printf("Pontos Turístico: %d\n", turisticos2);
        }
        if  (super2>super1){
            printf("Super Poder: %.2f\n", super2);
        }
    }

    return 0;
}
