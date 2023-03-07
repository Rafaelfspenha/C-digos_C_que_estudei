// funcao.c
#include <stdio.h>

void main(void){
    int i;
    for(i=0;i<5;i++) f();
    printf("\n");
    
    // o for não tem chaves pega apenas
    // o primeiro comando.
}

void f(void)
{
    int j=10;
    printf("\n%d",j);
    j++; // está linha não tem nenhum 
         // efeito.
}