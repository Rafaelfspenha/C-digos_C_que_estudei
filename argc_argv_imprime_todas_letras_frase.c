// argc_argv_imprime_todas_letras_frase.c
#include <stdio.h>

void main(int argc, char *argv[])
{
    int t,i;
    
    printf("\n");
    
    for(t=1; t<argc; ++t) {
        i = 0;
    
        while (argv[t][i]) {
            putchar(argv[t][i]);
            ++i;
        }
        printf(" ");
    }
    printf("\n\n");
}