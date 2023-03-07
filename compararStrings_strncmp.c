// compararStrings_strncmp.c
#include <stdio.h>
#include <string.h>

int main(){
    char str1[15]="Curso de C";
    char str2[15]="Curso de Java";
    int retorno;
    
    retorno=strncmp(str1,str2,5);
    
    /*
    
0: conteúdo das strings é igual.
< 0: conteúdo da str1 é menor do que str2.
> 0: conteúdo da str1 é maior do que str2.
    
    */
    
    printf("Retorno = %d \n",retorno);
    
    return 0;
}