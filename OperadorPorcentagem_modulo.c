// OperadorPorcentagem_modulo.c
#include <stdio.h>
int main(void) {
    int n1,n2,resultado,resto;
    
    printf("Digite o 1° Número: ");
    scanf("%d",&n1);
    
    printf("\nDigite o 2° Número: ");
    scanf("%d",&n2);
    
    resultado=n1/n2;
    printf("\nResultado da divisão inteira de %d / %d = %d\n",n1,n2,resultado);
    
    resto=n1%n2;
    printf("\nResto da divisão = %d\n", resto);
    
    return 0;
}