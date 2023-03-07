// recursividade_crescente_funcao_semelhante_while_ou_for_desempilhar.c
#include <stdio.h>
#include <stdlib.h>

void imprimir(int x){
    if(x==0)
        printf("%d ",x);
    else{
        imprimir(x-1);
        /*
        
        x=3
        
        A medida que o x vai adentrando
        a mesma função, ele adquiri 
        outros valores, mas o valor
        na superfície será sempre 3,
        por isso quando ele sai da 
        recursividade, ele imprimi
        o valor 3 por meio do printf
        abaixo.
        
        imprimir(3-1); x=2
        imprimir(2-1); x=1
        
        imprimir(1-1); x=0
        aí ele entra no if(x==0)
        e imprimi o 0 e sai
        
        e volta para o imprimir(2-1); x=1
        que está dentro do else e 
        imprimi o 1 e sai
        
        e volta para imprimir(3-1); x=2
        que está dentro do else e
        imprimi o 2 e sai

        depois de sair da pilha, ele
        imprimi o valor normal de x no
        printf("%d ",x);
        
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