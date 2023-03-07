// operador_ternario.c
#include <stdio.h>
int main(void) {
    int numero;
    printf("Digite um número: ");
    scanf("%d",&numero);
    
    // condição ? Valor verdadeira : Valor falso;
    numero >= 0 ? printf("\nNúmero positivo!\n") && numero++ : printf("\nNúmero Negativo!\n") && numero--;
    // numero++ --> inclemento
    // numero-- --> declemento

    printf("\nO novo valor de número é: %d\n", numero);
    return(0);
}
