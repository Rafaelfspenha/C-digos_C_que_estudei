// gravar_strings_arquivo_fputs_fopen_fclose.c

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pont_arq;
    
    // abrindo o arquivo para gravação
    pont_arq = fopen("arquivo3.txt","w");
    
    // gravando strings no arquivo
    fputs("Programando em linguagem C.\n",pont_arq);
    
    // fechando o arquivo
    fclose(pont_arq);
    
    return 0;
}