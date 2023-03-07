// raiz_quadrada_biblioteca_math.c
#include <stdio.h>
#include <math.h>
int main(){
    float x;
    printf("Insira um número: ");
    scanf("%f",&x);
    printf("\n\nA raiz quadrada de %.0f é: %f\n",x,sqrt(x));
    return 0;
}

