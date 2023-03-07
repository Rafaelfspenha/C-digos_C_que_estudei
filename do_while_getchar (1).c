// do_while_getchar.c
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int contador=0;
    char c;
    do
    {
        contador++;
        printf("Digite '0' para sair do looping\n");
        printf("%d quantidade de vezes.\n",contador);
// o programa pega por caracter
// ex: 932 tem 3 caracter


// o programa está captura o valor 
// digitado e o <enter> ,e no próximo loop 
// ele entra com o valor da tecla <enter>.
// que também está contando como
// caracter pelo getchar.

// teste só dando <enter> para observar
// melhor.        
        
         c = getchar();
    }while( c != '0' );
    return 0;
}