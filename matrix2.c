// matrix2.c
#include <stdio.h>
int main() {
    int x=1;
    while(x<10) {
        printf("\n0 1 0 1 0 1 0 1 0 1 0\n");
        printf("\n0 1               0 0\n");
        printf("\n0       0 1 0       1\n");
        printf("\n0     0 1 0 1 0     0\n");
        printf("\n0   0 1 0 1 0 1 0   1\n");
        printf("\n0   0 1 0 1 0 0 1   0\n");
        printf("\n0     1 0 1 0 1     1\n");
        printf("\n0       1 0 1       1\n");
        printf("\n1 0               0 1 \n");
        printf("\n1 0 1 0 1 0 1 0 1 0 0\n");
    }
    return 0;
}