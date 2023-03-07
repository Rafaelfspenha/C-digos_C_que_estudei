// lendo_varios_valores_scanf.c
#include <stdio.h>
#include <conio.h>

int main(){

    int n1,n2,n3;
    
    printf("Digite 3 valores acima de 9: ");
    voltar:
    scanf("%d%d%d",&n1,&n2,&n3);
    
    if(n1>9&&n2>9&&n3>9){
        printf("\nVocê digitou: %d,%d,%d\n",n1,n2,n3);
    }else{
        printf("\nVocê digitou algum número abaixo de 10!\n\n\n");
        printf("==================================\n\n");
        printf("Digite Novamente 3 valores acima de 9: ");
        goto voltar;
    }
    
    return 0;
}