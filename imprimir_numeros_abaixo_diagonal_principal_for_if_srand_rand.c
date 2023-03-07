// imprimir_numeros_abaixo_diagonal_principal_for_if_srand_rand.c
#include <stdio.h>
#include <time.h>
int main(){
    int tam=10;
    int i,j,x[tam][tam],a=0;
    srand(rand(NULL));
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            x[i][j]=rand()%1000;
            if(i>0 && j<a){
                printf("%3d ",x[i][j]);
            }
        }
        a++;
        printf("\n");
    }
    return 0;
}