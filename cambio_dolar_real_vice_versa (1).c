// cambio_dolar_real_vice_versa.c
#include <stdio.h>
int main(){

    float valor,valor3;
    int valor2;
    
    printf("Digite o valor do dólar: ");
    scanf("%f",&valor3);
    
    printf("\nDigite 1 para converter de dólar para real.\n");
    printf("Digite 2 para casa converter de real para dólar.\n");
    scanf("%d",&valor2);
    
    
    
    switch(valor2){
    
    case 1:
        printf("\nDigite um valor em dólar para converter: ");
        scanf("%f",&valor);
        printf("\n%.2f dólar(es) vale %.2f real(is).\n",valor,valor*valor3);
    break;
    
    case 2:
        printf("\nDigite um valor em real para converter: ");
        scanf("%f",&valor);
        printf("\n%.2f real(is) vale %.2f dólar(es).\n",valor,valor/valor3);
    break;
    
    default:
        printf("\nOpção Incorreta!\n");
    }
    
    return 0;
}