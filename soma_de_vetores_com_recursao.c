// soma_de_vetores_com_recursao.c
#include <stdio.h>
#include <stdlib.h>

int soma(int v[],int tam){
    
    if(tam == 0)
        return 0;
    else{
        return v[tam-1] + soma(v,tam-1);
    }
        
}

int main() {

    int vet[10]={1,2,3,4,5,6,7,8,9,10};
    
    
    printf("\nValor da soma: %d\n",soma(vet,10));
    
    return 0;
}