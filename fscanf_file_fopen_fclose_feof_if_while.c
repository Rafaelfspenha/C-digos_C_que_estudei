#include <stdio.h>

int main(){
    FILE *arq;
    int num,resultado,soma=0;

    arq = fopen("arquivo5.txt","r"); //leitura


    if(arq){
        while(!feof(arq)){
            fscanf(arq, "%d",&num);
            soma+=num;
        }
    }else{
        printf("Nao achei o arquivo");
    }

    printf("\n\nA soma dos arquivos encontrados e %d.\n\n",soma);
    fclose(arq);
    return 0;
}


