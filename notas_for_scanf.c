// notas_for_scanf.c
#include <stdio.h>
int main(){

    float notas[4];
    int i;
    
    for(i=0;i<=3;i++){
        printf("Digite a nota do aluno: ");
        scanf("%f",&notas[i]);
    }
    
    printf("\n");
    
    for(i=0;i<=3;i++){
        printf("Valor da nota %d: %.2f \n",i,notas[i]);
    }
    
    return 0;
}