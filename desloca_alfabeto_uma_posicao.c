// desloca_alfabeto_uma_posicao.c
#include <stdio.h>

void main (void){

char done, ch;

done = 0;

    while(!done) {

        ch=getchar();
        if (ch=='$') { 
    
            done = 1;

            continue;

        }

        putchar(ch+1);

    }
}