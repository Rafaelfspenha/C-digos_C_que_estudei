// Potenciacao.c
#include <stdio.h>
#include <math.h>
int main(){
    float x,y;
    printf("Potenciação");
    printf("\n\nInsira a base: ");
    scanf("%f",&x);
    printf("\nInsira o expoente: ");
    scanf("%f",&y);
    printf("\n%.2f ^ %.2f é: %.2f\n",x,y,pow(x,y));
    return 0;
}
