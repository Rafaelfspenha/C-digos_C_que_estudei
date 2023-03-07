// contador_for.c
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=3;i++) {
        printf("%d\t",i);
    }
    printf("\n");
    return 0;
}

/*
comando for

o valor inicial i será o 1° a ser imprimido.
Nas rodadas seguintes inicia-se pelo incremento (i++),
Indo logo após para esquerda para comparação.

*/