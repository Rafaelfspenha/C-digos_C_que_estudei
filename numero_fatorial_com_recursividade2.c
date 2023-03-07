// numero_fatorial_com_recursividade2.c
#include <stdio.h>
#include <stdlib.h>

// 1! e 0! são iguais a 1.

int imprimir(int x){
    
    if(x==1)
        printf("%d = ",x);
    else{
        printf("%d * ",x);
        imprimir(x-1);
    }
    
}

int main() {

    int n,m,j=1;
    
    printf("Digite um número maior que zero: ");
    scanf("%d",&n);
    
    printf("\n");
    
    imprimir(n);
    
    for(m=2;m<=n;m++)
            j*=m;
            
    printf("%d\n",j);
            
    return 0;
}