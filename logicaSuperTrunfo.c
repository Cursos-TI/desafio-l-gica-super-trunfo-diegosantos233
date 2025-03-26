#include <stdio.h>

int main() {
    
    int menu;
    
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
        
        
    // exibindo Carta 1
    printf("*******Carta 1*****\n");

    printf("*Estado: %s*\n", estado1);

    printf("*Código: %s*\n", codigo_da_carta1);

    printf("*Nome da Cidade: %s*\n", nome_da_cidade1);
    printf("*População: %lu*\n", populacao1);

    printf("*Área: %.2f km²*\n", area_em_km1);

    printf("*%d Pontos Turísticos*\n", numero_de_pontos_turisticos1);

    printf("*PIB: %.2f bilhões de reais*\n", pib1);
        
    printf("*PIB per Capita: %.2f reais*\n", pib_per_capita1);
        
    printf("*Densidade Populacional: %.2f hab/km²*\n",Densidade_Populaciona1);
        
    printf("*Super Poder: %.2f*\n",Super_Poder1);

        
    // exibindo Carta 2
    printf("******Carta2******\n");

    printf("*Estado: %s*\n", estado2);

    printf("*Código: %s*\n", codigo_da_carta2);

    printf("*Nome da Cidade: %s*\n", nome_da_cidade2);

    printf("*População: %lu*\n", populacao2);

    printf("*Área: %.2f km²*\n", area_em_km2);

    printf("*%d Pontos Turísticos*\n", numero_de_pontos_turisticos2);

    printf("*PIB: %.2f bilhões de reais*)\n", pib2);

    printf("*PIB per Capita: %.2f reais*\n", pib_per_capita2);
        
    printf("*Densidade Populacional: %.2f hab/km²*\n",Densidade_Populaciona2);

    printf("*Super Poder: %.2f*\n",Super_Poder2);
    
    // Menu
    
    printf("jogo Super Trunfo\n");
    printf("Escolha uma opção\n");
    printf("1. todos os Atributos\n");
    printf("2. Atributo: População\n");
    printf("3. Atributo: Área\n");
    printf("4. Atributo: Pontos Turísticos\n");
    printf("5. Atributo: PIB\n");
    printf("6. Atributo: PIB per Capita\n");
    printf("7. Atributo: Densidade Populacional\n");
    printf("8. Atributo: Super Poder\n");
    printf("9. 2 Atributo\n");
    printf("Escolha\n");
    scanf("%d", &menu);
    
    switch (menu)
    {
    case 1:
        if(populacao1 > populacao2){
            printf("No Atributos População a carta: %s tem: %lu pontos.\n",nome_da_cidade1,populacao1);
            printf("No Atributos População a carta: %s tem: %lu pontos.\n",nome_da_cidade2,populacao2);
            printf("No Atributos População a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if (populacao1 < populacao2){
            printf("No Atributos População a carta: %s tem: %lu pontos.\n",nome_da_cidade2,populacao2);
            printf("No Atributos População a carta: %s tem: %lu pontos.\n",nome_da_cidade1,populacao1);
            printf("No Atributos População a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos População Houve um empate!\n");
        }

        if(area_em_km1 > area_em_km2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,area_em_km1);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,area_em_km2);
            printf("No Atributos Área a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if (area_em_km1 < area_em_km2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,area_em_km2);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,area_em_km1);
            printf("No Atributos Área a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos Área Houve um empate!\n");
        }

        if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
            printf("No Atributos População a carta: %s tem: %d pontos.\n",nome_da_cidade1,numero_de_pontos_turisticos1);
            printf("No Atributos População a carta: %s tem: %d pontos.\n",nome_da_cidade2,numero_de_pontos_turisticos2);
            printf("No Atributos Pontos Turísticos a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if(numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2){
            printf("No Atributos População a carta: %s tem: %d pontos.\n",nome_da_cidade2,numero_de_pontos_turisticos2);
            printf("No Atributos População a carta: %s tem: %d pontos.\n",nome_da_cidade1,numero_de_pontos_turisticos1);
            printf("No Atributos Pontos Turísticos a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos Pontos Turísticos Houve um empate!\n");
        }
        
        if(pib1 > pib2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,pib1);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,pib2);
            printf("No Atributos PIB a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if(pib1 < pib2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,pib2);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,pib1);
            printf("No Atributos PIB a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos PIB Houve um empate!\n");
        }

        if(pib_per_capita1 > pib_per_capita2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,pib_per_capita1);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,pib_per_capita2);
            printf("No Atributos PIB per Capita a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if(pib_per_capita1 < pib_per_capita2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,pib_per_capita2);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,pib_per_capita1);
            printf("No Atributos PIB per Capita a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos PIB per Capita Houve um empate!\n");
        }
        
        if(Densidade_Populaciona1 < Densidade_Populaciona2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,Densidade_Populaciona1);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,Densidade_Populaciona2);
            printf("No Atributos Densidade Populacional a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if(Densidade_Populaciona2 < Densidade_Populaciona1){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,Densidade_Populaciona2);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,Densidade_Populaciona1);
            printf("No Atributos Densidade Populacional a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos Densidade Populacional Houve um empate!\n");
        }

        if(Super_Poder1 > Super_Poder2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,Super_Poder1);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,Super_Poder2);
            printf("No Atributos Super Poder a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if (Super_Poder1 < Super_Poder2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,Super_Poder2);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,Super_Poder1);
            printf("No Atributos Super Poder a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos Super Poder Houve um empate!\n");
        }
            
        break;
    
    case 2:
    if(populacao1 > populacao2){
        printf("No Atributos População a carta: %s tem: %lu pontos.\n",nome_da_cidade1,populacao1);
        printf("No Atributos População a carta: %s tem: %lu pontos.\n",nome_da_cidade2,populacao2);
        printf("No Atributos População a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

    }else if (populacao1 < populacao2){
        printf("No Atributos População a carta: %s tem: %lu pontos.\n",nome_da_cidade2,populacao2);
        printf("No Atributos População a carta: %s tem: %lu pontos.\n",nome_da_cidade1,populacao1);
        printf("No Atributos População a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
    }else{
        printf("No Atributos População Houve um empate!\n");
    }

        break;

    case 3:
        if(area_em_km1 > area_em_km2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,area_em_km1);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,area_em_km2);
            printf("No Atributos Área a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if (area_em_km1 < area_em_km2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,area_em_km2);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,area_em_km1);
            printf("No Atributos Área a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos Área Houve um empate!\n");
        }

        break;
    
    case 4:
        if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
            printf("No Atributos População a carta: %s tem: %d pontos.\n",nome_da_cidade1,numero_de_pontos_turisticos1);
            printf("No Atributos População a carta: %s tem: %d pontos.\n",nome_da_cidade2,numero_de_pontos_turisticos2);
            printf("No Atributos Pontos Turísticos a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if(numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2){
            printf("No Atributos População a carta: %s tem: %d pontos.\n",nome_da_cidade2,numero_de_pontos_turisticos2);
            printf("No Atributos População a carta: %s tem: %d pontos.\n",nome_da_cidade1,numero_de_pontos_turisticos1);
            printf("No Atributos Pontos Turísticos a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos Pontos Turísticos Houve um empate!\n");
        }
        
        break;
    
    case 5:
        if(pib1 > pib2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,pib1);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,pib2);
            printf("No Atributos PIB a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if(pib1 < pib2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,pib2);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,pib1);
            printf("No Atributos PIB a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos PIB Houve um empate!\n");
        }
        
        break;
    
    case 6:
        if(pib_per_capita1 > pib_per_capita2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,pib_per_capita1);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,pib_per_capita2);
            printf("No Atributos PIB per Capita a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if(pib_per_capita1 < pib_per_capita2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,pib_per_capita2);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,pib_per_capita1);
            printf("No Atributos PIB per Capita a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos PIB per Capita Houve um empate!\n");
        }

        break;

    case 7:
        if(Densidade_Populaciona1 < Densidade_Populaciona2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,Densidade_Populaciona1);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,Densidade_Populaciona2);
            printf("No Atributos Densidade Populacional a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if(Densidade_Populaciona2 < Densidade_Populaciona1){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,Densidade_Populaciona2);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,Densidade_Populaciona1);
            printf("No Atributos Densidade Populacional a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos Densidade Populacional Houve um empate!\n");
        }

        break;
    
    case 8:
        if(Super_Poder1 > Super_Poder2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,Super_Poder1);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,Super_Poder2);
            printf("No Atributos Super Poder a carta %s abateu a carta %s\n",nome_da_cidade1,nome_da_cidade2);

        }else if (Super_Poder1 < Super_Poder2){
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade2,Super_Poder2);
            printf("No Atributos População a carta: %s tem: %f pontos.\n",nome_da_cidade1,Super_Poder1);
            printf("No Atributos Super Poder a carta %s abateu a carta %s\n",nome_da_cidade2,nome_da_cidade1);
        }else{
            printf("No Atributos Super Poder Houve um empate!\n");
        }

        break;

    case 9:
         
    
        // resultado da batalha
         int resultado1;
         int resultado2;
        
         int corporação1;
         int corporação2;
        
        printf("escolheu um atributo\n");
        printf("1. Atributo: População\n");
        printf("2. Atributo: Área\n");
        printf("3. Atributo: Pontos Turísticos\n");
        printf("4. Atributo: PIB\n");
        printf("5. Atributo: PIB per Capita\n");
        printf("6. Atributo: Densidade Populacional\n");
        printf("7. Atributo: Super Poder\n");
        printf("Escolha\n");
        scanf("%d",&corporação1);
        
        switch (corporação1)
        {
        case 1:
            resultado1 = populacao1 > populacao2 ? 1: 0;
            break;
        case 2:
            resultado1 = area_em_km1 > area_em_km2 ? 1: 0;
            break;
        
        case 3:
            resultado1 = numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? 1: 0;
            break;

        case 4:
            resultado1 = pib1 > pib2 ? 1: 0;
            break;

        case 5:
            resultado1 = pib_per_capita1 > pib_per_capita2 ? 1: 0;
            break;
        
        case 6:
            resultado1 = Densidade_Populaciona1 < Densidade_Populaciona2 ? 1: 0;
            break;
            
        case 7:
            resultado1 = Super_Poder1 > Super_Poder2 ? 1: 0;
            break;
        
        default:
            printf("opção inválida!");
            break;
        }
    
        printf("escolheu um atributo\n");
        printf("1. Atributo: População\n");
        printf("2. Atributo: Área\n");
        printf("3. Atributo: Pontos Turísticos\n");
        printf("4. Atributo: PIB\n");
        printf("5. Atributo: PIB per Capita\n");
        printf("6. Atributo: Densidade Populacional\n");
        printf("7. Atributo: Super Poder\n");
        printf("Escolha\n");
        scanf("%d",&corporação2);
        
        if (corporação1 == corporação2)
        {
            printf("Você escolheu o mesmo atributo!");
        }else{
        
            switch (corporação2)
            {
            case 1:
                resultado2 = populacao1 > populacao2 ? 1: 0;
                break;
            
            case 2:
                resultado2 = area_em_km1 > area_em_km2 ? 1: 0;
                break;
            case 3:
                resultado2 = numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? 1: 0;
                break;
            
            case 4:
                resultado2 = pib1 > pib2 ? 1: 0;
                break;

            case 5:
                resultado2 = pib_per_capita1 > pib_per_capita2 ? 1: 0;
                break;

                case 6:
                    resultado2 = Densidade_Populaciona1 < Densidade_Populaciona2 ? 1: 0;
                break;

            case 7:
                resultado2 = Super_Poder1 > Super_Poder2 ? 1: 0;
                break;

            default:
             printf("opção inválida!\n");
                break;
            }
        
    
        }

        if (corporação1 && corporação2)
        {
            printf("Parabiens, você venceu\n!");
        
        }else if (corporação1 != corporação2)
        {
            printf("Empatou!n");
        }else{
            printf("Infelizmente, você perdeu!n");
        }

        break;
        
    
    return 0;
}