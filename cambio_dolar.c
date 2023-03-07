// cambio_dolar.c
#include <stdio.h>
int main(){

    float dolar,real;
    
    printf("Digite o valor do dólar: ");
    scanf("%f",&dolar);
    printf("\nDigite a quantidade de reais: ");
    scanf("%f",&real);
    printf("\n\nO valor do dólar em reais é: %.2f\n",dolar*real);
    
    return 0;
}