// operador_deslocamento.c

#include <stdio.h>
int main(){
    int i=7;
    
    i=i<<1;
    printf("%d\n",i);
    
    i=i<<3;
    printf("%d\n",i);
    
    i=i>>1;
    printf("%d\n",i);
    
    i=i>>2;
    printf("%d\n",i);
    
    
    return 0;
}