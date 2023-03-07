// strcpy_strcmp_vetor_string.c
#include <stdio.h>
int main(){
    char b[20],c[20];
    
    strcpy(b,"ola");
    
    c[0]=b[0];
    c[1]=b[1];
    c[2]=b[2];
    
    if(strcmp(b,c)==0){
        printf("%s",c);
    }
    return 0;
}