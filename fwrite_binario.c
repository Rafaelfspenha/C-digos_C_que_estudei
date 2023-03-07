// fwrite_binario.c

/* 
* testando a função fwite -  grava um 
* arquivo binário contendo 2 vetores
* de 15 elementos cada um: O primeiro
* vetor armazena caracteres e o segundo
* vetor armazena dados inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    char ch[15] = "Teste geral";
    int valor[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    
    
    // ponteiro para o arquivo
    FILE *ptrArq;
    
    // abertura de arquivo
    ptrArq = fopen("binario.bin","wb");
    
    if(ptrArq != NULL){
        printf("Arquivo criado com sucesso!\n");
    }else {
        printf("\n\nErro: O arquivo binário.bin não foi aberto\n");
        exit(1);
    }
    
    // Gravando os dados no arquivo usando
// sintaxe: fwite(&variável,n°_bytes,n°_registros,arquivo);
    fwrite(ch,sizeof(char),15,ptrArq);
    fwrite(valor,sizeof(int),15,ptrArq);
    
    // fechando arquivo
    fclose(ptrArq);
     
    return 0;
}