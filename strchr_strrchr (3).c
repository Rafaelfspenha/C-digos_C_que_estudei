// strchr_strrchr.c
#include <stdio.h>
int main(){
    
// strchr -> retorna a primeira ocorrência.
// strchr -> retorna a segunda ocorrência.

// ponteiro é um endereço de memória.

// endereço de memória + 1, mostrará o 
// conteúdo do endereço seguinte.

    char palavra[50]= {"abacate"};
    char *letra,*letra2;
    
    letra = strchr(palavra,'a');
// o strchr irá retorna o 'a' de palavra[0].

    printf("%c",*letra);
    printf("\n%c",*(letra+1));
    printf("\n%c\n",*(letra+2));
    
    letra2 = strrchr(palavra,'a');
    
// o strrchr irá retorna o 'a' de palavra[4].
    
    printf("\n%c",*letra2);
    printf("\n%c",*(letra2+1));
    printf("\n%c\n",*(letra2+2));
    
    return 0;
}