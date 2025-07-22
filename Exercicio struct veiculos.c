#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

// Declaração da estrutura
struct Veiculo
{
char Marca[50],Modelo[20];
int Ano;
float Valor;

};
int main() {
//Declaração de uma variável do tipo struct Veiculo

struct Veiculo carro;

//Usuario irá preencher
printf("Informe a marca do veículo\n ");
fgets(carro.Marca, sizeof(carro.Marca), stdin);
printf("Informe o modelo do veiculo\n ");
fgets(carro.Modelo, sizeof(carro.Modelo), stdin);
printf("Informe o ano do veiculo\n ");
scanf("%d", &carro.Ano);
getchar(); // Limpa o buffer do teclado
printf ("Qual o valor do veiculo?\n ");
scanf("%f", &carro.Valor);
getchar(); // Limpa o buffer do teclado
printf("\n::Dados do Veículo::\n");
printf("\n\tMarca: %s\n", carro.Marca);
printf("\tModelo: %s\n", carro.Modelo);
printf("\tAno: %d\n", carro.Ano);
printf("\n\tValor: %.2f\n", carro.Valor);
return 0;
}