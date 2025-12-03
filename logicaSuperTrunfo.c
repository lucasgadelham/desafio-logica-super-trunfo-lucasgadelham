#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades. Você pode utilizar o código do primeiro desafio.
    //Carta 1
    char estado;
    char codigoCarta[5];
    char cidade[50];
    unsigned long populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePop;
    float pibPerCapita;
    float superPoder;

    //Carta 2
    char estado2;
    char codigoCarta2[5];
    char cidade2[50];
    unsigned long populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePop2;
    float pibPerCapita2;
    float superPoder2;

    int resultado;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // (Repita para cada propriedade)
    printf("====== CADASTRO DE CARTAS ======\n");
    printf("Vamos preencher as informações da carta 1: \n");

    printf("Digite o estado: \n> ");
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n> ");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade: \n> ");
    getchar();
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite a quantidade da população: \n> ");
    scanf("%lu", &populacao);

    printf("Digite a área: \n> ");
    scanf("%f", &area);

    printf("Digite o PIB: \n> ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n> ");
    scanf("%d", &pontosTuristicos);

    printf("\nAgora vamos preencher as informações da carta 2: \n");

    printf("Digite o estado: \n> ");
    scanf(" %c", &estado2);

    printf("Digite o código: \n> ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n> ");
    getchar();
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a quantidade da população: \n> ");
    scanf("%lu", &populacao2);

    printf("Digite a área: \n> ");
    scanf("%f", &area2);

    printf("Digite o PIB: \n> ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n> ");
    scanf("%d", &pontosTuristicos2);

    //Calcular PIB e densidade
    densidadePop = populacao / area;
    pibPerCapita = pib / (float)populacao;
    densidadePop2 = populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    printf("\n====== COMPARAÇÃO ======\n");
    printf("Atributo: PIB per capita\n");

    if(pibPerCapita > pibPerCapita2){
        resultado = 1;
        printf("PIB per capita carta 1: %f\n", pibPerCapita);
        printf("PIB per capita carta 2: %f\n", pibPerCapita2);
    }else{
        resultado = 0;
        printf("PIB per capita carta 1: %f\n", pibPerCapita);
        printf("PIB per capita carta 2: %f\n", pibPerCapita2);
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    printf("\n====== RESULTADO ======\n");
    if(resultado == 1){
        printf("Carta 1 venceu!\n");
        printf("\nDados da carta:\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigoCarta);
        printf("Cidade: %s\n", cidade);
    }
    if(resultado == 0){
        printf("Carta 2 venceu!\n");
        printf("\nDados da carta:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Cidade: %s\n", cidade2);
    }

    return 0;
}
