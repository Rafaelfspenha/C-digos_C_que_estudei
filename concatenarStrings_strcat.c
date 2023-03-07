// concatenarStrings_strcat.c
#include <stdio.h>
#include <string.h>

int main(){

    char str1[21]="Curso";
    char str2[18]=" de programação C";
    
    strncat(str1,str2,17);
    
    printf("str = %s",str1);
    
    return 0;
}



