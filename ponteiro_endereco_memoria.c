// ponteiro_endereco_memoria.c
#include <stdio.h>

int main(){
    int n;
// variável guarda seu valor na memória.
    
    int* p; 
// ponteiro é um valor que aponta para um
// endereço de memória.

    printf("Informe um número: ");
    scanf("%d",&n);
    
    p = &n;
    
    printf("(n) valor informado foi: %d\n",n);
    
    printf("(&n) Endereço de memória: %d\n",&n);
    
    printf("(p) Endereço do ponteiro: %p\n",p);
    
    printf("(p) Endereço de memória de &n: %d\n",p);
    
    return 0;
}