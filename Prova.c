//Gustavo do Amaral Portela
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char nome_completo[50];
    float nota_1,nota_2,media_notas;
    const float media_minima=6;
    bool media=true;
    printf("Digite seu nome completo: ");
    fgets(nome_completo,sizeof(nome_completo), stdin);
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota_1);
    printf("digite a segunda nota do aluno: ");
    scanf("%f", &nota_2);
    media_notas = (nota_1 + nota_2) / 2;
    printf("A media do aluno é: %.2f\n", media_notas);
    if(media_notas >= media_minima)
    {
        printf("Aprovado \n");
    }
    else
    {
        printf("Reprovado \n");
    }
    return 0;
}
