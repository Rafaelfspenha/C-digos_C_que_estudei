// fgets_fputs_verificar_leitura_gravacao_strings.c

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pont_arq;
    int r;
    char texto_str[51];
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
    
    printf("\n----- Leitura dos dados gravados no arquivo -----\n");
    
    // abrindo o arquivo para Leitura
    pont_arq = fopen("arquivo3.txt","r");
    
    // enquanto não for fim de arquivo
    // o looping será executado
    // e será lido o conteúdo do arquivo
    // e impresso na tela com printf
    while(fgets(texto_str,50,pont_arq) != NULL)
    {
        printf("%s\n",texto_str);
    }
    
    // fechando o arquivo
    fclose(pont_arq);
    
    return 0;
}