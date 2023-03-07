// sizeof_struct.c
#include <stdio.h>

struct x{
    int a; //4 bytes
    int b; //4 bytes
    int c; //4 bytes
};         // 4+4+4= 12 bytes

int main (void) {
    struct x estrutura;
    printf("%li",sizeof(estrutura));
    printf("\n");
    return 0;
}