// falso_verdadeiro.c
#include <stdio.h>
int main(){
    int a;
    printf("\nDigite um valor qualquer: ");
    scanf("%d",&a);
    printf("\n%d",a<0);
    printf("\n\n0= falso | 1= verdadeiro\n\n");
    return 0;
}