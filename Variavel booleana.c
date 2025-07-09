// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool maior = true;
    bool menor = false;
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    
    if (idade >= 18) {
        printf("Você é maior de idade");
    }
    else{
        printf("Voocê é menor de idade.");
    }
    
    return 0;
}