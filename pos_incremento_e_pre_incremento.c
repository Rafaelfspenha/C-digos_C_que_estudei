// pos_incremento_e_pre_incremento.c
#include <stdio.h>
int main(){

    int x=100;
    
    printf("Valor inicial de x: %d\n",x);
    
    printf("\n--------------Pós incremento-------------\n");
    
    // na linha abaixo vai exibir 100.
    printf("\nValor de x na mesma linha do pós incremento: %d\n",x++);
    
    // na linha abaixo vai exibir 101
    printf("\nValor de x na linha seguinte ao pós Incremento: %d\n",x);
    
    printf("\n--------------Pré incremento-------------\n");
    
    //vai exibir 102
    printf("\nValor de x na mesma linha do pré incremento: %d\n",++x);
    
    return 0;
}