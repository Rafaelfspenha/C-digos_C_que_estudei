// for_aninhado_linhas_coluna2.c 
#include <stdio.h>
int main() {
    
    int i,x=7,m=5;
    
    for(i=1;i<=9;i+=2){
        for(x;x>=m;x--){
            printf("I= %d  X=%d\n",i,x);
        }
 
        m+=2;
        x+=5;
        printf("\n");
        
    }
    
    return 0;
}