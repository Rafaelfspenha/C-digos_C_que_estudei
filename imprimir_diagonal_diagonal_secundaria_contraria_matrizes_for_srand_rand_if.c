// imorimir_diagonal_diagonal_secundaria_contraria_matrizes_for_srand_rand_if.c
#include <stdio.h>
#include <time.h>

int main(){
    int tam=5;
    int i,j,x[tam][tam];
    int a=0;
    
    srand(time(NULL));
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            x[i][j]=rand()%1000;
                printf("%3d ",x[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal: ");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j==a)
                printf("%3d ",x[i][j]);
        }
        a++;
    }
    
    printf("\n");
    
    printf("\nDiagonal Secundária: ");
    a=4;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j==a)
                printf("%3d ",x[i][j]);
        }
        a--;
    }
    
    printf("\n");
    
    return 0;
}