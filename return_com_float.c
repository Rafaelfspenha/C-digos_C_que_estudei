// return_com_float.c
#include <stdio.h>

float produto(float a, float b)
{
    return (a*b);
}

int main()
{
    float num1,
          num2;

    printf("Numeros a serem multiplicados: ");
    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("Resultado: %.2f\n", produto(num1,num2));
}