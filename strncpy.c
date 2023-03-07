// strncpy.c
#include <stdio.h>
#include <string.h>

int main(){
    char nome1[3];
    char nome2[3];
    
    printf("Digite um nome1: ");
    scanf("%s",nome1);
    
    //strcpy(nome1,"Fulano de tal");
    strncpy(nome2,nome1,3);
    // strncpy(string_destino,string_origem,quantidade_caractere);
    
    printf("\nNome2 = %s\n",nome2);
    
    return 0;
}