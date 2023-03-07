// recursividade_decrescente2_funcao_semelhante_while_ou_for_desempilhar.c
#include <stdio.h>
#include <stdlib.h>

void imprimir(int x){
    if(x==0)
        printf("%d ",x);
    else{
        imprimir(x-1);
        printf("%d ",x);
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