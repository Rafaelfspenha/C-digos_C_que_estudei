// rand_numero_aleatorio2.c
#include <stdio.h>

void main(void){

    /* Programa de números mágicos #3. */ #include <stdlib.h>

    int magic; /* número mágico */

    int guess; /* palpite do usuário */ 
    
    magic = rand(); /* gera o número mágico */

    printf("Adivinhe o número mágico: "); 
    scanf("%d", &guess);

    if (guess == magic) {
        printf("** Certo **");

        printf(" %d é o número mágico\n", magic);

    }else {
        printf("Errado, ");
        if (guess > magic) printf("muito alto\n");
        else printf("muito baixo\n");
    }
}