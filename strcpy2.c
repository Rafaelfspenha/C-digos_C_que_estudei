// strcpy2.c
#include <stdio.h>
int main(){
    char nome1[15]="Pedro";
    char nome2[15]="Márcio";
    
    printf("Digite um nome1: ");
    scanf("%s",nome1);
    
    //strcpy(nome1,"Fulano de tal");
    strcpy(nome2,nome1);
    
    printf("\nNome2 = %s\n",nome2);
    
    return 0;
}