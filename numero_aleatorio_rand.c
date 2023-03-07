// numero_aleatorio_rand.c

#include <stdio.h> 
#include <stdlib.h>

void main(void){

    int magic;

    int guess;

    /* número mágico */

    /* palpite do usuário */

    magic = rand(); 
    
    /* gera o número mágico */

    printf("adivinhe o número mágico: ");
    scanf("%d", &guess);

    if(guess == magic) 
        printf("** Certo **");

    else 
        printf("Errado!"); 
        printf("\nn° escolhido:%d\n",magic);
}