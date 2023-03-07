// imprimir_diagonal_matriz_for_if_else_srand_rand.c
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
            
            if(j==a){
                printf("%3d ",x[i][j]);
            }else{
                printf("    ");
            }
        }
        printf("\n");
        a++;
    }
    
    return 0;
}