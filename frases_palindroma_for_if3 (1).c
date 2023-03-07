// frases_palindroma_for_if3.c
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50],copia[50];
    int i,tam,diferentes=0,iguais=0,j=0,x=0;
    
    printf("Digite uma frase: ");
    scanf("%50[^\n]",palavra);
    
    for(i=0; i < strlen(palavra); i++) {
        if(palavra[i] != '!' && palavra [i] != '?' && palavra[i] != ' ' && palavra[i] != '.')
            copia[j++] = palavra[i];
    }
    
    copia[j]= '\0';
    
    printf("Original: %s\nCópia: %s\n",palavra,copia);
    
    tam=strlen(copia);
   // tam--;
    for(i=0;i < strlen(copia);i++) {
        if(copia[i] != copia[tam--]){
            diferentes++;
            break;
         }
       // printf("\n%d\n",++x);
    }
    
    if(diferentes == 0)
        printf("\nÉ palindroma.\n");
    else
        printf("\nNão é palindroma\n");
    
    return 0;
}