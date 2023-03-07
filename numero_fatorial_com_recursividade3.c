// numero_fatorial_com_recursividade3.c
#include <stdio.h>
#include <stdlib.h>

// 1! e 0! são iguais a 1.

int fatorial(int n){
    
    if(n == 0 || n == 1)
        return 1;   
    else{
        return n * fatorial(n-1);
    }
    
}

int main() {

    int n;
    
    printf("Digite um número fatorial: ");
    scanf("%d",&n);
    
    printf("\n");
    
    fatorial(n);
    
    printf("%d\n",fatorial(n));
            
    return 0;
    
}