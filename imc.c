// imc.c
#include <stdio.h>
int main(){
    float m,h,imc;
    
    printf("Digite seu peso: ");
    scanf("%f",&m);
    
    printf("Digite sua altura: ");
    scanf("%f",&h);
    
    imc=m/(h*h);
    
    printf("\nIMC: %.2f\n",imc);
    
    if(imc < 18.5)
        printf("\nAbaixo do peso.\n");
    if(imc >= 18.5 && imc < 25)
        printf("\nPeso normal.\n");
    if(imc >= 25 && imc < 30) //; se colocar uma vírgula o programa dá 2 resultados.
        printf("\nSobrepeso.\n");
    if(imc >=30 && imc < 35)
        printf("\nObesidade grau 1.\n");
    if(imc >= 35 && imc < 40)
        printf("\nObesidade grau 2.\n");
    if(imc >= 40)
        printf("\nObesidade grau 3.\n");
    
    return 0;
}