// define.c
#include <stdio.h>
#define ICMS 0.18; // declaração da constante como diretiva

int main(void) {
    float preco_produto, valor_icms,valor_total;
    printf("Informe o valor do produto: ");
    scanf("%f",&preco_produto);
    valor_icms=preco_produto*ICMS;
    printf("\nValor de imposto a ser pago: %.2f\n",valor_icms);
    return 0;
}