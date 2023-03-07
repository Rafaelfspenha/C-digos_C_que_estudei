// lista_string.c
#include <stdio.h>

int main () {

    int num;

    char *err[] = { "Arquivo não pode ser aberto\n",

                   "Erro de leitura\n",

                   "Erro de escrita\n",

                   "Falha da mídia\n"
                 };
     
    printf("%s",err[1]);
            
    return 0;
}