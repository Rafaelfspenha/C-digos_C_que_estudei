// matriz_scanf_for.c
#include <stdio.h>

int main(){
    int i, j, mat[3][3];

    for(i = 0; i < 3; i++){ // índice das linhas
        for(j = 0; j < 3; j++){ // índice das colunas 
            printf("\nInsira o valor [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]); 
        }
     }  
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)  
            printf("| %2.d", mat[i][j]); 
        printf(" |\n");
     }    
    
    return 0;
}