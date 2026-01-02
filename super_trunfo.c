#include <stdio.h>

 int main() {

    //variaveis carta 1
    char estado1[30];
    char codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //variaveis carta 2
    char estado2[30];
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;


    //cadastro da carta 1

     printf("---cadastro da carta 1 ---\n");

     printf("estado:\n");
     scanf(" %s", estado1);

     printf("codigo (ex: a01): \n");
     scanf(" %s",  codigo1);

     printf("nome da cidade: \n");
     scanf(" %s", nomecidade1);
     
     printf("populacao: \n");
     scanf(" %d", &populacao1 );
    
     printf("Area(km2): \n");
     scanf(" %f", &area1);
    
     printf("pib: \n");
     scanf(" %f", &pib1);

     printf("pontos turisticos: \n");
     scanf(" %d", &pontosturisticos1);

     
     //cadastro carta 2
     printf("\n--- cadastro da carta 2 ---\n");

     printf("estado:\n");
     scanf(" %s", estado2);

     printf("codigo (ex:a01):\n");
     scanf(" %s", codigo2);

     printf("nome da cidade:\n");
     scanf(" %s", nomecidade2);
    
    printf("populacao:\n");
    scanf("%d", &populacao2);

    printf("area (km2):\n");
    scanf(" %f", &area2);

    printf("pontosturisticos2:\n");
    scanf(" %d", &pontosturisticos2);


    return 0;


     


 }

