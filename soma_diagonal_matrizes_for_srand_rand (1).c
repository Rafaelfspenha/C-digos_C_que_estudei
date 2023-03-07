// soma_diagonal_matrizes_for_srand_rand.c
#include <stdio.h>
#include <time.h>

int main(){
    int tam=5;
    // int tam=3;
    int i,j,x[tam][tam];
    int a=0,b=0;
    
    srand(time(NULL));
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            x[i][j]=rand()%1000;
            printf("%3d ",x[i][j]);
            if(j==a){
                b+=x[i][j];
            }
        }
        printf("\n");
        a++;
    }
   
    printf("\n%d\n",b);
    
    return 0;
}