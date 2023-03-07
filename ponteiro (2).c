// ponteiro.c
#include <stdio.h>

main(void){
    int x=0, *ptrx,**pptrx;
    
    printf("Endereço de memória x (x): %x",x);
    printf("\nEndereço de memória da variável x (&x): %x",&x);
    printf("\nvalor da variável x (x): %d\n",x);
    
    // atribuindo os x endereços para os
    // ponteiros.
    
    ptrx= &x; // ptrx aponta para x
    pptrx= &ptrx; // pptrx aponta para ptrx

    printf("\nEndereço de memória apontado por ptrx (ptrx) : %x",ptrx);
    printf("\nEndereço de memória da variável ptrx (&ptrx): %x", &ptrx);
    printf("\nValor (*ptrx): %d\n",*ptrx);
    
    printf("\nEndereço de memória apontado por pptrx (pptrx): %x",pptrx);
    printf("\nEndereço de memória da variável pptrx (&ptrx): %x", &pptrx);
    printf("\nValor (**pptrx): %d\n",**pptrx);
    
    return 0;
}

