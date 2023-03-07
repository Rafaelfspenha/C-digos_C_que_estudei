// imprimir_elemento_endereco_cada_posicao_array_for.c
#include <stdio.h>

int main(){
    int i,x[10]={10,20,30,40,50,60,70,80,90,100};
    
    for (i=0;i<10;i++)
        printf("Elemento: %d\nendereço da posição: %p\n\n",*(x+i), x+i);
    
    return 0;
}