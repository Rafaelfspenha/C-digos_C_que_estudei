// endereco_memoria_&.c
#include <stdio.h>

int main(){
    int n;
    
    printf("Informe um número: ");
    scanf("%d",&n);
    
    printf("O número informado foi %d\n",n);
    
    printf("Endereço de memória: %d\n",&n);
    
    return 0;
}