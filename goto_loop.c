// goto_loop.c
#include <stdio.h>

int main(void)
{
hola1:
    printf("Hola 1\n");
    goto hola3;
hola2:
    printf("Hola 2\n");
hola3:
    printf("Hola 3\n");
    goto hola1;
hola4:
    printf("Hola 4\n");
    return 0;
}