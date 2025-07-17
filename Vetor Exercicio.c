#include <stdio.h>
#include <string.h>

int main() 
{
    int quantidade;

    printf("Quantos nomes voce gostaria de cadastrar? \n");
    scanf("%d", &quantidade);
    getchar();//limpa a memoria
    
    char nomes[quantidade][100];
    
    for (int i = 0; i < quantidade; i++)
    {
       printf("Digite o nome completo da pessoa %d: ", i + 1);
        fgets(nomes[i],100, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }
    {
    printf("\nNomes cadastrados:\n");
    }
    for (int i = 0; i < quantidade; i++) 
    {
        printf("%d. %s\n", i + 1, nomes[i]);
    }
    return 0;
}
