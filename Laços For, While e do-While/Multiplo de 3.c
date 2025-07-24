#include <stdio.h>

int main() {
    int x;
    printf("Números entre 1 e 50 que são múltiplos de 3:\n");
    for (int x = 1; x <= 50; x++)
    {
        if (x % 3 == 0) // Verifica se o número é múltiplo de 3
        { 
            printf("%d\n", x);
        }
    }

    return 0;
}
