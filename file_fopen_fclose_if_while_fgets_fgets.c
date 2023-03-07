#include <stdio.h>

int main(){
    FILE *arq;
    char nome[10],*resultado;


    arq = fopen("arquivo4.txt","r"); //leitura

    // a linguagem c diferencia maiúsculas de minúsculas

    if(arq){
        while(!feof(arq)){ // file end of file
            resultado=fgets(nome,50,arq);
            printf("Resultado: %d\n\n",resultado);
            if(resultado){
                printf("%s",nome);
            }
      }

      // o último resultado 0 está gerando 1 linha a mais.

    }else{
        printf("Nao achei o arquivo");
    }
    fclose(arq);
    return 0;
}


