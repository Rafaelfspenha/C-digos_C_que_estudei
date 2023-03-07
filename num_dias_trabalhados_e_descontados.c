// num_dias_trabalhados_e_descontados.c
#include <stdio.h>

    int main(){

    int dias;
    float liquido;
    
    retornar:
    printf("Quantos dias foi trabalhado neste mês? ");
    scanf("%d",&dias);
        
        if(dias <= 30){
            liquido=(dias*45.00)*0.92;
            printf("\nO valor que será pago será: %.2f\n",liquido);  
        }else{
            printf("\nNúmero de dias inválidos!\n\n");
            goto retornar;
        }
}