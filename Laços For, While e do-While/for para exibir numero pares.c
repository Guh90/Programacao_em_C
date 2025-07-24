#include <stdio.h>
int main()
{
 int num, num_pares = 0;
 
    for(int contador=1; contador <=10; contador++)
    {
        printf("Digite o %d numero:\n ",contador);
       scanf("%d", &num);
       getchar();
        if(num % 2 == 0) // Verifica se o número é par
        {
           num_pares++;
        }
    }

   printf("Quantidade de números pares digitados: %d\n", num_pares);
   return 0;
}