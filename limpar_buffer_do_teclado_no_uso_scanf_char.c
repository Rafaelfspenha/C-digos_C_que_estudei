// limpar_buffer_do_teclado_no_uso_scanf_char.c
#include <stdio.h>
int main(){
    
    char a,b;
    
    printf("Digite uma letra: ");
    scanf(" %c",&a);
    printf("Digite uma letra: ");
    scanf(" %c",&b);
    
    printf("\nPrimeira letra: %c\nSegunda letra: %c\n",a,b);

    return 0;
}

