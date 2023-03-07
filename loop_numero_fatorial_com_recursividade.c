// loop_numero_fatorial_com_recursividade.c
#include <stdio.h>
#include <stdlib.h>

// 1! e 0! são iguais a 1.

int fatorial(int n){
    printf("%d\n",n);
    return fatorial(n-1);
}

int main() {

    int n;
    
    printf("Digite um número fatorial: ");
    scanf("%d",&n);
    
    printf("\n");
    
    fatorial(n);
            
    return 0;
    
}