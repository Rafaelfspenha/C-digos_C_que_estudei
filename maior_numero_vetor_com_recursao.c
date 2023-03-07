// maior_numero_vetor_com_recursao.c
#include <stdio.h>
#include <stdlib.h>

int maior(int v[],int tam, int indice){
    
    if(tam == 0)
        return v[indice];
    else{
        if(v[tam-1] > v[indice])
            return maior(v,tam-1,tam-1);
        else
            return maior(v,tam-1,indice);
    }
}

/*

tam= 10
posição do vetor= 9

tam= 9
posição do vetor= 8

...

tam= 1
posição do vetor= 0

*/

int main() {

    int vet[10]={11,258,13,445,58,67,7,8,9,10};
    
    printf("\nMaior Valor: %d\n",maior(vet,10,0));
    
    return 0;
}