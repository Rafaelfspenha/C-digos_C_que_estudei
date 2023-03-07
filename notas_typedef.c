// notas_typedef.c
#include <stdio.h>
#include <stdlib.h>
int main() {
    // redefinição do tipo float como nota
    typedef float nota;
    
    // declarando as variáveis usando o tipo de dados renomeado
    nota prova1,prova2,media;
    
    printf("Informe a nota da primeira prova: ");
    scanf("%f",&prova1);
    printf("Informe a nota da segunda prova: ");
    scanf("%f",&prova2);
    
    media=(prova1+prova2)/2;
    
    printf("\nMédia do aluno: %.2f\n",media);
    
    return 0;
}