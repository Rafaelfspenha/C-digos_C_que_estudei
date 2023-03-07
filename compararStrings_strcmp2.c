// compararStrings_strcmp2.c
#include <stdio.h>
#include <string.h>

int main(){
    char str1[4]="abc";
    char str2[4]="abd";
    int retorno,valor,valor2;
    
    retorno=strcmp(str1,str2);
    
    printf("Retorno = %d \n",retorno);
    
    if(strcmp(str1,str2) != 0)
    // números iguais será 0.
    // números diferentes será 1.
    
        valor=strcmp(str1,str2) != 0; 
        // 1 != 0 verdadeiro(1)
        
        valor2=strcmp(str1,str2) == 0;
        // 1 == 0 falso(0)
        
        printf("\nSão diferentes.");
        printf("\n\ncomparação(!=0): %d",valor);
        printf("\ncomparacão(==0): %d\n",valor2);
        
    return 0;
}