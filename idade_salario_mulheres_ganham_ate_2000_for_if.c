// idade_salario_mulheres_ganham_ate_2000_for_if.c
#include <stdio.h>
int main(){

    int a,b,i,d=0,f=0;
    float c,e=0,menorsalario=1000000,maiorsalario=0;
    char sexo;
    
    printf("Digite a quantidade de pessoas: ");
    scanf("%d",&a);
    printf("\n");
    
    for(i=1;i<=a;i++){
        printf("Sexo da pessoa %d (m/f): ",i);
        scanf(" %c",&sexo);
        printf("Idade da pessoa %d: ",i);
        scanf("%d",&b);
        printf("Salário da pessoa %d: ",i);
        scanf("%f",&c);
        printf("\n");
        
        if(maiorsalario<c)
            maiorsalario=c;
        if(menorsalario>c)
            menorsalario=c;
        if(sexo=='f' && c<=2000)
            f++;
            
            
        d+=b;
        e+=c;
    }
    
    printf("\nMédia de idade: %d\nMédia salarial: %.2f\nMaior Salário: %.2f\nMenor Salário: %.2f\nMulheres que ganham até R$2000: %d",d/a,e/a,maiorsalario,menorsalario,f);
    
    return 0;
}

