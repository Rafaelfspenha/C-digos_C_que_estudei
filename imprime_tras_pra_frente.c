#include <stdio.h>

#include <string.h>

char *p = "alo mundo";


void main(void) {

    register int t;

    /* imprime o conteúdo da string de trás para frente */ 
    for (t=strlen(p)-1; t>-1; t--) 
        printf ("%c", p[t]);
    printf("\n");
}