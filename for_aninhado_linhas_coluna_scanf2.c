// for_aninhado_linhas_coluna_scanf2.c 
#include <stdio.h>
int main() {
    
    int x,y,i;
    
    printf("Digite o n° de linhas: ");
    scanf("%d",&x);
    
    printf("Digite o n° total de números: ");
    scanf("%d",&y);
    
    printf("\n");
    
    for(i=1;i<=y;i++){  // linhas
        printf("%d ",i);
        if(i % x == 0) // colunas
            printf("\n");
    }
    
    return 0;
}