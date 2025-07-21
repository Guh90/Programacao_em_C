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
//Declaração de um coordenador da struct Pessoa

struct Veiculo carro;

//Usuario irá preencher
printf("Informe a marca do veículo\n ");
fgets(carro.Marca, sizeof(carro.Marca), stdin);
printf("Informe o modelo do veiculo\n ");
fgets(carro.Modelo, sizeof(carro.Modelo), stdin);
printf("Informe o ano do veiculo\n ");
scanf("%d", &carro.Ano);
printf ("Qual o valor do veiculo?\n");
scanf("%f", &carro.Valor);
printf("##Dados do Veículo##\n");
printf("%s",&carro.Marca);
printf("%s",&carro.modelo);
printf("%d",&carro.ano);
printf("%f",&carro.valor);
return 0;
}