// area_retangulo.c
#include <stdio.h>
int main(){
    int base;
    int altura;
    int area;
    
    printf("Digite o valor base: ");
    scanf("%i",&base);
    
    printf("Digite o valor da altura: ");
    scanf("%i", &altura);
    
    area= base*altura;
    
    printf("\nO valor da área do retângulo é = %i\n", area);
    
    return 0;
}
