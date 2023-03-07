// matriz_srand_rand.c
#include <stdio.h>
#include <time.h>

int main(){

    int i,j,x[5][7],contador=0;
    
    srand(time(NULL));
    
    for(i=0;i<5;i++){
        for(j=0;j<7;j++){
            x[i][j]=rand()%1000;
            printf("%3d  ",x[i][j]);
            contador+=x[i][j];
        }
        printf("\n");
    }
    
    printf("\nTotal: %d\n",contador);
    
    return 0;
}