// quociente_e_resto_da_divisao.c
#include <stdio.h>
int main(){
    int x,y;
    printf("Insira 2 números para descobrir o quociente e o resto da divisão");
    printf("\n\nInsira o 1° número: ");
    scanf("%d",&x);
    printf("\nInsira o 2° número: ");
    scanf("%d",&y);
    printf("\n\nO quociente de %d/%d é %d", x,y,x/y);
    printf("\n\nO resto da divisão é: %d\n",x%y);
    return 0;
}
