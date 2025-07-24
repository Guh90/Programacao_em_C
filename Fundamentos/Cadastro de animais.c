#include <stdio.h>
#include <string.h>

struct Animal 
{
    char nome[50];
    char especie[30];
    char raca[30];
    int idade;
    float peso;
};

int main() 
{
    struct Animal pets[2];
    // Coleta dos dados
    printf("\n🐕🐈 CADASTRO DE ANIMAIS 🦮🐱\n");
    
for(int cont=0;cont<2;cont++)
    {
    printf("\nDigite os dados do animal:\n");

    printf("\nNome: ");
    fgets(pets[cont].nome, sizeof(pets[cont].nome), stdin);
    pets[cont].nome[strcspn(pets[cont].nome, "\n")] = '\0';
    
    printf("\nEspécie: ");
    fgets(pets[cont].especie, sizeof(pets[cont].especie), stdin);
    pets[cont].especie[strcspn(pets[cont].especie, "\n")] = '\0';
    
    printf("\nRaça: ");
    fgets(pets[cont].raca, sizeof(pets[cont].raca), stdin);
    pets[cont].raca[strcspn(pets[cont].raca, "\n")] = '\0';
    
    printf("\nIdade: ");
    scanf("%d", &pets[cont].idade);
    getchar();
    printf("\nPeso em (kg): ");
    scanf("%f", &pets[cont].peso);
    getchar();
    }

    // Exibição dos dados
    for (int cont = 0; cont < 2; cont++)
    {
    printf("\n🐺:::Dados do Animal Cadastrados:::😸\n");
    printf("Nome: %s", pets[cont].nome);
    printf("Espécie: %s", pets[cont].especie);
    printf("Raça: %s", pets[cont].raca);
    printf("Idade: %d anos\n", pets[cont].idade);
    printf("Peso: %.2f kg\n", pets[cont].peso);
    }

    return 0;
}