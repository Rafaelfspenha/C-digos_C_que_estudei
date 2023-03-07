// area_e_circunferencia_circulo.c
#include <stdio.h>
int main(){
    float r;
    printf("Insira o raio do círculo: ");
    //O raio é a metade do diâmetro de uma circunferência.
    scanf("%f",&r);
    printf("\nO valor da área é: %.2f", 3.14*r*r);
    printf("\nO valor da circunferência é: %.2f\n",2*3.14*r);
    return 0;
}
