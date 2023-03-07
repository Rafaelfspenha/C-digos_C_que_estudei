// divisao_3_4_5_if_modulo.c
#include <stdio.h>
int main(){

    int num;
    
    printf("Digite um número: ");
    scanf("%d",&num);
    
    if(num%2 == 0)
        printf("\n%d é divisível por 2.\n",num);
    if(num%3 == 0)
        printf("\n%d é divisível por 3.\n",num);
    if(num%5 == 0)
        printf("\n%d é divisível por 5.\n",num);
    if(!(num%2==0||num%3==0||num%5==0))
        printf("\n%d não é divisível por 2,3 e 5.\n",num);
   
    return 0;
}