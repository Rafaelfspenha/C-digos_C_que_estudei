// do_while_nota1_e_nota2.c 
#include <stdio.h>
int main() {
    int x,y;
    float nota1,nota2;
    
    do{
        do{
            printf ("1° nota: ");
            scanf("%f",&nota1);
        }while(nota1<0 || nota1>10);
        
        do{
            printf ("2° nota: ");
            scanf("%f",&nota2);
        }while(nota2<0 || nota2>10);
        
        printf("\n");
        
        printf("\nMédia: %.2f\n\n",(nota1+nota2)/2);
        
       
        printf("\nNovo calculo? [1 - sim | 2 - não ] ");
        scanf("%d",&y);
        
        
        while(y!=1 && y!=2){
            printf("\nOpção Incorreta!\n");
            printf("\nNovo calculo? [1 - sim | 2 - não ] ");
            scanf("%d",&y);
        }
        
        printf("\n");
    
    }while(y==1);   
    
    return 0;
}