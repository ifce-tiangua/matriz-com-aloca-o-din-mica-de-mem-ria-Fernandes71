#include <stdio.h>
#include <stdlib.h>
int main(){

    int linha, coluna, **matriz;
    
    scanf("%d %d", &linha, &coluna);
    if(linha == 0 || coluna == 0){
        printf("[vazio]");
        return 0;
    }
    matriz = (int **)malloc(linha * sizeof(int));
        if(matriz == NULL){
        printf("Memória não alocada para as linhas.\n");
        return 1;
    }
    for (int i = 0; i < linha; i++){
    matriz[i] = (int *)malloc(coluna * sizeof(int));
        if(matriz[i] == NULL){
            printf("Memória não alocada para as colunas.\n");
            return 1;
        }
    }
        
    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

        for (int i = 0; i < linha; i++){
            free(matriz[i]);
        }

        free(matriz);
    
    return 0;
}
