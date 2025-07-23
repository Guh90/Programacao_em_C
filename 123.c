#include <stdio.h>
#include <stdlib.h>

int main() {
// Alocação dinâmica de memória para uma variável do tipo inteiro
int *pnt_idade = (int *) malloc(sizeof(int));

*pnt_idade = 37;

printf("A Idade é: %d", *pnt_idade);
printf("\nO endereço físico alocado dinamicamente: %p", pnt_idade);

// Libera a memória alocada
free(pnt_idade);

return 0;
}