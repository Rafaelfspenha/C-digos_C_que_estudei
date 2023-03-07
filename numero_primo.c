// numero_primo.c
#include <stdio.h>
int main(){
    int x,y,z=0;
    
    do{
        printf("Digite um número para saber se é primo: ");
        scanf("%d",&y);
    }while(y<=1);
    
    for(x=1;x<=y;x++){
        if(y % x == 0)
            z++;
    }
    
    if(z > 2)
        printf("\n%d não é um número primo.\n",y);
    else
        printf("\n%d é um número primo.\n",y);
        
    return 0;
}