// recursividade_crescente_funcao_semelhante_while_ou_for_desempilhar.c
#include <stdio.h>
#include <stdlib.h>

void imprimir(int x){
    if(x==0)
        printf("%d ",x);
    else{
        imprimir(x-1);
        /*
        imprimir(3-1); 2
        imprimir(2-1); 1
        imprimir(1-1); 0
       
        imprimi 0
        
        imprimir(2-1); 1
        
        imprimi 1
        
        imprimir(3-1); 2
        
        imprimi 2
        
        
        ?? imprimi 3
        
        */
        printf("%d ",x);
    }
}

int main () {

    int n;
    
    printf("Digite um número maior que zero: ");
    scanf("%d",&n); // 3
    
    printf("\n");
    
    imprimir(n);
    
    printf("\n");
    
    return 0;
}