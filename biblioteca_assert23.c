// biblioteca_assert2.3.c
#define NDEBUG
#include <assert.h>
#include <stdio.h>

void main(){
   int x,y,z;
    x=2;
    y=2;
    z=x+y;
    assert(z==3);
    printf("%d",z);
    return 0;        
}