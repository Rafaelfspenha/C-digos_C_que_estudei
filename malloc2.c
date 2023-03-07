// malloc2.c
#include <stdio.h>
#include <stdlib.h>
int main(){
// malloc --> memory allocation
// malloc é o quanto de memória queremos 
// na memória ram.

    //int *p = (int *) malloc(10*sizeof(int)); // 40 bytes
    int *p = (int *) malloc(sizeof(int));
    
    if (p == NULL) {
        printf("malloc não funcionou");
    }
    
    printf("%i",*p);

    return 0;
}