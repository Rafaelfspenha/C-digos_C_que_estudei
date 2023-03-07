#include <stdio.h>

int main(){
    FILE *arq;
    char c;


    arq = fopen("arquivo3.txt","r"); //leitura
    
    // a linguagem c diferencia maiúsculas de minúsculas

    if(arq){
        while((c=getc(arq)) != EOF)
            printf("%c",c);
    }else{
        printf("Nao achei o arquivo");
    }
}