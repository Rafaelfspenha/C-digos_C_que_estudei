// restaurante_gorjeta_dividir_conta.c
#include <stdio.h>

int main(){

    float valor_despesa;
    float gorjeta;
    float porcentagem_gorjeta;
    int numero_pessoas;
    float valor_dividido;

    printf("Qual é o valor da despesa? ");
    scanf("%f",&valor_despesa);
    
    printf("\nQual é o número de pessoas? ");
    scanf("%d",&numero_pessoas);
    
    printf("\nQual é a porcentagem da gorjeta? ");
    scanf("%f",&porcentagem_gorjeta);
    
    gorjeta=valor_despesa*(porcentagem_gorjeta/100);
    
    valor_dividido=(valor_despesa+gorjeta)/numero_pessoas;
    
    printf("\n\nValor da despesa: %.2f",valor_despesa);
    printf("\n\nValor da gorjeta: %.2f",gorjeta);
    printf("\n\nNúmero de pessoas: %d",numero_pessoas);
    printf("\n\n\nValor total a dividir: %.2f\n",valor_dividido);
    
    return 0;
}
