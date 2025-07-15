#include <stdio.h>
int main()
{
 int num, num_pares = 0, contador=1;

    do {
        printf("Digite o %d numero:\n ",contador);
       scanf("%d", &num);
       getchar();
        if(num % 2 == 0) // Verifica se o número é par
        {
           num_pares++;
        }
        contador++;
      }
      while (contador <= 10);

   printf("Quantidade de números pares digitados: %d\n", num_pares);
   return 0;
}