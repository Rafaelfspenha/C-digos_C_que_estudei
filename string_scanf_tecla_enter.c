// string_scanf_tecla_enter.c
#include <stdio.h>

int main(){
    char palavras[]={};
    
    printf("Digite seu nome: ");
    scanf("%[^\n]",palavras);
    
    //scanf("%80[^\n]",palavras);
    // o número 80 é quantidade máxima 
    // de caracteres a ser lido.
    
    //[^\n] é digitar até a tecla enter
    // for digitada.
 
    printf("\n%s\n\n",palavras);
    
    return 0;
}