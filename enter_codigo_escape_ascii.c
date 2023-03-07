// enter_codigo_escape_ascii.c
#include <stdio.h>

int main(){

    int i=0;
    char palavras[55];
    
    printf("Digite um palavra ou frase: ");
    fgets(palavras,55,stdin);
    
    while(palavras[i] != '\0'){
        printf("%d = %c\n",i,palavras[i++]);
        if(palavras[i] == '\0'){
            i=0;
            while(palavras[i] != '\0')
                printf("%d = %d\n",i,palavras[i++]);
        }
    }
    
    printf("\n\n");
    
    
    return 0;
}
