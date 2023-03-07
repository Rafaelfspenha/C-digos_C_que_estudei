// matriz_for.c
#include <stdio.h>

int main(){
    int i, j, mat[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(i = 0; i < 3; i++){ // índice das linhas
        for(j = 0; j < 4; j++) // índice das colunas 
            printf("| %2.d", mat[i][j]); 
        printf(" |\n");
     }    
    
    return 0;
}