// srand_rand_matriz_for.c
#include <stdio.h>
#include <time.h>

int main(){
    int i, j, mat[3][4];

    srand(time(NULL));

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            mat[i][j] = rand() % 1000;
   // os valores ficaram entre 0 e 999.
            printf("%3.d  ",mat[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
}
