// maiuscula_for_ate_com_palavra_inteira.c
#include <stdio.h> 
#include <ctype.h>

void print_upper(char *string);

void main(void)
{
    char s[80];
    printf("Digite uma palavra: ");
    gets(s);
    printf("\n");
    print_upper(s);

}


void print_upper(char *string)
{
    register int t;
    for(t=0; string[t]; ++t) 
        putchar(toupper(string[t]));
    printf("\n");
}