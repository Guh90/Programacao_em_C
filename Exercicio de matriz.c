#include <stdio.h>

int main() 
{
    int matriz[2][2];
    int lin, col;
    int soma = 0;
    int mult = 1;

    // Solicita os valores ao usuário
    printf("Digite os valores para a matriz 2x2:\n");

    for (lin = 0; lin < 2; lin++) 
    {
        for (col = 0; col < 2; col++) 
        {
            scanf("%d", &matriz[lin][col]);
            getchar();

            // Soma e multiplicação dos elementos
            soma=soma+matriz[lin][col];
           mult =mult*=matriz[lin][col];
        }
    }
    // Exibe a matriz
    printf("\nMatriz digitada:\n");
    for (lin = 0; lin < 2; lin++) 
    {
        for (col = 0; col < 2; col++) 
        {
            printf("%d\t", matriz[lin][col]);
        }
        printf("\n");
    }

    // Exibe os resultados
    printf("\nSoma de todos os elementos: %d\n", soma);
    printf("Produto de todos os elementos: %d\n", mult);

    return 0;
}
