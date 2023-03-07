// soma_de_numeros_inteiros_de_1_a_n_com_recursao.c
#include <stdio.h>
#include <stdlib.h>

int soma(int x){
    
    if(x == 1)
        return 1;   
    else
        return x + soma(x-1);
}

int main() {

    int x;
    
    printf("Digite um valor: ");
    scanf("%d",&x);
    
    printf("\nA soma de 1 até %d: %d\n",x,soma(x));
    
    return 0;
}