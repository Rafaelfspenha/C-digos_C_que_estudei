// Potenciacao_quadrado_cubo_com_funcao_pow.c
#include <stdio.h>
#include <math.h>
int main(){
    float x;
    printf("Potenciação");
    printf("\n\nInsira um número: ");
    scanf("%f",&x);
    printf("\n\n%.0f elevado ao quadrado é: %.0f",x,pow(x,2));
    printf("\n%.0f elevado ao cubo é: %.0f\n",x,pow(x,3));
    return 0;
}

