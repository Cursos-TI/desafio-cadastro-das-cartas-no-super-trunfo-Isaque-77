#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado[50];
    char codigo[50];
    char nome[50];
    int habitantes; 
    float area;
    float pib;
    int turismo;

    printf("Carta 1\n");
    printf("Escolha uma letra para representar o estado: \n");
    scanf("%s", &estado);
    
    printf("Digite a letra do estado e um número de 0-4: \n");
    scanf("%s", &codigo);
    
    printf("Qual o nome da cidade: \n");
    scanf("%s", &nome);
    
    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", habitantes);
    
    printf("Qual o tamanho da cidade: \n");
    scanf("%.2f", area);
    
    printf("Qual o PIB? \n");
    scanf("%.2f", pib);

    printf("Qual o número de pontos turísticos: \n");
    scanf("%d", turismo);

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Habitantes: %d\n", habitantes);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de pontos turísticos: %d\n", turismo);


    return 0;
}
