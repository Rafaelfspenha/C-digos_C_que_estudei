// imprimir_diagonal_secundaria_matrizes_for_srand_rand_if_else.c
#include <stdio.h>
#include <time.h>

int main(){
    int tam=5;
    int i,j,x[tam][tam];
    int a=4;
    
    srand(time(NULL));
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            x[i][j]=rand()%1000;
            if(j==a){
                printf("%3d ",x[i][j]);
            }else{
                printf("    ");
            }
        }
        printf("\n");
        a--;
    }
   
 
    
    return 0;
}