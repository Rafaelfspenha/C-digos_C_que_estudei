#include <stdio.h>

int main(){
    FILE *arq;
    char nome[10],*resultado;


    arq = fopen("arquivo3.txt","r"); //leitura

    // a linguagem c diferencia maiúsculas de minúsculas

    if(arq){
        while(!feof(arq)){ // file end of file
        fgets(nome,10,arq);
        printf("%s",nome);
      }
    }else{
        printf("Nao achei o arquivo");
    }
    fclose(arq);
    return 0;
}