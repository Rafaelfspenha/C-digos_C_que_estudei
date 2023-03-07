// media.c
#include <stdio.h>
int main(){
    float x,y;
    printf("Insira Dois Números");
    printf("\n\nInsira o 1° número: ");
    scanf("%d",&x);
    printf("\nInsira o 2° número: ");
    scanf("%d",&y);
    printf("\n\nA média é: %.1f \n",(x+y)/2);
    return 0;
}
