#include <stdio.h>

#define AZUL 1
#define VERMELHO 2

int main (){
    int cor ;

    printf ("cor azul digite 1 ou vermelha digite 2 ?\n");
    scanf ("%d", &cor);

       if (cor == AZUL)
    { printf ("a cor é azul\n");
    }
     
       else
     { printf ("a cor é vermelha\n");
    }
     return 0;

}