// codigo_escape_ascii3.c
#include <stdio.h>

int main(){

    int i=0;
    char palavras[55]={"oi. vamos aprender a programar com a linguagem c?"};
    
    while(palavras[i] != '\0'){
        printf("%d = %c\n",i,palavras[i++]);
        if(palavras[i] == '\0'){
            printf("\n\n\n");
            i=0;
            while(palavras[i] != 0) 
                printf("%d = %d\n",i,palavras[i++]);
        } 
    }
    
    return 0;
}