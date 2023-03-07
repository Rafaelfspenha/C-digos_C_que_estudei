// operador_negacao_operador_ternario_aninhado.c
#include <stdio.h>
int main(void) {
    int a;
    printf("\nDigite um valor qualquer: ");
    scanf("%d",&a);

// para negativar expressões, deve
// ser colocados os parênteses.

    !(a<0) ? printf("\n\tValor Negativo!\n") : 
        a>0 ? printf("\n\tValor positivo!\n") : printf("\n\tValor igual a zero!\n");

// cada linha mais endentada do
// que a linha acima,pertence a opção 
// falsa do operador ternário acima.

    return 0;
}
