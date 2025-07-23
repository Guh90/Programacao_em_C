#include <stdio.h>

int main() 
{
int idade = 37;
int *pnt_idade;

pnt_idade = &idade;

printf("A Idade e: %d", idade);
printf("\nO endereço fisico da idade e: %p", &idade);
printf("\nO valor da variavel pnt_idade que armazenou o endereco fisico de idade: %p\n",
pnt_idade);
printf("\nO valor armazenado no endereco apontado por ponteiro: %d", *pnt_idade);

return 0;
};