// strlen.c
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Curso ";
    int tamanho;
    
    // strlen conta os espaços vazios.
    tamanho = strlen(str);
    
    printf("\nO tamanho da string '%s' vale: %d \n",str,tamanho);
   
    return 0;
}