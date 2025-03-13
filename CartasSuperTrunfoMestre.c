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
     //-----Coleta de dados da Primeira carta-----
     char estado;
     char codigo[40];
     char nome[50];
     unsigned long int populacao; 
     float area;
     float pib;
     int turismo;
     float densidadepop;    //densidade populacional
     float pibpc;   //pib per capita
     long double poder;
 
     printf("Insira as informações da carta 1\n");
     printf("Escolha uma letra para representar o estado: \n");
     scanf(" %c", &estado); //espaço antes e %c evita erros com \n
 
     printf("Digite a letra do estado e um número de 01-04: \n");
     scanf("%s", &codigo);
 
     printf("Insira o nome da cidade: \n");
     scanf("%s", &nome);
 
     printf("Informe o tamanho da população: \n");
     scanf("%lu", &populacao);
 
     printf("Informe o tamanho da cidade: \n");
     scanf("%f", &area);
 
     printf("Informe o PIB da cidade (em bilhões): \n");
     scanf("%f", &pib);
 
     printf("Informe o número de pontos turísticos: \n");
     scanf("%d", &turismo);
     printf("\n"); //arruma o código para o usuário
 
     //Cálculo da Dencidade Populacional
     densidadepop = populacao / area;
     //Cálculo do PIB per Capita
     pibpc = pib / populacao;
     //Cálculo do Super Poder
     poder = (double) populacao + area + pib + turismo + densidadepop + pibpc;
 
     //------Coleta de dados da Segunda carta------
     char Estado;
     char codigo2[40];
     char nome2[50];
     unsigned long int populacao2; 
     float area2;
     float pib2;
     int turismo2;
     float densidadepop2;   //densidade populacional
     float pibpc2;  //pib per capita
     long double poder2;
 
     printf("Insira as informações da carta 2\n");
     printf("Escolha uma letra para representar o estado: \n");
     scanf(" %c", &Estado); 
 
     printf("Digite a letra do estado e um número de 01-04: \n");
     scanf("%s", &codigo2);
 
     printf("Insira o nome da cidade: \n");
     scanf("%s", &nome2);
 
     printf("Informe o tamanho da população: \n");
     scanf("%lu", &populacao2);
 
     printf("Informe o tamanho da cidade: \n");
     scanf("%f", &area2);
 
     printf("Informe o PIB da cidade (em bilhões): \n");
     scanf("%f", &pib2);
 
     printf("Informe o número de pontos turísticos: \n");
     scanf("%d", &turismo2);
     printf("\n");
 
     //Cálculo da Dencidade Populacional
     densidadepop2 = populacao2 / area2;
 
     //Cálculo do PIB per Capita
     pibpc2 = pib2 / populacao2;
 
     //Cálculo do Super Poder
     poder2 = (double) populacao2 + area2 + pib2 + turismo2 + densidadepop2 + pibpc2;

     //------Exibição das informações da carta 1------
     printf("Carta 1\n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Nome da Cidade: %s\n", nome);
     printf("População: %lu\n", populacao);
     printf("Área: %.2f  km²\n", area);
     printf("PIB: %.2f bilhões\n", pib);
     printf("Número de pontos turísticos: %d\n", turismo);
     printf("Densidade Populacional: %.2f hab/km²\n", densidadepop);
     printf("PIB per Capita: %.2f reais\n", pibpc);
     printf("Super Poder: %.2Lf\n\n", poder);
 
     //------Exibição das informações da carta 2------
     printf("Carta 2\n");
     printf("Estado: %c\n", Estado);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", nome2);
     printf("População: %lu\n", populacao2);
     printf("Área: %.2f  km²\n", area2);
     printf("PIB: %.2f bilhões\n", pib2);
     printf("Número de pontos turísticos: %d\n", turismo2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
     printf("PIB per Capita: %.2f reais\n", pibpc2);
     printf("Super Poder: %.2Lf\n\n", poder2);
 
     //-----Comparação simples das cartas------
     int Rpopulacao;
     int Rarea;
     int Rpib;
     int Rturismo;
     int Rdensidadepop;
     int Rpibpc;
     int Rpoder;
 
     printf("Comparação das cartas\n");
     printf("(Se o resultado for 1 a carta1 é a vencedora, se o resultado for 0 a carta2 é a vencedora)\n\n");
     
     Rpopulacao = populacao > populacao2;
     Rarea = area > area2;
     Rpib = pib > pib2;
     Rturismo = turismo > turismo2;
     Rdensidadepop = densidadepop < densidadepop2;
     Rpibpc = pibpc > pibpc2;
     Rpoder = poder > poder2;
    
     //-----Resultado-----
     printf("População: %d\n", Rpopulacao);
     printf("Área: %d\n", Rarea);
     printf("PIB: %d\n", Rpib);
     printf("Pontos Turisticos: %d\n", Rturismo);
     printf("Densidade Populaconal: %d\n", Rdensidadepop);
     printf("PIB per Capita: %d\n", Rpibpc);
     printf("Super Poder: %d\n", Rpoder);
 
     return 0;
 }