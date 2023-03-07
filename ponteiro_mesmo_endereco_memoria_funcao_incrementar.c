// ponteiro_mesmo_endereco_memoria_funcao_incrementar.c

#include <stdio.h>

void incrementa(int* contador){
    printf("(incrementa) Antes de incrementar.\n");
    printf("O contador vale %d\n",(*contador));
    printf("O endereço de memória é %d\n\n",contador);
    
    printf("(incrementa) Depois de incrementar.\n");
    printf("O contador vale %d\n",++(*contador));
    printf("O endereço de memória é %d\n\n",contador);
}

int main(){
    int contador = 10;
    
    printf("(main) Antes de incrementar.\n");
    printf("O contador vale %d\n",contador);
    printf("O endereço de memória é %d\n\n",&contador);
    
    incrementa(&contador);
    
    // &contador é um endereço de memória
    
    printf("(main) Depois de incrementar.\n");
    printf("O contador vale %d\n",contador);
    printf("O endereço de memória é %d\n",&contador);
    
    return 0;
}