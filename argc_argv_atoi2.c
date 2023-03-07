// return_atoi2.c
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv) {

    int a,b;
    
    if(argc!=3) {
        printf("Erro! Você deve fornecer dois valores \n");
        return -1;
    }
    
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    
    printf("Soma: %d\n", a+b);
    
    return 0;
    
}