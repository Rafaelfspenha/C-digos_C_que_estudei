// numero_primo_total.c
#include <stdio.h>
int main(){
    int x,y,z,a;
    
    do{
        printf("Número Máximo para saber se é primo: ");
        scanf("%d",&y);
    }while(y<=1);
    
    for(x=2;x<=y;x++){
        a=0;
        for(z=1;z<=x;z++){
            if(x % z == 0)
                a++;
        }
        
        if(a <= 2)
            printf("\n%d é um número primo.\n",x);
    } 
    
    return 0;
}