// for_numero_elevado.c 
#include <stdio.h>

int main() {
    int x,y;
    
    printf("O programa apresentará os valores quadrados dos números pares.\n\n");
    
    printf("Digite o valor máximo: ");
    scanf("%d",&y);
    printf("\n");
    
    for(x=2;x<=y;x+=2)
        printf("%d elevado a 2= %d\n",x,x*x);
    
    return 0;
}