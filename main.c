#include <stdio.h>
#include <stdlib.h>

int main(){
    
   int **mat; 
   int linhas,colunas;

   scanf("%d %d",&linhas,&colunas);
    
   if(linhas == 0 ){
     printf("[matriz vazia]");
   }else {
  
   mat = malloc(linhas*sizeof(int*));

   for(int i=0;i<linhas;i++){
     mat[i] = (int*)malloc(colunas * sizeof(int));
   }
   for(int i=0;i<linhas;i++){
      for(int j=0;j<colunas;j++){
           scanf("%d",&mat[i][j]);
      }
   }
   for(int i=0;i<linhas;i++){
      for(int j=0;j<colunas;j++){
           printf("%d", mat[i][j]);
           if(j != colunas-1){
            printf(" ");
           }
           
      }
       printf("\n");
   }
   for(int i=0;i<linhas;i++){
    free(mat[i]);
   }
    free(mat);
   }   
    return 0;
}
