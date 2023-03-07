// argc_argv.c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    // argc inicia com um parâmetro "./a.out"
    // argc recebe o número de parâmetros digitados + o ./a.out
    printf("%d\n", argc);
     
    printf("%s %s %s %s",argv[0],argv[1],argv[2],argv[3]);
    // argv[1] é a posição e contém um valor digitado
    return 0;
}