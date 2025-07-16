#include<stdio.h>
int main() 
{
//Declarando e já inicializando o vetor
int cont, numeros[5];
for (int cont = 0; cont < 5; cont++) 
 {
printf(" Digite o numero %d: ", cont+1);
scanf("%d",&numeros[cont]);
 }
 printf("Os numeros digitados foram\n");
 for (int cont = 0; cont < 5; cont++)
 {
     printf("Posição %d: %d\n",cont,numeros[cont]);
 }
return 0;
}

