// bitfield_struct.c
#include <stdio.h>

struct 
{
    int Member1;
    int Member2;
}d1;

struct
{
    int Member1 : 3;
    int Member2 : 1;
}d2;

int main() 
{
    printf("Size of Regular Structure = %d\n",sizeof(d1));
    printf("Size of Structure with Bit Field = %d\n",sizeof(d2));
    return 0;
}