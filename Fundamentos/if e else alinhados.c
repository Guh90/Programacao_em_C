// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
   const int idade_minima = 18;
    
    printf("Digite sua idade: ");
    scanf("%d",&idade_minima);
    
    if (idade_minima>=18) 
    {
        printf("Você é maior de idade");
    
    if (idade_minima>60)
    {
        printf(" e idoso");
    }
    }
    else{
        printf("\nMenor de idade.");
    }
    
    return 0;
}