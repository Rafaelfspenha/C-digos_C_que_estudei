// goto.c
#include <stdio.h>
int main() {
    goto ponto; // goto envia o comando para alguma linha do programa
    printf("por causa do comando goto essa frase será pulada!");
    ponto: // comando enviado para essa linha
    printf("Dessa linha para baixo será impresso!\n");
    return 0;
}