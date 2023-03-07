
#include <stdio.h>

int main(){
    FILE *arq;
    int num,resultado,soma=0;

    arq = fopen("arquivo6.txt","r"); //leitura


    if(arq){
        while(!feof(arq)){
            resultado=fscanf(arq, "%d",&num);
            printf("Resultado: %d\n",resultado);
            if(resultado == 1){
                soma+=num;
            }
        }
    }else{
        printf("Nao achei o arquivo");
    }

    printf("\n\nA soma dos arquivos encontrados e %d.\n\n",soma);
    fclose(arq);
    return 0;
}

file_feof_if_while_fopen_fclose

