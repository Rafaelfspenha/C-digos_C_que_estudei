// recursividade_decrescente_funcao_semelhante_while_ou_for3.c
#include <stdio.h>
#include <stdlib.h>

void imprimir(int x){
    if(x==0)
        printf("%d ",x);
    else{
        printf("%d ",x);
        imprimir(x-1);
       // printf("v");
    }
}

/*
    3
    dentro do imprimir(3-1); x=2
    2
    dentro do imprimir(2-1); x=1
    1
    dentro do imprimir(1-1); x=0
    ele vai para o if(x==0)
    0
    e volta para imprimir(2-1); x=1
    e imprimi o "v" e volta para
    imprimir(3-1); x=2 e imprimi "v"
    e volta para a superfície e 
    imprimi "v" e sai do else e finaliza
    a função.
    
    
    xxx
*/

int main () {

    int n;
    
    printf("Digite um número maior que zero: ");
    scanf("%d",&n);
    
    printf("\n");
    
    imprimir(n);
    
    printf("\n");
    
    return 0;
}