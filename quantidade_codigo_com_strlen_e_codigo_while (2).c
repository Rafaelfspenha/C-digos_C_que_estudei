// quantidade_codigo_com_strlen_e_codigo_while.c
#include <stdio.h>
int main(){
    int i=0,tam=0;
    char palavras[50];
    
    printf("Digite um frase: ");
    fgets(palavras,50,stdin);
    
    // o fgets captura o enter '\n' (enter)
    // o fgets não contabiliza o '\0' (caractere nulo)
    
    while(palavras[i++] != '\n')
        tam++;
    
    printf("\nQuantidade de caracteres:\n");
    printf("\nstrlen: %d\n\nCódigo: %d\n",strlen(palavras)-1,tam);
    
    return 0;
}

    