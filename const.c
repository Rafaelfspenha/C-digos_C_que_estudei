// const.c (MEU)
#include <stdio.h>
int main(){
    int y;
    const int x = 10;
    y=20;
    
    //x=11;
    
// programa dá erro se for adicionado
// novo valor a constante x.

    y=21; 
    
    printf("x = %d\n\n",x);
    printf("y = %d\n",y);
    
    return 0;
}