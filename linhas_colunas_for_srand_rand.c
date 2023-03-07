// linhas_colunas_for_srand_rand.c
#include <stdio.h>
#include <time.h>

int main(){

    int i,j,x[5][7];
    int total_linha[5]={0},total_coluna[7];
    
    srand(time(NULL));
    
    for(i=0;i<5;i++){
        for(j=0;j<7;j++){
            x[i][j]=rand()%1000;
            printf("%3d  ",x[i][j]);
            
            total_linha[i]+=x[i][j];
            // cada linha tem 7 números.
            total_coluna[j]+=x[i][j];
            // cada coluna tem 5 números.
        }
        printf("\n");
    }
    
    for(i=0;i<5;i++)
        printf("\nTotal da linha %d: %d\n",i+1,total_linha[i]);
    printf("\n");
    for(i=0;i<7;i++)
        printf("\nTotal da Coluna %d: %d\n",i+1,total_coluna[i]);
    
    return 0;
}