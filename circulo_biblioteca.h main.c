#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo_biblioteca.h"

int main(){
    int x;
    float p,z;

    printf("Digite o raio do circulo: ");
    scanf("%i",&x);

    p=perimetro(x);
    z=area(x);
    printf("\nPerimetro: %.2f | Area: %.2f\n",p,z);

    return 0;
}
