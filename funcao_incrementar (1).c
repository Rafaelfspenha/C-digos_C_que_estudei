// funcao_incrementar.c

#include <stdio.h>

void incrementa(int valor){
    printf("(incrementa) Antes de incrementar.\n");
    printf("O contador vale %d\n\n",valor);
    printf("(incrementa) Depois de incrementar.\n");
    printf("O contador vale %d\n\n",++valor);
}


int main(){
    int contador = 10;
    
    printf("(main) Antes de incrementar.\n");
    printf("O contador vale %d\n\n",contador);
    
    incrementa(contador);
    
    printf("(main) Depois de incrementar.\n");
    printf("O contador vale %d\n",contador);
    
    return 0;
}