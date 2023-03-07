// soma_ate_digitar_zero_while.c
#include <stdio.h>
int main(){
    int num=1,soma=0;
    
    // adicione números positivos e
    // negativos.
    
    while(num != 0){
        printf("Informe um número: ");
        scanf("%d",&num);
        soma+=num;
        printf("A soma é: %d\n",soma);
    }
    
    return 0;
}