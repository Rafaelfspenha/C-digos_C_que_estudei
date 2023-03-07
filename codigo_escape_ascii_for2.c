// codigo_escape_ascii2.c
#include <stdio.h>

int main(){

    int i;
    char palavras[55]={"oi. vamos aprender a programar com a linguagem c?"};
    
    for(i=0;i<55;i++){
        printf("%d = %d",i,palavras[i]);
// utilizando %d num caractere mostra
// a tabela ascii.
    printf("\n");
    }
    return 0;
}