// NomeCliente_for3.c
#include <stdio.h>
int main(){

    // char nome_cliente[7]="Fulano" 
    // 6 posições úteis + 1 posição para 
    // o terminador \0.
    
    char nome_cliente[]="Fulano";
    int i;
    nome_cliente[3]='\0';
    
    for(i=0;nome_cliente[i] != '\0' ;i++){
        printf("Valor do elemento %d da string = %c\n",i,nome_cliente[i]);
    }
     
    return 0;
}