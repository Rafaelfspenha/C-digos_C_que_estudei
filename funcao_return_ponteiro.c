// funcao_return_ponteiro.c

#include <stdio.h>

int find_substr(char *s1, char *s2);

void main(void)
{
    if(find_substr("C é legal", "é")!=-1)
        printf ("a substring não foi encontrada");
    
}

/* Devolve o índice de s1 em s2. */ 

find_substr(char *s1, char *s2)
{
    register int t;

    char *p, *p2;
   
    for(t=0; s1[t]; t++) { 
        p=&s1[t]; 
        printf("\n\n");
        printf("&s1[%d]: %s",t,&s1[t]);
        printf("\n\n");
        
        p2 = s2;
        printf("\n\n");
        printf("s2: %s",s2);
        printf("\n\n");
        
        printf("\n\n");
        printf("p = &s1[%d]: %s",t,p);
        printf("\n\n");
        
        printf("\n\n");
        printf("p2 = s2: %s",p2);
        printf("\n\n");
        
        
        
        while(*p2 && *p2==*p) {
            p++; 
            p2++;
        } 
        
        printf("\n\n");
        printf("p: %d",p);
        printf("\n\n");
        
        printf("\n\n");
        printf("p2: %d",p2);
        printf("\n\n\n\n");
        
        printf("t: %d\n\n",t);
        printf("==========\n\n");
        
        if (!*p2) return t; /* 1° retorno */
    }
    
    return -1; /* 2º retorno */
}
