// desenho_triangulo_em_pe.c
#include <stdio.h>
int main(){
    int i,j,l=0;
    
    if(l==0){
        for(i=1;i<=10;i++){
            for(j=1;j<=i;j++)
                printf("*");
            printf("\n");
        }
    }
    
    l++;
    
    if(l>0){
        for(i;i>=1;i--){
            for(j=1;j<=i;j++)
                printf("*");
            printf("\n");
        }
    
    
    }
    
    
    return 0;
}