// media.c
#include <stdio.h>
int main(){
    float x,y,z;
    printf("Insira Dois Números");
    printf("\n\nInsira o 1° número: ");
    scanf("%f",&x);
    printf("\nInsira o 2° número: ");
    scanf("%f",&y);
    z=(x+y)/2;
    printf("\n\nA média é: %.1f \n",z);
    return 0;
}
