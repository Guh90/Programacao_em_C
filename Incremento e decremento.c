#include <stdio.h>

int main()
{
   int passos = 0;
   
   printf("Passos iniciais: %d\n", passos);
   
   passos+=3;//simula os 3 passo para frente
   printf("Após 3 passos à frente: %d\n", passos);
   
   passos --;//simula 1 passo para trás
   printf("Após 1 passo para trás: %d\n", passos);
    return 0;
}