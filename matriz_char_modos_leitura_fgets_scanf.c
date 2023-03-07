// matriz_char_modos_leitura_fgets_scanf.c
#include <stdio.h>
#include <string.h>

int main(){
    char nomes[5][25];
    int i;
    
    // cada linha é uma string

    for(i=0;i<5;i++) {
        printf("Digite nome %d/5: ",i+1);
       scanf("%25[^\n]",nomes[i]);
       scanf("%c");
    
       // [^\n] é enter

       // scanf(" %25[^\n]",nomes[i]);
       // scanf(" %s",nomes[i]);
       // fgets(nomes[i],15,stdin);
    }
    
    for(i=0;i<5;i++) {
        printf("\nNome %d/5: %s",i+1,nomes[i]);
    }
    
    printf("\n");
    
    return 0;
}
    
    