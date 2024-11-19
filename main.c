#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;

    // Lê as dimensões da matriz
    printf("Digite as dimensões da matriz (linhas e colunas): ");
    if (scanf("%d %d", &linhas, &colunas) != 2 || linhas <= 0 || colunas <= 0) {
        printf("[matriz vazia]\n");
        return 0; // Saída em caso de matriz inválida
    }

    // Aloca memória dinamicamente para a matriz
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro de alocação de memória\n");
        return 1;
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro de alocação de memória\n");
            return 1;
        }
    }

    // Lê os dados da matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibe os dados da matriz
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
