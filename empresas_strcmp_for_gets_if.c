// empresas_strcmp_for_gets_if.c
#include <stdio.h>
#include <string.h>
int main(){
    int i;
    
    char empresas[4][100];
    char busca[100];
    
    int encontrou=0;
    
    printf("Digite os nomes de 4 empresas de tecnologia: \n");
    for(i=0;i<4;i++){
        gets(empresas[i]);
    }
    
    printf ("\n=== EMPRESAS CADASTRADAS ===\n");
    for(i=0;i<4;i++){
        printf("%s\n",empresas[i]);
    }
    
    printf("\nDigite o nome de uma empresa para busca: \n");
    gets(busca);
    
    for(i=0;i<4;i++){
        if(strcmp(empresas[i],busca)==0){
            printf("\nEncontrou: %s \n",empresas[i]);
            encontrou=1;
        }
    }
    
    if(!encontrou){
        printf("Empresa não localizada na matriz!\n");
    }
    return 0;
}