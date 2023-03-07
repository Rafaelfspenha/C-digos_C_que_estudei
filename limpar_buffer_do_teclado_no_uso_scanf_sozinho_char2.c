// limpar_buffer_do_teclado_no_uso_scanf_sozinho_char2.c
#include <stdio.h>
int main(){
    
    char a,b;
    
    printf("Digite uma letra: ");
    scanf(" %c",&a);
    
    scanf("%c"); 
// outra forma de limpar o buffer do 
// teclado seria utilizando o scanf("%c");
// sozinho.
    
    printf("Digite uma letra: ");
    scanf("%c",&b);
    
    printf("\nPrimeira letra: %c\nSegunda letra: %c\n",a,b);

    return 0;
}

