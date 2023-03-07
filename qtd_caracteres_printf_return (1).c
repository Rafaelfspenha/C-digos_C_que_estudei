// qtd_caracteres_printf_return.c
#include <stdio.h>
int main(){
    char tam="ola mundo",num1,num2,x;
    
    // x terá 2 lixos de memória.
    printf("Digite 2 números: ");
    x= scanf("%d %d",&num1,&num2);
    printf("\n\nTotal de números: %d\n\n",x);
    
    printf("\nQuantidade de caracteres: %d\n",tam);
    
    printf("\nQuantidade de caracteres: %d",printf("ola"));
    
    printf("\nQuantidade de caracteres: %d",printf("\nola"));
    
    printf("\nQuantidade de caracteres: %d\n",printf("\nolá"));
    
    return 6;
}