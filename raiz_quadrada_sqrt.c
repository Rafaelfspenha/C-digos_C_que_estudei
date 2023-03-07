// raiz_quadrada_sqrt.c
#include <stdio.h>
#include <math.h>
int main(){
    float x;
    printf("Insira um número: ");
    scanf("%f",&x);
    printf("\n\nA raiz quadrada de %.2f é: %f\n",x,sqrt(x));
    return 0;
}

