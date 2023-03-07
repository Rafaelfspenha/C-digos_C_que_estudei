// potenciacao_com_recursividade.c
#include <stdio.h>
#include <stdlib.h>

int potenciacao(int x,int n){
    
    if(n == 0)
        return 1;   
    else
        return x * potenciacao(x,n-1);
}

int main() {

    int n,x;
    
    printf("Digite o valor da base da potenciação: ");
    scanf("%d",&x);
    
    printf("\nDigite o valor do expoente dapotenciação: ");
    scanf("%d",&n);
    
    printf("\n%d elevado a %d é: %d\n",x, n,potenciacao(x,n));
            
    return 0;
}