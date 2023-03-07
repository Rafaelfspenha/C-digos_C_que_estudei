// locale_setlocale.c
#include <stdio.h>
#include <locale.h>

int main(){

    //setlocale(LC_ALL,NULL); // padrão de linguagem C
    
    // setlocale(LC_ALL,""); // padrão do sistema operacional utilizado
    
    // cuidado! ao usar o comando acima,
    // pois nem todos os usuários vão
    // estar usando o sistema operacional
    // em português.
    
    setlocale(LC_ALL,"Portuguese");

    printf("coração\n");
    
    printf("\n%s\n",setlocale(LC_ALL,""));

    printf("\n%s\n",setlocale(LC_ALL,NULL));
    
  return 0;
}