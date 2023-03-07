// return_atoi.c
#include <stdio.h>
#include <stdlib.h>

int soma(int a,int b) {
    return a+b;
}

int main(int argc,char **argv) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Soma: %d\n", soma(a,b));
    return 0;
}