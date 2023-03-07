// calculadora2.c
#include <stdio.h>
int main(){
    int x,num1,num2;
        
    printf("1- Soma\n2- Subtração\n3- Multiplicação\n4- Divisão\n5- Módulo\n");
    voltar:
    scanf("\n%d",&x);
    
    if(x == 0)
        goto sair;
    
    if(x < 1 || x > 5)
        goto voltar;
        
    printf("\n1° número: ");
    scanf("%d",&num1);
    
    printf("2° número: ");
    scanf("%d",&num2);
    
    switch(x){
    case 1:
        printf("\n%d + %d = %d\n",num1,num2,num1+num2);
        break;
    case 2:
        printf("\n%d - %d = %d\n",num1,num2,num1-num2);
        break;
    case 3:
        printf("\n%d * %d = %d\n",num1,num2,num1*num2);
        break;
    case 4:
        printf("\n%d / %d = %d\n",num1,num2,num1/num2);
       break;
     case 5:
        printf("\n%d %% %d = %d\n",num1,num2,num1%num2);
        break;
    }
    
    sair:
    
    return 0;
}