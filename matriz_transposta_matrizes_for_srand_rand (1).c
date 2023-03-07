// matriz_transposta_matrizes_for_srand_rand.c
#include <stdio.h>
#include <time.h>

int main(){
    
    int i,j,x[4][4];
    
    srand(time(NULL));
    
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            x[i][j]=rand()%1000;
            printf("%4d",x[i][j]);
        }
        printf("\n");
    } 
    
    printf("\n");
    
    // x[linha][coluna]
    
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            printf("%4d",x[j][i]);
         printf("\n");
    }
    
    return 0;
}