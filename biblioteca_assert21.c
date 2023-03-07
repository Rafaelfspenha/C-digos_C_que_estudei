// biblioteca_assert2.1.c
#include <assert.h>
#include <stdio.h>

void main(){
   int x,y,z;
    x=1;
    y=2;
    z=x+y;
    assert(z==3);
    printf("%d",z);
    return 0;        
}