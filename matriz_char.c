// matriz_char.c
#include <stdio.h>
#include <string.h>

int main(){
    char nomes[10][15];
    int i;
    
    // cada linha é uma string

    for(i=0;i<5;i++) {
        printf("Digite nome %d/5: ",i+1);
        fgets(nomes[i],15,stdin);
    }
    
    //printf("\n");
    
    for(i=0;i<5;i++) {
        printf("\nNome %d/5: %s",i+1,nomes[i]);
    }
    
    return 0;
}
    
    