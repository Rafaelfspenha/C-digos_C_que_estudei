// getc.c
#include <stdio.h>
int main(){

    char letra;
    printf("Digite um caractere: ");
    letra=getc(stdin);
    
    printf("Caractere lido: %c\n",letra);
    
    return 0;
}