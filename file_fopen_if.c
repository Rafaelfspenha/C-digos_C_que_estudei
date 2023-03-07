#include <stdio.h>

int main(){
    FILE *arq;
    arq = fopen("arquivo3.txt","r"); //leitura

    if(arq){
        printf("Achei o arquivo");
    }else{
        printf("Nao achei o arquivo");
    }

}
