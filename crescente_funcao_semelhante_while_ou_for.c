// crescente_funcao_semelhante_while_ou_for.c
#include <stdio.h>
#include <stdlib.h>

void imprimir(int x,int y){
    
    if(y==x)
        printf("%d ",x);
    else{
        printf("%d ",y);
        imprimir(x,y+1);
    }
}

int main () {

    int n,m=0;
    
    printf("Digite um número maior que zero: ");
    scanf("%d",&n);
    
    printf("\n");
    
    imprimir(n,m);
    
    printf("\n");
    
    return 0;
}