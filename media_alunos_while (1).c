// media_alunos_while.c 
#include <stdio.h>
int main() {
    float x1=-1,x2=-1,x3=-1,x4=-1;
    
    printf("Digite as notas de 0 a 10: \n\n");
    
    while(x1<0 || x1>10){
        printf("1° bimestre: ");
        scanf("%f",&x1);
    }
   
    while(x2<0 || x2>10){
        printf("2° bimestre: ");
        scanf("%f",&x2);
    }
    
    while(x3<0 || x3>10){
        printf("3° bimestre: ");
        scanf("%f",&x3);
    }
    
    while(x4<0 || x4>10){
        printf("4° bimestre: ");
        scanf("%f",&x4);
    }
    
    printf("\nMédia: %.2f\n",(x1+x2+x3+x4)/4);
    
    return 0;
}