#include <stdio.h>

int main(){
    char estado1, estado2;
    int codigo1, codigo2;
    char cidade1[50];
    char cidade2[50];
    int populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;
    int npt1; //npt é número de pontos turísticos
    int npt2;

    printf("Digite o Estado da carta 1: %c\n", estado1);
    scanf("%c", &estado1);

    printf("Digite o estado da carta 2: %c\n", estado2);
    scanf("%c", &estado2);

    printf("Digite o Código da carta 1: %s\n", codigo1);
    scanf("%s", &codigo1);

    printf("Digite o Código da carta 2: %s\n", codigo2);
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade da carta 1: %s\n", cidade1);
    scanf("%s", cidade1);

    printf("Digite o nome da Cidade da carta 2: %s\n", cidade2);
    scanf("%s", cidade2);

    printf("Qual o numero da população carta 1: %d\n", populacao1);
    scanf("%d", &populacao1);

    printf("Qual o numero da população carta 2: %d\n", populacao2);
    scanf("%d", &populacao2);

    printf("Qual a Área carta do Estado 1? %f\n", area1);
    scanf("%f", &area1);

    printf("Qual a Área carta do Estado 2? %f\n", area2);
    scanf("%f", &area2);

    printf("Qual o PIB da região da carta 1? %f\n", pib1);
    scanf("%f", &pib1);

    printf("Qual o PIB da região da carta 2? %f\n", pib2);
    scanf("%f", &pib2);

    printf("Quantidade de pontos Turíticos: %d\n", npt1);
    scanf("%d", &npt1);

    printf("Quantidade de pontos Turíticos: %d\n", npt2);
    scanf("%d", &npt2);

    printf("Carta 1:\n" "Estado: %c\n" "Código: %s\n", estado1, codigo1);
    printf("Nome da Cidade: %d" "População: %d", cidade1, populacao1);
    printf("Área: %f Km²\n" "PIB: %f bilhões de reais\n" , area1, pib1);
    printf("Número de Pontos Turísticos: %d", npt1);

    printf("Carta 2:\n" "Estado: %c\n" "Código: %s\n", estado2, codigo2);
    printf("Nome da Cidade: %d" "População: %d", cidade2, populacao2);
    printf("Área: %f Km²\n" "PIB: %f bilhões de reais\n" , area2, pib2);
    printf("Número de Pontos Turísticos: %d", npt2);

    return 0;