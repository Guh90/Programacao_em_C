#include <stdio.h>

int main() {
    int opcao =1;  // Inicializa com valor diferente de 0
    int num1, num2, resultado;

    while (opcao != 0)
    // Menu de opções
    {
        printf("\n👍Calculadora Simples✌\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) // Solicita os números apenas se a opção for válida.(1 a 4)
        {
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
        }

        switch (opcao) {
            case 1://bloco de soma
                resultado = num1 + num2;
                printf("Resultado: %d\n", resultado);
                break;
            case 2://bloco de subtração
                resultado = num1 - num2;
                printf("Resultado: %d\n", resultado);
                break;
            case 3://bloco de multiplicação
                resultado = num1 * num2;
                printf("Resultado: %d\n", resultado);
                break;
            case 4://bloco de divisão
                if (num2 != 0) // Verifica se o divisor é diferente de zero para evitar divisão por zero
                {
                    resultado = num1 / num2;
                    printf("Resultado: %d\n", resultado);
                } 
                else 
                {
                    printf("Erro: divisao por zero.\n"); // Evita divisão por zero
                }
                break;
            case 0:
                printf("Encerrando o programa...\n");// Encerra o loop
                break;
            default:
                printf("Opcao invalida! tente novamente.\n");// Caso a opção não seja válida volta ao menu
        }
    }

    return 0;
}