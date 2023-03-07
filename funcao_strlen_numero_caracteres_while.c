// funcao_strlen_numero_caracteres_while.c
#include <stdio.h>

int minhaStrLen(char str[]) {

    int tam=0;

    while(str[tam] != '\0') 
        tam++;
        
    return tam;   
}

int main(){
    char vet[20] = {"Ola"};
    
    printf("strlen: %d\n",strlen(vet));
    
    printf("minhaStrlen: %d\n",minhaStrLen(vet));
    
    return 0;
}

    