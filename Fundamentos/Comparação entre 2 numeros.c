#include <stdio.h>

int main() 
{
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("O numero maior é: %d.\n", num1);
    } 
    else //não precisa da condição
    {
        printf("O numero maior é: %d.\n", num2);
    } 
    if (num1 == num2){
        printf("Os números são iguais.\n");
    }

    return 0;
}