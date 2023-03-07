// somatorio_numeros_anteriores.c
#include <stdio.h>
int main(){
    int x,y,z=0;
    
    // Programa irá fazer um somatório dos números anteriores.
    
    do{
        printf("\nDigite o número máximo do somatório: ");
        scanf("%d",&y);
    }while(y<1);
    
    for(x=0;x<=y;x++)
        z+=x;
    printf("\nValor do somatório: %d\n",z);
    
    return 0;
}