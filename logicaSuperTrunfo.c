#include <stdio.h>

int main() {

    //carta 1
    char estado1[3] = "A";
    char codigo_da_carta1[30] = "A02";
    char nome_da_cidade1[30] = "AS";
    unsigned long int populacao1 = 10;
    float area_em_km1 = 10;
    int numero_de_pontos_turisticos1 = 10;
    float pib1 = 10;
    float pib_per_capita1 = 10;
    float Densidade_Populaciona1 =10;
    float Super_Poder1 = 10;
    
    //carta 2
    char estado2[3] = "A";
    char codigo_da_carta2[30] = "A02";
    char nome_da_cidade2[30] = "AS";
    unsigned long int populacao2 = 10;
    float area_em_km2 = 10;
    int numero_de_pontos_turisticos2 = 10;
    float pib2 = 10;
    float pib_per_capita2 = 10;
    float Densidade_Populaciona2 =10;
    float Super_Poder2 = 10;
    
    // Intrusão para a entrada de dados
    printf("inserir os dados de duas cartas do Super Trunfo.\nPara cada carta, o usuário deverá fornecer as seguintes informações.\n");
    printf("Estado: Uma Sigla Exemplo 'PE' a 'RN' (representando um dos oito estados).\n");
    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: P01, R03).\n");
    printf("Nome da Cidade: O nome da cidade.\n");
    printf("População: O número de habitantes da cidade.\n");
    printf("Área (em km²): A área da cidade em quilômetros quadrados.\n");
    printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.\n");
    printf("PIB: O Produto Interno Bruto da cidade.\n");

    // cadastro carta 1
    printf("Agora vamos cadastrar a carta. 1\n");
    printf("Digite a sigla do Estado:\n");
    scanf("%s", estado1);
    
    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo_da_carta1);
   
    printf("Digite o Nome da Cidade:\n");
    scanf("%s", nome_da_cidade1);
    
    printf("Digite a População:\n");
    scanf("%lu", &populacao1);
   
    printf("Digite a Área em KM²:\n");
    scanf("%f", &area_em_km1);
    
    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    // cadastro carta 2
    printf("Agora vamos cadastrar a carta. 2\n");
    printf("Digite a sigla do Estado:\n");
    scanf("%s", estado2);
    
    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo_da_carta2);
    
    printf("Digite o Nome da Cidade:\n");
    scanf("%s", nome_da_cidade2);
    
    printf("Digite a População:\n");
    scanf("%lu", &populacao2);
    
    printf("Digite a Área em KM²:\n");
    scanf("%f", &area_em_km2);
    
    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos2);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    
    // calculando atributo Carta 1
    pib_per_capita1 = (float) pib1 / populacao1;
    Densidade_Populaciona1 = (float) populacao1 / area_em_km1;

    // Super Poder carta 1
    Super_Poder1 = populacao1 + area_em_km1 + numero_de_pontos_turisticos1 + pib1 + pib_per_capita1 + Densidade_Populaciona1;

    // calculando atributo Carta 2
    pib_per_capita2 = (float) pib2 / populacao2;
    Densidade_Populaciona2 = (float) populacao2 / area_em_km2;

    // Super Poder carta 2
    Super_Poder2 = populacao2 + area_em_km2 + numero_de_pontos_turisticos2 + pib2 + pib_per_capita2 + Densidade_Populaciona2;

    // resultado da batalha carta
    char resultado_populacao[50] = "resultado";
    char resultado_area_em_km[50] = "resultado";
    char resultado_numero_de_pontos_turisticos[50] = "resultado";
    char resultado_pib[50] = "resultado";
    char resultado_pib_per_capita[50] = "resultado";
    char resultado_Densidade_Populaciona[50] = "resultado";
    char resultado_Super_Poder[50] = "resultado";

    // logica da batalha
    if(populacao1 > populacao2){
      resultado_populacao[50] = "dsfdsf";

    }else{
        resultado_populacao[50] = "dsfdsf";
    }

    
    // Explicação do resultado da batalha
    
    printf("Entenda como vai funcionar a batalha das cartas\n");
    printf("Resultado da batalha (1 representa que a primeira Carta vence e 0 representa que a segunda Carta vence).\n");
    
    // exibindo Carta 1
    printf("*******Carta 1*****\n");

    printf("*Estado: %s*\n", estado1);

    printf("*Código: %s*\n", codigo_da_carta1);

    printf("*Nome da Cidade: %s*\n", nome_da_cidade1);

    printf("*População: %lu* resultado da batalha(%s)\n", populacao1,resultado_populacao);

    printf("*Área: %.2f km²* resultado da batalha()\n", area_em_km1);

    printf("*%d Pontos Turísticos* resultado da batalha()\n", numero_de_pontos_turisticos1);

    printf("*PIB: %.2f bilhões de reais* resultado da batalha()\n", pib1);
    
    printf("*PIB per Capita: %.2f reais* resultado da batalha()\n", pib_per_capita1);
    
    printf("*Densidade Populacional: %.2f hab/km²* resultado da batalha()\n",Densidade_Populaciona1);
    
    printf("*Super Poder: %.2f* resultado da batalha()\n",Super_Poder1);

    
    // exibindo Carta 2
    printf("******Carta2******\n");

    printf("*Estado: %s*\n", estado2);

    printf("*Código: %s*\n", codigo_da_carta2);

    printf("*Nome da Cidade: %s*\n", nome_da_cidade2);

    printf("*População: %lu* resultado da batalha()\n", populacao2);

    printf("*Área: %.2f km²* resultado da batalha()\n", area_em_km2);

    printf("*%d Pontos Turísticos* resultado da batalha()\n", numero_de_pontos_turisticos2);

    printf("*PIB: %.2f bilhões de reais* resultado da batalha()\n", pib2);

    printf("*PIB per Capita: %.2f reais* resultado da batalha()\n", pib_per_capita2);
    
    printf("*Densidade Populacional: %.2f hab/km²* resultado da batalha()\n",Densidade_Populaciona2);

    printf("*Super Poder: %.2f* resultado da batalha()\n",Super_Poder2);

    return 0;
}