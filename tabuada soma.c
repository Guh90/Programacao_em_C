#include <stdio.h>
int main()
{
   int x, y;
printf("Entre com o numero ");
   scanf("%d", &x);
   for (y = 1; y <= x; y++)
 printf("%d + %d = %d\n",x,y,x+y); // Exibe a tabuada de soma  
 
   return 0;
}