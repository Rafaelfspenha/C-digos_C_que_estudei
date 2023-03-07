// soma_matrizea_for_srand_rand.c
#include <stdio.h>
#include <time.h>

int main(){
    int tam=3;
    int i,j,x[tam][tam],y[tam][tam],z[tam][tam];
   // int i,j,x[3][3],y[3][3],z[3][3];
    
    srand(time(NULL));
    
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            x[i][j]=rand()%1000;
            printf("%3d ",x[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            y[i][j]=rand()%1000;
            printf("%3d ",y[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            z[i][j]=x[i][j]+y[i][j];
            printf("%4d ",z[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}