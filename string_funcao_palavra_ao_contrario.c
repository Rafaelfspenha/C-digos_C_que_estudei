// string_funcao_palavra_ao_contrario.c
#include <string.h>
#include <stdio.h>

void pr_reverse (char *s);

void main(void){
    pr_reverse("Estou estudando C");
}


void pr_reverse(char *s){
    register int t;
    for (t=strlen(s)-1; t>=0; t--)
        putchar(s[t]);
}