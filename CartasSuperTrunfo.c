#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1 [50];
  char codigocarta1 [50];
  char nome1 [50];
  int populacao1;
  float areaemkm1;
  float pib1;
  int numerodepontosturisticos1;

  char estado2[50] ;
  char codigocarta2 [50] ;
  char nome2 [50] ;
  int populacao2 ;
  float areaemkm2 ;
  float pib2;
  int numeroepontosturisticos2 ;

 // Área para entrada de dados
  printf ("Digite o Estado\n" );
  scanf ("%s" , estado1);

  printf ("Digite o Codigo da carta\n");
  scanf ("%s", codigocarta1);

  printf ("Digite o nome\n");
  scanf ("%s", nome1);

  printf ("digite a população\n");
  scanf ("%d", &populacao1 );

  printf ("Digite a área en km\n");
  scanf ("%f", &areaemkm1 );

  printf ("Digite o PIB\n");
  scanf ("%f" ,&pib1 );

  printf ("Digite o número de pontos turisticos\n");
  scanf ("%d" ,&numerodepontosturisticos1);

  printf ("Digite o Estado\n");
  scanf ("%s" ,estado2 );

  printf ("Digite o Codigo da carta\n");
  scanf ("%s" , codigocarta2 );

  printf ("Digite o nome\n");
  scanf ("%s" ,nome2 );

  printf ("digite a população\n");
  scanf ("%d" ,&populacao2 );

  printf ("Digite a área en km\n");
  scanf ("%f" ,&areaemkm2 );

  printf ("Digite o PIB\n");
  scanf ("%f" ,&pib2 );

  printf ("Digite o número de pontos turisticos\n");
  scanf ("%d" , &numeroepontosturisticos2);

  // Área para exibição dos dados da cidade

  printf ("estado %s", estado1 );

  printf ("codigo da carta %s",  codigocarta1);

  printf (" população %d", populacao1 );

  printf ("nome %s", nome1);

  printf ( " pib%f",  pib1 );

  printf ("areaemkm %f", areaemkm1);

   printf ("estado %s", estado2 );

   printf ("codigo da carta %s", codigocarta2);

   printf ("nome %s", nome2);

   printf (" população %d", populacao2 );

   printf ("areaemkm %f" , areaemkm2 );
   
   printf ( " pib%f",  pib2 );


return 0;
} 
