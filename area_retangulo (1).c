// area_retangulo.c
#include <stdio.h>
int main(){
    int base;
    int altura;
    
    printf("Digite o valor base: ");
    scanf("%i",&base);
    
    printf("Digite o valor da altura: ");
    scanf("%i", &altura);
    
    printf("\nO valor da área do retângulo é = %i\n", base*altura);
    
    return 0;
}
