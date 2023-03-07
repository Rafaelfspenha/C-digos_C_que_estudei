// short_int2.c
#include <stdio.h>
int main(void){
    short int x=32768;
    // ocorreu aqui um estouro de memória.
    printf("%hd",x);
    return 0;
}