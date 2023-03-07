// enderecoVariavel_ponteiro_para_ponteiro.c

#include <stdio.h>
#include <stdlib.h>

// ptrx= &x; 
// pptrx= &ptrx;

// *pptrx => indica o valor da variável x.

//  pptrx => indica o endereço de memória 
// apontado por pptrx.

// &pptrx => indica o endereço de memória de x.

int main(void){
    int x, *ptrx,**pptrx;
    
    // inicializando a variável com zero.
    x=0;
    
   // printf("Endereço de memória (x): %x",x);
    printf("\nEndereço de memória da variável| x (&x): %x",&x);
    printf("\nvalor (x): %d\n",x);
    
    // atribuindo os x endereços para os
    // ponteiros.
    ptrx= &x; // ptrx aponta para x
    pptrx= &ptrx; // pptrx aponta para ptrx

    printf("\nEndereço de memória apontado por | ptrx (ptrx) --> x: %x",ptrx);
    printf("\nEndereço de memória da variável | ptrx (&ptrx): %x", &ptrx);
    printf("\nValor (*ptrx): %d\n",*ptrx);
    
    printf("\nEndereço de memória apontado por | pptrx (pptrx) --> ptrx: %x",pptrx);
    printf("\nEndereço de memória da variável | pptrx (&ptrx): %x", &pptrx);
    printf("\nValor (**pptrx): %d\n",**pptrx);
    
    return 0;
}