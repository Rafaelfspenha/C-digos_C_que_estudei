// strstr.c
#include <stdio.h>
int main(){
    char palavra[50] = {"Bom dia simpatia!"};  
    char str[]={"dia"};
    char *ponteiro;
    
    // encontra uma substring
    ponteiro= strstr(palavra,str);
// strstr pega o primeiro caractere, se for um frase na variável str.
    
// strstr pega a primeira ocorrência do caractere.
    
// if(ponteiro) é igual a if(ponteiro != NULL)
    if(ponteiro) 
        printf("\n%c\t%c\t%c\n",*ponteiro,*(ponteiro+1),*(ponteiro+2));
    else
      printf("\nPonteiro nulo.\n");
    
    return 0;
}