// calloc_malloc.c
#include <stdio.h>
#include <stdlib.h>
int main(){
// malloc --> memory allocation
// malloc é o quanto de memória queremos 
// na memória ram.

    // int *p;
    // p = (int *) malloc(10*sizeof(int)); // 40 bytes
    
    int *p = (int *) malloc(10*sizeof(int)); // 40 bytes
  
    //int *p = (int *) malloc(sizeof(int));
    
    *p = 1000;
    
    printf("%i",*p);
    
    free(p);
    
    printf("\n%i",*p);
    
    p= (int *)calloc(10,sizeof(int));
    printf("\n\n%i",*p);
    

    return 0;
}