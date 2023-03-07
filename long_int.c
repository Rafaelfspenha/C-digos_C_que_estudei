// long_int.c
#include <stdio.h>
int main(void){
    long int matricula; //%ld
    long int nota;      //%ld
    
    printf("Qual a matrícula? ");
    scanf("%ld",&matricula);
    printf("Qual a nota? ");
    scanf("%ld",&nota);
    
    printf("\nA nota do aluno com matrícula %ld é %ld.\n",matricula,nota);
    return 0;
}