// raiz_quadrada_operador_ternario.c
#include <stdio.h>

void main(void){

    int isqrd, i;

    printf("Digite um número: ");
    scanf("%d", &i);

    isqrd = i>0 ? i*i : - (i*i);

    printf("%d ao quadrado é %d", i, isqrd);
}