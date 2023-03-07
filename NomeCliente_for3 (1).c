// NomeCliente_for3.c
#include <stdio.h>
int main(){

    // char nome_cliente[7]="Fulano" 
    // 6 posições úteis + 1 posição para 
    // o terminador \0.
    
    // \0 é um caractere nulo

    char nome_cliente[50]="Fulano de tal";
    int i;
    int cont=0;
    
    for(i=0;nome_cliente[i] != '\0' ;i++){
        printf("Valor do elemento %d da string = %c\n",i,nome_cliente[i]);
        cont++;
    }
    
    printf("\nQuantidade de caracteres da string: %d \n",cont);
    return 0;
}