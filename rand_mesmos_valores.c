// rand_mesmos_valores.c
#include <stdio.h>

void main(void){
    int i,num2[10];
    
    for(i=0;i<10;i++){
        num2[i] = rand();
        printf("%d\n",num2[i]);
    }
    
    // cada máquina tem seus valores
    // "aleatórios" fixos.
    
    return 0;
}