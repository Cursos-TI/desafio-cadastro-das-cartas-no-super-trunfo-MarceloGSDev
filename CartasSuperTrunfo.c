#include <stdio.h>
   int main(){

   // Carta 1 - Definição das variáveis para a primeira cidade 
   char A; // Estado da cidade (ex: A, B, C, ..)
   char A01[6]; // Código da carta (ex: A01, B02, ...)
   char NomeDaCidade1[100]; // nome da cidade
   int populacao1; // número de habitantes da cidade
   float km21; // área da cidade em km²
   float PIB1; // PIB da cidade em bilhões de reais
   int NumeroDePontosTuristicos1; // números de pontos turisticos da cidade

   // Apresentação da carta 1 e coleta de informações:
   printf("*** Carta 1 ***\n");

   // Solicita e armazena o estado da cidade
   printf("Estado: \n");
   scanf(" %c", &A);

   // Solicita e armazena o codigo da cidade
   printf("Código: \n");
   scanf("%s", A01);

   getchar();

   // Solicita e armazena o nome da cidade
   printf("Cidade: \n");
   scanf("%s", NomeDaCidade1);
   
   // Solicita e armazena a populacao da cidade
   printf("População: \n");
   scanf("%d", &populacao1);

   // Solicita e armazena a area em km² da cidade
   printf("Área: \n");
   scanf("%f", &km21);

   // Solicita e armazena o PIB da cidade
   printf("PIB: \n");
   scanf("%f", &PIB1);
   
   // Solicita e armazena os numeros de pontos turisticos da cidade
   printf("Números de pontos turísticos: \n");
   scanf("%d", &NumeroDePontosTuristicos1);

   // Apresenta os dados coletados para a carta 1
   printf("Estado: %c\n", A);
   printf("Código: %s\n", A01);
   printf("Nome da Cidade: %s\n", NomeDaCidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", km21);
   printf("PIB: %.2f bilhões de reais\n", PIB1);
   printf("Número de pontos turísticos: %d\n", NumeroDePontosTuristicos1);

   // Carta 2 - Definição das variáveis para a primeira cidade 
   // Toda explicação do código da carta 1 serve também para a carta 2
   char B;
   char A02[6];
   char NomeDacidade2[100];
   int populacao2;
   float km22;
   float PIB2;
   int NumeroDePontosTuristicos2;

   printf("*** Carta 2 ***\n");

   printf( "Estado: \n");
   scanf(" %c", &B);
   getchar();

   printf("Código: \n");
   scanf("%s", A02);
   getchar();

   printf("Cidade: \n");
   scanf("%s", NomeDacidade2);

   printf("População: \n");
   scanf("%d", &populacao2);

   printf("Área: \n");
   scanf("%f", &km22);

   printf("PIB: \n");
   scanf("%f", &PIB2);

   printf("Números de pontos turísticos: \n");
   scanf("%d", &NumeroDePontosTuristicos2);

   printf("Estado: %c\n", B);
   printf("Código: %s\n", A02);
   printf("Nome da Cidade: %s\n", NomeDacidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", km22);
   printf("PIB: %.2f bilhões de reais\n", PIB2);
   printf("Número de pontos turísticos: %d\n", NumeroDePontosTuristicos2);

   return 0;

   }