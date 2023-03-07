// srand_time_rand_valores_aleatorios.c
#include <stdio.h>
#include <time.h>

void main(void){
    int i,num2[10];
    
    srand(time(NULL));
    // tem que usar time(NULL) para os
    // números serem aleatórios em rand()

    // usando só srand(8) com algum
    // número dentro, mudas os valores 
    // de rand(), mas não os deixa 
    // aleatórios.
    
    
    for(i=0;i<10;i++){
        num2[i] = rand();
        printf("%d\n",num2[i]);
    }
    
    // cada máquina tem seus valores
    // "aleatórios" fixos.
    
    return 0;
}