#include <stdio.h>


int main() {

    // Declarando as variaveis da primeira carta

    char estado1;
    char codigo1[5];
    char cidade1[25];
    int populacao1;
    float area1 = 0;
    float pib1 = 0;
    int pontos_t1 = 0;

    // Declarando as variaveis da segunda carta.

    char estado2;
    char codigo2[5];
    char cidade2[25];
    int populacao2;
    float area2 = 0;
    float pib2 = 0;
    int pontos_t2 = 0;

    // pedir ao usuario a digitação dos dados da carta 1.

    printf("Digite um estado com uma letra de A - H:\n");
    scanf("%c",&estado1);

    printf("Digite um codigo para a sua cidade com a letra do estado seguido de um numero de 01 - 04:\n");
    scanf("%4s", codigo1);

    printf("Digite uma cidade1:\n");
    scanf("%s", &cidade1);

    printf("Digite a população da sua cidade:\n");
    scanf("%d",&populacao1);

    printf("Digite a area em km² da sua cidade:\n");
    scanf("%f",&area1);

    printf("Digite o PIB da sua cidade:\n");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turisticos da sua cidade:\n");
    scanf("%d",&pontos_t1);
    
    // pedir ao usuario a digitação dos dados da carta 2.

    printf("Digite um estado com uma letra de A - H:\n");
    scanf("%c",&estado2);

    printf("Digite um codigo para a sua cidade com a letra do estado seguido de um numero de 01 - 04:\n");
    scanf("%4s", codigo2);

    printf("Digite uma cidade2:\n");
    scanf("%s", &cidade2);

    printf("Digite a população da sua cidade:\n");
    scanf("%d",&populacao2);

    printf("Digite a area em km² da sua cidade:\n");
    scanf("%f",&area2);

    printf("Digite o PIB da sua cidade:\n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turisticos da sua cidade:\n");
    scanf("%d",&pontos_t2);





    return 0;
}
