#include <stdio.h>
int main()
{
 int opcoes;

    printf("menu:\n");
    printf("Opção 1 - for\n");
    printf("Opção 2 - while\n");
    printf("Opção 3 - do-while\n");
    printf("Escolha um laço de sua preferencia: ");
    scanf("%d", &opcoes);
    
    switch(opcoes)
    {
        case 1:
            printf("Você escolheu a opção For.\n");
          
{
 int num, num_pares = 0;
 
    for(int contador=1; contador <=10; contador++)
    {
        printf("Digite o %d numero:\n ",contador);
       scanf("%d", &num);
       getchar();
        if(num % 2 == 0) // Verifica se o número é par
        {
           num_pares++;
        }
    }

   printf("Quantidade de números pares digitados: %d\n e foi resolvido usando o laço For", num_pares);
   return 0;
}
            break;
        case 2:
            printf("Você escolheu a opção while.\n");
            {
 int num, num_pares = 0, contador=1;

    while(contador <= 10)
    {
        printf("Digite o %d numero:\n ",contador);
       scanf("%d", &num);
       getchar();
        if(num % 2 == 0) // Verifica se o número é par
        {
           num_pares++;
        }
        contador++;
    }
   printf("Quantidade de números pares digitados: %d\n e foi resolvido com o laço while", num_pares);
   return 0;
}
            break;
        case 3:
            printf("Você escolheu a opção do-while.\n");
            {
 int num, num_pares = 0, contador=1;

    do {
        printf("Digite o %d numero:\n ",contador);
       scanf("%d", &num);
       getchar();
        if(num % 2 == 0) // Verifica se o número é par
        {
           num_pares++;
        }
        contador++;
      }
      while (contador <= 10);

   printf("Quantidade de números pares digitados foi: %d\n e foi resolvido usando o laço do-while", num_pares);
   return 0;
}
            break;
        default:
            printf("Opção inválida.\n");
    }
   return 0;
}