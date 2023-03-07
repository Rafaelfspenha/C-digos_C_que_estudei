// strcpy.c
#include <stdio.h>
int main(){
    char nome1[15]="Pedro";
    char nome2[15]="Márcio";
    
    printf("Antes do strcpy\n\n");
    printf("Nome1 = %s\n",nome1);
    printf("Nome2 = %s\n",nome2);
    
    //strcpy(nome1,"Fulano de tal");
    strcpy(nome1,nome2);
    
    printf("\nDepois do strcpy\n\n");
    printf("Nome1 = %s\n",nome1);
    printf("Nome2 = %s\n",nome2);
    
    return 0;
}