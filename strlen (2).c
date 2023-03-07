// strlen.c
#include <stdio.h>
#include <string.h>
int main(){
    char x[30]="Olá mundo"; // 9 caracteres
    printf("%d",strlen(x));
    
    // espaço também é caractere
    // enter foi contabilizado

    return 0;
}