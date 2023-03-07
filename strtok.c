// strtok.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char texto[50]="Fulano de tal Rua X, 123, Centro, Cidade Y";
    char *t;
    
    t= strtok(texto,",");
    printf("%s\n",t);
    
    return 0;
}
