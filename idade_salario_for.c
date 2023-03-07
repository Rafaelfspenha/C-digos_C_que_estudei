// idade_salario_for.c
#include <stdio.h>
int main(){

    int a,b,i,d=0;
    float c,e=0;
    
    printf("Digite a quantidade de pessoas: ");
    scanf("%d",&a);
    printf("\n");
    
    for(i=1;i<=a;i++){
        printf("Idade da pessoa %d: ",i);
        scanf("%d",&b);
        printf("Salário da pessoa %d: ",i);
        scanf("%f",&c);
        printf("\n");
        
        d+=b;
        e+=c;
    }
    
    printf("\nMédia de idade: %d\nMédia salarial: %.2f\n",d/a,e/a);
    
    return 0;
}