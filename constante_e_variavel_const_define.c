// constante_e_variavel_const_define.c
#include <stdio.h>
#define ICMS 0.18; // declaração da constante como diretiva
// define - não cria área na memória
// define conversa com o pré-processador

int main(void) {
    float preco_produto, valor_icms,valor_total;
    //const tipo nome_da_constante = valor_da_constante
    const float frete = 10.50;
    // const cria área na memória que não pode ser alterada
    
    // A constante não muda de valor, 
    //se adicionar 
    //outro valor o programa dá erro.
    
    
    printf("Informe o valor do produto: ");
    scanf("%f",&preco_produto);
    
    valor_icms=preco_produto*ICMS;
    
    printf("\nValor de imposto a ser pago: %.2f\n",valor_icms);
    
    valor_total = preco_produto+valor_icms+frete;
    
    printf("\nValor total a pagar: R$ %.2f\n",valor_total);
    
    
    
    float x; // variável
    x=5;
    x=40;
    printf("\n\%f\n",x);
    
    return 0;
}