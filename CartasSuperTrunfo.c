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

    printf("Desafio de Cartas Super Trunfo\n\n");
    //Primeira carta
    char estado;
    char codigo[40];
    char nome[50];
    float habitantes; 
    float area;
    float pib;
    int turismo;

    printf("Insira as informações da carta 1\n");
    printf("Escolha uma letra para representar o estado: \n");
    scanf(" %c", &estado); //espaço antes e %c evita erros com \n
    
    printf("Digite a letra do estado e um número de 01-04: \n");
    scanf("%s", &codigo);
    
    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome);
    
    printf("Informe a quantidade de habitantes (em milhões): \n");
    scanf("%f", &habitantes);
    
    printf("Informe o tamanho da cidade (em km²): \n");
    scanf("%f", &area);
    
    printf("Informe o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &turismo);
    printf("\n"); //arruma o código para o usuário

    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Habitantes: %.2f milhões\n", habitantes);
    printf("Área: %.2f  km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n\n", turismo);

    //Segunda carta
    char Estado;
    char codigo2[40];
    char nome2[50];
    float habitantes2; 
    float area2;
    float pib2;
    int turismo2;

    printf("Insira as informações da carta 2\n");
    printf("Escolha uma letra para representar o estado: \n");
    scanf(" %c", &Estado); 
    
    printf("Digite a letra do estado e um número de 01-04: \n");
    scanf("%s", &codigo2);
    
    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome2);
    
    printf("Informe a quantidade de habitantes (em milhões): \n");
    scanf("%f", &habitantes2);
    
    printf("Informe o tamanho da cidade (em km²): \n");
    scanf("%f", &area2);
    
    printf("Informe o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &turismo2);
    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Habitantes: %.2f milhões\n", habitantes2);
    printf("Área: %.2f  km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);

    return 0;
}
