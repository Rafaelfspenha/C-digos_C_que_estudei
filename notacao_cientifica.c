// notacao_cientifica.c
#include <stdio.h>
int main() {
    float salarioSonho,salarioReal,salarioReal2,salarioReal3;
    salarioSonho = 1E6;
    salarioReal= 10E-3;
    salarioReal2= 1E-2;
    salarioReal3= 100E-4;
    printf("salarioSonho 1E6= %f\n", salarioSonho);
    printf("salarioReal 10E-3= %f\n", salarioReal);
    printf("salarioReal2 1E-2= %f\n", salarioReal2);
    printf("salarioReal3 100E-4= %f\n", salarioReal3);
    return 0;
}