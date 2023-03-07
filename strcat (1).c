// strcat.c
#include <stdio.h>
#include <string.h>

int main(){
    char str[11]="Curso";
    char palavra[10]="Curso de ";
    char palavra2[10]="C#";
    
    printf("1- %s\n\n",str);
    
    strcat(str," de C");
    
    printf("2- %s",str);
    
    strcat(palavra,palavra2);
    
    printf("\n\n3- %s\n",palavra);
    
    printf("\n4- %s\n",palavra2);
    
    return 0;
}



