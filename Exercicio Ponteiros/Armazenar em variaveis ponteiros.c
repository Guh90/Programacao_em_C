#include <stdio.h>
#include <string.h>

typedef struct {
    int idade;
    char nome[100];
    float altura;
} Pessoa;

int main() {
    Pessoa alunos[3];

    // Ponteiros para os campos de cada aluno
    int *pnt_Idade[3];
    float *pnt_Altura[3];
    char *pnt_Nome[3];

    // Entrada de dados e armazenamento dos ponteiros
    for (int cont = 0; cont < 3; cont++) {
        printf("\n_____ Aluno(a) %d ________\n", cont + 1);

        printf("Digite o nome completo do(a) Aluno(a): ");
        fgets(alunos[cont].nome, sizeof(alunos[cont].nome), stdin);
        alunos[cont].nome[strcspn(alunos[cont].nome, "\n")] = '\0'; // Remove o '\n'

        printf("Digite a idade do(a) Aluno(a): ");
        scanf("%d", &alunos[cont].idade);
        getchar(); // Limpa buffer

        printf("Digite a altura do(a) Aluno(a): ");
        scanf("%f", &alunos[cont].altura);
        getchar(); // Limpa buffer

        // Armazena os endereços de memória
        pnt_Nome[cont] = alunos[cont].nome;//string já é um vetor, por isso não precisa do "&"
        pnt_Idade[cont] = &alunos[cont].idade;
        pnt_Altura[cont] = &alunos[cont].altura;
    }

    // Exibição organizada dos dados usando ponteiros
    printf("\n===== DADOS DOS ALUNOS COM ENDEREÇOS =====\n");
    for (int cont = 0; cont < 3; cont++) {
        printf("\n--- Aluno(a) %d ---\n", cont + 1);
        printf("Nome: %s\n", pnt_Nome[cont]);// string não precisa do "*"
        printf("Endereço do nome: %p\n", &*pnt_Nome[cont]);

        printf("Idade: %d\n", *pnt_Idade[cont]);
        printf("Endereço da idade: %p\n", &*pnt_Idade[cont]);

        printf("Altura: %.2f\n", *pnt_Altura[cont]);
        printf("Endereço da altura: %p\n", &*pnt_Altura[cont]);
    }

    return 0;
}
