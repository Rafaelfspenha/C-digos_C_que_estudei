// strcpy2_trocar_caracteres_for.c
#include <stdio.h>
int main(){
    int i;
    char nome1[15]="Pedro";
    char nome2[15]="Márcio";
    char nome3[15]="Zacarias";
    
    printf("Digite um nome1: ");
    scanf("%s",nome1);
    
    //strcpy(nome1,"Fulano de tal");
    strcpy(nome2,nome1);
// O calor da direita passa para a
// string da esquerda.

   // nome2 = nome1; isso não funciona!
    
    
// SÓ QUE COM FOR MUDA-SE CARACTERE
// POR CARACTERE, DIFERENTE DO STRCPY QUE
// MUDA A STRING POR INTEIRO.

    printf("\nNome1 = %s\n",nome1);
    printf("\nNome2 = %s\n",nome2);
    
    for(i=0;i<15;i++){
        nome1[i]=nome3[i];
        nome2[i]=nome1[i];
    }
    
    printf("\n\nNome1 = %s\n",nome1);
    printf("\nNome2 = %s\n",nome2);
    
    return 0;
}