// media_salarial_funcionarios_empresa_salario_maior_menor_do_while_for_if.c
#include <stdio.h>
int main(){
    int quantidade,i;
    float salario, totalSalarios=0,salarioMaior=0,salarioMenor=9999;
    
    do{
        printf("Quantos funcionais a empresa possui? ");
        scanf("%d",&quantidade);
    }while(quantidade<0);
    
    printf("\n");
    
    for(i=1;i<=quantidade;i++){
        printf("%d° salário: ",i);
        scanf("%f",&salario);
        
        totalSalarios+=salario;
        
        if(salarioMenor>salario)
            salarioMenor=salario;
        if(salarioMaior<salario)
            salarioMaior=salario;
    }
    
    printf("\nSalário médio: R$%.2f\n",totalSalarios/quantidade);
    printf("Maior Salário: R$%.2f\n",salarioMaior);
    printf("Menor Salário: R$%.2f\n",salarioMenor);

    return 0;
}