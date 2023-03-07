// Adicao_subtracao_multiplicacao_divisao_modulo.c
#include <stdio.h>
int main(){
    int x,y;
    printf("Insira dois números");
    printf("\n\nInsira o 1° número: ");
    scanf("%d",&x);
    printf("\nInsira o 2° número: ");
    scanf("%d",&y);
    printf("\n%d + %d = %d",x,y,x+y);
    printf("\n%d - %d = %d",x,y,x-y);
    printf("\n%d * %d = %d",x,y,x*y);
    printf("\n%d / %d = %d,",x,y,x/y);
    printf("\n%d %% %d = %d\n",x,y,x%y);
    return 0;
}

