// scanf_erro_dois_caracter4.c
#include <stdio.h>
int main(){

    char a,b;
    
    printf("Digite 1° letra: ");
    scanf(" %c",&a);
    
    // limpa o buffer do teclado
    scanf("%c");
    
    printf("Digite 2° letra: ");
    scanf("%c",&b);
    
    // espaço ou enter são conhecidos
    // como caractere.
    
    // a solução é dar um espaço antes de
    // %c dentro do scanf.
    
    printf("\n\nPrimeira letra: %c\nSegunda letra: %c\n",a,b);
    
    return 0;
}