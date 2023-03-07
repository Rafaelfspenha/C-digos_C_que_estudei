// calloc.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    p = (int *) calloc(5,sizeof(int));
    *(p+1) = 10;
    printf("%i\n",p[0]);
    printf("%i",p[1]);

    return 0;
}