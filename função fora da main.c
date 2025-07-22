#include <stdio.h>

float somarNumeros(int num1, int num2)
{
return (num1 + num2);
}

int main() 
{
int num1, num2, soma;
printf("Digite a primeiro numero: ");
scanf("%d", &num1);
getchar();
printf("Digite a segundo numero: ");
scanf("%d", &num2);

soma = somarNumeros(num1, num2);

printf("A soma dos numero é: %d\n",
soma);

return 0;
};