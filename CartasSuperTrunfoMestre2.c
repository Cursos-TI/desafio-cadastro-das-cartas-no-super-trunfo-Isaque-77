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

    printf("\n----Desafio de Cartas Super Trunfo----\n\n");
    //----Inserção das informações da carta 1----
    char estado;
    char codigo[40];
    char nome[50];
    unsigned long int populacao; 
    float area;
    float pib;
    int turismo;
    float densidadepop; //Densidade populacional
    float pibpc; //PIB per Capita
    long double poder;

    printf("Insira as informações da carta 1\n");
    printf("Escolha uma letra para representar o estado: ");
    scanf("%c", &estado); 
    printf("Digite a letra do estado e um número de 01-04: ");
    scanf("%s", &codigo);
    
    printf("Insira o nome da cidade: ");
    scanf("%s", &nome);
    
    printf("Informe o tamanho da população: ");
    scanf("%lu", &populacao);
    
    printf("Informe o tamanho da cidade: ");
    scanf("%f", &area);
    
    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &turismo);
    printf("\n"); //arruma o código para o usuário

    //densidade populacional
    densidadepop = populacao / area;
    //PIB per Capita
    pibpc = pib / populacao;
    //Super Poder
    poder = (double) populacao + area + pib + turismo + densidadepop + pibpc;

    //----Inserção das informações da carta 2----
    char Estado;
    char codigo2[40];
    char nome2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int turismo2;
    float densidadepop2; //Densidade populacional
    float pibpc2; //PIB per Capita
    long double poder2;

    printf("Insira as informações da carta 2\n");
    printf("Escolha uma letra para representar o estado: ");
    scanf(" %c", &Estado); 
    
    printf("Digite a letra do estado e um número de 01-04: ");
    scanf("%s", &codigo2);
    
    printf("Insira o nome da cidade: ");
    scanf("%s", &nome2);
    
    printf("Informe o tamanho da população: ");
    scanf("%lu", &populacao2);
    
    printf("Informe o tamanho da cidade: ");
    scanf("%f", &area2);
    
    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &turismo2);
    printf("\n");

    //Cálculo da Densidade Populacional
    densidadepop2 = populacao2 / area2;

    //Cálculo do PIB per Capita
    pibpc2 = pib2 / populacao2;

    //Cálculo do Super Poder
    poder2 = (double) populacao2 + area2 + pib2 + turismo2 + densidadepop2 + pibpc2;

    //----Exibição das informações da carta 1----
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

    //----Exibição das informações da carta 2----
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

    //----Comparação simples das cartas (Desafio Mestre - tema 1)----
    /*
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
    Rdensidadepop = densidadepop > densidadepop2;
    Rpibpc = pibpc > pibpc2;
    Rpoder = poder > poder2;

    printf("População: %d\n", Rpopulacao);
    printf("Área: %d\n", Rarea);
    printf("PIB: %d\n", Rpib);
    printf("Pontos Turisticos: %d\n", Rturismo);
    printf("Densidade Populaconal: %d\n", Rdensidadepop);
    printf("PIB per Capita: %d\n", Rpibpc);
    printf("Super Poder: %d\n", Rpoder); */
    

    //----Desafio Novato (comparar duas cartas e determinar a vencedora) - Tema 2 ----

    //comparação da população
    /*printf("Comparação das cartas (Atributo: População)\n");
    printf("Carta 1 - %s: %lu\n", nome, populacao);
    printf("Carta 2 - %s: %lu\n", nome2, populacao2);
    if (populacao>populacao2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    //comparação da área
    printf("Comparação das cartas (Atributo: Área)\n");
    printf("Carta 1 - %s: %.2f km²\n", nome, area);
    printf("carta 2 - %s: %.2f km²\n", nome2, area2);
    if (area>area2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }
    
    //comparação do PIB
    printf("Comparação das cartas (Atributo: PIB)\n");
    printf("Carta 1 - %s: %.2f Bilhões\n", nome, pib);
    printf("carta 2 - %s: %.2f Bilhões\n", nome2, pib2);
    if (pib>pib2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    //comparação dos Pontos turísticos
    printf("Comparação das cartas (Atributo: Pontos Turísticos)\n");
    printf("Carta 1 - %s: %d\n", nome, turismo);
    printf("carta 1 - %s: %d\n", nome2, turismo2);
    if (turismo>turismo2)(pib>pib2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    //comparação da Densidade Populacional
    printf("Comparação das cartas (Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", nome, densidadepop);
    printf("carta 1 - %s: %.2f hab/km²\n", nome2, densidadepop2);
    if (densidadepop<densidadepop2)(turismo>turismo2)(pib>pib2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    //comparação do PIB per Capita 
    printf("Comparação das cartas (Atributo: PIB per Capitas)\n");
    printf("Carta 1 - %s: %.2f reais\n", nome, pibpc);
    printf("carta 1 - %s: %.2f reais\n", nome2, pibpc2);
    if (pibpc>pibpc2)(densidadepop<densidadepop2)(turismo>turismo2)(pib>pib2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    //comparação do Super Poder
    printf("Comparação das cartas (Atributo: Super Poder)\n");
    printf("Carta 1 - %s: %.2Lf\n", nome, poder);
    printf("Carta 2 - %s: %,2Lf\n", nome2, poder2);
    if (poder>poder2)(pibpc>pibpc2)(densidadepop<densidadepop2)(turismo>turismo2)(pib>pib2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    } */


    //----Desafio Aventureiro (implementar um switch para que o jogador possa escolher o atributo de comparação entre duas cartas) - Tema 2----
    int atributo;

    printf("Escolha qual atributo deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Turismo\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib per Capita\n");
    printf("7. Super Poder\n");
    printf("Comparar: ");
    scanf("%d", &atributo);
    printf("\nCarta 1 (%s) x Carta 2 (%s)\n", nome, nome2);

    switch (atributo)
    {
    case 1:
        printf("População (%lu) x População (%lu)\n", populacao, populacao2);
        break;
    case 2:
        printf("Área (%.2f) x Área (%.2f)\n", area, area2);
        break;
    case 3:
        printf("PIB (%.2f) x PIB (%.2f)\n", pib, pib2);
        break;
    case 4:
        printf("Pontos Turisticos (%d) x Turismo (%d)\n", turismo, turismo2);
        break;
    case 5:
        printf("Densidade Populaciona (%.2f)l x Densidade Populacional (%.2f)\n", densidadepop, densidadepop2);
        break;
    case 6:
        printf("PIB per Capita (%.2f) x PIB per Capita (%.2f)\n", pibpc, pibpc2);
        break;
    case 7:
        printf("Super Poder (%.2Lf) x Super poder (%.2Lf)\n", poder, poder2);
        break;
    default:
        printf("Opção Inválida\n");
        break;
    }
    
    if ((populacao == populacao2) || (area == area2) || (pib == pib2) || (turismo == turismo2) || (densidadepop == densidadepop2) || (pibpc == pibpc2) || (poder == poder2))
    {
        printf("----Empate!----\n\n");
    }else if ((populacao>populacao2) || (area>area2) || (pib>pib2) || (turismo>turismo2) || (densidadepop<densidadepop2) || (pibpc>pibpc2) || (poder>poder2))
    {
        printf("----Carta 1 (%s) venceu!----\n\n", nome);
    }else{
        printf("----Carta 2 (%s) venceu!----\n\n", nome2); 
    }


    return 0;
}
