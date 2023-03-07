// getch_getche_getchar.c
#include <stdio.h>
#include <conio.h>
int main() {

    char a,b,c;
    
    // getch,gethe,get hard são para
    // caracteres (%c)
    
    printf("(getch) Digite uma letra: ");
    a=getch();
    // O caractere digitado não aparece. 
    // Após o caractere ser digitado a captura 
    // é automática.
    printf("\n(getch) A letra digitada foi: %c\n",a);
    
    printf("\n\n(getche) Digite uma letra: ");
    b= getche();
    // O caractere digitado aparece. 
    // Após o caractere ser digitado a 
    // captura é automática.
    printf("\n(gethe) A letra digitada foi: %c\n",b);
    
    printf("\n\n(getchar) Digite uma letra: ");
    c=getchar();
    // A captura é realizado após 
    // pressionar a teclar enter. 
    // O caractere digitado aparece.
    printf("(getchar) A letra digitada foi: %c\n",c);
    
    return 0;
}

