// argc_argv2.c
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv) { // argv é um vetor de strings
    // argc inicia com um parâmetro "./a.out"
    // argc recebe o número de parâmetros digitados +  "./a.out"
    int i;
    for(i=0;i<argc;i++) {
        printf("%s\n", argv[i]);
    }
    
    // argc = n° de parâmetros
    // argv = posição e valor do parâmetro
    return 0;
}

/*
no terminal do Linux:

$ gcc main.c

$ ./a.out a b c d e

./a.out
a
b
c
d
e



serão 6 parâmetros (a./a.out,a,b,c,d,e)


argv[0]= "a.out"
argv[1]= "a"
argv[2]= "b"
argv[3]= "c"
argv[4]= "d"
argv[5]= "e"

gcc compila o arquivo main.c e produz o 
arquivo a.out
*/