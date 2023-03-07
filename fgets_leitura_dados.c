// fgets_leitura_dados.c
#include <stdio.h>

int main(){
    char palavras[10];
    
    printf("Digite seu nome: ");
    fgets(palavras,10,stdin);
// fgets lê a quantidade máxima de
// caracteres menos o caractere nulo (\0).
// 10-1= 9 caracteres 

    printf("\n%s\n",palavras);
    
    return 0;
}