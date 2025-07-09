#include <stdio.h>
#include <string.h> // biblioteca para reconhecer nomes e sobrenomes

int main()
{
  char nome_completo[50];
  char apelido[20];
  int idade;
  float altura;
  printf("Digite seu nome completo: ");
  fgets(nome completo,sizeof(nome_completo), stdin);
  printf("Digite seu apelido: ");
  scanf("é:%s", apelido);
  printf("Digite sua idade: ");
  scanf("%d", idade);
  printf("Qual sau altura? ");
  scanf("s%.2f", altura);
  printf("\nOla %s! seu apelido é: %s, sua idade é: %d, sua altura é: %.2f", nome_completo, apelido,idade, altura);
 
  return 0;
}