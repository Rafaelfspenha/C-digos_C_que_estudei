// malloc_%#x_free.c
#include <stdio.h>
int main() {
    int *numero;
    
    numero= (int*) malloc(sizeof(int));
    
    printf("Posição na memória: %#x\n", numero);
    printf("Posição na memória: 0x%x\n", numero);
    
// %#x para exibir o endereço e o 
// conteúdo do ponteiro numero, pois 
// trata-se de um valor hexadecimal 
// por ser endereço de memória.
    
    *numero=56;
    
    printf("%d\n",*numero);
    
    free(numero);
    
    return 0;
}