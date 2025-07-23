#include <stdio.h>
#include <string.h>

// Função principal
int main() {
    // Nomes das categorias
    char categorias[4][20] = {
        "Processadores",
        "Placas de Vídeo",
        "Memórias RAM",
        "Armazenamento"
    };

    // Nomes dos produtos por categoria
    char produtos[4][3][20] = {
        {"Intel i5", "AMD Ryzen 5", "Intel i7"},
        {"NVIDIA RTX 3060", "AMD RX 6600", "NVIDIA GTX 1650"},
        {"Corsair 8GB", "Kingston 16GB", "Crucial 32GB"},
        {"SSD 240GB", "HDD 1TB", "SSD NVMe 1TB"}
    };

    // Matriz de estoque [categoria][produto]
    int estoque[4][3] = {0}; // Inicializa com zero

    int opcao;

    do {
        printf("\n===== MENU ESTOQUE INFO TECH =====\n");
        printf("1 - Exibir estoque completo\n");
        printf("2 - Atualizar quantidade de um produto\n");
        printf("3 - Verificar produtos com estoque zero\n");
        printf("4 - Exibir total de produtos por categoria\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\n--- ESTOQUE COMPLETO ---\n");
            for (int lin = 0; lin < 4; lin++) {
                printf("%s:\n", categorias[lin]);
                for (int col = 0; col < 3; col++) {
                    printf("  %s: %d unidades\n", produtos[lin][col], estoque[lin][col]);
                }
            }

        } else if (opcao == 2) {
            int cat, prod, nova_qtd;
            printf("\n--- ATUALIZAR PRODUTO ---\n");
            printf("Informe a categoria (0 a 3): ");
            scanf("%d", &cat);
            printf("Informe o produto (0 a 2): ");
            scanf("%d", &prod);
            if (cat >= 0 && cat < 4 && prod >= 0 && prod < 3) {
                printf("Nova quantidade para %s - %s: ", categorias[cat], produtos[cat][prod]);
                scanf("%d", &nova_qtd);
                estoque[cat][prod] = nova_qtd;
                printf("Quantidade atualizada!\n");
            } else {
                printf("Categoria ou produto inválido!\n");
            }

        } else if (opcao == 3) {
            printf("\n--- VERIFICAÇÃO DE ESTOQUE ZERADO ---\n");
            for (int lin = 0; lin < 4; lin++) {
                for (int col = 0; col < 3; col++) {
                    if (estoque[lin][col] == 0) {
                        printf("⚠️ %s - %s está com estoque ZERO!\n", categorias[lin], produtos[lin][col]);
                    }
                }
            }

        } else if (opcao == 4) {
            printf("\n--- TOTAL DE PRODUTOS POR CATEGORIA ---\n");
            for (int lin = 0; lin < 4; lin++) {
                int total = 0;
                for (int col = 0; col < 3; col++) {
                    total += estoque[lin][col];
                }
                printf("%s: %d produtos em estoque\n", categorias[lin], total);
            }

        } else if (opcao != 0) {
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("\nSaindo do programa... Até mais! 👋\n");
    return 0;
}