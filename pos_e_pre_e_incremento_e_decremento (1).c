// pos_e_pre_e_incremento_e_decremento.c
#include <stdio.h>
int main(){

    int x=100,y=10;
    
    printf("Valor inicial de x: %d\n",x);
    printf("Valor inicial de y:  %d\n",y);
    
    printf("\n=========================================\n");
    
    printf("\n--------------Pós incremento-------------\n");
    
    // na linha abaixo vai exibir 100.
    printf("\nValor de x na mesma linha do pós incremento: %d\n",x++);
    
    // na linha abaixo vai exibir 101
    printf("\nValor de x na linha seguinte ao pós Incremento: %d\n",x);
    
    printf("\n--------------Pré incremento-------------\n");
    
    //vai exibir 102
    printf("\nValor de x na mesma linha do pré incremento: %d\n",++x);
   
    printf("\n=========================================\n");
    
    printf("\n--------------Pós decremento-------------\n");
    
    // na linha abaixo vai exibir 10.
    printf("\nValor de x na mesma linha do pós decremento: %d\n",y--);
    
    // na linha abaixo vai exibir 9
    printf("\nValor de x na linha seguinte ao pós decremento: %d\n",y);
    
    printf("\n--------------Pré decremento-------------\n");
    
    //vai exibir 8
    printf("\nValor de x na mesma linha do pré decremento: %d\n",--y);
   
    return 0;
}