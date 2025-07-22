#include <stdio.h>

int main() {
    int idade[3];
    char nome_completo[3][150];
    float altura[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome da %d pessoa: ", i + 1);
        fgets(nome_completo[i], sizeof(nome_completo[i]), stdin);

        printf("Digite a idade da %da pessoa: ", i + 1);
        scanf("%d", &idade[i]);
        getchar();
        printf("Digite a altura da %da pessoa: ", i + 1);
        scanf("%f", &altura[i]);

        getchar(); // Limpa o buffer para próxima leitura do nome
    }

    printf("\n--- DADOS DAS PESSOAS ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s", nome_completo[i]);
        printf("Endereço da variável nome %d: %p\n", i, (void*)&nome_completo[i]);
        printf("Idade: %d\n", idade[i]);
        printf("Endereço da variável idade %d: %p\n", i, (void*)&idade[i]);
        printf("Altura: %.2f\n", altura[i]);
        printf("Endereço da variável altura %d: %p\n\n", i, (void*)&altura[i]);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int idade[3];
    char nome_completo[3][150];
    float altura[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome da %d pessoa: ", i + 1);
        fgets(nome_completo[i], sizeof(nome_completo[i]), stdin);

        printf("Digite a idade da %da pessoa: ", i + 1);
        scanf("%d", &idade[i]);
        getchar();
        printf("Digite a altura da %da pessoa: ", i + 1);
        scanf("%f", &altura[i]);

        getchar(); // Limpa o buffer para próxima leitura do nome
    }

    printf("\n--- DADOS DAS PESSOAS ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s", nome_completo[i]);
        printf("Endereço da variável nome %d: %p\n", i, (void*)&nome_completo[i]);
        printf("Idade: %d\n", idade[i]);
        printf("Endereço da variável idade %d: %p\n", i, (void*)&idade[i]);
        printf("Altura: %.2f\n", altura[i]);
        printf("Endereço da variável altura %d: %p\n\n", i, (void*)&altura[i]);
    }

    return 0;
}
