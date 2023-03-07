// imprimir_caracteres_funcao_strlen_numero_caracteres_while.c
#include <stdio.h>

int minhaStrLen(char str[]) {

    int tam=0;

    while(str[tam] != '\0') 
        tam++;
        
    return tam;   
}



void imprimirString(char palavra[]){
    int i=0;
    
    while(palavra[i] != '\0') {
        printf("%c",palavra[i]);
        i++;
    }
    printf("\n");
}



int main(){
    char vet[20] = {"Ola"};
    
    printf("strlen: %d\n",strlen(vet));
    
    printf("minhaStrlen: %d\n",minhaStrLen(vet));
    
    imprimirString(vet);
    
    return 0;
}

    