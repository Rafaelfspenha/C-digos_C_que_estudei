// erro_caracter2.c
#include <stdio.h>
int main(){

    char sexo;
    int idade;
    float peso,altura;
    
    // não aparece nada no"sexo" pois a tecla espaço
    // também é um caracter.
    
    printf("Digite idade,peso,altura e o sexo(f,F,m ou M): \n");
    scanf("%d%f%f %c",&idade,&peso,&altura,&sexo);

    // um espaço antes do %c ele desconsidera
    // o enter ou espaço.

    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n",idade,peso,altura,sexo);

    return 0;
}