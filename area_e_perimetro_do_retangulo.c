// area_e_perimetro_do_retangulo.c
#include <stdio.h>
int main(){
    int x,y;
    printf("Insira o comprimento: ");
    scanf("%d",&x);
    printf("Insira a largura: ");
    scanf("%d",&y);
    printf("\nÁrea: %d",x*y);
    printf("\nPerímetro: %d\n",2*(x+y));
    return 0;
}

