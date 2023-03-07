// erro_dois_caracter.c
#include <stdio.h>
int main(){

    char a,b;
    
    printf("Digite duas letras: ");
    scanf("%c%c",&a,&b);
    // espaço ou enter são conhecidos
    // como caractere.
    
    printf("Primeira letra: %c\nSegunda letra: %c\n",a,b);
    
  
    
    return 0;
}