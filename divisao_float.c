// divisao_float.c
#include <stdio.h>
int main() {

    float a=5,b=15;
    
    printf("%d\n\n",10/20);
    printf("%f\n\n",10/20);
    
    // 10 e 20 são números inteiros
    
    printf("%f\n",10.0/20);
    
    // 10.0 é um número real.
    // dividindo o 20, que é inteiro, por
    // um n° real, que é o 10.0, 
    // o computadorconverte o 20 
    // automaticamente para número real.
    
    return 0;
}