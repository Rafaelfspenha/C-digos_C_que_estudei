// NomeCliente_for.c
#include <stdio.h>
int main(){

    // char nome_cliente[7]="Fulano" 
    // 6 posições úteis + 1 posição para 
    // o terminador \0.
    
    char nome_cliente[]="Fulano";
    int i;
    
    for(i=0;i<6;i++){
        printf("Valor do elemento %d da string = %c\n",i,nome_cliente[i]);
    }
    
    return 0;
}