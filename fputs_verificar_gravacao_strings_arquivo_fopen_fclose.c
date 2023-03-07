// verificar_gravacao_strings_arquivo_fputs_fopen_fclose.c

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pont_arq;
    int r;
    
    // abrindo o arquivo para gravação
    pont_arq = fopen("arquivo3.txt","w");
    
    // testando strings no arquivo
    if(pont_arq == NULL){
        printf("Erro ao tentar abrir o arquivo!");
        exit(1); // Saindo do programa
    }
    
    // gravando strings no arquivo
    r = fputs("Programando em linguagem C.\n",pont_arq);
    
    // Verificando se os dados foram 
    // gravados com sucesso
    if( r == EOF )
    {
        printf("Erro ao tentar gravar os dados!\n");
    }else{
        printf("Dados gravados com sucesso!");
    }

    // fechando o arquivo
    fclose(pont_arq);
    
    return 0;
}