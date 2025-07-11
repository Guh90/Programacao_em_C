#include <stdio.h>
int main()
{
   int x, y;
printf("Entre com o numero: ");
   scanf("%d", &x);
   for (y = 1; y <= 10; y++)
   {
 printf("%d * %d = %d\n",x,y,x*y); // Exibe a tabuada de multiplicação
   }
    
   return 0;
}