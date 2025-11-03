#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1 [5];
    char codigo2 [5];
    char cidade1 [50];
    char cidade2 [50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int npt1, npt2;

    //npt é número de pontos turísticos.

    //Perguntas da primeira carta.

    printf("Digite a letra que representa o Estado da carta 1: ");
    scanf(" %c", &estado1);
    

    printf("Digite o Código do Estado da carta 1: ");
    scanf("%s", codigo1);
    
    
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade1);
    
    
    printf("Qual o numero da população carta 1: ");
    scanf("%d", &populacao1);
    

    printf("Qual a Área do Estado da carta 1? ");
    scanf("%f", &area1);
    

    printf("Qual o PIB da região da carta 1? ");
    scanf("%f", &pib1);
    

    printf("Qual o número de Pontos Turísticos da carta 1? ");
    scanf("%d", &npt1);
    
    //Perguntas da segunda carta.

    printf("Digite a letra que representa o Estado da carta 2: ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código do Estado da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade2);

    printf("Qual o numero da população carta 2: ");
    scanf("%d", &populacao2);

    printf("Qual a Área do Estado da carta 2? ");
    scanf("%f", &area2);
    
    printf("Qual o PIB da região da carta 2? ");
    scanf("%f", &pib2);
    
    printf("Qual o número de Pontos Turísticos da carta 2? ");
    scanf("%d", &npt2);


    /* Informações das duas cartas serão impresas com o printf
    no cidade1, cidade2 e codigo1, codigo2 não precisa colocar "&" já é o endereço.
    */

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", npt1);
    
    //informações da segunda carta.

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d", npt2);

    return 0;

}