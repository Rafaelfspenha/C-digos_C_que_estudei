// malloc3.c
#include <stdio.h>
#include <stdlib.h>
int main(){
// malloc --> memory allocation
// malloc é o quanto de memória queremos 
// na memória ram.

    //int *p = (int *) malloc(10*sizeof(int)); // 40 bytes
    int *p = (int *) malloc(5);
    
    // size_t --> valor inteiro sempre positivo
    
    printf("%i",*p);

    return 0;
}