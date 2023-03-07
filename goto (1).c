// goto.c
#include <stdio.h>
int main() {

    ponto: // comando goto enviado para essa linha
    printf("loop!\n");
    goto ponto; // goto envia o comando para alguma linha do programa
    printf("Linha não será impressa!\n");
    return 0;
}