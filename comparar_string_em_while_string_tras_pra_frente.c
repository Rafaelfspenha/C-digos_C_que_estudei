// comparar_string_em_while_string_tras_pra_frente.c
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

void main(void) {

char *s;

register int t;

s = malloc(80);

    if(!s) {
        printf("Falha na solicitação de memória.\n");
        exit(1);
    }
    
    do 
    {
        printf("0 para sair\n\n");
        printf("Digite: ");
        gets(s);
    
        printf("\n");
        
        if(strcmp(s,"s")!=0){   
            for(t=strlen(s)-1;t>=0;t--) {
                putchar(s[t]);
            }
            printf("\n\n===========\n\n");
        }
        
    }while(strcmp(s,"s"));
    // strcmp(s,"s") tem valor 0, caso
    // contrário terá valor 1.
    
    
    free(s);
    
    return 0;
}