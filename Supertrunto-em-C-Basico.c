#include <stdio.h> 

int main (){

    //Varáveis para os valores da Primeira Carta:
    int populacao1, pontos_turisticos1;
    char estado1[5], codigo1[10], nome_cidade1[20];
    float area1, pib1;

    //Variáveis para os valores da Segunda Carta:
    int populacao2, pontos_turisticos2;
    char estado2[10], codigo2[10], nome_cidade2[20];
    float area2, pib2;

    // Entrada de dados para primeira carta:
    printf("Preencha os dados da Primeira Carta:\n\n");

    printf("Digite o Estado da Carta: \n");
    fgets(estado1, 5, stdin);

    printf("Digite o Código da Carta: \n");
    fgets(codigo1, 10, stdin);

    printf("Digite o nome da Cidade: \n");
    fgets(nome_cidade1, 20, stdin);

    printf("Digite a Quantidade Populacional: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area da Cidade: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos1);
    //Limpeza de Buffer
    fgetc(stdin);

    // Entrada de dados para segunda carta:
    
    printf("\nPreencha os dados da Segunda Carta:\n\n");

    printf("Digite o Estado da Carta: \n");
    fgets(estado2, 10, stdin);

    printf("Digite o Código da Carta: \n");
    fgets(codigo2, 10, stdin);

    printf("Digite o nome da Cidade: \n");
    fgets(nome_cidade2, 20, stdin);

    printf("Digite a Quantidade Populacional: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos2);
    //Limpeza de Buffer
    fgetc(stdin);
    

    //Saída de dados da Primeira Carta:
    printf("\nCarta 1:\n");
    printf("Estado: %s", estado1);
    printf("Código: %s", codigo1);
    printf("Nome da Cidade: %s", nome_cidade1);
    printf("População: %d milhões de habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bi\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    
    //Saída de dados da Segunda Carta:
    printf("\nCarta 2:\n");
    printf("Estado: %s", estado2);
    printf("Código: %s", codigo2);
    printf("Nome da Cidade: %s", nome_cidade2);
    printf("População: %d milhões de habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    
    /*
    Perceba a quantidade de código repetido para essa simples tarefa estando limitado a
    utilização de estruturas simples.
    */

    return 0;

}
