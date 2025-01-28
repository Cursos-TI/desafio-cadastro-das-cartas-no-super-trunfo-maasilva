#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Declaração das variáveis
    char estado [10];
    char carta[10];
    char cidade[50];
    int populacao, pturisticos;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    

    //Interação inicial e coleta dos dados
    printf("Digite a sigla do estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade); 
    // Tem um bug aqui que eu ainda não descobri a solução. Espaço entre as palavras gera um erro

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pturisticos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Exibição dos Resultados
    printf("\n");
    printf("_________________________________________________________________________");
    printf("\n \n");
    printf("Dados Digitados: \n");
    printf("Estado: %s\n", estado);
    printf("Código da carta:  %s\n", carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f \n", pib);
    printf("Pontos turisticos: %d\n", pturisticos);



    

    return 0;
}
