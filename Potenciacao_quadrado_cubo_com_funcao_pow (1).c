// Potenciacao_quadrado_cubo_com_funcao_pow.c
#include <stdio.h>
#include <math.h>
int main(){
    float x;
    printf("Potenciação");
    printf("\n\nInsira um número: ");
    scanf("%f",&x);
    printf("\n\n%.2f elevado ao quadrado é: %.2f",x,pow(x,2));
    printf("\n%.2f elevado ao cubo é: %.2f\n",x,pow(x,3));
    return 0;
}

