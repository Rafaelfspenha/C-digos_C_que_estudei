// palavra_palindroma_while_if.c
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[30],copia[30];
    int i,tam,iguais=0;
    
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    
    tam = strlen(palavra);
    tam--;
    i=0;
    
    while(tam >= i) {
        if(palavra[i] != palavra[tam])
            iguais++;
    i++;
    tam--;
    
    }
    
    if(iguais == 0)
        printf("\nÉ palindroma.\n");
    else
        printf("\nNão é palindroma.\n");
        
    return 0;
}