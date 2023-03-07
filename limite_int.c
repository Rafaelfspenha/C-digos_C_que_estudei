// limite_int.c
#include <stdio.h>

int main (void) {
    
    int x= 2147483647;
    int y= 2147483648;
    
    // O número 2147483647 é o limite
    // do tipo int.
    
    // abaixo houve estouro de memória.

    // O binário de 2147483647
    // é 011111111111111111111111111111
    // (32 bits)
    // 1 repetido 31 vezes.

    printf("x= %d\n\n",x);
    
    printf("y= %d\n\n\n",y);
     
    printf("x+1= %d\n\n",x+1);
    
    printf("x+2= %d\n\n",x+2);
    
    return 0;
}