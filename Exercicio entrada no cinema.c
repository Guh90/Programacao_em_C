#include <stdio.h>
#include <stdbool.h>

int main()
{
    int idade, tem_ingresso;
    
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("Você tem ingresso? (1 para sim, 0 para não): ");
    scanf("%d", &tem_ingresso);
    if(tem_ingresso != 0 && tem_ingresso != 1) 
    {
        printf("Opção inválida.\n");
    }
    
    if (idade >= 14 && tem_ingresso==1) 
    {
        printf("Você pode entrar no cinema.\n");
    }
    else if (idade >= 14 && tem_ingresso==0)
    {
        printf("Você não pode entrar no cinema, pois não tem ingresso.\n");
    }
    else if (idade < 14 && tem_ingresso >= 0)
    {
        printf("Você não pode entrar no cinema, pois é menor de idade.\n");
    }
    return 0;
}