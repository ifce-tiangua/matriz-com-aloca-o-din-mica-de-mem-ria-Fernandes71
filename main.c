#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime_histograma(int* vendas[],int num_categorias);
void imprime_linha(int *venda);

int main(){
    int linha, coluna, i, j;
    scanf("%d",&linha);
    getchar();
    scanf("%d",&coluna);

    getchar();

    if(linha == 0){
        printf("[matriz vazia]");
        return 0; 
    }

    if(coluna == 0){
        printf("vazio");
        return 0; 
    }
    int **vetor = (int**)malloc(linha * sizeof(int*));

    for (i = 0; i < linha; i++){
        vetor[i] = (int*)malloc(coluna * sizeof(int));
    }

    for (i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%d",&vetor[i][j]);
            if(j == coluna-1){
                printf("%d",vetor[i][j]);


            }else{
                printf("%d ",vetor[i][j]);            
            }   
        }
        printf("\n");
    }

    //imprime_histograma(vetor,qtd);

    for (i = 0; i < linha; i++)
    {
        free(vetor[i]);
    }

    free(vetor);

    return 0;
}

void imprime_histograma(int *vendas[],int num_categorias){
    int i;
    for(i = 0;i < num_categorias;i++){
        imprime_linha(vendas[i]);
    }
}

void imprime_linha(int *venda){
    int i;
    printf("%d ",*venda);
    for(i = 0; i < *venda;i++){
        printf("*");
    }
    printf("\n");
}
