// somar_impares.c 
#include <stdio.h>
int main() {
    int x,y=0;
    
    for(x=1;x<=1000;x+=2)
        y+=x;
    
    printf("%d\n",y);
    
    return 0;
}