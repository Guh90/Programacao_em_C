#include <stdio.h>
#include <string.h>

// Declaração da estrutura
struct Funcionario
{
char nome[100];
char setor[30];
char situacao[20];
int matricula;

};
int main() {
//Declaração de um coordenador da struct Pessoa

struct Funcionario coordenador;
struct Funcionario lider;

// Inicializando valores fixos
strcpy(coordenador.nome, "Gusttavo Portella");
strcpy(coordenador.setor, "Administração");
strcpy(coordenador.situacao, "Ativo");
coordenador.matricula = 869;

// Exibição dos dados do Coordenador
printf("::: Coordenador :::\n");
printf("Nome: %s\nSetor: %s\nSituacao: %s\nMatricula: %d\n", coordenador.nome,
coordenador.setor, coordenador.situacao,coordenador.matricula);

// Inicializando valores fixos
strcpy(lider.nome, "Gusttavo Amaral");
strcpy(lider.setor, "Operações");
strcpy(lider.situacao, "inativo");
lider.matricula = 870;

// Exibição dos dados do Coordenador
printf("\n\n::: Lider :::\n");
printf("Nome: %s\nSetor: %s\nSituação: %s\nMatricula: %d\n", lider.nome,
lider.setor, lider.situacao,lider.matricula);
return 0;
}