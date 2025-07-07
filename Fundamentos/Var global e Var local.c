#include <stdio.h>
int x_global=10;
int main()
{
 int x_local=5;
  printf (" Variável global: %d\n Variável local: %d\n", x_global, x_local);
  //ou dois printf, 1 pra cada variável.
  return 0;
  
}