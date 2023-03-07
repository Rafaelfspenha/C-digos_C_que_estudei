// recursividade_decrescente_funcao_semelhante_while_ou_for2.c
#include <stdio.h>
#include <stdlib.h>

void imprimir(int x){
    if(x==-3)
        printf("%d ",x);
    else{
        printf("%d ",x);
        imprimir(x-1);
    }
}

int main () {

    int n;
    
    printf("Digite um número maior que zero: ");
    scanf("%d",&n);
    
    printf("\n");
    
    imprimir(n);
    
    printf("\n");
    
    return 0;
}