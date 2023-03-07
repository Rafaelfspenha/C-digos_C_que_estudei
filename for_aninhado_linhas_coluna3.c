// for_aninhado_linhas_coluna3.c 
#include <stdio.h>
int main() {
    
    int y,x;
    
    for(y=1;y<=9;y+=2){
        for(x=6+y;x>=4+y;x--){
            printf("Y= %2d  X= %2d => x - y = %d\n",y,x,x-y);
        }
        printf("\n");
    }
    
    return 0;
}