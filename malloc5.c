// malloc5.c
#include <stdio.h>
#include <stdlib.h>
int main() {

/*
// trabalhando com a memória estática
    int a;
    a=10;
    printf("%d",a);
*/

// trabalhando com a memória dinâmica
    
    int *a;
    float *b;
    char *c;
    
    a= (int*)malloc(sizeof(int)); 
    b= (float*)malloc(sizeof(float)); 
    c= (char*)malloc(sizeof(char)); 
    
    // sizeof(int) tamanho de uma variável inteira.
    *a=5;
    *b=5.45;
    *c='a';
    
    printf("%i\n",*a);
    printf("%.2f\n",*b);
    printf("%c\n",*c);

    return 0;
}