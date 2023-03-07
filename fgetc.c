// fgetc.c
#include <stdio.h>
int main(){

    char letra;
    printf("Digite um caractere: ");
    letra=fgetc(stdin);
    
    // stdin será lido do teclado
    
    // fgetc lê arquivo ou do teclado

    //letra=fgetc(nome_arquivo):
    
    printf("Caractere lido: %c\n",letra);
    
    return 0;
}