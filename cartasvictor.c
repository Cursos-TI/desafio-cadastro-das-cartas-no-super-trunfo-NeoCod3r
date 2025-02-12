#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

int codigo_cidade, populacao, pontos_turisticos;
    float area, pib;
    char nome_cidade[50]; 

     printf("Digite o Codigo da Cidade: ");
    scanf("%d", &codigo_cidade);

    printf("Digite o Nome da Cidade (sem espaços): ");
    scanf("%s", nome_cidade); 

    printf("Digite a Populacao: ");
    scanf("%d", &populacao);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\n=== Dados da Cidade Cadastrada ===\n");
    printf("Codigo: %d\n", codigo_cidade);
    printf("Nome: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f Bilhoes\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos);


  // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    return 0;
}
    


