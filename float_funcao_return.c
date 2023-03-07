// float_funcao_return.c
#include <stdio.h>

float sum(); /* identifica a função */

float first, second;

void main(void) {

    first = 123.23 ;

    second = 99.09 ;

    printf("%.2f", sum());

}


float sum () { 

    return first + second;

}