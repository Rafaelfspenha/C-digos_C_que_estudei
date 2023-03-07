// sizeof_sem_parenteses.c
#include <stdio.h>

int main (void) {
    
    float x;
    float y=10.0;
    float z[10];
    
    printf("x= %d",sizeof x);
    
    printf("\n\nfloat= %d",sizeof(float));
    
    printf("\n\ny= %d",sizeof y);
    
    printf("\n\ny= %d\n\n",sizeof z);
    
    /*
    
    Seguinte razão pelo uso de %d
    em vez de %f.
    
    Porque não está sendo imprimindo o valor da 
    variável float x. 

    Está sendo imprimindo o operador sizeof x, 
    a quantidade de memória de uma variável do 
    tipo float. 

    Essa quantidade de memória é em bytes 
    e sempre será um número inteiro, por
    isso o %d.
    
    */
    
    return 0;
}